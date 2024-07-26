#include <stdio.h>

int main()
{
    int alpha, code = 1;  // Initializing code to 1
    for(alpha = 'A'; alpha <= 'G'; alpha = alpha + 1)
    {
        printf("%c%d\t", alpha, code);
    }
    putchar('\n');
    return 0;
}
