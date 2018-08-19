#include <stdio.h>
char A()
{
    char c = 'B';
    return c;
}

int main()
{
    printf("%lu \t %lu \t%lu", sizeof( A() ),sizeof( &A )),sizeof( A );
    return 0;
}

