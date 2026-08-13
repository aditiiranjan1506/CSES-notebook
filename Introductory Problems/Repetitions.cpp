#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    string s;
    cin>>s;
    int n = s.size();
    int cur = 1;
    int mx = 1;
    for(int i=0; i<n; i++) {
        if(s[i]==s[i+1]) {
            cur++;
        }
        else {
            cur = 1;
        }
        mx = max(cur, mx);
    }
    cout<<mx<<endl;
}