#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    // 25, 10, 5, 1
     while(true)
     {        
        float n = get_float("Change owed: ");        
        if(n > 0){
            
            int count = 0;

            int dollars = (int)n;
            int coins = (int)((n - (float)dollars) * 100);
            //printf("%i\n", coins);

            // do
            // {
                int tmp_count = coins / 25;
                if(tmp_count > 0){
                    count = count + tmp_count;
                    coins = coins - (tmp_count*25);
                }
                
                tmp_count = coins / 10;
                if(tmp_count > 0){
                    count = count + tmp_count;
                    coins = coins - (tmp_count*10);
                }

                tmp_count = coins / 5;
                if(tmp_count > 0){
                    count = count + tmp_count;
                    coins = coins - (tmp_count*5);
                }

                tmp_count = coins / 1;
                if(tmp_count > 0){
                    count = count + tmp_count;
                    coins = coins - tmp_count;
                }
                                
            // }while(coins>0);

            printf("%i\n", count);
        }
        break;        
     }
    
    return 0;
}
