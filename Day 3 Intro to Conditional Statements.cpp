#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n % 2 == 1 || (n > 5 && n <= 20))
    {
        cout << "Weird" << endl;
    }
    else
    {
        cout << "Not Weird" << endl;
    }
    return 0;
}
