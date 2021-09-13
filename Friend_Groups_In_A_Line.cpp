#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll t;
    cin >> t;

    while(t--){
        ll n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        ll last = 0, ans = 0;

        last = -1e6;

        for(ll i = 0; i<n ;i++)
        {
            if(s[i] == '0') continue;

            if(i-last <= k+1)
            {
                last = min(i+1, last+k);
            } else {
                ans++;
                last = i + 1;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}