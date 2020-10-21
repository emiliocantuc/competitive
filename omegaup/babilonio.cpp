#include <bits/stdc++.h>
using namespace std;
//https://omegaup.com/arena/problem/camino-subterraneo-shamash/
string to_babilonio(int q){
        string out="";
        while(q>=10){
                out+='L';
                q-=10;
        }
        for(int i=0;i<q;i++)
                out+='I';
        return out;
}
int main(){
        long p,q;
        cin>>p;
        string out="";
        for(q=0;(p/pow(60,q))>60;q++);
        for(long i=q;i>=0;i--){
                //cout<<p<<"/"<<pow(60,i)<<"="<<floor(p/pow(60,i))<<endl;
                out=to_babilonio(floor(p/pow(60,i)))+"."+out;
                p=p%(int)(pow(60,i));
        }
        //cout<<q;
        cout<<out.substr(0,out.length()-1);
}
