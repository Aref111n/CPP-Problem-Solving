#include<iostream>

using namespace std;
int main()
{
    int t,a,b=0;
    cin >> t ;
    while(t>0)
    {
        cin >> a ;
        if(a>10)
        {
            b=a-10;
            a=10;
        }

        cout << b << " " << a << endl;
        t--;
        b=0;
    }
    return 0;
}
