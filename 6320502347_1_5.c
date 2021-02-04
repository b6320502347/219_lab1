#include<stdio.h>
int main(){
    int n,position,max,i;
    scanf("%d",&n);
    int num[n];
    for(i=0;i<n;i++){
    scanf("%d",&num[i]);
    }
    for(i=0;i<n;i++){
        if(i==0){
            position=i+1;
            max=num[i];
            }
        if(num[i]>max){
            position=i+1;
            max=num[i];
        }
        }
        printf("%d %d",position,max);
        return 0;
}
