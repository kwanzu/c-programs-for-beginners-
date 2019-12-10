#include <stdio.h>///for standard input and output
#include <stdlib.h>
#include <ctype.h>
#include <fcntl.h>
#include <math.h>
#include <unistd.h>
#include <stddef.h>///for wide character constants e.g wchar_t
#include "test.h"
#define space "\n\n\n\n"
#define nl "\n"

int main()
{
int five=5,chec;
printf("This program echos a digit's name between 0-9\n");
printf("Number: ");
scanf("%i",&chec);
printf("This is %s\n",chec==0?"zero":chec==five?"five\n":chec==4?"four":chec==3?"three":chec==2?"two":chec==1?"one":chec==6?"six":chec==7?"seven":chec==8?"eight":chec==9?"nine":" more than 9");
system("cls");
main();

    return 0;
}


