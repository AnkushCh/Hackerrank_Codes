#include<iostream>
#include<cstring>
#include<cmath>

#define fr(i,n) for(int i = 0; i < n; i++)

using namespace std;

int main()
{

    char arr[85];
    cin >> arr;
    
    cout <<arr<<endl;

    char *str = arr;
    
    int cnt = 0;

    while(*str != '\0')
    {
        cnt++;
        str++;
    }

    cout << cnt<<endl;

    float sq = sqrt(cnt);
    cout << sq<<endl;
    int r = floor(sq);
    int c = ceil(sq);
    cout << r << " " << c << endl;
    
    while(r*c < cnt)
    {
    if(r < c) {r++;}
    else {c++;}
    }
    cout << r << " " << c << endl;
    char enc[r][c];

    int k = 0;

    fr(i,r)
    {
        fr(j,c)
        {
            enc[i][j] = arr[k++];
        }

    }
fr(i,r)
    {
        fr(j,c)
        {
            if(enc[i][j] != '\0' && (enc[i][j] >= 97 && enc[i][j] <= 122))
            cout << enc[i][j];
        }
        cout <<endl;
    }

    fr(i,c)
    {
        fr(j,r)
        {
            if(enc[i][j] != '\0' && (enc[i][j] >= 97 && enc[i][j] <= 122))
            cout << enc[j][i];
        }
        cout <<' ';
    }

}