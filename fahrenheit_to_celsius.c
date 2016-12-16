#include<stdio.h>
#include<math.h>

int main()
{
	float F, C;
	
	printf("Enter value for Farenheit\n");
	scanf("%f", &F);

	printf("\nCelcius value is ");
	printf("%f", C = (F-32)*5/9 );
	
	
}
