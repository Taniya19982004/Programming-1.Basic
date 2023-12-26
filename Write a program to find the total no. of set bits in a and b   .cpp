
#include<bits/stdc++.h>
using namespace std;

int bit(int n)
{
   int  count=0;
    while(n!=0)
    {
        int bit=n&1;
        if(bit==1)
        {
            count++;
        }
        n=n>>1;

    }
    return count;

}

int setBits(int a,int b)
{
   int  ans=bit(a)+bit(b);
   return ans;

}

int main(){
    int a,b;
    cout<<"Enter the value of a and b "<<endl;
    cin>>a>>b;
    int ans=setBits(a,b);
    cout<<"Total setbits of a and b is "<<ans<<endl;

return 0;
}