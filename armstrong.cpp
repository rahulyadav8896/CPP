#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    string str= to_string(num);
    int count=str.size();
    int arm=0,temp;
    int copy=num;
    while(copy!=0){
    temp=copy%10;
    arm=arm+pow(temp,count);
    copy=copy/10;
    }
    if(num==arm)
    cout<<"armstrong";
    else
    cout<<"chutiya banaya armstong k naam pe";
}