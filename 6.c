#include<stdio.h>
int main()
{
    int x,i;
    for(i=2;i<100;i++)
    {
        for(x=2; x<i ;x++)
        {
            if(i%x==0)
            break;

        }
        if(x==i)
            printf("%d ",i);
    }
    return 0;
}
