#include<bits/stdc++.h>
using namespace std;

int main()
{
    int u1, u2, c1, c2;
    double p1, p2, rslt;

    cin>>c1>>u1>>p1;
    cin>>c2>>u2>>p2;

    rslt = (u1*p1)+(u2*p2);
    cout<<"VALOR A PAGAR: R$ "<< fixed<<setprecision(2)<<rslt<<endl;
    return 0;
}
