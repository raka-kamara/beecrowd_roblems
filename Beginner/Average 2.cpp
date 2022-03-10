#include<bits/stdc++.h>

using namespace std;

int main()
{
    double A, B, C, s=0;
    cin>>A>>B>>C;
    A = A*2;
    B = B*3;
    C = C*5;
    s = (A + B + C)/(2+3+5);
    cout << "MEDIA = " <<fixed<<setprecision(1) << s <<endl;
    return 0;

}


