#include <stdio.h>

int main(){
int count;
int i=1;
printf("CHARACTER COUNTER\n\n");
printf("ANSI NUMBER\t\tCharacter\tINDEX+1\n");
printf("Input: ");
while((count=getchar()) != EOF){

printf("%4d\t\t\t",count);

putchar(count);
printf(" %19d\n",i);
i++;

}


return 0;
}
