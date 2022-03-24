// Program treba provjerit jeli matrica gornje trokutasta.

#include <stdio.h>

int main()
{
    int A[10][10],i,j,m,n;
    int redak, stupac, gornje;

    printf("Unesi broj redaka: ");
        scanf("%d", &m);
        printf("\nUnesi broj stupaca: ");
        scanf("%d",&n);
        printf("\nUnesi vrijednosti matrice \n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                 printf("\nUnesi vrijednost A[%d][%d] : ",i,j);
                 scanf("%d", &A[i][j]);
        }
    }

    printf("\nDana matrica je : \n\n");

        for (i = 0; i < m; ++i)
        {
            for (j = 0; j < n; ++j)
            {
                printf("\t%d", A[i][j]);
            }
            printf("\n\n");
        }

    /*
     Provjera je li matrica gornje trokutasta
     */
    gornje = 1;
    for(redak=0; redak<m; redak++)
    {
        for(stupac=0; stupac<n; stupac++)
        {
            /*
             Ako su elementi ispod glavne dijagonale (stupac<redak)
             * 0 onda je matrica gornje trokutasta.
             */
            if(stupac<redak && A[redak][stupac]!=0)
            {
                gornje = 0;
            }
        }
    }

    /*
     * Ako je gornje trokutasta.
     */
    if(gornje==1)
    {
        printf("\nOvo je gornje trokutasta matrica.\n");

        for(redak=0; redak<m; redak++)
        {
            for(stupac=0; stupac<n; stupac++)
            {
                if(A[redak][stupac] != 0)
                {
                    printf("\t%d ", A[redak][stupac]);
                }
                else
                {
                    printf("\t");
                }

            }

            printf("\n\n");
        }
    }
    else
    {
        printf("\nOvo nije gornja trokutasta matrica.");
    }

    return 0;
}
