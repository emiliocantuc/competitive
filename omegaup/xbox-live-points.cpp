#include <bits/stdc++.h>
using namespace std;
//https://omegaup.com/arena/problem/Xbox-Live-Points/
int arr[1000002];
int main(){
        long long n;
        cin>>n;
        for(int i=0;i<n;i++){
                cin>>arr[i];
        }
        int i=0,j=0;
        long long m=arr[0],sum=arr[0];
        while(j<n){
                //cout<<"j:"<<j<<",m:"<<m<<",sum:"<<sum<<endl;
                while(sum+arr[j+1]>=0 && j<n){
                        //cout<<"j:"<<j<<",sum:"<<sum<<endl;
                        j++;
                        sum+=arr[j];
                        m=max(m,sum);
                }
                j++;
                //i=j;
                sum=0;
        }
        cout<<m;
        return 0;

}
