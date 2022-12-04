#include <algorithm>
#include <iostream>
using namespace std;
#include <vector>
#include <string>
int main()
{
    freopen("../input/day4data.in", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0); std::cout.tie(0);

    string s;
    int a; int b; int c; int d;
    int count = 0;
    int count1 = 0;
    while(getline(cin, s)){
        // cout<<s<<endl;
        int dash1 = 0; int dash2 = 0;
        int comma = 0;
        for(int i = 0; i < s.size(); i++){
            if(s.at(i) == ','){
                comma = i;
            }
            if(s.at(i) == '-'){
                if(dash1 == 0) dash1 = i;
                else dash2 = i;
            }
        }
        a = stoi(s.substr(0, dash1));
        b = stoi(s.substr(dash1+1, comma-dash1-1));
        c = stoi(s.substr(comma+1, dash2-comma-1));
        d = stoi(s.substr(dash2 + 1, s.size() - dash2));
        cout<<a<<" " << b<<" "<<c<<" " << d <<endl;

        // cout << p1 << p2;
        
        if(a<=c && d<=b || c<=a &&b<=d){
            count+=1;

        }

        if(a <= c && c <= b || c<=a && a<=d){
            count1 +=1;
        }
            
    }
    
    std::cout << count << endl;
    std::cout << count1 << endl;
    
    // m = *max_element(v.begin(), v.end());
    // cout<<m<<endl;
    //return 0;
}