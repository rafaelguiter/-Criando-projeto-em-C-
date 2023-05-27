#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

void cadastro(int id[], int vacina[], char email[][100], char nome[][100], char sexo[][3], char endereco[][300], double altura[]);

void editar (int id[], int vacina[], char email[][100], char nome[][100], char sexo[][3], char endereco[][300], double altura[]);



	
 	
int main (){
	
	
	int i=0, id[1000], vacina[1000], menu, fecharprograma;
	
	char email[1000][100], nome[1000][100], sexo[1000][3], endereco[1000][300];

	double altura[1000];


do {



	printf("esolha qual opcao deseja: \n");
    printf("1 - Cadastrar: \n");
    printf("2 - Editar : \n");

	scanf("%d", &menu);
	fflush(stdin);


	switch(menu){

		case 1 :

			printf("---------------------------    Cadastro       ------------------------------\n\n");
			cadastro(id,vacina,email,nome,sexo,endereco,altura);
			break;
		
		case 2:

			printf("-------------------------      Editar     ------------------------------------\n\n");
			editar(id,vacina,email,nome,sexo,endereco,altura);
			break;

		default:

			printf("opcao invalida");

		break;

	}

		printf("digite - (1) PARA FECHAR O PROGRAMA / (2) PARA VOLTAR AO MENU DE SELECOES: \n");
		scanf("%d",&fecharprograma);
		fflush(stdin);

		while (fecharprograma!=1 && fecharprograma!=2){

			printf("Dados digitados incorretamente. Digite (1) para sair do programa e (2) para realizar outra operação :\n ");
		scanf("%d",&fecharprograma);
		fflush(stdin);

		}

		getchar();
		

	
} while (fecharprograma!=1);




	return 0; 	

 		
}


	 /////////////////////////////////////////////////////////////////////////////////////////////////////
	 
	 
	 


	 //funcao para cadastro de paciente
	 
void cadastro(int id[], int vacina[], char email[][100], char nome[][100], char sexo[][3], char endereco[][300], double altura[]){
 	
 	int i=0, parar, verificaremail; 
	int pessoas;


		printf("Quantas pessaos voce deseja Cadastrar: \n");
		scanf("%d", &pessoas);
		fflush(stdin);
		printf("\n");
 	
 	while (i<pessoas and parar!=2){


		srand(time(NULL));
		
		id[i] = 1 + rand() % 1000; // gerador de numeros aleatorios
		
		printf("Numeoro ID (%d)\n\n", id[i]);

		// cadastro do email

	printf("Por favor digite o seu email, siga o exemplo (exemplo@exemplo.com ou (.br)): \n ");
	fgets(email[i], sizeof(email[i]), stdin);
	fflush(stdin);
	printf("\n");

	if ((strstr(email[i], "@") != NULL) || (strstr(email[i], ".com")!= NULL) && (strstr(email[i], ".br")!= NULL)){

		verificaremail=1;

	}else{

	while ((strstr(email[i], "@") == NULL) || (strstr(email[i], ".com")== NULL) && (strstr(email[i], ".br")== NULL)){
		
		printf("Verifique o Email digitado, pois pode estar faltando alguns dos dados citados acima, ou um '@' ou um '.com' ou um '.br' \n");
		fgets(email[i], sizeof(email[i]), stdin);
		fflush(stdin);	
		printf("\n");

	}

	getchar();

	
	}


	///////////////////////cadastro do nome


		printf("Digite o seu nome completo: \n");
		fgets(nome[i], sizeof(nome[i]), stdin);
		fflush(stdin);
		printf("\n");

		///////////cadastro do sexo

		printf("Nos informe o seu sexo (M) para masculino, (F) para feminino e (I) para indefinido: \n");
		fgets(sexo[i], sizeof(sexo[i]), stdin);
		fflush(stdin);
		printf("\n");
		
		while ((strstr(sexo[i], "m")== NULL) && (strstr(sexo[i], "f") == NULL) && (strstr(sexo[i], "i") == NULL) ) {

			printf("Digito invalido, por favor responda com (m), (f) ou (i):\n");
			fgets(sexo[i], sizeof(sexo[i]), stdin);
			fflush(stdin);
			printf("\n");

		}

		///////////cadastro da altura

		printf("Nos informe sua altura: \n");
		scanf("%lf",&altura[i], stdin);
		fflush(stdin);
		printf("\n");

		//////cadastro do endereço

		printf("Nos informe o seu endereco: \n");
		fgets(endereco[i], sizeof(endereco[i]), stdin);
		fflush(stdin);
		printf("\n");

		////////cadastro da vacina

		printf("Voce foi vaciando digite (1) SIM  e (2) NAO: \n");
		scanf("%d", &vacina[i]);
		fflush(stdin);
		printf("\n");

		while(vacina[i]!=1 && vacina[i]!=2){

		printf("Digitos invalidos, verifique a opcao desejada.\nVoce ja foi vacinado digite (1) SIM  e (2) NAO: \n");
		scanf("%d", &vacina[i]);
		fflush(stdin);
		printf("\n");
		}

		getchar();


     ///////// realizar novo cadastro ou fechar aba

	printf("Digite (1) REALIZAR UM NOVO CADASTRO / (2) VOLTAR AO MENU DE SELECOES : \n\n");
	scanf("%d", &parar);
	fflush(stdin);
	printf("\n");

	while(parar!=1 && parar!=2){

		printf("Digitos invalidos, verifique a opcao desejada.\nDeseja realizar um novo cadastro digite (1) SIM  e (2) NAO: \n\n");
		scanf("%d", &parar);
		fflush(stdin);
		printf("\n");
	}

	i++;

	getchar();

	if(pessoas == i && parar==1){

		printf("----------------------------- Voce execeu a quantidade de pessoas que selecionou para cadastrar ------------------------------\n\n");

		
	}else if(parar==1){

		printf("-----------------------------   Realizar novo cadastro --------------------------- \n\n");


	}else{ 

		printf("----------------------------- Aba de cadastro fechada ------------------------------\n\n");

	}

		

	}



}

