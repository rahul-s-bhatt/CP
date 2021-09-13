#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll t;
    cin >> t;

    while(t--)
    {
        ll N, X;
        ll noOfOperations = 0;
        ll mxFreq = 0;

        map<ll, ll> m;

        cin >> N >> X;

        for (ll i = 0; i < N; i++)
        {
            ll temp;
            cin >> temp;
            m[temp]++;
            mxFreq = max(mxFreq, m[temp]);
        }

        for (auto [key, val] : m)
        {
            ll cnt = val;
            if(X != 0) cnt += m[key ^ X];
            ll req = m[key ^ X];
            if(cnt > mxFreq)
            {
                mxFreq = cnt;
                noOfOperations = req;
            }
            else if(cnt == mxFreq) 
                noOfOperations = min(noOfOperations, req);
        }

        cout << mxFreq << " " << noOfOperations << '\n';
        
    }

    return 0;
}