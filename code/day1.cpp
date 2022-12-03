#include <algorithm>
#include <iostream>
using namespace std;
#include <vector>
#include <string>

int main()
{
    freopen("day1data.in", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    //long long for big numbers, avoid overflow
    vector<long long> v;
    string s;
    long long sum = 0;
    //get the entire line except the new line
    while(getline(cin, s)){
        //if it is a new line then s should be empty: s.empty()
        if(s.length() == 0){
            //append the sum to the vector
            v.push_back(sum);
            //once sum is pushed, should initialize it to 0
            sum = 0;
        }else{
            //string to long long method, stoi...
            sum += stoll(s);
        }        
    }
    //sort the array in a descending order: greater<int>()
    sort(v.begin(), v.end(), greater<int>());
    cout<< v[0] <<" "<< v[1] <<" "<< v[2]<<endl;
    cout << v[0] + v[1] + v[2];
    return 0;
}