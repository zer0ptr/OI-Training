#include <bits/stdc++.h>
using namespace std;

int k;
int ans=0;
double n2=0, sum=0;
int main() {
    cin>>k;
    while(1) {
        n2++;
        sum+=1/n2;
        ans++;
        if(sum>k) {
            cout<<ans<<endl;
            return 0;
        }
    }
    return 0;
}