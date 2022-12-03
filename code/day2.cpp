#include <algorithm>
#include <iostream>
using namespace std;
#include <vector>
#include <string>
int main()
{
    freopen("day2data.in", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    vector<int> v;
    string a;
    char p1; char p2;
    int count = 0;
    int count2 = 0;
    int num = 0;
    int c = 'X' - 'A';
    while(getline(cin, a)){
        p1 = a.at(0);
        p2 = a.at(2);
        // cout << p1 << p2;
        
        //part 1
        // % (p2-p1) % 3 + 1 
        if(p2-p1 == 'X' - 'A'){
            // cout<<p1<<" " <<p2 << " 3"<<endl;
            count += 3;
        }else if((p2-p1 == c - 2 && p1 == 'C') || (p1 != 'C' && p2-p1 == c + 1 )){
            // cout<<p1<<" " <<p2 << " 6"<<endl;
            count +=6;
        }else{
            // cout<<p1<<" " <<p2 << " 0"<<endl;
            count += 0;  

        }

        if(p2 == 'X'){
            count += 1;
        }else if(p2 == 'Y'){
            count +=2;
        }else if(p2 == 'Z'){
            count +=3;
        }
        
        //part 2
        
        
        if(p1 == 'A'){
            num = 1;
        }else if(p1 == 'B'){
            num = 2;
        }else{
            num = 3;
        }
        if(p2 == 'X'){
            count2 += 0;
            count2 += num - 1;
            if(p1 == 'A'){
                count2 += 3;
            }

        }else if(p2 == 'Y'){
            count2 +=3;
            count2 += num;
        }else if(p2 == 'Z'){
            count2 +=6;
            count2 += num + 1;
            if(p1 == 'C'){
                count2 -= 3;
            }
        }

            
    }
    
    cout << count << endl;
    cout << count2;
    // m = *max_element(v.begin(), v.end());
    // cout<<m<<endl;
    //return 0;
}