#include<stdio.h>


	int main(){
		int anoActual, anoNascido, idade, idade2050;
		printf("Digite o ano actual e o seu ano de nascimento: \n");
		scanf("%i%i", &anoActual, &anoNascido);
		
		idade = anoActual - anoNascido;
		idade2050: 2050 - anoNascido;
		printf("Actualmente você tem:\n%i anos de idade\nEm 2050 você terá:\n%i anos de idade.",idade,idade2050);
	
	}