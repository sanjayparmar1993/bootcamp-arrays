#include<stdio.h>
#include<conio.h>

int main()
{
    int a[10],b[10],i;

    printf("Enter ten number:\n");
    for(i=0 ; i<=9 ;i++)

        scanf("%d",&a[i]);


        for(i=0 ; i<=9 ; i++)
        {
         b[i]=a[i];
        }


         for(i=0 ; i<=9 ; i++)
        {
         printf("%d ",b[i]);
        }



    getch();
    return 0;
}
