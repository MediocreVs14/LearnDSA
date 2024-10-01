#include<bits/stdc++.h>
using namespace std;

void leftRotateByOne(vector <int> &vec){
    int temp = vec[0];
    int len = vec.size();
    for(int i = 1 ; i < len ; i++){
        vec[i-1] = vec[i];
    }
    vec[len - 1] = temp;
}

void leftRotateK(vector <int> &nums, int k){
    int len = nums.size();
    vector <int> temp(k);

    for(int i = 0  ; i < k ; i++) temp[i] = nums[i];   

    for(int i = k ; i < len ; i++){
        nums[i - k] = nums[i];
    }

    int j = 0;
    for(int i = len - k ; i < len ; i++){
        nums[i] = temp[j];
        j++;
    }
}

// More optimised by reversing
void reverse(vector <int> &nums, int start, int end){
    for(int i = start , j = end ; i < j ; i++, j--){
        swap(nums[i], nums[j]);
    }
}

void leftRotateOp(vector <int> &nums , int k){
    int len = nums.size();

    reverse(nums, 0, k-1);
    reverse(nums, k , len - 1);
    reverse(nums, 0 , len - 1);
}

int main(){
    vector <int> vec = {1, 2, 3, 4, 5, 6, 7};
    leftRotateK(vec, 3);

    for(auto it : vec){
        cout << it << " ";
    }
    
}