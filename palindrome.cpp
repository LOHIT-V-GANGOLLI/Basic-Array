#include<iostream>
using namespace std;
int main()
{
    string s="rada";
    //using 2 pointer approach
    int i=0;
     int j=s.size()-1;
     cout<<j<<endl;
     int flag=0;
    while(i<=j)
    {

        if(s[i]==s[j])
        {
            i++;
            j--;
        }
        else
        {
        flag=1;
        break;
        }
    }
    if(flag==0)
    {
        cout<<"palindrome"<<endl;
    }
    else
    {
        cout<<"not a palindrome"<<endl;
    }

}
