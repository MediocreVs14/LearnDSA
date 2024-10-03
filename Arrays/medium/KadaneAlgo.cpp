#include<bits/stdc++.h>
using namespace std;


//* Maximum Subarray using kadane algorithm


vector<int> maxSubarr(vector <int> nums){
    int n = nums.size();
    int maxsum = nums[0], sum =0;
    int ansStart = -1, ansEnd = -1, start = 0;

    for(int i = 0 ; i < n ; i++){
        if(sum == 0) start = i;
        sum = sum + nums[i];
        if(sum > maxsum){  
            maxsum = sum;
            ansStart = start;
            ansEnd = i;
        }
        if(sum < 0) sum = 0;
    }
    
    vector <int> vec;
    for(int i = ansStart ; i <= ansEnd ; i++){
        vec.push_back(nums[i]);
    }


    return vec;
}

int maxKadane(vector <int> nums){
    int n = nums.size();
    int maxsum = nums[0], sum =0;

    for(int i = 0 ; i < n ; i++){
        sum = sum + nums[i];
        if(sum > maxsum) maxsum = sum;
        if(sum < 0) sum = 0;
    }
    return maxsum;
}


int main(){
    // Maximum Subarray using kadane algorithm
    vector <int> vec = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    vector <int> vec2 = {-2, -3, 4, -1, -2, 1, 5, -3};

    int ans = maxKadane(vec);

    vector<int> ans2 = maxSubarr(vec2);

    for(auto it : ans2){
        cout << it << " ";    
    }
}