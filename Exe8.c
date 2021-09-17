#include<stdio.h>

int main(){
	
	float salMinimo, salBruto, imposto, salLiquido;
	int quanthT, valorhT, hr;
	printf("Digite o salario minimo e o numero de horas trabalhadas:\n");
	scanf("%f%i", &salMinimo, &hr);
	valorhT = salMinimo/2;
	salBruto = (hr*quanthT);
	imposto = (salBruto*3)/100;
	salLiquido = salBruto - imposto;
	printf("O salario Liquido do funcionario e:\n %.2f", salLiquido);
	
	return 0;
}