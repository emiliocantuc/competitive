#include <bits/stdc++.h>
using namespace std;
//https://omegaup.com/arena/problem/herdsums/
int main(){
        unsigned long long n;
        cin>>n;
        long long ans=0,cnt=1,j=0;
        for(int i=1;i<=n;i++){
                while(cnt<n){
                        j++;
                        cnt+=j+1;
                }
                if(cnt==n){ans++;}
                cnt-=i;
        }
        cout<<ans;

        return 0;
}
