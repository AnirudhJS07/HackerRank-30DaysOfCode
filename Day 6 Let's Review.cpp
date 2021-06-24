#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        string s,sEven,sOdd;
        cin >> s;
        for(int j=0; j<s.size(); j++)
        {
            if(j%2==0)
            {
                sEven += s[j];
            }
            else
            {
                sOdd += s[j];
            }
        }
        
        cout << sEven << " " << sOdd << endl;
    }
    
     
    return 0;
}
