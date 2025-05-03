#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    for (int t = 1; t <= T; t++)
    {
        int N;
        cin >> N;

        vector<int> prices(N);
        for (int i = 0; i < N; i++)
        {
            cin >> prices[i];
        }

        long long max_price = 0;
        long long profit = 0;

        // 뒤에서부터 순회하면서 최대값 갱신
        for (int i = N - 1; i >= 0; i--)
        {
            if (prices[i] > max_price)
            {
                max_price = prices[i];
            }
            else
            {
                profit += (max_price - prices[i]);
            }
        }

        cout << "#" << t << " " << profit << "\n";
    }

    return 0;
}