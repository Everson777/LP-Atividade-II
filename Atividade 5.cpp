#include <stdio.h>

int main(){
	
	int escolhaIdioma;
	
	printf("Escolha um idioma de preferência: \n");
	printf("1 - Inglês\n");
    printf("2 - Espanhol\n");
    printf("3 - Francês\n");
  scanf("%d",&escolhaIdioma);

  //Mensagens de boas-vindas de acordo com o indioma

if(escolhaIdioma == 1){
	
	printf( "Welcome! \n");

}
if(escolhaIdioma == 2){
	
	printf("Bienvenido! \n");
}
if(escolhaIdioma == 3){
	
	printf("Bienvenue! \n");

}else{
	
	printf("Escolha invalida de idioma.");
}

return 0;

}
