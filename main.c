#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    double x1, x2, delta,y;
    unsigned int variant, N;
    int j;
    do{
        printf("Enter  variant(1 or 2): ");
        scanf("%u", &variant );
    }
    while( variant !=1 && variant !=2 );
    {
        printf("ERROR. Invalid data\n");
        printf("Enter variant (1 or 2 ): ");
        scanf("%u", &variant);
    }


    if( variant == 1 ){


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

        int i=1;
        delta=(4*x2-5*x1)/(N-x1);
        system("cls");
        printf("____________________________________________________________\n");
        printf("|  N  |  X  |  y  |\n");
        printf("____________________________________________________________\n");
          for(i;i<=N;i++)
        {
            printf("| %7d  |  %21f  |  2  |",i,x1,y);
            printf("____________________________________________________________\n");
            printf("n");
            printf("\n");
            x1=x1+5;
            y=x1+delta;
            if(i%11==0);
            {
             printf("Press any key\r");
             getchar();
            }
        }

    }

     if(j==2){

         printf("\nx1=");
         scanf("%lf", &x1);
         printf("\nx2=");
         scanf("%lf", &x2);
         printf("\ndelta=");
         scanf("%lf", &delta);

           while(delta<1){
            printf("ERROR. Invalid data\n");
            printf("delta=");
            scanf("%u", &delta);
           }
          int i=1;
          system("cls");
          printf("____________________________________________________________\n");
          printf("|  N  |  X  |  y  |\n");
          printf("____________________________________________________________\n");

          while(x1<=x2)
          {
              printf("| %7d  |  %21f  |  2  |",i,x1,y);
            printf("____________________________________________________________\n");
            printf("n");
            printf("\n");
            x1=x1+5;
            y=x1+delta;
            i++;
          if(i%11==0);
            {
             printf("Press any key\r");
             getchar();
            }
          }

    }
    return 0;
}
