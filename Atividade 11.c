#include <stdio.h>

int main(){
	
	
	char codigoAcesso [250];
	int entrada= 222;
	
	
	do{
		
		printf("Digite o código de acesso:");
		scanf("%d",&entrada);
		
	  if(entrada =! codigoAcesso){
	  
	  printf("Acesso negado. Tente novamente.\n");
	  }	
	
	}while(entrada != codigoAcesso);
	
	printf("Acesso concedido.Bem-vindo!");
	
	
	
	
	return 0;
	}
