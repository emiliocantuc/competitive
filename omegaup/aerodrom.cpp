#include <bits/stdc++.h>
using namespace std;
//https://omegaup.com/arena/problem/AERODROM/
long arr[100002];
long n,m;
int valid(long t){
        long remaining=m;
        int i=0;
        while(remaining>0 && i<=t && i<n){
                if((t/arr[i])>remaining)return -1;
                remaining-=(t/arr[i]);
                i++;
        }
        return (remaining<=0)?-1:1;
}
int main(){
        cin>>n>>m;
        long menor=10000000000,mayor=-1;
        for(int i=0;i<n;i++){
                cin>>arr[i];
                menor=min(menor,arr[i]);
                mayor=max(mayor,arr[i]);
        }
        long l=menor,r=menor*m;
        while(l<=r){
                long mid=(l+r)/2;
                if(valid(mid)>0){
                        l=mid+1;
                }else{
                        r=mid-1;
                }
        }
        cout<<l;
        return 0;

}
