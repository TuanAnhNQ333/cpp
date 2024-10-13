#include <iostream>
using namespace std;
int main ()
{
    int a;
    scanf ("%d", &a);
    
    switch (a)
    { 
        case 1: // 1 la troi nang #3
        
        {cout << "mac quan dui";
           
           break;}
        
        case 2: // 2 la troi mua 
        
        {cout << " ngu o nha";

           break;}

        case 3: // 3 la troi mat
        
        {cout << "o nha choi game";
           
           break;}

        default: // khong co gi bat thuong xay ra
        
        {cout << "khong lam gi ca";}

    }
    return 0;

}