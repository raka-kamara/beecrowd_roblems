#include<bits/stdc++.h>

using namespace std;

int main()
{
    double A, B, s=0;
    cin>>A>>B;
    A = A*3.5;
    B = B*7.5;
    s = (A + B)/(3.5+7.5);
    cout << "MEDIA = " <<fixed<<setprecision(5) << s <<endl;
    return 0;

}

