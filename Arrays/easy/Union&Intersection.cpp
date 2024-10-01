#include <bits/stdc++.h>
using namespace std;

vector<int> findUnion(vector <int> arr1, vector <int> arr2)
    {
        int i = 0 ,  j = 0;
        int n = arr1.size(), m = arr2.size();
        vector <int> vec ; 
        map <int, int> mp;
        
        while(i < n && j < m){
            
            if(arr1[i] < arr2[j]){
                
                if(mp[arr1[i]] < 1){
                    vec.push_back(arr1[i]);
                    mp[arr1[i]]++;
                }
                i++;
            }
            else if(arr1[i] > arr2[j]){
                
                if(mp[arr2[j]] < 1){
                    vec.push_back(arr2[j]);
                    mp[arr2[j]]++;
                }
                j++;
            }
            else if (arr1[i] == arr2[j]){
                if(mp[arr1[i]] < 1){
                    vec.push_back(arr1[i]);
                    mp[arr1[i]]++;
                }
                i++;
                j++;
                
            }
        }
        while(i < n){
            if(mp[arr1[i]] < 1){
                mp[arr1[i]]++;
                vec.push_back(arr1[i]);
            }
            i++;
        }
        while(j < m){
            if(mp[arr2[j]] < 1){
                mp[arr2[j]]++;
                vec.push_back(arr2[j]);
            }
            j++;
        }
        
        return vec;
    }

vector<int> findIntersection(vector <int> arr1, vector <int> arr2){
    int n = arr1.size(), m = arr2.size(), i = 0 , j = 0;
    map <int, int> mp;
    vector <int> vec;

    while(i < n && j < m){
        if(arr1[i] < arr2[j]) i++;
        if(arr1[i] > arr2[j]) j++;

        if(arr1[i] == arr2[j]){
            if(mp[arr1[i]] < 1){
                mp[arr1[i]]++;
                vec.push_back(arr1[i]);
            } 
            i++;
            j++;
        }
    }
    return vec;
}


int main(){
    vector<int> arr1 = {1, 2, 2, 3, 3, 4, 5, 6}; 
    vector<int> arr2 = {1, 2, 3, 3, 5, 6, 6 }; 

    vector <int> ans = findIntersection(arr1, arr2);

    for(auto it : ans){
        cout << it << " ";
    }

}