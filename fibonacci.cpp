#include<bits/stdc++.h>
using namespace std;

void fibo(int n){
    int fib[n];
    if(n==0)
    cout<<0;
    else if(n==1)
    cout<<1;
    else{
    fib[0]=0;
    fib[1]=1;
    for(int i=2;i<=n;i++){
        fib[i]=fib[i-1]+fib[i-2];
    }
    }
    for(int i=0;i<=n;i++)
    cout<<fib[i]<<endl;
}

int main(){
int n;
cin>>n;
fibo(n);
}