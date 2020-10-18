#include <bits/stdc++.h>
using namespace std;
//https://omegaup.com/arena/problem/cuentas/
bool arr[60004];
int main(){
        long long c,n;
        cin>>c>>n;
        for(int i=0;i<n;i++){
                bool a;
                cin>>a;
                arr[i]=a;
                arr[n+i]=a;
        }
        long long sum=!arr[0],loss=arr[0],best=n;
        int j=0;
        for(int i=0;i<2*n;i++){
                while(sum<c && j<(2*n)-1){
                        j++;
                        sum+=!arr[j];
                        loss+=arr[j];
                }
                if(sum==c)best=min(best,loss);
                sum-=!arr[i];
                loss-=arr[i];
        }
        cout<<best;
        return 0;
}
