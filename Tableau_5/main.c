#include <stdio.h>
#include <stdlib.h>

int main()
{
    int F, N, R;

    printf("entrez le facteur : ");
    scanf("%d", &F);

    printf("le nombre d'elements : ");
    scanf("%d", &N);

    int T[N];
    for (int i = 0; i < N; i++) scanf("%d", &T[i]);

    for (int i = 0; i < N; i++)
    {
            R = F * T[i];
            printf("%d * %d = %d\n", F, N, R);
    }






    return 0;
}
