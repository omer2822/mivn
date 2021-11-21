// 318733151 omer mazal
#include <stdio.h>
#include "ex2.h"

#define Max 2147483647
#define UMax 2147483648

magnitude abs(magnitude x){
    if(positive(x))
        return x;
    return ~(-x)+1;
}


int positive(magnitude x){
    magnitude y = (Max)&x;
    if (y==x){
        return 1;
    }
    return 0;
}

 // a + b
magnitude add(magnitude a, magnitude b){
    
    magnitude x = a^b;
    magnitude y = (a&b)<<1;
    //return x+y;
    magnitude t = a&Max;
    magnitude s = b&Max;
    
    // magnitude t = abs(a);
    // magnitude s = abs(b);
    if(positive(a)&&positive(b))
        return x+y;
    if(positive(a)==0&&positive(b)==0)
        return -(x+y);
    magnitude sum = t>s ? x-y : y-x;
    return sum;
    int sign;
    if(t>s){
        sum = (t-s);
    }
    if(s>t)
        sum = (s-t);

    return sum;
    // if(greater(t,s))
    //     if(positive(a))
    //         return -(t+s);
    //     return -(t-s);
        
    // magnitude x = ~a+1;
    // magnitude y = ~b+1;
    // return (~(x+y))+1;

}

 // a - b = 
magnitude sub(magnitude a, magnitude b){
    return add(a,-b);
}
 // a * b
magnitude multi(magnitude a, magnitude b){
    return a*b;
}

// true = 1, false = 0
 // a = b
int equal(magnitude a, magnitude b){
    return ((a^b)==0);
}
 // a > b
int greater(magnitude a, magnitude b){

    magnitude x = a&Max;
    magnitude y = b&Max;    
    //both positive
    if(x==a && y==b)
        return x>y;
    
    if(x==a)
        return 1;
    if(y==b)
        return 0;
    //both negative
    return x>y;

    // magnitude x = sub(a,b);
    // return x>0;
}