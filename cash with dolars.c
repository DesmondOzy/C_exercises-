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
        if(n > 0)
        {            
            int count = 0;
            int coins = (int)round(n  * 100);

            int tmp_count = coins / 25;
            if(tmp_count > 0)
            {
                count = count + tmp_count;
                coins = coins - (tmp_count*25);
            }
            
            tmp_count = coins / 10;
            if(tmp_count > 0)
            {
                count = count + tmp_count;
                coins = coins - (tmp_count*10);
            }

            tmp_count = coins / 5;
            if(tmp_count > 0)
            {
                count = count + tmp_count;
                coins = coins - (tmp_count*5);
            }

            tmp_count = coins / 1;
            if(tmp_count > 0)
            {
                count = count + tmp_count;
                coins = coins - tmp_count;
            }
                                
            printf("%i\n", count);
            break;
        }        
     }
    
    return 0;
}
