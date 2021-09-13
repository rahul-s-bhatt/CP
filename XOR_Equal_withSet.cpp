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
        ll temp;

        set<ll> s;
        unordered_map<ll, ll> m, m2;

        cin >> N >> X;

        if(N == 1)
        {
            cout << 1 << ' ' << 0 << endl;
            return 0;
        }
        
        for (ll i = 0; i < N; i++)
        {
            cin >> temp;
            if(m.find(temp) != m.end()) m[temp] += 1;
            else
            {
                s.insert(temp);
                m[temp] = 1;
            }
        }
        
        ll noOfOperations = 0;
        
        for(auto x: s)
        {
            auto temp = x ^ X;

            if(m.find(temp) != m.end())
            {
                m[temp] += 1;
                noOfOperations += 1;
                s.erase(temp);
            }

        }

        ll findHighestValue = 0;
        for(auto x: m) if(x.second >= findHighestValue) findHighestValue = x.second;
        
        cout << findHighestValue << ' ' << noOfOperations << endl;

    }

    return 0;
}