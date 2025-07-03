#include <iostream>
using namespace std;

int main() {
    int n, val;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n+1];

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter value to insert at end: ";
    cin >> val;
    arr[n] = val;

    cout << "Array after insertion:\n";
    for(int i = 0; i <= n; i++)
        cout << arr[i] << " ";
    return 0;
}

