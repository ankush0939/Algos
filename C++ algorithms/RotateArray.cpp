#include<bits\stdc++.h>
using namespace std;
//Shortest program for GCD
int gcd (int a, int b)
{
    if (b==0)
    return a;
    else
    {
      return gcd(b, a%b);
    }

}
void rotate (int arr[],int d,int n)
{
    int hcf = gcd (d,n);
    for(int i=0 ;i<hcf; i++)
    {
        int x = arr[i];
        int h = i;
        while(1)
        {
            int j = h+d;
            if(j>=n)
            j=j-n;

            if(j==i)
            break;

            arr[h]=arr[j];
            h=j;
        }
    arr[h]=x;
    }
}

int printArr(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
 return 0;
}
int main()
{
    int n,d;
    cin>>n>>d;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    rotate(arr,d,n);
    printArr(arr,n);

    return 0;
}
