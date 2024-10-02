#include<bits/stdc++.h>
using namespace std;

int maxSubarr(vector <int> nums){
    int n = nums.size();
    int sum = 0, maxsum = INT_MIN;

    for(int i = 0 ; i < n ; i++){
        sum = 0;
        for(int j = i ; j < n ; j++){
            sum = sum + nums[j];
            maxsum = max(sum, maxsum);
        }
    }

    return maxsum;
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
vector <int> maxKadaneArr(vector <int> nums){
    int n = nums.size();
    int maxsum = nums[0], sum =0;
    vector <int> vec;

    for(int i = 0 ; i < n ; i++){
        sum = sum + nums[i];

        if(sum > maxsum) {
            maxsum = sum;
        }
        if(sum < 0){ 
            sum = 0;
            vec.clear();
        }
        
    }
    return vec;
}


int main(){
    // Maximum Subarray using kadane algorithm
    vector <int> vec = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    vector <int> vec2 = {-2, -3, 4, -1, -2, 1, 5, -3};

    int ans = maxKadane(vec);

    vector <int> arr = maxKadaneArr(vec2);

    for(auto it : arr){
        cout << it << " ";    
    }
}