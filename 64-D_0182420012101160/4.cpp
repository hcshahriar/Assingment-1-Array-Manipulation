
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr1[n], arr2[n];

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr1[i];
        arr2[i] = arr1[i];
    }

    cout << "Copied array:\n";
    for(int i = 0; i < n; i++)
        cout << arr2[i] << " ";
    return 0;
}
