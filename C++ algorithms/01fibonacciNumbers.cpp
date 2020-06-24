#include<bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    vector<long long> arr;
    cin>>n;
    arr.push_back(0);
    arr.push_back(1);
    for ( long long i = 2; i < n+1; i++) {
        arr.push_back(arr[i-1] + arr[i-2]);
    }
    if (n==0) {
        cout<<"0";
    }
    else {
    cout<<arr[arr.size()-1]; }
    return 0;
}