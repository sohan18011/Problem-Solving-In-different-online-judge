#include<bits/stdc++.h>
#include<string> //for string class

using namespace std;
int main()
{
    string s,ss;
    getline(cin,s);
    int i,n=s.size(),j=0;
    cout<<s<<' '<<n<<endl;
    for(i=0; i<n; i++)
    {
        cout<<s[i] <<' ';
        if(s[i]>='a'&& s[i]<='z')
           {
               ss[j]=s[i];
               j++;
               continue;
           }
        if(s[i]>='A'&&s[i]<='Z')
           {
               ss[j]=tolower(s[i]);
               j++;
           }


    }
    cout<<endl;
    cout<<s.size()<<endl;
    for(int i=0;i<n;i++)
    cout<<ss[i] <<endl;
    main();
}
