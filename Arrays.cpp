#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10005], n;

    cin>>n;
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=n-1;i>=0;i--) cout<<arr[i]<<" ";
    cout<<endl;

    return 0;
}
