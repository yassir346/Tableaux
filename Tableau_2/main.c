#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letters[100];
    int num, i = 0;


    printf("enter the number of letters you need to enter :\n");
    scanf("%d", &num);

    for (i = 0 ; i < num; i++)
    {
        printf("enter the first letter: ");
        scanf("%s", &letters[i]);
    }

    printf("the elements that you entered are as follow : \n");

    for (i = 0 ; i < num; i++)
    {
     printf("%c", letters[i]);
    }

    return 0;
}
