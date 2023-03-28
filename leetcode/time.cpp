#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j;
    int h,m,hh,mm;
    string current,correct;
    cin>>current>>correct;
    h=current[0]-'0';
    hh=current[1]-'0';

    h=h*10+hh;

    m=current[3]-'0';
    mm=current[4]-'0';

    m=m*10+mm;

    int t1=h*60+m;



    int h1,h2,m1,m2;

    h1=correct[0]-'0';
    h2=correct[1]-'0';

    m1=correct[3]-'0';
    m2=correct[4]-'0';

    h1=h1*10+h2;
    m1=m1*10+m2;

  //   cout<<h<<":"<<m<<endl;
    //cout<<h1<<":"<<m1<<endl;


    int t2=h1*60+m1;
   // cout<<t1<<' '<<t2<<endl;
    int tt=abs(t2-t1);
   // cout<<tt<<endl;
    int count = tt/60;
    int remain = tt%60;
    count+=remain/15;
    remain=remain%15;
    count+=remain/5;
    remain=remain%5;
    count+=remain;
    cout <<count<<endl;


main();

}
