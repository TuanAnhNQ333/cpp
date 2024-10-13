#include <stdio.h>

int main()
{
    int a;
    scanf ("%d", &a);
    
    switch (a)
    {
        case 1: // troi nang
        {
            printf("mac quan dui\n");
            break;
        }
        case 2: // troi mua
        {
            printf("nam ngu\n");
            break;
        }
        case 3: // troi mat
        { 
            printf("o nha choi game\n");
            break;
        }
        default: // khong co gi xay ra
        {
            printf("khong lam gi ca");
        }
    }
    return 0;
}
