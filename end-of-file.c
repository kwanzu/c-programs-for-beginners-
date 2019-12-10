#include <stdio.h>

int main()
{
    int c;
    printf("Value of c is: %d",c);

    /*Verify value of getchar() != EOF is 0 or 1 */

    while((c=getchar()) != EOF)
    {
        printf("\nc is: %d\n",EOF);
        putchar(c);


}
    return 0;
}
