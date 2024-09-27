#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("nombre d'elements :");
    scanf("%d", &n);

    int T[n];

    for (int i = 0 ; i < n ; i++)
    {
        printf("le nombre %d : ", i+1);
        scanf("%d", &T[i]);
    }

    int max = T[0];

    for (int i = 0; i < n; i++)
    {
        if(max < T[i]) max = T[i];
        else max = max;
    }

    printf("le maximum du tableau est : %d", max);


    return 0;
}
