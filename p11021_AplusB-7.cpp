#include <stdio.h>

int main()
{

    int t;
    int a, b;
    int i = 1;

    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d", &a, &b);
        printf("Case #%d: %d\n", i, a + b);
        i++;
    }

    return 0;
}