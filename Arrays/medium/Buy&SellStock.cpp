#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
    int maxprofit =  0, purchase  = prices[0];
    int diff;

    for(int i = 0 ; i < prices.size() ; i++){
        if(prices[i] < purchase) purchase = prices[i];

        diff = prices[i] - purchase; 
        
        maxprofit = max(maxprofit, diff);
            
    }

    return maxprofit;
}

int main(){
    
}