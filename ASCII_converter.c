#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define max 1000
int main(){
	
	char getCharacters[3];
	int count=0;
	printf("Character: ");
	while((getCharacters[count]=getchar()) !='\n'){

		printf(" %c : %d ",getCharacters[count],getCharacters[count]);
		++count;
	}
	
	

	
	
	return 0;
}






































/**
@author Atamba
*/

