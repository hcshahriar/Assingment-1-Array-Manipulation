#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];

    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Stored elements are:\n";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
