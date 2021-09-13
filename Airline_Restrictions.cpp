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
        int A,B,C,D,E;
        cin >> A >> B >> C >> D >> E;

        if (A+B <= D && C <= E)
        {
            cout << "YES" << '\n';
        }

        else if (A+C <= D && B <= E)
        {
            cout << "YES" << '\n';
        }
        
        else if (B+C <= D && A <= E)
        {
            cout << "YES" << '\n';
        }

        else
        {
            cout << "NO" << '\n';
        }
    }

    return 0;
}