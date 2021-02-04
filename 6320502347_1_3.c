#include<stdio.h>
int main(){
    int x,y;
    unsigned long long int a;
    scanf("%llu",&a);
    x=a%3;
    y=a%11;
    printf("%d %d",x,y);
    return 0;
}
