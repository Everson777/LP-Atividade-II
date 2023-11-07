#include <stdio.h>

int main(){

float temperatura;

//Pedindo pra o usuário digita a temperatura

printf("Digite a temperatura:");
scanf("%f",&temperatura);

//Verificando  se o dua está ensolarado, nublado ou chuvoso

if(temperatura > 25){

   printf("O clima está ensolarado");
}
if(temperatura < 15){

  printf("O clima está chuvoso");
}
if(temperatura == 25 || temperatura == 15){
	
	printf("O clima está nublado");
}



 return 0;

}
