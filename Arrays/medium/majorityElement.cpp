#include<bits/stdc++.h>
using namespace std;

//* Return element which come > n/2 time  (Moore's Voting Algorithm)

int majorityElement(vector<int>& nums) {
       int ele, count = 0, n = nums.size();

       for(int i = 0 ; i < n ; i++){
            if(count == 0){
                ele = nums[i];
                count++;
            }
            else if(nums[i] == ele){
                count++;
            }
            else if(nums[i] != ele){
                count--;
            }
       }

       return ele;
    }

int main(){
    
}