#include <stdio.h>
int main(){
	int i, number[5], num_ones=0;
	for(i=0; i<5; i++){
		printf("Enter number %d: ", i+1);
		scanf("%d", &number[i]);
	}
	for(i=0; i<5; i++){
		num_ones += number[i];
	}
	printf("Ones: %d\n", num_ones);
	printf("Zeroes %d\n", 5-num_ones);
}
