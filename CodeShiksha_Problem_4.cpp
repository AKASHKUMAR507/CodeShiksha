#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;

    int larg;
    int small = 0;
    if (n1 < n2 && n1 < n3)
    {
        small = n1;
    }
    else if (n2 < n1 && n2 < n3)
    {
        small = n2;
    }
    else if (n3 < n1 && n3 < n2)
    {
        small = n3;
    }
    else
    {
        cout << "EQUAL";
        return 0;
    }
    cout << small << " ";
    larg = 0;
    if (n1 > n2 && n1 > n3)
    {
        larg = n1;
    }
    else if (n2 > n1 && n2 > n3)
    {
        larg = n2;
    }
    else if (n3 > n1 && n3 > n2)
    {
        larg = n3;
    }
    else
    {
        cout << "EQUAL";
    }
    cout << larg;
    cout << endl;

    return 0;
}