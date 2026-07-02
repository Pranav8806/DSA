#include <bits/stdc++.h>
using namespace std;
void merge(vector<int>&arr,int mid,int start,int end){
    int i=start,j=mid+1;
    vector<int>temp;
    while(i<=mid && j<=end){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=end){
        temp.push_back(arr[j]);
        j++;
    }
    for(int indx=0;indx<temp.size();indx++){
        arr[indx+start]=temp[indx];
    }
}
void mergeSort(vector<int>&arr,int start,int end){
    if(start<end){
        int mid=start+(end-start)/2;
        mergeSort(arr,start,mid); //left half
        mergeSort(arr,mid+1,end);  //right half
        merge(arr,mid,start,end);
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
    mergeSort(arr,0,arr.size()-1);
    cout<<"\nSorted Array elements are :- "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
} 