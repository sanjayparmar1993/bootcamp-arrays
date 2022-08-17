#include<stdio.h>
#include<conio.h>

int main()
{
    int a[10],i,Smallest,S_Smallest;

    printf("Enter ten number:\n");
    for(i=0 ; i<=9;i++)

        scanf("%d",&a[i]);
        Smallest=a[0];
        S_Smallest=56986;

        for(i=1 ; i<=9 ; i++)
        {

          if(Smallest>a[i])
            {
                S_Smallest=Smallest;
               Smallest=a[i] ;
            }
         else
            {
                if(S_Smallest>a[i])

                    S_Smallest=a[i];
            }
        }
            printf("Smallest number is :%d \n",Smallest);
            printf("second Smallest number is :%d\n",S_Smallest);

    getch();
    return 0;
}
