#include<bits/stdc++.h>
using namespace std;

int large2(vector <int> &vec){
    int max = INT_MIN , ans;

    for(int i = 0 ; i < vec.size() ; i++){
        if(vec[i] > max) {
            ans = max;
            max = vec[i];
        }
        if(vec[i] > ans && vec[i] < max){
            ans = vec[i];
        }
    }

    return ans;
}

int main(){
    vector <int> vec = {1, 2, 35, 34, 23, 3, 45};
    cout << large2(vec);
}