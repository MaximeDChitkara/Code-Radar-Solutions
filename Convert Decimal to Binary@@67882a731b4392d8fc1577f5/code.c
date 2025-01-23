#include <stdio.h>

int main()
{
    int n;
    scanf("%i",&n);
    if(n == 0) printf("0");
    else{
    int started = 0;
        for(int i = 31; i>=0;--i){
            int bit = (n>>i) &1;
            if(bit || started){
                printf("%d",bit);
                started = 1;
            }
       }
    }
    return 0;
}