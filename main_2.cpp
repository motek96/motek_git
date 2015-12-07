#include <iostream>
using namespace std;
int n, x, y, w, p, r, t;
int main()
{
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> w >> p;
        if(w<=p)
        {
            x=p;
            y=w;
        }
        else
        {
            x=w;
            y=p;
        }
        r=y;
        t=x;
        while(x!=y)
        {
            if(x>y)
            {
                y=y+r;
            }
            else
            {
                x=x+t;
            }

        }
        cout << x << endl;
    }
    return 0;
}
