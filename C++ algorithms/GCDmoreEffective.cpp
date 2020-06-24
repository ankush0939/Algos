#include<bits/stdc++.h>

using namespace std;

void Euclid (int x ,int y) {
    if (y == 0) {
        cout<<x;
    }
    else {
        Euclid(y,x%y);
    }
}

int main() {
    int a,b;
    cin>>a>>b;
    if (a>b) {
        Euclid(a,b);
    }
    else if (b>a) {
        Euclid(b,a);
    }
    else{
        cout<<a;
    }
}