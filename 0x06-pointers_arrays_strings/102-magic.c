#include <stdio.h>

int main(void)
{
int n = 98;
int a[5];
int *p;
a[2] = 1024;
p = &n;
*((int *)((char *)p + 2)) = 98;
printf("a[2] = %d\n", a[2]);
return (0);
}
