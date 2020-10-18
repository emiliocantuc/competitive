#include <bits/stdc++.h>
using namespace std;
//https://omegaup.com/arena/problem/OMI2015LENGUAJE1/
long arr[50002];
int main(){
        long long n,k;
        cin>>n>>k;
        for(int i=0;i<n;i++)cin>>arr[i];
        int j=k-1;
        long long cnt=0;
        for(int i=1;i<k;i++)cnt+=(arr[i]-arr[i-1]);
        long long m=cnt;
        for(int i=0;i<n-k;i++){
                cnt-=(arr[i+1]-arr[i]);
                cnt+=(arr[j+1]-arr[j]);
                m=max(m,cnt);
                j++;
        }
        cout<<m;


        return 0;
}
