// Sort an array of 0s, 1s and 2s

// { Driver Code Starts
// Initial Template for C

#include <stdio.h>

// } Driver Code Ends
// User function Template for C

void sort012(int a[], int n)
{
    int zero = 0, one = 0, two = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
            zero++;
        else if (a[i] == 1)
            one++;
        else
            two++;
    }
    for (int i = 0; i < n; i++)
    {
        if (zero)
        {
            a[i] = 0;
            zero--;
        }
        else if (one)
        {
            a[i] = 1;
            one--;
        }
        else
            a[i] = 2;
    }
}

// { Driver Code Starts.

int main()
{

    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        sort012(arr, n);

        for (int i = 0; i < n; i++)
            printf("%d ", arr[i]);
        printf("\n");
    }
    return 0;
}
// } Driver Code Ends