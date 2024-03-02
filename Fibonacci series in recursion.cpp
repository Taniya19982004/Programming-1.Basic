#include<iostream>
using namespace std;
class N 
{
public:
int  fb(int n)
{
   
    if(n==0)
    {
        return 0;
    }
     if(n==1)
    {
        return 1;
    }

    return fb(n-1)+fb(n-2);
}
};

int main(){
    N obj;
 cout<< obj.fb(4)<<" ";

return 0;
}