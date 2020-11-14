#include <stdio.h>
#include <stdlib.h>

void other()
{
    printf("Cracked\n");
    exit(0);
}

void input()
{
    char buf[7];
    scanf("%s", buf);
    printf("other: %p\n", other);
}

int main()
{
    input();
    printf("2 + 2 * 2 = 6\n");
    return 0;
}