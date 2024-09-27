#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i = 0;



    printf("enter the number of letters you need to enter :\n");
    scanf("%d", &num);

    char letters[num];

    for (i = 0 ; i < num; i++)
    {
        printf("La letter %d: ", i +1);
        scanf("%s", &letters[i]);
    }

    printf("the elements that you entered are as follow : \n");

    for (i = 0 ; i < num; i++)
    {
     printf("%c", letters[i]);
    }

    return 0;
}
