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
        int N;
        cin >> N;

        int x;
        int countOdd = 0, countEven = 0;
        for (int i = 0; i < N; i++)
        {
            cin >> x;
            if(x%2 == 0) countEven += 1;
            else countOdd += 1;
        }

        int availOdd = 0, availEven = N/2;
        if(N%2 == 0) availOdd = (N/2);
        else availOdd  = (N/2 + 1);

        cout << min(availOdd, countEven) + min(availEven, countOdd) << '\n';

    }

    return 0;
}