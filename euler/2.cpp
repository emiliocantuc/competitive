#include <bits/stdc++.h>
using namespace std;
//https://projecteuler.net/problem=2
int main(){
        long long sum=2; //3 if not even
        long long b=1;
        long long a=2;
        long long temp;
        for(long long i=0;i<4000000-2;i++){
                temp=a;
                a=a+b;
                b=temp;
                if(a%2==0)
                        sum+=a;
                //cout<<a<<'\n';
        }
        cout<<sum;
}
