#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++ ) {
        cin>>arr[i];
    }
    for (int i =0; i < n-1; i++) {
        int lb=i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[lb]) {
                lb = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[lb];
        arr[lb] = temp;
    }
    for (int i = 0; i < n; i++ ) {
        cout<<arr[i]<<" ";
    }
}