//gcc -o vuln2 vuln2.c -no-pie
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void win(){
system("/bin/sh");
}

int main(void)
{

    char buf[260];
    read(0, buf, 256);
    printf(buf);
    read(0, buf, 256);
    printf(buf);

    return 0;
}
