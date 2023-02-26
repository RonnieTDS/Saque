#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int cem,cinq,vinte,dez,cinco,dois,saque;
	
	printf("Digite o valor a sacar: \n",saque);
	scanf(" %d",&saque);
	
	cem=saque/100;
	saque=saque%100;
	cinq=saque/50;
	saque=saque%50;
	vinte=saque/20;
	saque=saque%20;
	dez=saque/10;
	saque=saque%10;
	cinco=saque/5;
	saque=saque%5;
	dois=saque/2;
	
	
	printf("Numero de notas R$100.00: %d\n",cem);
	printf("Numero de notas R$50.00: %d\n",cinq);
	printf("Numero de notas R$20.00: %d\n",vinte);
	printf("Numero de notas R$10.00: %d\n",dez);
	printf("Numero de notas R$5.00: %d\n",cinco);
	printf("Numero de notas R$2.00: %d\n",dois);
	
	
	
	return 0;
}
