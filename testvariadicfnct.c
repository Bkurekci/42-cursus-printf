#include <stdarg.h>
#include <stdio.h>

int ortalama(int n, ...)
{
    int toplam = 0;
    va_list arg;
    va_start(arg, n);

    for(int i = 0; i < n; i++)
        toplam += va_arg(arg, int);
    
    va_end(arg);

    toplam /= n;
    return (toplam);
}

int main()
{
    printf("%d", ortalama(4, 2, 4, 6, 8));
}