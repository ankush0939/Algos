#include<bits/stdc++.h>

using namespace std;

void productMax (vector<long long> Temp) {
    int n=Temp.size();
    long long pro;
    sort(Temp.begin(), Temp.end());
    cout<<Temp[n-1]*Temp[n-2];
    
}

int main() {
    int n;
    cin>>n;
    vector<long long> numbers;
    for(int i = 0; i<n; i++) {
        int x;
        cin>>x;
        numbers.push_back(x);
    }
    productMax(numbers);
    return 0;
}