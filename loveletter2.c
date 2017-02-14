#include <stdio.h>
#include <string.h>
int main(){
	char ch;
	FILE *fp;
	fp=fopen("sample.txt","r");
	while(!feof(fp)){
		ch=getc(fp);
		printf("%d ",ch);
	}
}
