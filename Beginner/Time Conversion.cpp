#include<bits/stdc++.h>

using namespace std;

int main()
{
    int sec, min, hr;
    cin>>sec;
    hr = sec/3600;
    sec = sec%3600;
    min = sec/60;
    sec = sec%60;
    cout<<hr<<":"<<min<<":"<<sec<<endl;
    return 0;
}
