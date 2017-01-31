#include <stdio.h>
int main(){
	int i, grades[3], sum=0;
	for(i=0; i<3; i++){
		printf("Enter grade %d: ", i+1);
		scanf("%d", &grades[i]);
	}
	for(i=0; i<3; i++){
		sum += grades[i];
	}
	printf("%d\n", sum/3);
	if(sum/3>=75)
		printf("pass\n");
	else
		printf("fail\n");
}
