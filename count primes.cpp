#include<iostream>
using namespace std;

bool is_prime(int n)
{
       for(int i=2;i<n;i++)
        {
            if(n%i==0)
            {
                return false ;
            }
           
        }
    return true;
}

int countPrimes(int n)
{
    int count=0;
    for(int i=2;i<n;i++){
        {
            if(is_prime(i))
            {
                count++ ;
            }
           
        }
}
return count ;
}
int main(){
    int n;
cout<<"Enter a number ";
cin>>n;
int r=countPrimes(n);
cout<<r;
return 0;
}