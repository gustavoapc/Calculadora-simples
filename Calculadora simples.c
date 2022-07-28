#include <stdlib.h>
#include <stdio.h>

int main()
{
	char op;
	int x,y,resultado;
	
	printf("digite o seu operador:(+,-,*,/)\n");
	scanf("%c",&op);
	
	printf("digite o 1 valor\n");
	scanf("%d",&x);
	
	printf("digite o 2 valor\n");
	scanf("%d",&y);
	
	
	if(op=='+')
	{
		resultado=x+y;
	}
	else if(op=='-')
	{
		resultado=x-y;
	}
	else if(op=='*')
	{
		resultado=x*y;
	}
	else if(op=='/')
	{
		   resultado=x/y;	
	}
 	 
 	 printf("o resultado e:%d\n",resultado);
	return 0;
}