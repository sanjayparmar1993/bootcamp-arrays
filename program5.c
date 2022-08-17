#include<stdio.h>
#include<conio.h>

int main()
{
    int a[10],i,min;

    printf("Enter ten numbers:\n");
    for(i=0 ; i<=9 ; i++)
      {
       scanf("%d",&a[i]);
      }
      min=a[0];

    for(i=0 ;i<=9 ;i++)
      {
        if(min>=a[i])
        min=a[i];
      }

      printf("smallest number is :%d",min);
      return 0;
}
