#include <bits/stdc++.h>
using namespace std;

void printNTimes(string str, int n)
{
    if (n > 0)
    {
        cout << str << endl;
        n--;
        printNTimes(str, n);
    }
    return;
}

void printRevN(int n)
{
    if (n > 0)
    {
        cout << n << " ";
        printRevN(n - 1);
    }
    return;
}

void printRevN2(int n, int i)
{
    if (i <= n)
    {
        printRevN2(n, i + 1);
        cout << i << " ";
    }
    return;
}

void printSum(int n, int sum)
{ // Using parameters
    if (n < 1)
    {
        cout << sum;
        return;
    }

    printSum(n - 1, sum + n);
    return;
}

int printSum2(int n)
{
    if (n == 0)
        return 0;
    return n + printSum2(n - 1);
}

int factorial(int n)
{
    if (n == 1)
        return 1;
    return n * factorial(n - 1);
}

// Parameterised factorial
void fact(int n, int i)
{
    if (n < 1)
    {
        cout << i;
        return;
    }
    i = i * n;
    fact(n - 1, i);
}

// Reversing an array recursively, using two variables l and r
void revArray(vector<int> &vec, int l, int r)
{
    if (l >= r)
        return;

    swap(vec[l], vec[r]);
    revArray(vec, l + 1, r - 1);
}


// Using only single variable i.e. 'i' 
void revArray2(vector<int> &vec, int i){
    if (i >= (vec.size()/2)) return;

    swap(vec[i], vec[vec.size() - i - 1]);
    revArray2(vec , i+1);
}


//Checking a string is palindrome or not
bool isPalindrome(string str, int i){
    if (str[i] != str[str.size() - i - 1]) return 0;
    if( i >= (str.size()/2)) return 1;
    return isPalindrome(str, i+1);
    
}

int main()
{
    // cout << (char)('Z' + 32);
    cout<< ::islower('a');
}