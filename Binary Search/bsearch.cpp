#include<bits/stdc++.h>
using namespace std;

int bsearch(vector<int> &arr, int target){
    int low = 0, high = arr.size()-1;

    while(low <= high){
        int mid = (low + high)/2;
        
        if(arr[mid] == target) return mid; 
        else if(arr[mid] < target) high = mid-1;
        else low = mid + 1;
    }
    return -1;
}

int lower_bound(vector<int> &arr, int target){
    int low = 0, high = arr.size()-1, ans = -1;

    while(low <= high){
        int mid = (low + high)/2;

        if(arr[mid] >= target){
            ans = mid;
            high = mid - 1;
        }
        else low = mid + 1;
    }
    
    return ans;
}

//* largest value >= target
void floor_val(vector<int> &arr, int target){
    int left = 0, right = arr.size()-1;
    int ans = -1;

    while(left <= right){
        int mid = (left + right)/2;

        if(arr[mid] > target) right = mid - 1;
        else{
            ans = mid;
            left = mid + 1;
        }
    }
    if(ans == -1) cout << "DOES NOT EXIST";
    else cout << arr[ans];
}

int main(){
    vector<int> arr = {10,20,30,40,50};
    floor_val(arr, 11);

}