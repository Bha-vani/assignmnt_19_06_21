// Inline function in C

#include <stdio.h>
static inline int yash()
{
    return 2;
}

int main()
{
    int ret;
    ret = yash();
    printf("Output is: %d\n", ret);
    return 0;
}

#if
output ret 2
#endif
