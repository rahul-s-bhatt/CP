#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll t;
    cin >> t;

    ll I = 1;

    unordered_map<int, int> map;

    while(I <= t){
    
        ll X;
        cin >> X;

        for(int i=0; i<sqrt(X); i++)
        {
            map[pow(i, 2)] = i;
        }

        for(int i=0; i<X; i++)
        {

        }



       cout << "Case #" << I << ": " << "\n";
       I++;
    }

    return 0;
}