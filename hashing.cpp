#include<bits/stdc++.h>
using namespace std;

int main(){

    /* *****************Number hashing ****************/
    // vector <int> hash(12,0);

    // int arr[] = {1, 3, 2, 1, 3, 4, 1, 1, 3};

    // for(int i = 0 ; i < 9 ; i++){
    //     hash[arr[i]]++;
    // }

    // for(int i = 0 ; i< 12 ; i++){
    //     cout << i << " : " << hash[i];
    //     cout<< endl;
    // }

    vector<int> hash(26, 0);
    
    string str = "aabcbefgsafejadekdzzzwhja";

    for(int i = 0 ; i < str.size() ; i++){
        hash[str[i] - 'a']++;
    }
    for(int i = 0 ; i<= hash.size()-1 ; i++){
        cout<< i << " " << hash[i]<<endl;
    }
}