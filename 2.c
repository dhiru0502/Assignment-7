#include<stdio.h>
int main()
{
    int N,a=-1,b=1;
    printf("How many terms of Fibonnaci series to print: ");
    scanf("%d",&N);
    while(N>0)
    {
      b=a+b;
      printf("%d  ",b);
      a=b-a;
      N--;
    }
    return 0;
}
