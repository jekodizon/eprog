#include <stdio.h>
#include <string.h>
main(){
    FILE *myFile;
    myFile = fopen("sample.txt", "r");
    int numberArray[26];

    char a[26], ch;
    int i;
    // put alphabet to a
    for(i=65; i<91; i++){
    	a[i]=i;
	}
	
	// display a(alphabet)
	for(i=65; i<91; i++){
    	printf("%c", a[i]);
	}
    	
    // get numbers para ma encrypt ang love letter
	for (i = 0; i < 5; i++){
        fscanf(myFile, "%d", &numberArray[i]);
    }
    
    printf("\nSecret: \n");
    
    //print encrypted love letter
    for (i = 0; i < 5; i++){
        printf("%c", a[numberArray[i]]);
    }
  
}
