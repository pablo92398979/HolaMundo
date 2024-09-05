#include<stdio.h>

int main()

{
	int a,b,sum,res,multi,di;
	
	printf("dame el primer numero ");
	scanf("%d",&a);
	
	printf("dame el segundo numero ");
	scanf("%d",&b);
	
	sum=a+b;
	res=a-b;
	multi=a*b;
	
    if(a>=0 && b>=0)
	{
		di:a/b;
	}
	else
	{
		printf("la division es erronea");
		
	}
	printf("Suma: %d\n",sum);
	printf("Resta: %d\n",res);
	printf("Multiplicacion: %d\n",multi);
	printf("Division: %d\n",di);
	
	
	return 0;
}