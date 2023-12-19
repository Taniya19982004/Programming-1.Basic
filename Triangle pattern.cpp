#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows"<<endl;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int count=i;
        int j=1;
        while(j<=i)
        {
            cout<<count;
            j++;
           count--;
        }
         

        cout<<endl;
        i++;
    }


return 0;
}