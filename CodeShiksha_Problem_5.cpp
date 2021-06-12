#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum += arr[i];
    }
    int avg = sum / n;
    cout << avg << endl;

    int mx = INT_MIN;
    for(int i=0;i<n;i++){
        mx = max(mx,arr[i]);
    }
    cout<<mx;
    
    return 0;
}