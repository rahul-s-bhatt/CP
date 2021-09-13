#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--)
    {
        int N, A, B;
        cin >> N >> A >> B;

        string s;
        cin >> s;

        unordered_map<char, int> m;
        m['0'] =  0;
        m['1'] =  0;
        
        for (int i = 0; i < N; i++)
        {
            m[s[i]] +=  1;
        }

        int sum = 0;

        for(auto x : m) 
        {
            if(x.first == '0') sum += (A * x.second);
            if(x.first == '1') sum += (B * x.second);
        }
        cout << sum << '\n';
    }

    return 0;
}