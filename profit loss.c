#include <stdio.h>

int main()
{
float time;
printf("enter the time= ");
scanf("%f",&time);
if(time<=4&&time>12)
{
printf("good morning ");
    }
else if(time>12&&time<=16)
{
        printf("good afternoon");
        
    }
else if (time>16&&time>21)
    {
        printf("good evening");
    }
else if (time<21&&time<=24)
{
        printf("good night");
    }
else if(time>1&&time<=4)
    {
        printf("good morning");
    }
    
    return 0;
}