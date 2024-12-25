#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr1 = {0,1,3,4,5};
    vector<int> arr2 = {2,3,6,8,9};

    int n = arr1.size();
    int m = arr2.size();

    int i = 0, j = 0;
    while(i < n && j < m){
        if(arr1[i] > arr2[j]){
            int temp = j;
            while(arr2[j] < arr1[i]) j++;
            swap(arr2[j-1], arr1[i]);
            j = temp;
        }
        else i++;
    }

    for(auto it : arr1) cout << it << " ";
    for(auto it : arr2) cout << it << " ";

}