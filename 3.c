#include<stdio.h>
int main()
{
    int N,a=-1,b=1;
    printf("Enter any number: ");
    scanf("%d",&N);
    while(1)
    {
      b=a+b;
      a=b-a;
      if(b==N)
      {
           printf("Number is fibonnaci");
      break;
      }
      if(b>N)
      {
           printf("Number is not fibonacci");
      break;
     }
    }
    return 0;
}
