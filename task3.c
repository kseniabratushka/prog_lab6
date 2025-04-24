#include <stdio.h>
#include <math.h>

int main() 
{
    system ("chcp 65001");
    double X[7][2];
    double max_length = 0.0;
    printf("Введіть координати 7 точок (x, y для кожної точки):\n");
    
    for (int i = 0; i < 7; i += 1) 
    {
        printf("Точка %d: ", i + 1);
        scanf("%lf %lf", &X[i][0], &X[i][1]);
    }

    for (int i = 0; i < 7; i += 1) 
    {
        for (int j = i + 1; j < 7; j += 1) 
        {
            double dx = X[i][0] - X[j][0];
            double dy = X[i][1] - X[j][1];
            double distance = sqrt(dx * dx + dy * dy);
            
            if (distance > max_length) 
            {
                max_length = distance;
            }
        }
    }

    printf("Найбільша довжина відрізка: %.2lf\n", max_length);

    return 0;
}