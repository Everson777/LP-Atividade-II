#include <stdio.h>

int main(){
	
	float nota;
	
	printf("Digite a nota do aluno:");
	scanf("%f",&nota);

  if (nota >=9){
  	
   printf("Classifica��o: Excelente" ); 	
 }
   
if(nota >=7 && nota <= 8.9){
	
	printf("Classifica��o: Bom" );
}
if(nota != 5 && nota <= 6.9 ){
	
	printf("Classifica��o: Razo�vel");
}
if(nota ==5){
	printf("Classifica��o: insuficiente");
}


return 0;

}

