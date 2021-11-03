#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    double x1, x2, delta,y, t;
    unsigned int variant, N, j;
        printf("Enter  variant(1 or 2): ");
        scanf("%u", &variant );

    while( variant !=1 && variant !=2 )
    {
        printf("ERROR. Invalid data\n");
        printf("Enter variant (1 or 2 ): ");
        scanf("%u", &variant);
    }


    if( variant == 1 )
     {
    printf("\nx1=");
    scanf("%lf", &x1);
    printf("\nx2=");
    scanf("%lf", &x2);
    printf("\n(N>0) N=");
    scanf("%u", &N);

        while(N<1){
        printf("ERROR. Invalid data\n");
        printf("N=");
        scanf("%u", &N);
        }
        int i=1,st=0;
        delta=(4*x2-5*x1)/(N-x1);
        system("cls");
        printf("---------------------------------------------\n");
        printf("|     N       |       X      |       y      |\n");
        printf("---------------------------------------------\n");
          for(i;i<=N;i++)
        {
            printf("| %10d  |  %10.2f  |  %10.2f  |\n",i,x1,y);
            printf("---------------------------------------------\n");
            x1=x1+5;
            y=x1+delta;
            if( i%10 == 0){
                printf("Press any key\r");
                getch();
            }
        }

    }

     if( variant ==2){
         printf("\nx1=");
         scanf("%lf", &x1);
         printf("\nx2=");
         scanf("%lf", &x2);
         printf("\n(j>0) j=");
         scanf("%u", &j);

           while(j<1){
            printf("ERROR. Invalid data\n");
            printf("j=");
            scanf("%u", &j);
           }
          int i=1;
          t=(4*x2-5*x1)/(j-x1);
          system("cls");
          printf("---------------------------------------------\n");
          printf("|     j       |       X      |       y      |\n");
          printf("---------------------------------------------\n");
            for(i;i<=j;i++)
            {
              printf("| %10d  |  %10.2f  |  %10.2f  |\n",i,x1,y);
            printf("---------------------------------------------\n");
            x1=x1+5;
            y=x1+t;
            if( i%10 == 0){
                printf("Press any key\r");
                getch();
              }

            }
    }
    return 0;
}
