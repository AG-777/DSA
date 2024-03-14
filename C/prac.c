#include <stdio.h>
int main(){
    unsigned int bigNum ; 
    scanf("%u",&bigNum);
    int littleNum = -100;
    if (bigNum > littleNum) {
        printf("Obviously, 100 is bigger than -100!\n");
    }
    else {
        printf("Something unexpected has happened!\n");
}
}