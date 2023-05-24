#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

void cadastro(int id[], int vacina[], char email[][100], char nome[][100], char sexo[][3], char endereco[][300], double altura[]);

void editar (int id[], int vacina[], char email[][100], char nome[][100], char sexo[][3], char endereco[][300], double altura[]);



	
 	
int main (){
	
	
	int i=0, id[1000], vacina[1000], menu, fecharprograma, editar;
	
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

		printf("deseja sair do programa digite (1) para SIM e (2) para NAO :\n ");
		scanf("%d",&fecharprograma);
		fflush(stdin);

		while (fecharprograma!=1 && fecharprograma!=2){

			printf("Dados digitados incorretamente. Digite (1) para sair do programa e (2) para realizar outra operação :\n ");
		scanf("%d",&fecharprograma);
		fflush(stdin);

		}
		

	
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

	///////////////////////cadastro do nome

	}

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
		printf("\n");
		}


		i++;

     ///////// realizar novo cadastro ou fechar aba

	printf("deseja realizar um novo cadastro digite (1) SIM  e (2) NAO: \n\n");
	scanf("%d", &parar);
	fflush(stdin);
	printf("\n");

	while(parar!=1 && parar!=2){

		printf("Digitos invalidos, verifique a opcao desejada.\nDeseja realizar um novo cadastro digite (1) SIM  e (2) NAO: \n\n");
		scanf("%d", &parar);
		printf("\n");
	}

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

	    int i, n_encontrado, escolher_busca, editar, escolha_editar, continuar;
	    char encontrar_nome[100], encontrar_email[100], encontrar[100];

	

		printf("Por favor digite o Nome completo da pessoa que deseja Editar os dados: \n");
		fgets(encontrar_nome, 100, stdin);
		fflush(stdin);
		printf("\n");


	for (i=0; i<1000; i++ ){



		if (strcmp(nome[i], encontrar_nome)==0){

			n_encontrado = i;

			printf("-----------------------   Cadastro Encontrado: ------------------------------\n\n");
            printf("ID: %d\n\n", id[i]);
            printf("Nome: %s\n\n", nome[i]);
            printf("Email: %s\n\n", email[i]);
            printf("Sexo: %s\n\n", sexo[i]);
            printf("Endereco: %s\n\n", endereco[i]);
            printf("Altura: %.2f\n\n", altura[i]);
            printf("Vacina: %d\n\n", vacina[i]);
		



			printf("Deseja editar algum dos dados ? (1) SIM  e  (2) NAO\n\n");
			scanf("%d", &editar);
			fflush(stdin);

			while (editar!=1 && editar!=2){

			printf("Deseja editar algum dos dados ? (1) SIM  e  (2) NAO\n\n");
			scanf("%d", &editar);
			fflush(stdin);
			}

        

	        if (editar == 1) {
               
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
                        printf("Digite a nova altura: ");
                        scanf("%lf", &altura[n_encontrado]);
                        fflush(stdin);
                        break;

                        case 6:
                        printf("Digite a nova vacina (1= SIM)  e  (2 = NAO): \n");
                        scanf("%d", &vacina[n_encontrado]);
                        fflush(stdin);
                        break;

                        default:
                        printf("Numero digitado incorreto.\n");
                        break;
                    
                    
                    }
                
               

                        printf("Deseja editar outro dado desta pessoa? (1= SIM) e (2 = NAO): \n");
                        scanf("%d", &continuar);
                        fflush(stdin);
                

		                    while (continuar!=1 && continuar!=2){

		                        printf("Deseja editar outro dado desta pessoa? (1= SIM) e (2 = NAO): \n");
                                scanf("%d", &continuar);
                                fflush(stdin);
		                    }
            
            
                }while (continuar==1);

            }else{
                printf("numero nao corresponde");
            }

        }else{
            printf("------------------------  Cadastro nao encontrado   --------------------------\n\n");
        }
    }
}

        

	
			



			
			
	





	





