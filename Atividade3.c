#include <stdio.h>

int main(){
	
	float nota;
	
	printf("Digite a nota do aluno:");
	scanf("%f",&nota);

  if (nota >=9){
  	
   printf("Classificação: Excelente" ); 	
 }
   
if(nota >=7 && nota <= 8.9){
	
	printf("Classificação: Bom" );
}
if(nota != 5 && nota <= 6.9 ){
	
	printf("Classificação: Razoável");
}
if(nota ==5){
	printf("Classificação: insuficiente");
}


return 0;

}

