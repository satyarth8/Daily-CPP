#include<bits/stdc++.h>
// code snippet i uploaded on gfg
using namespace std;
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        sort(arr,arr+r+1);
        return arr[k-1];
    }
    int main()
    {
        int arr[6]={7,10,4,3,20,15};
        int k;
        cin>>k;
        cout<<k<<"th smallest value is "<<kthSmallest(arr,0,6-1,k);
        return 0;
    }