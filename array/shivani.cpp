#include <bits/stdc++.h>

using namespace std;

void pattern1(int n)
{
    int count = 2;
    // loop for first tringle
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
    // loop for second tringle
    for (int i = 1; i <= n; i++)
    {
        for (int j=n-i+1;j>=1;j--)
        {
            cout << count << " ";
            count++;
        }
        cout<<endl;
    }
    
}
int main()
{
    int n;
    cout << "Enter n = ";
    cin >> n;
    pattern1(n);
    return 0;
}