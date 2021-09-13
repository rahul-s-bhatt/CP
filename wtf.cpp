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
        ll noOfOperations = 1e18;
        ll findHighestValue = 0;

        vector<ll> v;
        unordered_map<ll, ll> m, m2;

        cin >> N >> X;

        if(N == 1){
            cout << 1 << ' ' << 0;
            continue;
        }

        for (ll i = 0; i < N; i++)
        {
            ll temp;
            cin >> temp;
            v.push_back(temp);
            m[temp]++;
            m2[temp ^ X]++;
        }
        
        ll maxx = 0;

        if(X == 0){
            for(auto x: m){
                maxx = max(maxx, x.second);
            }
            noOfOperations = 0;
        }
        else
        {
            for(ll i = 0; i < N; i++)
            {   
                if(m[v[i]] + m2[v[i]] > maxx)
                {
                    maxx = m[v[i]] + m2[v[i]];
                    noOfOperations = m2[v[i]];
                }
                else if(m[v[i]] + m2[v[i]] == maxx){
                    noOfOperations = min(noOfOperations, m2[v[i]]);
                }
            }
        }
        cout << maxx << ' ' << noOfOperations << endl;
    }

    return 0;
}