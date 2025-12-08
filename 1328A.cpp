#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b;
        scanf("%d %d",&a,&b);
        int rem= a % b ;
        if (rem == 0)
        printf("0\n");
        else
        printf("%d\n", b-rem);
    }
    return 0;
        
    }
