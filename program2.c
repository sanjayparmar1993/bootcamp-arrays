#include<stdio.h>
#include<conio.h>

int main()
{
    int a[10],i,sum=0;
    float avg;

    printf("Enter ten numbers:\n");
    for(i=0 ; i<=9 ; i++)
      {
       scanf("%d",&a[i]);
      }

    for(i=0 ;i<=9 ;i++)
      {
      sum=sum+a[i];
      }
      avg=sum/10.0;
      printf("avarage is %.2f",avg);
      return 0;
}
