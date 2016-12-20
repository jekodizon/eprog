#include <stdio.h>
int main(){

	int i;

	int sum = 0;

	for(i=232000000; i<233000000; i++){

		if(i%2==0 && i%3==0 && i%5==0 && i%7==0 && i%11==0 && i%13==0 && i%17==0 && i%19==0){
				sum = i;
				printf("%d", i);

		}

	}

}
