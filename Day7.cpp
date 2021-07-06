#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t,i,j;
    cin>>t;
    string s,s1,s2;
    for(i=0;i<t;i++)
    {
        cin>>s;
        s1="";
        s2="";
        for(j=0;j<s.size();j++)
        {
            if(j%2==0)
            s1=s1+s[j];
            else {
            s2=s2+s[j];
            }
        }
        cout<<s1<<" "<<s2<<endl;
    }
    
    
    
    
    
     
    return 0;
}
