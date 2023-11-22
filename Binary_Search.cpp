
#include<iostream>
using namespace std;
int BinarySearch(int arr[],int n,int key){
    int s=0;
    int e=n;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==key){
            return mid;}
        else if(arr[mid]>key)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
    }return -1;
}
int main(){
int n=10;
int arr[10]={1,2,3,4,5,6,7,8,9,10};
int key;
cin>>key;
cout<<BinarySearch(arr,n,key)<<endl;
}
