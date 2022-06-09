// include 
#include <stdio.h>


// define
#define SIZE 200


// variaveis 
char nome[SIZE][50];
char email[SIZE][50];
int cpf[SIZE];
int op;

void cadastro();
void pesquisa();
void lista();

int main (void) {
   // cadastro();
   // pesquisa();
  //  lista();
    do
    {
       system("cls");
       printf("\n -----MENU-----\n 1 - Cadastro \n 2 - Mostrar Usuarios \n 3 - Pesquisar \n 4 - Sair \n");
       scanf("%d", &op);
       switch(op){
        case 1:
            cadastro();
             break;
        case 2:
            lista();
           break;

        case 3:
            pesquisa();
            break;

        case 4:
            system("exit");
            break;
        default:
            printf("Opcao Invalida.");
       }

    } while (op!=4);   
}

void lista(){
    int i;
    for(i=0; i<SIZE;i++){
        if(cpf[i]>0){
        printf("\n Nome: %S\nEmail: %s\n CPF: %d", nome[i], email[i], cpf[i]);
        } else
        {
            break;
        }
        
    }
    getchar();
    getchar();
}

void cadastro(){
    static int linha;
    do
    {
        printf("\nDigite o nome: ");
        scanf("%S", &nome[linha]);
        printf("\n Digite o email: ");
        scanf("%s", &email[linha]);
        printf("\n Digite o CPF: ");
        scanf("%d", &cpf[linha]);
        printf("\n Digite 1 para continuar ou outro valor para cancelar: ");
        scanf("%d", &op);
        linha++;
    } while (op==1);

}

void pesquisa(){
    int cpfPesquisa;
    char emailPesquisa[50];
    int nomePesquisa;
    int i;
    do
    {
        printf("\n Digite 1 para pesquisar o CPF ou 2 para o EMAIL");
        scanf("%d", &op);
        switch(op){
            case 1:
                    printf("\n Digite o CPF: ");
                    scanf("%d", &cpfPesquisa);
                    for(i=0; i<SIZE; i++){
                        if(cpf[i]==cpfPesquisa){
                            printf("\n Nome: %S\nEmail: %s\n CPF: %d", nome[i], email[i], cpf[i]);
                        }
                    }
                    

                break;
            case 2:
             printf("\n Digite o EMAIL: ");
                    scanf("%s", &emailPesquisa);
                    for(i=0; i<SIZE; i++){
                        if( strcmp(email[i], emailPesquisa)){
                            printf("\n Nome: %S\nEmail: %s\n CPF: %d", nome[i], email[i], cpf[i]);
                        }
                    }
                

                break;
            default:
                    printf("Opcao Invalida");

                break;
        }
            printf("Digite 1 para continuar pesquisando");
            scanf("%d", &op);
    } while (op==1);
    
}