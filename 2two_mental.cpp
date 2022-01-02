// A guy with a mental problem
/* A guy has to reach his home and does not want to be late. He takes train to reach home. He has a mental illness, so he always switches train at every station.
For eg: If he starts with train A then at station 2 he will switch his train to train B and so on.
Similarly, if he starts with train B then he will switch to train A at station 2 and so on.
Please help him to find the minimum total time he would take to reach his home. */

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    long long minTime(long long a[], long long b[], long long n)
    {
        long long start_a = a[0], start_b = b[0];
        for (int i = 1; i < n; i++)
        {
            if (i % 2 == 1)
            {
                start_a += b[i];
                start_b += a[i];
            }
            else
            {
                start_a += a[i];
                start_b += b[i];
            }
        }
        return start_a < start_b ? start_a : start_b;
    }
};

// { Driver Code Starts.
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long a[n], b[n];
        for (long long i = 0; i < n; i++)
            cin >> a[i];
        for (long long i = 0; i < n; i++)
            cin >> b[i];
        Solution ob;
        cout << ob.minTime(a, b, n) << endl;
    }
    return 0;
}
// } Driver Code Ends