#include<bits/stdc++.h>
using namespace std;


// Better Solution
int longestSubarrK(vector <int> nums , int k){
    int n = nums.size();
    int sum = 0 , len = 0, maxlen = 0;
    map <int, int> mp;

    for(int i = 0; i < n ; i++){
        sum = sum + nums[i];

        if(sum == k) maxlen = max(i+1 , maxlen); // When initially sum < k and then gets increased to k

        int rem = sum - k ;//  check whether the map has the remaining value

        if(mp.find(rem) != mp.end()){
            len = i - mp[rem];
            maxlen = max(maxlen, len);
        }

        mp[sum] = i;
    }
    return maxlen;
}
 
// Using two pointer 
// * Note: Only useful when array contains positive and zeroes
int longestSubArrKOptimal(vector <int> nums , int k){
    int maxlen = 0, i=0, j=0;
    int n = nums.size(), sum = 0;

    while(j < n){
        sum = sum + nums[j];

        if(sum < k) j++;

        if(sum == k){
            maxlen = max(maxlen , j - i + 1);
            j++;
            sum = sum - nums[i];
            i++;
        }

        if(sum > k){
            sum = sum - nums[i];
            i++;
        }
    }
    return maxlen;
}


int main(){
    vector <int> vec = {1,2,3,1,1,1,1,3,3};
    int ans = longestSubArrKOptimal(vec, 6);
    cout << ans;
}