#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<string.h>

struct dados{
	int cod;
	char nautor[50];
	char nobra[50];
	char neditora[50];
};
struct dados livro[5];
static int i=0;

void cadastrar(){
	        system("color 70");
			if(i==5){
		printf("\t\t\t** Sistema de cadastro lotado **!!!\n\t\t     Não é possivel armazenar mais informações.\n\n");
		system("pause");
		system("cls");
	} else{
			livro[i].cod=i+1;
			printf("\t\t\t* * * * * * * * * * * *\n"
				   "\t\t\t*  MENU DE CADASTRO   *\n"
				   "\t\t\t* * * * * * * * * * * *\n\n"
					"\t\t\t\nPor favor!\nInforme os nomes dos autores do livro que deseja cadastrar:\n\n->");
			fflush(stdin);
			gets(livro[i].nautor);
			system("cls");
			printf(	"\t\t\t* * * * * * * * * * * *\n"
				    "\t\t\t*  MENU DE CADASTRO   *\n"
				    "\t\t\t* * * * * * * * * * * *\n\n"
					"\t\t\t\nPor favor!\ninforme o nome da obra:\n\n->");
			fflush(stdin);
			gets(livro[i].nobra);
			system("cls");
			printf("\t\t\t* * * * * * * * * * * *\n"
				   "\t\t\t*  MENU DE CADASTRO   *\n"
				   "\t\t\t* * * * * * * * * * * *\n\n"
				   "\t\t\t\nPor favor!\nPara finalizar seu cadastro, informe a editora deste livro:\n\n->");
			fflush(stdin);
			gets(livro[i].neditora);
			system("cls");
			i++;
					printf("\t\t\t* * * * * * * * * * * *\n"
				  	       "\t\t\t*  MENU DE CADASTRO   *\n"
				           "\t\t\t* * * * * * * * * * * *\n\n"
	  				    	"\t\t\tCadastro finalizado!!!\n\tAperte qualquer tecla para voltar ao menu principal.");
					getchar();
					system("cls");		
						
	}
	
}

void procurar(){
	system("color 5f");
	int x;
	if(i==0){
		printf("\t\t\t***  Lista vazia!  ***");
		getchar();
		system("cls");
	}else{
		for(x=0;x<i;x++){
			printf("\t\t\t* * * * * * * * * * * * *\n"
				   "\t\t\t*  Livros cadastrasdos  *\n"
				   "\t\t\t* * * * * * * * * * * * *\n\n");
			
			printf("* * * * * * * *\n");
;			printf("*   Livro %d   *\n",x+1);
;			printf("* * * * * * * *\n\n");
			printf("<codigo>:\n-> %d\n\n",livro[x].cod);
			printf("<Autores da obra>:\n-> %s\n\n",livro[x].nautor);
			printf("<Nome da obra>:\n-> %s\n\n",livro[x].nobra);
			printf("<Editora>:\n-> %s\n\n",livro[x].neditora);
			printf("*Pressione enter para ir para o proximo  livro -->");
			getchar();
			system("cls");
		}
	}
}

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	int opcao=1;

	    	while(opcao!=0){
	    		system("color 1f");
	    		printf(	"\n\t\t\t	      MENU		    	\n"
		"\t\t\t* * * * * * * * * * * * * * * * *\n\n"
		"\t\t\t*    <Escolha uma das opções>   *\n\n"
		"\t\t\t* 1-INSERIR UM NOVO CADASTRO.   *\n\n"
		"\t\t\t* 2-MOSTRAR TODOS OS CADASTRO.  *\n\n"
		"\t\t\t* 0-ENCERRAR.                   *\n\n" 
	    "\t\t\t* * * * * * * * * * * * * * * * *\n\n");
	    printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n");
	    		printf("* Opção->  ");
				fflush(stdin);
	    		scanf("%d",&opcao);
	   			 getchar();
	   			 system("cls");
	    		
	    			switch(opcao){
			    		case 1:	system("COLOR 1E");
								cadastrar();
								getchar();
								;
			    		break;
			    		case 2:procurar();
			    				getchar();
			    		break;
			    		case 0:
			    		break;
			    		default:
			    		printf("\t\t\t  Opção não encontrada!\n\t\t\tDigite uma opção válida.\n");
			    		getchar();
			    		system("cls");
			}}
	
	return 0;}

