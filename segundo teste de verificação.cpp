#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>




int main (){

char aluno[10][10], email[10][10], buscanome[10], buscaemail[10], encontrado[10];
int i=0, parar, nome_ou_email;
int i2=0;


for (i2= 0; i2 < 2; i2++)
{

    printf("Aluno (%d)\n",i2+1);
   printf("para cadastrar um aluno digite o nome dele : \n\n");
fgets(aluno[i2], sizeof(aluno[i2]), stdin);
fflush(stdin);
printf("\n");

 printf("email aluno(%d)\n",i2+1);
printf("para cadastrar digite o E-mail dele : \n\n");
fgets(email[i2], sizeof(email[i2]), stdin);
fflush(stdin);
printf("\n");

}

while (nome_ou_email!=1 && nome_ou_email!=2 ){

printf("voce quer fazer a pesquisa pelo nome ou pelo o e-mail ? (1)NOME / (2)E-MAIL: \n\n");
scanf("%d",&nome_ou_email);
fflush(stdin);

}

if (nome_ou_email==1){

    printf("Digite o nome desejado:\n\n");
fgets(buscanome,sizeof(buscanome), stdin);
getchar();


}else{

    printf("Digite o E-MAIL desejado:\n\n");
fgets(buscaemail,sizeof(buscaemail), stdin);
getchar();


}




while (i<100){

    if ((strcmp(aluno[i], buscanome)==0) || (strcmp(email[i], buscaemail)==0)){

        printf("-------------------    Aluno encontrado    ----------------------\n\n");

        printf("%s\n\n", aluno[i]);
        printf("%s\n\n", email[i]);
        printf("%d\n\n",i+1);

        parar=1;

        break;

        

    }else{
        i++;
        printf("(%d) else\n",i);
    }

}

if (parar!=1){

    printf("-------------------------------------------------------------------\n\n");

    printf("Aluno nao encontrado\n\n");

    printf("-------------------------------------------------------------------\n\n");

}else{

    printf("-------------------------------------------------------------------");

    
}


}