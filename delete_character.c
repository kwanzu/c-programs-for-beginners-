#include <stdio.h>


int main()
{

    int word[10];
    int cp=0;
    printf("Type a 10-letters word \n");
    for(cp; cp<10; ++cp)
    {

        word[cp]=getchar();

    }
    printf("What letter should be deleted ");
    int answer;
    answer=getchar();
    for(; cp< 10; ++cp)
    {

        if(word[cp]==answer)
        {
            word[cp]='\0';
            printf("%d",word[cp]);
        }

    }



    return 0;

}
