#include <iostream>

using namespace std;

int main()
{
int n, l, u;

    cin >> n;
    int tab[n];
    for(int i=0; i<n; i++)
    {
        cin >> l;
        u=l;
        for(int k=0; k<l; k++)
        {
            cin >> tab[k];
        }
        u--;
        for(int j = u; j>-1; j--)
        {
            cout << tab[j] << " ";
        }
        cout << "\n";
    }
}
