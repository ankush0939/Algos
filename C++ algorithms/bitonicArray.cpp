//Given an array Arr of N elements which is first increasing and then may be decreasing, find the maximum element in the array.


#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends


//User function template for C++
class Solution{
public:
	
	int findMaximum(int arr[], int n) {
	    // code here
	    sort(arr,arr+n);
	    int a = arr[n-1];
	    return a;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaximum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends




// Input: 
// N = 9
// Arr[] = {1,15,25,45,42,21,17,12,11}


//Output: 45