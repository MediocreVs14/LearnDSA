#include<iostream>
#include<string>
using namespace std;

void pattern1(int n){
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cout << "* ";
        }
        cout << "\n";
    }
}

void pattern2(int n){
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j <=  i ; j++){
            cout << "* ";
        }
        cout << "\n";
    }
}

void pattern3(int n){
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <=  i ; j++){
            cout << j;
        }
        cout << "\n";
    }
}

void pattern4(int n){
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <=  i ; j++){
            cout << i;
        }
        cout << "\n";
    }
}

void pattern5(int n){
    for(int i = n ; i >=1  ; i--){
        for(int j = 1 ; j <=  i ; j++){
            cout << "* ";
        }
        cout << "\n";
    }
}

void pattern6(int n){
    for(int i = n ; i >=1  ; i--){
        for(int j = 1 ; j <=  i ; j++){
            cout << j;
        }
        cout << "\n";
    }
}

void pattern7(int n)
{
    for(int i = 1 ; i <= n ; i++){   // i = 1 2 3 4 5
        //Spaces
        for (int j = 1 ; j <=  n - i ; j++) cout<< " ";  
        
        //Stars
        for (int j = 1 ; j <= 2*i - 1 ; j++) cout<< "*";
        
        //Spacess
        for (int j = 1 ; j <=  n - i ; j++) cout<< " ";

        cout<< "\n";
    }
}

void pattern8(int n){
    for(int i = n ; i >= 1 ; i--){
        for (int j = n - i ; j > 0 ; j--) cout << " ";
        
        for (int j = 1 ; j <= 2 * i - 1 ; j++) cout<< "*"; 
        
        for (int j = n - i ; j > 0 ; j--) cout << " ";

        cout<< endl;
    }
}

void pattern9(int n){
    for(int i = 1 ; i <= n ; i++){   // i = 1 2 3 4 5
        //Spaces
        for (int j = 1 ; j <=  n - i ; j++) cout<< " ";  
        
        //Stars
        for (int j = 1 ; j <= 2*i - 1 ; j++) cout<< "*";
        
        //Spacess
        for (int j = 1 ; j <=  n - i ; j++) cout<< " ";

        cout<< "\n";
    }

    for(int i = n ; i >= 1 ; i--){
        for (int j = n - i ; j > 0 ; j--) cout << " ";
        
        for (int j = 1 ; j <= 2 * i - 1 ; j++) cout<< "*"; 
        
        for (int j = n - i ; j > 0 ; j--) cout << " ";

        cout<< endl;
    }
}

void pattern10(int n){
    for(int i = 1 ; i <= 2*n - 1 ; i++){
        int stars = i;
        if (i > n) stars = 2 * n - i;
        for(int j = 1 ; j <= stars ; j++) cout<< "*";

        cout<< endl;
    }
}

void pattern11(int n){
    int c;
    for(int i = 1 ; i <= n ; i++){
        c = i;
        for ( int j = 1 ; j <= i ; j++){
            if(c % 2 == 0) cout<< 0 << " ";
            else cout << 1 << " ";
            c++;
        }
        cout<< endl;
    }
}

void pattern12(int n){

    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= i ; j++) cout<< j;
        for(int j = 1 ; j <= 2 * (n - i) ; j++) cout<< " ";
        for(int j = i ; j >= 1 ; j--) cout<< j;

        cout<< endl;
    }
}

void pattern13(int n){
    int c = 1;
    for(int i = 1; i<= n ; i++){
        for(int j = 1 ; j <=i ; j++){
            cout<< c <<" ";
            c++;
        }
        cout<< endl;
    }
}

void pattern14(int n){
    for(int i = 1; i<=n ; i++){
        int a = 65;
        char c;
        for(int j = 1 ; j <= i ; j++){
            c = a;
            cout<< c;
            a = a+1;
        }
        cout<< endl;
    }
}

void pattern15(int n){
    for(int i = n ; i >= 1 ; i--){
        int a = 65;
        char c;
        for (int j = i ; j >= 1 ; j--){
            c = a;
            cout<< c;
            a = a + 1;
        }
        cout<< endl;

    }
}

void pattern16(int n){
    int a = 65;
    for (int i = 1 ; i <= n ; i++){
        char c;
        for (int j = 1 ; j <= i ; j++){
            c = a;
            cout<< c;
            
        }
        a++;
        cout<< endl;
    }
}

void pattern17(int n){
    for(int i = 1 ; i <= n ; i++){
        int k = 65;
        char c;

        for(int j = 1; j <= n - i ; j++) cout <<" ";

        for(int j = 1; j <= 2*i - 1 ; j++){
            int start = 
        }

        for(int j = 1; j <= n - i ; j++) cout <<" ";
    }
}

int main(){

    pattern16(5);

    return 0;
}
