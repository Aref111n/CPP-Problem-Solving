#include<iostream>

using namespace std;
int main()
{
    int a, b,c,t,m=1;
    cin >> t ;
    while(t>0)
    {
        cin >> a >> b ;
        cout << "Case " << m++ << ": " << a+b << endl ;
        t--;
    }
    return 0;
}
