#include<iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a,b,c,d,e,f;
    cin >> a >> b >> c >> d >> e >> f;

    bool findSolution = false;

    for (int x = -999; x <= 999; x++)
    {
        for (int y = -999; y <= 999; y++)
        {
            if (a * x + b * y == c && d * x + e * y == f)
            {
                findSolution = true;
                cout << x << " " << y;
                break;
            }
        }
        if (findSolution)
        {
            break;
        }
    }
    return 0;
}