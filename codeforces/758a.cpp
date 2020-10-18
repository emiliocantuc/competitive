#include <bits/stdc++.h>
using namespace std;
//https://codeforces.com/contest/758/problem/A
int my_max(int a[],int n){
    int best=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>best){
            best=a[i];
        }
    }
    return best;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){cin>>a[i];}
    int m=my_max(a,n);
    int count=0;
    for(int i=0;i<n;i++){
        count=count+(m-a[i]);
    }
    cout<<count;
    return 0;
}
