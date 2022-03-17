#include<bits/stdc++.h>

using namespace std;

int main()
{
    int days, yrs, mons;

    cin>>days;

    yrs = days/365;

    days = days%365;

    mons = days/30;

    days = days%30;

    cout<<yrs<<" ano(s)"<<endl;
    cout<<mons<<" mes(es)"<<endl;
    cout<<days<<" dia(s)"<<endl;

    return 0;
}
