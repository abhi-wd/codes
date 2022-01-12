#include <iostream>
#include <vector>
using namespace std;

char nextGreatestLetter(vector<char> &letters, char target)
{
    int low = 0, high = letters.size() - 1, mid;
    char ans;
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (letters[mid] == target)
            return letters[(mid + 1) % letters.size()];
        else if (letters[mid] > target)
        {
            ans = letters[mid];
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    return ans;
}

int main()
{

    return 0;
}