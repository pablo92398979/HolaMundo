#include<stdio.h>

int main()
{
    float a,b,sum,res,mul,div;

	printf("este programa suma, resta, divide y multiplica numeros enteros y con decimal \n");
	printf("introduce el primer numero \t \n");
	scanf("%f",&a);
	printf("introduce el segundo numero");
	scanf("%f",&b);
	
	sum=a+b;
	res=a-b;
	mul=a*b;
	
 if (b = 0)
    {
        div = a / b;
        
    } else 
	{
         printf("Error: Division por cero no permitida.\n");
    }
    
    printf("El resultado de la suma es: %.2f\n", sum);
    printf("El resultado de la resta es: %.2f\n", res);
    printf("El resultado de la multiplicacion es: %.2f\n", mul);
    printf("el resultado de la divicion es: %f \n", div);
	
	return 0; 
}