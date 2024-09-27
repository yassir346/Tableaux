#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num;

    printf("nombre d'elements :");
    scanf("%d", &num);

    int T[num];

    for (int i = 0 ; i < num ; i++)
    {
        printf("le nombre %d : ", i+1);
        scanf("%d", &T[i]);
    }

    int Sum=0;

    for (int i = 0 ; i < num ; i++)
    {
        Sum = Sum + T[i];
    }
    printf("la somme des elements est : %d", Sum);


    return 0;
}
