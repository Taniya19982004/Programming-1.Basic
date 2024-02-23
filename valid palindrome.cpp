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
        if(!((s[st]>='A'&&s[st]<='Z')||(s[st]>='a'&&s[st]<='z')))
        {
            st++;
            continue ;
        }
        if(!((s[e]>='A'&&s[e]<='Z')||(s[e]>='a'&&s[e]<='z')))
        {
            e--;
            continue;
        }
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
   int n = s.length(); 
    int r=Palindrome(s,n);
    return r;
}

int main()
{
    int ans;
    string S= "pcj;rt g;v gfrttq.pwf ..k ujrkupp  zppukr; jukfw;pqttrfgv  gt rjcp"; 
     ans=checkPalindrome(S);
     cout <<ans;

     return 0;


}
