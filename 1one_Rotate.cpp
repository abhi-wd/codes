// Given an unsorted array arr[] of size N, rotate it by D elements (clockwise).

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int size, rotation;
        cin >> size >> rotation;
        rotation = rotation % size;
        int arr[size], arr2[rotation];
        // taking input
        for (int j = 0; j < size; j++)
        {
            cin >> arr[j];
        }
        // taking rotated array in temp array
        for (int j = 0; j < rotation; j++)
        {
            arr2[j] = arr[j];
        }
        // shifting
        for (int j = rotation; j < size; j++)
        {
            arr[j - rotation] = arr[j];
        }
        // placing back
        int k = 0;
        for (int j = size - rotation; j < size; j++)
        {
            arr[j] = arr2[k];
            k++;
        }
        // printing the array
        for (int j = 0; j < size; j++)
        {
            cout << arr[j] << " ";
        }
        cout << endl;
    }
    return 0;
}