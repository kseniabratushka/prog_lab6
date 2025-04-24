#include <stdio.h>

int main() 
{
    system("chcp 65001");
    int a[4][4];
    int product = 1;
    printf("Введіть елементи масиву 4x4:\n");
    for (int i = 0; i < 4; i += 1) 
    {
        for (int j = 0; j < 4; j += 1) 
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < 4; i += 1) 
    {
        int max_in_row = a[i][0];
        for (int j = 1; j < 4; j += 1) 
        {
            if (a[i][j] > max_in_row) 
            {
                max_in_row = a[i][j];
            }
        }
        product *= max_in_row;
    }
    printf("Добуток максимальних елементів кожного рядка: %d\n", product);
    return 0;
}