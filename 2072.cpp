#include <iostream>

using namespace std;

// 홀수만 더하기
int main()
{
    int T;

    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int sum = 0;
        int num;
        for (int j = 0; j < 10; j++)
        {
            cin >> num;
            if (num % 2 == 1)
            {
                sum += num;
            }
        }
        cout << "#" << i + 1 << " " << sum << "\n";
    }

    return 0;
}