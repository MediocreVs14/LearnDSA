#include <bits/stdc++.h>

using namespace std;

void printDivisors(int n){
    
    vector <int> vec ;

    for (int i = 1 ; i <= sqrt(n) ; i++){
        if ( n % i == 0){
            vec.push_back(i);
            if( (n/i) != i) {
                vec.push_back((n/i));
            }
        }
    }

    sort(vec.begin(), vec.end());

    for(auto it : vec){
        cout<< it <<" ";
    }
}

bool checkPrime(int n){
    int flag = 1;

    for(int i = 2 ; i <= sqrt(n) ; i++){
        if (n % i == 0){
            flag = 0;
            return 0;
        }
    }
    if (flag == 1) return 1;

    return 0;
}

void findGCD(int n1, int n2){       // Brute force approach
    for(int i = min(n1,n2) ; i >= 1 ; i--){
        if ((n1 % i == 0) && (n2 % i == 0)){
            cout<< "GCD : "<< i ;
            break;
        }
     }
    

}

 // USing Eucleadian Algorithm  using Recursion
 // Time complexity : O(log(min(n,m)))
void findGCD1(int n1, int n2){         
    if (n1 == 0) cout<< "GCD : " << n2;
    if (n2 == 0) cout<< "GCD : " << n1;
    if (n1 == n2) cout << "GCD : " << n1;

    if (n1 > n2) findGCD1(n1 % n2, n2);
    if (n1 < n2) findGCD1(n1 , n2 % n1);
}

int main(){
    
}