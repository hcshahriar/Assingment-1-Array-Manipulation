#include <iostream>
using namespace std;

int main() {
    int n, val, pos;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n+1];

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter value and position to insert: ";
    cin >> val >> pos;

    for(int i = n; i > pos; i--)
        arr[i] = arr[i-1];
    arr[pos] = val;

    cout << "Array after insertion:\n";
    for(int i = 0; i <= n; i++)
        cout << arr[i] << " ";
    return 0;
}