void editar (int id[], int vacina[], char email[][100], char nome[][100], char sexo[][3], char endereco[][300], double altura[]) {

	    int i, n_encontrado, nome_ou_email, editar, escolha_editar, continuar, v_e_encontrado, visualizar;
	    char encontrar_nome[100], encontrar_email[100];


while (nome_ou_email!=1 && nome_ou_email!=2 ){

	printf("Voce quer fazer a pesquisa pelo nome ou pelo o e-mail ? (1)NOME / (2)E-MAIL: \n\n");
	scanf("%d",&nome_ou_email);
	fflush(stdin);

}	

getchar();


if (nome_ou_email==1){

    printf("Digite o nome desejado:\n\n");
fgets(encontrar_nome,sizeof(encontrar_nome), stdin);
fflush(stdin);
getchar();


}else{

    printf("Digite o E-MAIL desejado:\n\n");
fgets(encontrar_email,sizeof(encontrar_email), stdin);
fflush(stdin);
getchar();

}

while (i<100){

    if ((strcmp(nome[i], encontrar_nome)==0) || (strcmp(email[i], encontrar_email)==0)){


        printf("-----------------------   Cadastro Encontrado: ------------------------------\n\n");
            printf("ID: %d\n\n", id[i]);
            printf("Nome: %s\n\n", nome[i]);
            printf("Email: %s\n\n", email[i]);
            printf("Sexo: %s\n\n", sexo[i]);
            printf("Endereco: %s\n\n", endereco[i]);
            printf("Altura: %.2f\n\n", altura[i]);
            printf("Vacina: %d\n\n", vacina[i]);

        n_encontrado=i;
		v_e_encontrado = 1;

        break;

        

    }else{
        i++;
		fflush(stdin);
    }

}



if (v_e_encontrado!=1){

    printf("-------------------------------------------------------------------\n\n");

    printf("Cadastro nao encontrado\n\n");

    printf("-------------------------------------------------------------------\n\n");

}else{


	while (editar!=1 && editar!=2){

		printf("Deseja editar algum dos dados ? (1) SIM  / (2) NAO : \n\n");
			scanf("%d", &editar);
			fflush(stdin);

	}    


	if (editar==1){

		      do{  
			   
			        printf("------------------------     Digite o numero do campo que deseja alterar:     -------------------------------\n");
                    printf("1 - Nome\n");
                    printf("2 - Email\n");
                    printf("3 - Sexo\n");
                    printf("4 - Endere�o\n");
                    printf("5 - Altura\n");
                    printf("6 - Vacina\n");
                    scanf("%d\n", &escolha_editar);
                    fflush(stdin);
        
                    switch (escolha_editar) {

                        case 1:
                        printf("Digite o novo nome: \n");
                        fgets(nome[n_encontrado], sizeof(nome), stdin);
                        fflush(stdin);
                        break;

                        case 2:
                        printf("Digite o novo email:\n ");
                        fgets(email[n_encontrado], sizeof(email), stdin);
                        fflush(stdin);
                        break;

                        case 3: 
                        printf("Digite o novo sexo: \n ");
                        fgets(sexo[n_encontrado], sizeof(sexo), stdin);
                        fflush(stdin);
                        break;

                        case 4: 
                        printf("Digite o novo endereco: \n ");
                        fgets(endereco[n_encontrado], sizeof(endereco), stdin);
                        fflush(stdin);
                        break;

                        case 5:
                        printf("Digite a nova altura:\n ");
                        scanf("%lf", &altura[n_encontrado]);
                        fflush(stdin);
                        break;

                        case 6:
                        printf(" A pessoa foi vacinada (1)SIM / (2)NAO: \n");
                        scanf("%d", &vacina[n_encontrado]);
                        fflush(stdin);
                        break;

                        default:
                        printf("Numero digitado esta incorreto incorreto.\n\n");
						printf("Para editar o cadastro, selecione a opcao (DESEJA EDITAR OUTRO DADO DESTA PESSOA) digite (1).\n\n");
						printf("Leia as opcoes atentamente e selecione a opcao desejada.\n\n");
                        break;
                    
                    
                    }

					getchar();

							while (visualizar!=1 && visualizar!=2){

		                       printf("Deseja visualizar os dados do cadastro? (1)SIM / (2)NAO : \n");
                        		scanf("%d", &visualizar);
                        		fflush(stdin);
								getchar();
		                    }

							if (visualizar==1){

								printf("-----------------------   Dados do paciente: ------------------------------\n\n");
            					printf("ID: %d\n\n", id[i]);
            					printf("Nome: %s\n\n", nome[i]);
            					printf("Email: %s\n\n", email[i]);
           					 	printf("Sexo: %s\n\n", sexo[i]);
            					printf("Endereco: %s\n\n", endereco[i]);
            					printf("Altura: %.2f\n\n", altura[i]);
            					printf("Vacina: %d\n\n", vacina[i]);
							
								
							}else{
								printf("Certo - \n\n");
							}
							
                
               
  							while (continuar!=1 && continuar!=2){

		                       printf("Deseja editar outro dado desta pessoa? (1)SIM / (2)NAO : \n");
                        		scanf("%d", &continuar);
                        		fflush(stdin);
		                    }
							
							getchar();
                    

            
                }while (continuar==1);


	}else{

		printf("------------------------  Aba de edicao de cadastro fechada   --------------------------\n\n");

	}



    
}

}

			



			
			
	





	





