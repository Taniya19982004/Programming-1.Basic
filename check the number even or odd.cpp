#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    int ans=n&1;
    cout<<ans;

    /*if(n&1)
    {
        cout<<" odd number";
    }
    else
    {
        cout<<"even number";
    }
*/
return 0;
}