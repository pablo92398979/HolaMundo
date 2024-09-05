#include<stdio.h>

int main()
{
	
	int num1,num2,sum,res,multi,divi;
	
	printf("\neste programa calcula la suma,resta,multiplicacion y division de dos numeros enteros\n");
	printf("ingresa el primer numero entero: \n");
	scanf("%d",&num1);
	printf("ingresa el segundo numero entero: \n");
	scanf("%d",&num2);
	
	sum=num1+num2;
	printf("el resultado de la suma es: %d\n",sum);
	
	res=num1-num2;
	printf("el resultado de la resta es: %d\n",res);
	
	multi=num1*num2;
	printf("el resultado de la multiplicacion es: %d\n",multi);
	
	divi=num1/num2;
	printf("el resultado de la division es: %d\n",divi);
	
	
	return 0;
	
}