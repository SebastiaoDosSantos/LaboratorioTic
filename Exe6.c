#include <stdio.h>
int main (){
	int Custoesperado, precoConvit, quantConvites = 0;
	printf("Custo do Espetaculo e Custo do Convite: ");
	scanf ("%d%d",&Custoesperado,&precoConvit);
	quantConvites = Custoesperado / precoConvit;
	printf("Deves vender aproximadamente %d Convites para que o custo do Espetaculo seja alcancado \n",quantConvites); 
	return 0;
}