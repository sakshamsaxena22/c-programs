#include<stdio.h>
int main()
{
    int a[5];
    int i;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}scanf("%d",&a[i][j]);
        }
    }
    int b[3][3];
    for(int i=0;i<3;i++)
    for(int j=0;j<3;j++)
    {
        b[i][j]=a[j][i];
    }
    printf("the tranpose of matrix will be\n");
    for(int i=0;i<3;i++)
    {
    for(int j=0;j<3;j++)
    {
        printf("%d\t",b[i][j]);
    }
    printf("\n");
    }
    return 0;
}