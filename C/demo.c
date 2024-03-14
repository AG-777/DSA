#include <stdio.h>
#include <math.h>
void reverse(int num) {
    int n =0;int last;int i=0;
    while(num>0) {
        last = num%10;
        n = n*10+last;
        num /= 10;
        i++;
    }
    printf("%d",n);
}
int main() {
    int a =73487;
    reverse(a);
}