#include<iostream>
using namespace std;

bool sorted(int arr[],int size)
{
    if(size==0||size==1)
    {
        return true;
    }
    if(arr[0]>arr[1])
    {
        return false;
    }
    else{
        //bool remaining_part=
        sorted(arr+1,size-1);
       // return remaining_part;
    }
}
int main(){
int arr[5]={4,6,7,0,10};
bool ans=sorted(arr,5);
cout<<ans;
return 0;
}