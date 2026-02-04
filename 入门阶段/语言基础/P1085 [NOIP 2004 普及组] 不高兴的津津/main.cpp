#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;
int t[15],a,b,maxn=8,ans=0;
int main() {
    for(int i=1;i<=7;i++) {
        scanf("%d%d",&a,&b);
        t[i]=a+b;
        if(t[i]>maxn) {
            maxn = t[i];
            ans = i;
        }
    }
    printf("%d",ans);
    return 0;
}