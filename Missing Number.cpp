#include <bits/stdc++.h>
using namespace std;

int main() 
{
    long long n; cin>>n;
    long long num;
    bool ach = false;
    vector<long long> nums;
    while(cin>>num){
        if(num == n) ach = true;
        nums.push_back(num);
    }
    
    if(!ach) cout << n << '\n';
    else{
        sort(nums.begin(), nums.end());
        for(long long i=0 ; i<nums.size() ; i++){
            if(i+1 != nums[i]){
                cout << i+1 << '\n';
                break;
            }
        }
    }

    return 0;
}
