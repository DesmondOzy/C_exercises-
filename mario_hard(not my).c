#include <cs50.h>
#include <stdio.h>
#include <unistd.h>

int main(void)
{
   //Создаем переменные для высоты, пробелов и хэшей
    int height;
    int spaces;
    int hashes;
    int hashes2;

   do
    {
        height = get_int("Height: ");
    }
    //Устанавливаем условия
    while (height < 1 || height > 8);
   
    //Создаем строки
    for (int i = 1; i <= height; i++)
    {
     //Создаем столбцы пробелов
       for (spaces = (height - i); spaces > 0; spaces--)
        {
            printf(" ");
            sleep(1);
        }
         //Создаем столбцы хешей
        for (hashes = 1; hashes <= (i); hashes++)
        {
            printf("#");
            sleep(1);
        }
        printf("  ");
            //Создаем столбцы хешей
        for (hashes2 = 1; hashes2 <= (i); hashes2++)
        {
            printf("#");
            sleep(1);
        }
        printf("\n");
     }
    return 0;
}
