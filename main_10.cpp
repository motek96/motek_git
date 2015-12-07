#include <iostream>

using namespace std;
int n, s, l;
int main()
{
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> s;
        l = 0;
        while(s!=1)
        {
            if(s%2==0)
            {
                s = s/2;
                l++;
            }
            else
            {
                s = 3*s + 1;
                l++;
            }
        }
        cout << l << endl;
    }
    return 0;
}
