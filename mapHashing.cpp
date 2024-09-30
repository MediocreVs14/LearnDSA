#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map <char, int> mp;

    string s = "aabcbefgsafejadekdzzzwhja";

    for(int i = 0 ; i < s.length() ; i++){
        mp[s[i]] ++;
    }

    for(auto it : mp){
        cout << it.first << " -> " << it.second << endl;
    }

}