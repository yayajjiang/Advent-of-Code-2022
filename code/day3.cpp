#include <algorithm>
#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <set>
#include <bits/stdc++.h> //configuration + add include/bits/stdc++.h

int main()
{
    freopen("day3data.in", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0); std::cout.tie(0);
    vector<int> v;
    set<int> set1;
    set<int> set2;
    string a;

    string s1; string s2;
    char same;
    int count = 0;
    char lbaseline = 'a';
    char ubaseline = 'A';
    //intersection
    while(getline(cin, a)){
        int size = a.size();
        //substring to get the first and second half of the string
        s1 = a.substr(0, size/2);
        s2 = a.substr(size/2 ,size/2);
        // cout<<s1<<" "<<s2<<endl;
        // cout << p1 << p2;
        // count += same - baseline + 1;
        for(int i = 0; i < size; i++){
            set1.insert(s1.at(i));
            // cout<<s1.at(i)<<endl;
            if(set2.find(s1.at(i)) != set2.end()){
                // cout<<s1.at(i)<<endl;
                same = s1.at(i);
                break;
            }
            set2.insert(s2.at(i));
            if(set1.find(s2.at(i)) != set1.end()){
                // cout<<s2.at(i)<<endl;
                same = s2.at(i);
                break;
            }
        }
        // cout << same;
        if(same <= 'Z'){
            count += same - ubaseline + 27;
        }else{
            count += same - lbaseline + 1;
        }

        // std::cout<<count<<endl;
        // cout << same - baseline + 1;
        // count += same - baseline + 1;
        //need to initialize
        set1 = {};
        set2 = {};
    
    }
    
    std::cout << count << endl;
    // m = *max_element(v.begin(), v.end());
    // cout<<m<<endl;
    // //return 0;


    freopen("day3data1.in", "r", stdin);

    int count1 = 0;
    string b;
    string c;
    string d;
    string temps;
    set<int> set3;
    // set<int> temp; set<int> temp1; set<int> temp2;
    while(getline(cin, b) && getline(cin, c) && getline(cin, d)){
        // cout << a << " " << b << " " << c << endl;
        int size1 = b.size();
        for(int i = 0; i < size1; i++){
            set3.insert(b.at(i));
        }
        for (auto it = set3.begin(); it != set3.end(); it++){
            if(c.find(*it) != string::npos && d.find(*it) != string::npos) {
                same = *it;
            }
        }
        // int low = min(min(size1,size2),size3);
        // if(low == size1){
        //     temp = set3; temp1 = set4; temp2 = set5; temps = b;
        // }else if( low == size2){
        //     temp = set4; temp1 = set3; temp2 = set5; temps = c;
        // }else{
        //     temp = set5; temp1 = set3; temp2 = set4; temps = d;
        // }
        // switch (low){
        //     case size1: temp = set3; break;

        // } 
        // for(int i =0; i < low ; i++){
        //     if(temp1.find(temps.at(i)) != temp1.end()){
        //         // cout<<s1.at(i)<<endl;
        //         same = s1.at(i);
        //         break;
        //     }
        // }

        // cout << same;
        //a 97 A 65
        if(same <= 'Z'){
            count1 += same - ubaseline + 27;
        }else{
            count1 += same - lbaseline + 1;
        }

        // std::cout<<count<<endl;
        // cout << same - baseline + 1;
        // count += same - baseline + 1;
        set3 = {};
        // set4 = {};
        // set5 = {};

    }
    std::cout << count1 << endl;
}