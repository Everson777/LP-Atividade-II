#include <stdio.h>

int main(){

float temperatura;

//Pedindo pra o usu�rio digita a temperatura

printf("Digite a temperatura:");
scanf("%f",&temperatura);

//Verificando  se o dua est� ensolarado, nublado ou chuvoso

if(temperatura > 25){

   printf("O clima est� ensolarado");
}
if(temperatura < 15){

  printf("O clima est� chuvoso");
}
if(temperatura == 25 || temperatura == 15){
	
	printf("O clima est� nublado");
}



 return 0;

}
