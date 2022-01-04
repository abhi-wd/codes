#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int findGCD(int arr[], int N)
{
    int result = arr[0];
    for (int i = 0; i < N; i++)
    {
        result = gcd(arr[i], result);
        if (result == 1)
            return 1;
    }
    return result;
}

int main()
{
    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    int res = findGCD(arr, N);
    cout << res;
    return 0;
}