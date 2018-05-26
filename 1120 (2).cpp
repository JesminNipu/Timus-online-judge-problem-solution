#include <stdio.h>
int main(void){
    unsigned n,p,s;
    scanf("%u",&n);
    for(p=44720;n<(s=(p*(p+1))>>1)||(n-s)%p;p--);
    printf("%u %u\n",1+(n-s)/p,p);
    return 0;
}
