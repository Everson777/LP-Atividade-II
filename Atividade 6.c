#include <stdio.h>

int main(){
	
	int codigoProduto;
	
	printf("Escolha o c�digo do produto: \n");
	printf("1 - Camiseta\n");
	printf("2 - Cal�a \n");
	printf("3 - Sapato\n");
    scanf("%d",&codigoProduto);
  
   if(codigoProduto ==1){
   	printf("Produto selecionado: Camiseta\n");
   	printf("Pre�o: R$ 50,00\n");
   	
   }
    if(codigoProduto ==2){
    	
    	printf("Produto selecionado: Cal�a\n");
    	printf("pre�o: R$ 80,00\n");
	}
    if(codigoProduto ==3){
    	
    	printf("Produto selecionado: Sapato\n");
    	printf("pre�o: 120,00\n");
	}else{
		printf("C�digo do produto inv�lido.\n");
	}

 return 0;
}
