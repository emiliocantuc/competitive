#include <bits/stdc++.h>
using namespace std;
//https://omegaup.com/arena/problem/Numeros-Libres/
int main(){
        long long n;
        cin>>n;
        for(long long i=0;i<n;i++){
                long long a,b;
                cin>>a>>b;
                if(__gcd(a,b)>1){
                        cout<<"NO"<<endl;
                }else{
                        cout<<"SI"<<endl;
                }
        }
        return 0;
}
