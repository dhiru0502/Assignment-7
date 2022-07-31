#include<stdio.h>
int main()
{
    int num,y,count=0,cnt,rem,r=1,result=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    y=num;
    while(y>0)
    {
        y=y/10;
        count++;
    }
    cnt=count;
    y=num;
    while(y>0)
    {
        rem=y%10;
        while(cnt>0)
        {
            r=r*rem;
            cnt--;
        }
        result=result+r;
        cnt=count;
        y=y/10;
        r=1;
    }
    if(result==num)
        printf("Number is Armstrong");
    else
        printf("Number is not Armstrong");
    return 0;
}
