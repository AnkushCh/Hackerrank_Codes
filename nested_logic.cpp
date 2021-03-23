#include<bits/stdc++.h>
using namespace std;
int main()
{
    int day,month,year;
    int dday,dmonth,dyear;
    scanf("%d", "%d","%d",&day,&month,&year);
    scanf("%d", "%d","%d",&dday,&dmonth,&dyear);
    if(year != dyear) cout << "10000";
    else if(month != dmonth) cout << (dmonth - month)*500;
    else cout << (dday - day)*15;
    return 0;
}