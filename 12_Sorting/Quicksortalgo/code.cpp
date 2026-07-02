#include <bits/stdc++.h>
using namespace std; 
int partition(vector<int>&arr,int st,int ed){
    int indx=st-1,pivot=arr[ed];
    for(int j=st;j<ed;j++){
        if(arr[j]<=pivot){
            indx++;
            swap(arr[j],arr[indx]);
        }
    }
    indx++;
    swap(arr[ed],arr[indx]); 
    return indx;
}
void quicksort(vector<int>&arr,int st,int ed){
    if(st<ed){
        int pivindx=partition(arr, st, ed);
        quicksort(arr,st,pivindx-1);
        quicksort(arr,pivindx+1,ed);
    }
}
int main(){
        int n;
        cout<<"Enter number of elements ";
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<"Array elements are :- "<<endl;
        for(int i=0;i<n;i++){
            cout<<arr[i] <<" ";
        }
        quicksort(arr,0,arr.size()-1);
        cout<<"\nSorted Array elements are :- "<<endl;
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
}