#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


int main()
{

	int num,rem,i=0, bin[i];
	printf("Converting decimal integers to binaries\n");
	scanf("%d",&num);

	for(num; num>-1; num/=2,i++)
	{
		rem=num%2;
		if(rem==1){
				
				printf("%d",rem);
				bin[i]=rem;
		}
	
		else
		 if(rem==0 && num!=0){
		 	printf("%d",rem);
		 	bin[i]=rem;
		 }
		
				
	}
	

	return 0;
}