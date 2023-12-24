#include<bits/stdc++.h>
using namespace std;

int main(){
    int i=0,n;
    int ans=0;
    cout<<"enter a binary number ";
    cin>>n;
    while(n!=0)
    {
        int digit=n%10;
        if(digit==1)
        {
            ans=ans+pow(2,i);

        }
        else if (digit!=0 && digit!=1)
        {
            cout<<"Error! Input the number of assigned bits."<<endl;
            break;
        }
        n=n/10;
        i++;
    }
    cout<<"decimal number is "<<ans;

return 0;
}