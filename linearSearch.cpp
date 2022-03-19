#include<iostream>
using namespace std;
int linearSearch(int arr[],int n,int kye)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==kye){
            return i;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int kye;
    cin>>kye;
    cout<<linearSearch(arr,n,kye)<<endl;

    return 0;
}
