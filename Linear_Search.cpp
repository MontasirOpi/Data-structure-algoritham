
#include <iostream>
using namespace std;
int linier (int arr[],int s,int key){
    for (int i=0;i<s;i++){
        if(arr[i]==key)
        {
            cout<<"element found"<<endl;
            return i;
        }
    }
    return -1;
}
int main(){
    int s=5;
    int arr[] = {2, 3, 4, 5, 6}; 
    int key=3;
    cout<<linier(arr,s,key);
}