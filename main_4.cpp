#include <iostream>

using namespace std;
char z;
int x, y;

int main()
{
    while (cin >> z >> x >> y)
    {
        if(z=='+') cout << x+y << endl;
        else if(z=='-') cout << x-y << endl;
        else if(z=='*') cout << x*y << endl;
        else if(z=='/') cout << x/y << endl;
        else if(z=='%') cout << x%y << endl;
    }
    return 0;
}
