#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int na=1;
    for(int i=n;i>1;i--)
    {
        na=na*i;

    }
    

    int r;
    int rad=1;
    cout<<"Enter the value of r"<<endl;
    cin>>r;
    for(int i=r;i>1;i--)
    {
         rad=rad*i;

    }
    

    int c=n-r;
    int cat=1;
    for(int i=c;i>1;i--)
    {
       int cat = cat*i;
      
    }
    int den = cat*rad;
   

    int fact=na/den;
    cout<<"the factorial is "<<fact;

    

   

return 0;
}