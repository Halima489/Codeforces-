#include<stdio.h>
int main() {
    int t;
    scanf("%d",&t);
    while (t --) {
        long long n;
        scanf("%lld\n",&n);
        printf("%lld\n",(n-1) / 2);
    }
    return 0;
}
