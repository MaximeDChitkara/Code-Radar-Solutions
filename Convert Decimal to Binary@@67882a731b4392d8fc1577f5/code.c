#include <stdio.h>

char* convertToBinary(int num)
{
    int mask = 1<<31;
    int foundOne = 0;

    for(int i = 31; i >= 0; --i)
    {
        if(num & mask)
        {
            foundOne = 1;
            printf("1");
        }
    }
}

int main() {
    printf("%s", welcome());
    return 0;
}