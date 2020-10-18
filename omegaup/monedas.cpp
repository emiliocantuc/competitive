#include <bits/stdc++.h>
using namespace std;
//https://omegaup.com/arena/problem/Monedas/
long long n;
long long arr[200002];
int main(){
        cin>>n;
        for(int  i=0;i<n;i++){
                long long in;
                cin>>in;
                arr[i]=in;
        }
        sort(arr,arr+n);
        long long sum=arr[0];
        for(int i=1;i<n;i++){
                if(sum<arr[i] && arr[i]-arr[i-1]>1 && sum+1<arr[i]){
                        cout<<sum+1;
                        return 0;
                }
                sum+=arr[i];
        }
        cout<<sum+1;
        return 0;
}
