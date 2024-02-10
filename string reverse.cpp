#include<iostream>;
using namespace std;

int main(){
string s="hello";
int st = 0;
int e = s.length()-1;
while(st<e)
{
    swap(s[st],s[e]);
    st++;
    e--;
}
cout<<s;


return 0;
}