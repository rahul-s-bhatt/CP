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
        int N, X;
        cin >> N >> X;

        vector<int> v;
        int temp;

        for (int i = 0; i < N; i++)
        {
            cin >> temp;
            v.push_back(temp);
        }

        for (int i = 0; i < N; i++)
        {
            v.push_back(v[i] ^ X);
        }
        
        int noOfOperations = 0;

        int findHighestValue = 0;
        for(auto x: v)
            if(x >= findHighestValue)
                findHighestValue = x.second;

        
        cout << findHighestValue << ' ' << noOfOperations << endl;

    }

    return 0;
}