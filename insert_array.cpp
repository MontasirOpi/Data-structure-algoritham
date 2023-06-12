#include <iostream>
using namespace std;
int main() {
    int a[10]={10,20,30,40};
    int index, num, i;
    cin>>index>>num;
    for(i=3;i>=index;i--){
        a[i+1]=a[i];
    }
    a[index]=num;
    for(i=0;i<5;i=i+1){
        cout<<a[i]<<" ";
    }
    return 0;
}
