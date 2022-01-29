#include <cs50.h>
#include <stdio.h>
#include <unistd.h>

int main(void)
{
  while(true)
    {
        int n = get_int("Height: ");
        if(n>=1 && n<=8)
       {
            for(int i=0;i<n;i++) // Рух по вертикалі.
            {
                 for(int j=0; j<n*2+2; j++) // Рух по горизонталі.
                 {
                     if((i>=n-j-1 && j<n) || (n+i+1>j-2 && j>n+1))
                     {
                           printf("#");
                     }
                     else
                     {
                        printf("_");
                     }
                     sleep(1);
                 }
                 printf("\n");
             }
             break;
       }
    }
}
