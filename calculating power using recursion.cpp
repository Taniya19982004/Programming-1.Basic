#include<iostream>
using namespace std;
int powe(int a ,int b)
{
    if(b==1)
    {
        return a;
    }
    int ans = powe(a,b/2);
    if(b%2==0)
    return ans*ans;
    else
    return a*ans*ans;
}
int main(){
int ans=powe(3,4);
cout<<ans<<"\n";
return 0;
}