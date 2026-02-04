#include <bits/stdc++.h>

using namespace std;
int main() {
    int n;
    scanf("%d", &n);
    int a1,a2,b1,b2,c1,c2,ans1,ans2,ans3;
    scanf("%d%d",&a1,&a2);
    scanf("%d%d",&b1,&b2);
    scanf("%d%d",&c1,&c2);
    ans1 = ceil(n*1.0/a1)*a2;
    ans2 = ceil(n*1.0/b1)*b2;
    ans3 = ceil(n*1.0/c1)*c2;
    printf("%d\n",min(ans1,min(ans2,ans3)));
    return 0;
}