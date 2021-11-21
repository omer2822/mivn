#include <stdio.h>
#include "ex2.h"

void show_bits(magnitude n){
    int i, k, mask;
    for(i=31; i >= 0;i--){
        mask = 1 << i;
        k = n & mask;
        k==0? printf("0"):printf("1");
    }
    printf("\n");
    
}

void testM(){
    printf("%d\n", multi(10, -5));
    printf("%d\n", add(-1, 4));
    printf("%d\n", sub(8, -3));
    printf("%d\n", equal(4, 4));
    printf("%d\n", greater(3, 1));
    printf("%d\n", multi(2, add(3, 5)));
}
#define UMax 2147483648
#define Max 2147483647

int main()
{
    printf("%d\n",add(2,-2));
    printf("%d\n",sub(8,-3));
}