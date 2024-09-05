#include<stdio.h>

int main()
{
	int a,b,sum,res;
	
	printf("Usuario, este programa suma y resta dos enteros\n");
	printf("Introduce primer numero: \n");
	scanf("%d",&a);
	printf("Introduce el segundo numero\n");
	scanf("%d",&b);
	
	sum=a+b;
	res=a-b;
	
	printf("el resultado de la suma es: %d\n",sum);
	printf("el resultado de la resta es: %d\n",res);
	
	return 0;
}