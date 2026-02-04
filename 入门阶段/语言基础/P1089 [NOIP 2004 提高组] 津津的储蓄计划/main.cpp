#include <iostream>

using namespace std;

int n=0,s=0,y=0;
int main() {
    for(int i=1;i<=12;i++) {
        cin>>y;
        n=n+300-y;  
        if(n<0) {
            cout<<-i<<endl;
            return 0;
        }
        while(n>=100) {
            n=n-100;
            s=s+100;
        }
    }
    cout<<n+s*1.2<<endl;
    return 0;
}