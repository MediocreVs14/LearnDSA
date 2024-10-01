#include<bits/stdc++.h>
using namespace std;

vector <int> selectionSort(vector <int> &arr){
    int len = arr.size();
    int temp, min;
    for(int i = 0 ; i < len-1 ; i++){
        min = i;
        for(int j = i+1 ; j < len ; j++){
            if(arr[min] > arr[j]){
                min = j;
            }
        }
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
    return arr;
}

// optimised bubble sort
vector <int> bubbleSort(vector <int> &arr){
    int temp , len = arr.size(), flag;
    for(int i = 0 ; i < len ; i++){
        flag = 0;
        for(int j = 0 ; j < len-i ; j++){
            if(arr[j] > arr[j+1]){
                flag = 1;
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
            
        }
        if (flag == 0) break;
    }
    return arr;
}


void insertionSort(vector <int> &arr){
    int temp;
    for(int i = 0 ; i < arr.size() ; i++){
        int j = i;
        while (j > 0 && arr[j-1] > arr[j]){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;

            j--;
        }

    }
}

//Merge sort
void merge(vector <int> &arr, int low, int mid, int high){
    vector <int> temp;
    int left = low;
    int right = mid + 1;

    while(left <= mid && right <= high){
        if(arr[left] < arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while(left <= mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right <= high){
        temp.push_back(arr[right]);
        right++;
    }

    for(int i = low ; i <= high ; i++){
        arr[i] = temp[i - low];
    }
    
}

void merge_sort(vector <int> &arr, int low , int high){
    if(low >= high) return ;
    int mid = (low + high)/2;

    merge_sort(arr, low , mid);
    merge_sort(arr, mid+1, high);

    merge(arr, low, mid, high);

}


// *********** Quick sort begins ************ //
int partition(vector <int> &arr, int low, int high){
    int i = low;
    int j = high;
    int pivot = arr[low];

    while(i < j){
        while(arr[i] <= pivot &&  i <= high - 1) i++;
        while(arr[j] > pivot && j >= low + 1) j--;

        // Swapping the elements to make ( smaller ) pivot ( larger )
        if(i < j)
            swap(arr[i], arr[j]);
    }

    // Placing pivot to its right place
    swap(arr[low], arr[j]);
    return j;
}

void quick_sort(vector <int> &arr, int low, int high){
    if(low < high){
        int pindex = partition(arr, low, high);
        quick_sort(arr, low, pindex - 1);
        quick_sort(arr, pindex + 1 , high);
    }
}



int main(){
    vector <int> arr =  {23, 42, 12, 9, 4, 26, 51, 17};

    quick_sort(arr, 0, 7);
    for(auto it : arr){
        cout << it << " "; 
    }

}