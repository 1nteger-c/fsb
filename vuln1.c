//gcc -o vuln1 vuln1.c -no-pie -m32
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
    printf("system : %p\n", system);
    char buf[256];
    read(0, buf, 100);
    printf(buf);

    printf("/bin/sh");
    return 0;
}
