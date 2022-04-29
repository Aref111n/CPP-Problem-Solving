//BISMILLAHIR RAHMANIR RAHIM
//SOTO MEAW
#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<vector>
#include<set>

#define ls ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define quit return 0

using namespace std;

int main()
{
    ls
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int t,l=1;
    cin>>t;
    while(t>0){
        cout << "Case " << l++ << ":" << endl;
        string a,s;
        stack<string> f;
        stack<string> b;
        b.push("http://www.lightoj.com/");
        while(1){
        cin >> a ;
        if(a=="VISIT")
        {
            while(f.size()!=0)
                f.pop();
            cin >> s ;
            cout << s << endl;
            b.push(s);
        }
        else if(a=="BACK")
        {
            if(b.size()!=1)
            {
                f.push(b.top());
                b.pop();
                cout << b.top() << endl;
            }
            else
                cout << "Ignored" << endl;
        }
        else if(a=="FORWARD")
        {
            if(f.size()!=0)
            {
                cout << f.top() << endl;
                b.push(f.top());
                f.pop();
            }
            else
                cout << "Ignored" << endl;
        }
        else
            break;
        }

    t--;
    }
    quit;
}
