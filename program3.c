#include<stdio.h>
#include<conio.h>

int main()
{
    int a[10],i,SE=0,SO=0;


    printf("Enter ten numbers:\n");
    for(i=0 ; i<=9 ; i++)
      {
       scanf("%d",&a[i]);
      }

    for(i=0 ;i<=9 ;i++)
      {
      if(a[i]%2==0)
      SE=SE+a[i];
      else
      SO=SO+a[i];
      }

      printf("sum of even is: %d\n",SE);
      printf("sum of odd is :%d",SO);
      return 0;
}
