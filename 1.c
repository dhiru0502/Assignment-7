#include<stdio.h>
int main()
{
    int N,a=-1,b=1;
    printf("Enter the term of Fibonnaci series: ");
    scanf("%d",&N);
    while(N>0)
    {
      b=a+b;
      a=b-a;
        N--;
    }
    printf("Term is %d",b);
    return 0;
}
