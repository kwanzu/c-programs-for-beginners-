#include <stdio.h>
#define tab "	"
#define newline '\n'
#define topline "__________________________________________________"// to print long line for lenthy output
#define shline "________________________________\n"//to print  short line for short output
int main()
{

char a='a',A='A',z,Z,other=-129, t=33, ft=58, nt=91, hd=123;
/**a,A are initialized to specify range of English Alphabetic characters(letters)
other( i.e characters other than alphabets or numbers) is given numerical value(ASCII value) to  be to display
non-alphabetic or non-numeric characters whose sequence of listing can only be withdrawn from their ASCII values,as is for the case of greek letters
and other phonetics
*/
int n='0';
printf("Printing ASCII values and corresponding characters\n");
printf("Char  ASCII Val ||Char  ASCII Val\n");

printf(topline);
putchar(newline);
for(a,n,A;A<='Z',n<='9' ,a<='z'; A++,a++,n++){
printf("|%c  ascii %d || %c  ascii %d\t||%3c  %s %4d|\n",A,A,a,a,n<='9' ? n:'\0',n<='9' ? "ascii":"\0",n<='9' ? n:'\0');
};

printf("\nOther non-alphanumeric characters\n");
printf(shline);
while((other !=EOF)){
	if((other >= -128 && other <= -2)  ){
		 printf("|%c \tascii \t%d|\n",other,other);}
		  for(;(t >= 33 && t <= 47);){
		 printf("|%c \tascii \t%d|\n",t,t);
		 t++;}
		 for(;(ft >=58 && ft <= 64);){
		 printf("|%c \tascii \t%d|\n",ft,ft);
		 ft++;}
		  for(;(nt >=91 && nt <= 96);){
		 printf("|%c \tascii \t%d|\n",nt,nt);
		 nt++;}
		  for(;(hd >=123 && hd <= 126);){
		 printf("|%c \tascii \t%d|\n",hd,hd);
		 hd++;
	}
	
other++;
     
}


	  
    return 0;
}


