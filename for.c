#include<stdio.h>
int main()
{
    for(int a = 112; a > 0 ; a = a/ 10)
    {
        printf("%d\n",a %10);
    }
    return 0 ;
}
