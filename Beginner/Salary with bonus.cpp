#include<bits/stdc++.h>
using namespace std;

int main()
{
    string A;
    double B,C,D;

    cin>>A;
    cin>>B>>C;
    D = B+C*15/100;

    cout<<"Total = R$ "<<fixed<<setprecision(2) <<D<<endl;
    return 0;

}

