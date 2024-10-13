// #include <stdio.h>
// int main()
// {
//     int x = 10;
//     if (x > 5)
//     {
//         int y = 20;
//         printf("x = %d, y = %d\n", x, y);
//     }

//     printf("x = %d\n", x);

//     return 0;
// }

#include <stdio.h>

int globalVar = 100;
int main()
{
    int x = 10;

    printf("x = %d, globalVar = %d\n", x, globalVar);

    return 0;
}
