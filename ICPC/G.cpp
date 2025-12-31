#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, m;
        cin >> n >> m;
        vector<long long int> row(n, 0), col(m, 0);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int x;
                cin >> x;
                row[i] ^= x;
                col[j] ^= x;
            }
        }

        //        for(int i=0;i<n;i++){
        //            cout<<"i="<<i<<" ->"<<row[i]<<endl;
        //        }
        //        for(int j=0;j<n;j++){
        //            cout<<"j="<<j<<" ->"<<col[j]<<endl;
        //        }
        long long int sum = 0;
        for (int i = 0; i < n; i++)
            sum += row[i];
        for (int j = 0; j < m; j++)
            sum += col[j];

        long long int best_and = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                long long int bitwise_and = row[i] & col[j];
                if (bitwise_and > best_and)
                    best_and = bitwise_and;
            }
        }
        long long int ans = sum - (2 * best_and);
        cout << ans << "\n";
    }
    return 0;
}
