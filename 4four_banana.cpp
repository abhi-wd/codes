/*
You are required to distribute N bananas among some people according to the following conditions:

You can select the number of people that receive bananas.
Each person should get more than one banana.
One person cannot receive all the bananas.
All the N bananas must be distributed.
Each person can only receive an integral number of bananas.
Equally Distribution
*/

#include <bits/stdc++.h>
using namespace std;

bool isprime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;

    return true;
}

string solve(int N)
{
    if (N < 4)
        return "No";

    if (N % 2 == 0)
        return "Yes";

    if (!isprime(N))
        return "Yes";
    return "No";
}

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for (int t_i = 0; t_i < T; t_i++)
    {
        int N;
        cin >> N;

        string out_;
        out_ = solve(N);
        cout << out_;
        cout << "\n";
    }
}