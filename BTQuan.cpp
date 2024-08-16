#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;


int main()
{
    int n, s = 0;
    cin >> n;// tinh tong t = X(i) + Y(i)
    int a[100] = {1, 2, 3, 4};
    int b[100] = {2, 4, 6, 8};
    for(int i = 4; i < n; i++)
    {
        a[i] = (a[i - 4] + b[i - 3] + a[i - 2] + b[i - 1]);
        b[i] = (b[i - 4] + a[i - 3] + b[i - 2] + a[i - 1]);
    }
    for (int i = 0; i < n ; i++) // tinh tong t = X(i) + Y(i)
        s = s + a[i] + b[i];
    cout << s << endl;  
    for(int i = 0; i < n; i++) // in ra day a
        cout << a[i] << " ";
    cout << endl;
    for(int i = 0; i < n; i++) // in ra day b
        cout << b[i] << " ";


    return 1;
}