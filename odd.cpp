#include <stdio.h>
int main(){
	int i;
	int sum = 0;
	for(i=1; i<100; i++){
		if(i%2==1){
				sum = i;
				printf("%d\n", i);
		}
	}
}
