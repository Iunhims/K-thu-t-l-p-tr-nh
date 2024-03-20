#include <bits/stdc++.h>
using namespace std;

void printPermutation(const vector<int> &permutation)
{
    for (int i = 0; i < permutation.size(); i++)
    {
        cout << permutation[i];
        if (i < permutation.size() - 1)
        {
            cout << " ";
        }
    }
    cout << "\n";
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> permutation;
        for (int i = 1; i <= n; ++i)
        {
            permutation.push_back(i);
        }

        do
        {
            printPermutation(permutation);
        } while (next_permutation(permutation.begin(), permutation.end()));
    }

    return 0;
}
