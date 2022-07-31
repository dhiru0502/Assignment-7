#include<stdio.h>
int main()
{
    int x,a;
    printf("Enter a number: ");
    scanf("%d",&a);
    for(a+=1;1;a++)
    {
        for(x=2; x<a ;x++)
        {
            if(a%x==0)
            break;

        }
        if(x==a)
        {
            printf("%d ",a);
            break;
        }
    }
    return 0;
}
