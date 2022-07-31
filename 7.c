#include<stdio.h>
int main()
{
    int x,a,b;
    printf("Enter two number: ");
    scanf("%d%d",&a,&b);
    for(a+=1;a<b;a++)
    {
        for(x=2; x<a ;x++)
        {
            if(a%x==0)
            break;

        }
        if(x==a)
            printf("%d ",a);
    }
    return 0;
}
