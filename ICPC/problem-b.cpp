#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int first_letter = a - d - 1;

        if (first_letter < 0)
        {
            cout << "YES" << endl;
            continue;
        }
    }

    return 0;
}