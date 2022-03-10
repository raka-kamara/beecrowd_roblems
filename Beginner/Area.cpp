#include<bits/stdc++.h>
using namespace std;

int main()
{
    double A,B,C,pi=3.14159;
    double rt, c, t, s, r;

    cin>>A>>B>>C;

    rt = (A*C)/2;
    c = pi*C*C;
    t =(A+B)/2*C;
    s = B*B;
    r = A*B;

    cout<<"TRIANGULO: "<<fixed<<setprecision(3)<<rt<<endl;
    cout<<"CIRCULO: "<<fixed<<setprecision(3)<<c<<endl;
    cout<<"TRAPEZIO: "<<fixed<<setprecision(3)<<t<<endl;
    cout<<"QUADRADO: "<<fixed<<setprecision(3)<<s<<endl;
    cout<<"RETANGULO: "<<fixed<<setprecision(3)<<r<<endl;
    return 0;
}
