#include <iostream>
#include <vector>
using namespace std;
// Function will return a vector A
vector<int> activity_selection(vector<int>& a, vector<int>& s, vector<int>& f, int n) {
    vector<int> A(n + 1, 0);  // vector A of size n+1
    A[1] = a[1];

    int k = 1;
    int iter = 1;

    for (int i = 2; i <= n; i++) {
        if (s[i] >= f[k]) {
            // Appending vector A
            iter++;
            A[iter] = a[i];
            k = i;
        }
    }

    // Making the first element of vector A (index 0) equal to iter
    // Just to know the length of the vector when used in a different function.
    A[0] = iter;
    return A;
}

int main() {
    // Vectors starting from index 1. Elements at index 0 are fake
    vector<int> a = {0, 2, 3, 5, 1, 4};
    vector<int> s = {0, 0, 1, 3, 4, 1};
    vector<int> f = {0, 2, 3, 4, 6, 6};
    int n = 5;

    vector<int> p = activity_selection(a, s, f, n);

    // p[0] is the length up to which activities are stored
    cout<<"activities :";
    for (int i = 1; i <= p[0]; i++) {
        cout  << p[i]<<" " ;
    }

    return 0;
}
