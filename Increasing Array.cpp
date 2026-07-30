#include <bits/stdc++.h>
using namespace std;

int main() 
{
    long long n; cin>>n;
    vector<long long> nums(n, 0); for(auto &num:nums) cin>>num;
    long long soma=0;
    for(long long i=0 ; i<nums.size()-1 ; i++){
        if(nums[i] > nums[i+1]){
            soma+=nums[i] - nums[i+1];
            nums[i+1] += nums[i] - nums[i+1];
        }
    }

    cout << soma << '\n';
    return 0;
}
