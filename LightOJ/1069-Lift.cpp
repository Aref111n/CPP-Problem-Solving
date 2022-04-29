#include<iostream>

using namespace std;
int main()
{
    int t,a,b,m=1;
    cin >> t ;
    while(t>0)
    {
        cin >> a >> b ;
        if(a<=b)
            cout << "Case " << m << ": " << (b*4)+19 << endl;
        else if(a>b)
            cout << "Case " << m << ": " << (((a-b)+a)*4)+19 << endl;
        t--;
        m++;
    }
    return 0;
}
