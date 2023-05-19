#include <stdio.h>

int main()
{
    int i, j, N;

    printf("Enter rows: ");
    scanf("%d", &N);
    for(i=1; i<=N; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d", j);
        }
        for(j=i-1; j>=1; j--)
        {
            printf("%d", j);
        }

        printf("\n");
    }
    for(i=N-1; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d", j);
        }
        for(j=i-1; j>=1; j--)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}f=1;
            }
            
        }
    }
    if(f==0)
    {
        printf("identity");
    }
    else
    {
        printf("not identity");
    }
    return 0;
}