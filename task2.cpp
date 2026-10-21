#include <iostream>
using namespace std;

int binarySearch(int arr[], int low, int high, int key)
{
    if (low > high)
        return -1;

    int mid = (low + high) / 2;

    if (arr[mid] == key)
        return mid;

    if (arr[mid] < key)
        return binarySearch(arr, mid + 1, high, key);

    return binarySearch(arr, low, mid - 1, key);
}

int main()
{
    int arr[7] = {50, 120, 175, 240, 300, 450, 620};
    int price;

    cout << "Enter price to search: ";
    cin >> price;

    int result = binarySearch(arr, 0, 6, price);

    if (result == -1)
        cout << price << " not found";
    else
        cout << price << " found at index " << result;

    return 0;
}
