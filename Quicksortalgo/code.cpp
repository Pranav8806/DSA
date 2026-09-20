#include <bits/stdc++.h>
using namespace std;

int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[low];
    int p = low;
    for (int q = low + 1; q <= high; q++) {
        if (arr[q] <= pivot) {
            p++;
            swap(arr[q], arr[p]);
        }
    }
    swap(arr[p], arr[low]);
    return p;
}

void quickSort(vector<int>& arr, int low, int high) {
    if (low == high) {
        return; 
    }
    else {
        int m = partition(arr, low, high);
        quickSort(arr, low, m - 1);
        quickSort(arr, m + 1, high);
    }
}

int main(){
    int n;
    cout<<"Enter number of elements ";
    cin>>n;

    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Array elements are :- "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    quicksort(arr,0,arr.size()-1);

    cout<<"\nSorted Array elements are :- "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}   