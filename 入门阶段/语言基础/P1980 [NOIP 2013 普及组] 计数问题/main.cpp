#include <iostream>

using namespace std;

int main() {
    long long n,i,x,b,c,t=0;
    for(int i=1;i<=11;i++) {
        b=i;
        while(b!=0) {
            c=b%10;
            b=b/10;
            if(c==x) t++;
        }
    }
    cout<<t<<endl;
    return 0;
}