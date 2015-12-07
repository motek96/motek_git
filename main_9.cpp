#include <iostream>

using namespace std;
int x, n, j;
int main()
{
    cin >> n;
    for(int i = 0; i<n; i++)
    {
        cin >>j;
        int tab[j];
        for(int k=0; k<j; k++)
        {
            cin >> tab[k];
        }
        x = 0;
        for(int l=0; l<j; l++)
        {
            x = x + tab[l];
        }
        cout << x << endl;
    }
    return 0;
}
