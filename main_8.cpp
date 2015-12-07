#include <iostream>
#include <stack>

using namespace std;
char z;
int x, i=0;
int main()
{
    std::stack <int> stos;
    while(cin >> z)
    {
        if(z=='+')
        {
            cin >> x;
            if(i<10)
            {
                stos.push(x);
                i++;
                cout  << ":)" << endl;
            }
            else cout << ":(" << endl;
        }
        else if(z=='-')
        {
            if(stos.empty()==false)
            {
                cout << stos.top() << endl;
                stos.pop();
            }
            else cout << ":(" << endl;
        }
    }
    return 0;
}
