#include<stdio.h>
#include<conio.h>

int main()
{
    int a[10],i,largest,s_largest;

    printf("Enter ten number:\n");
    for(i=0 ; i<=9 ;i++)

        scanf("%d",&a[i]);
        largest=a[0];

        for(i=0 ; i<=9 ; i++)
        {

          if(largest<a[i])
            {
                s_largest=largest;
                largest=a[i] ;
            }
         else
            {
                if(s_largest<a[i])

                    s_largest=a[i];
            }
        }
            printf("largest number is :%d \n",largest);
            printf("second largest number is :%d",s_largest);


    getch();
    return 0;
}
