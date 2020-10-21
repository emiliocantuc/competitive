#include <bits/stdc++.h>
using namespace std;
//https://projecteuler.net/problem=1
int main(){
        int sum=0;
        for(int i=1;i<1000;i++){
                if(i%3==0 || i%5==0)
                        sum+=i;
        }
        cout<<sum;
}
