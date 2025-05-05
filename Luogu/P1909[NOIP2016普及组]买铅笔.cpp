//
// Created by aQuat on 2025/3/16.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a1,a2,b1,b2,c1,c2,da,db,dc,ans;
    /*需要铅笔数(n)，最少要花的钱(ans)
    a~c包装单包铅笔数(a1,b1,c1)，a~c包装单价    (a2,b2,c2)
    每个包装的总价(da,db,dc)*/
    cin>>n>>a1>>a2>>b1>>b2>>c1>>c2;
    //a包装
    if(n%a1!=0) da=(n/a1+1)*a2;
    else da=(n/a1)*a2;
    //b包装
    if(n%b1!=0) db=(n/b1+1)*b2;
    else db=(n/b1)*b2;
    //c包装
    if(n%c1!=0) dc=(n/c1+1)*c2;
    else dc=(n/c1)*c2;
    //比较
    if(da<db) ans=da;
    else ans=db;
    if(dc<ans) ans=dc;
    cout<<ans;
    return 0;
}