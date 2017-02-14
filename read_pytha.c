#include <stdio.h>
#include<math.h>
int main(){
   FILE *myFile;
   myFile = fopen("sample.txt", "r");

   int hyp;
   int numberArray[2];

   fscanf(myFile, "%d", &numberArray[0]);
   fscanf(myFile, "%d", &numberArray[1]);
   hyp=sqrt(numberArray[0]*numberArray[0]+numberArray[1]*numberArray[1]);
    
	printf("%d", hyp);
}
