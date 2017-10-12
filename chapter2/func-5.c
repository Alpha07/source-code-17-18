#include <cs50.h>
#include <stdio.h>

int mult(int a, int b)
{
    int ans = 0;
    
    while (b > 0)
    {
        ans += a;
        b--;
    }
    
    return ans;
}

int main(void)
{
    int x = 3;
    int y = 4;
    
    int ans = mult(x, y);
    
    printf("%d times %d equals %d.\n", x, y, ans);
}