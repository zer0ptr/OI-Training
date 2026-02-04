**模拟**
```c++
#include <bits/stdc++.h>
using namespace std;
double ans;
int n, i;
int main() {
	cin >> n;
	for(i = 1; ans <= n;i++) {
        ans += 1.0 / i;
	}
	cout << i - 1 <<endl;
	return 0;
}
```
但这里不是很懂模拟的具体思想，脑雾ing
**枚举**
```c++
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
```