#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin >> t;

    while(t--){
        int n, m, q;

        cin >> n >> m >> q;

        set<int> s;
        bool pos = true;

        while(q--)
        {
            int i;
            char ch;
            cin >> ch >> i;

            if(ch == '+')
            {
                if(s.find(i) != s.end()){
                    pos = false;
                }
                else
                {
                    s.insert(i);
                    if(s.size() > m)
                    {
                        pos = false;
                    }
                }
            } 
            else
            {
                if(s.find(i) == s.end()) 
                {
                    pos = false;
                }
                else{
                    s.erase(i);
                }
            }
        }
        string s1 = pos?"Consistent":"Inconsistent" ;
        cout << s1 << "\n";
    }

    return 0;
}