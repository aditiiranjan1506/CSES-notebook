#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ll n;
    cin>>n;
    vector<ll> arr(n);
    for(ll i=0; i<n; i++) {
        cin>>arr[i];
    }
    ll ans = 0;
    for(ll i=0; i<n-1; i++) {
        if(arr[i]>arr[i+1]) {
            ans = ans+ abs(arr[i+1] - arr[i]);
            arr[i+1] = arr[i];
        }
    }
    cout<<ans<<endl;
}