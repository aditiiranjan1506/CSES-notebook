#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ll n;
    cin>>n;
    vector<ll> a(n-1);
    for(int i=0; i<n-1; i++) {
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    if(n==2) {
        if(a[0]==1) {
            cout<<2<<endl;
            return 0;
        }
        else {
            cout<<1<<endl;
            return 0;
        }
        
    }
    for(int i=0; i<n-1; i++) {
        if(a[i]+1!= a[i+1]){
            cout<<a[i]+1<<endl;
            break;
        }
    }
}