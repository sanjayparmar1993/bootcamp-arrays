#include<stdio.h>
#include<conio.h>

int main()
{
    int a[10],i;

    printf("Enter ten number:\n");
    for(i=0 ; i<=9 ;i++)

        scanf("%d",&a[i]);


        for(i=9 ; i>=0 ; i--)
        {
         printf("%d ",a[i]);
        }


    getch();
    return 0;
}
