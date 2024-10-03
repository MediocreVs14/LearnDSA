#include<bits/stdc++.h>
using namespace std;

//* Sort 0s, 1s, and 2s (DNF Algorithm)

void sortColors(vector<int>& nums) {
        int low = 0 , mid = 0, high = nums.size()-1;

        while(mid <= high){
            if(nums[mid] == 0){
                swap(nums[mid], nums[low]);
                mid++;
                low++;
            }
            else if(nums[mid] == 1){
                mid++;
            }
            else if(nums[mid] == 2){
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }


int main(){
    
}