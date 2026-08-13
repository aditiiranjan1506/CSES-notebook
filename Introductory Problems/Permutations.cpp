#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ll n;
    cin>>n;
    vector<ll> a;
    if(n==3 || n==2) {
        cout<<"NO SOLUTION";
        return 0;
    }
    if(n==1) {
        cout<<1<<endl;
        return 0;
    }
    for(ll i=1; i<=n; i++) {
        if(i%2==0) {
            cout<<i<<" ";
        }
    }
    for(ll i=1; i<=n; i++) {
        if(i%2!=0) {
            cout<<i<<" ";
        }
    }
    cout<<endl;
}