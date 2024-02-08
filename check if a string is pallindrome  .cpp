
#include<bits/stdc++.h>
using namespace std;

char lower_case(char ch)
{
    if(ch>='A'&&ch<='Z')
    {
        char temp = ch-'A'+'a';
        return temp;

    }
    else
    {
         return ch;
    }
} 

int Palindrome(string s,int n)
{
    int st=0;
    int e=n-1;
    while(st<=e)
    {
        if(lower_case(s[st])==lower_case(s[e]))
        {
            st++;
            e--;
        }
        else{
            return 0;
        }
    }
    return 1;
}
bool checkPalindrome(string s)
{
    // Write your code here.
   int n = s.length(); 
    int r=Palindrome(s,n);
    return r;
}

int main()
{
    int ans;
    string S;
    cout<<"Enter a string";
    cin>>S;

     ans=checkPalindrome(S);
     cout <<ans;

     return 0;


}
