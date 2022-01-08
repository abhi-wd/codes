#include <cmath>
#include <cstdio>
#include <vector>
#include <set>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        set<int> final;
        vector<int> test;
        int N, M, temp;
        cin >> N >> M;
        while (N--)
        {
            cin >> temp;
            test.push_back(temp % M);
            final.insert(temp % M);
        }
        int unique = 0;
        for (auto itr = final.begin(); itr != final.end(); itr++)
        {
            if (count(test.begin(), test.end(), *itr) == 1)
                unique++;
        }
        cout << final.size() << endl;
        cout << unique << endl;
    }
    return 0;
}
