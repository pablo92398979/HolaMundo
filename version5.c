#include<stdio.h>

int main()
{
	float a,b,sum,res,mul,div;
	int i;
	
	printf("Usuario, este programa suma y resta dos enteros\n");
	printf("Introduce primer numero: \n");
	scanf("%f",&a);
	printf("Introduce el segundo numero\n");
	scanf("%f",&b);
	

	if(a==0)
	{
		for(i=1; i<=2; i++)
	{
			printf("No se puede dividir con 0, ingresa otros numeros\n");
			printf("Ingresa nuevo numero: \n");
			scanf("%f",&a);
	
			if(a>0 && b>0)
			{
				div=a/b;
				i=i+2;
			}
			else
			{
				i=i-1;
			}
		
		}
			sum=a+b;
			res=a-b;
			mul=a*b;
	
	}
	else
	{
		if(b==0)
		{
		for(i=1; i<=2; i++)
		{
			printf("No se puede dividir con 0, ingresa otros numeros\n");
			printf("Introduce nuevo numero: \n");
			scanf("%f",&b);
			if(a>0 && b>0)
			{
				div=a/b;
				i=i+2;
			}
			else
			{
				i=i-1;
			}
		}
			sum=a+b;
	        res=a-b;
		  	mul=a*b;
	
		
		}
	}
	
	printf("el resultado de la suma es: %.2f\n",sum);
	printf("el resultado de la resta es: %.2f\n",res);
	printf("el resultado de la multipiclacion es: %.2f\n",mul);
	printf("el resultado de la division es: %.2f\n",div);
	
	return 0;
}