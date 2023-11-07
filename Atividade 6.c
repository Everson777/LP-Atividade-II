#include <stdio.h>

int main(){
	
	int codigoProduto;
	
	printf("Escolha o código do produto: \n");
	printf("1 - Camiseta\n");
	printf("2 - Calça \n");
	printf("3 - Sapato\n");
    scanf("%d",&codigoProduto);
  
   if(codigoProduto ==1){
   	printf("Produto selecionado: Camiseta\n");
   	printf("Preço: R$ 50,00\n");
   	
   }
    if(codigoProduto ==2){
    	
    	printf("Produto selecionado: Calça\n");
    	printf("preço: R$ 80,00\n");
	}
    if(codigoProduto ==3){
    	
    	printf("Produto selecionado: Sapato\n");
    	printf("preço: 120,00\n");
	}else{
		printf("Código do produto inválido.\n");
	}

 return 0;
}
