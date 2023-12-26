#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
int fact=1;
    for(int i=n;i>1;i--)
    {
        fact=fact*i;
    }
    return fact;
}


int nCr(int n,int r)
{
   int num=factorial(n);
   int den=factorial(r)*factorial(n-r);
   return num/den;

}
int main(){
    int n,r;
    cout<<"Enter the value of n and r "<<endl;
    cin>>n>>r;
    int ans=nCr(n,r);
    cout<<"the answer of nCr"<<ans;

}
