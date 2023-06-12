#include <iostream>
using namespace std;
int main() {
    int a[10]={10,20,30,40};
    int index, i;
    cin>>index;
    for(i=index;i<4;i++){
        a[i]=a[i+1];
    }
    for(i=0;i<3;i=i+1){
        cout<<a[i];
    }
    return 0;
}
