#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin >> t;

    while(t--){
        int n, a;
        cin >> n >> a;

        cout << int(sqrt(n)) * a << '\n';
    }

    return 0;
}