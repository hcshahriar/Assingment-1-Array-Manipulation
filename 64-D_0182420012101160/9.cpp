#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n], odd[n], even[n], o = 0, e = 0;

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] % 2 == 0)
            even[e++] = arr[i];
        else
            odd[o++] = arr[i];
    }

    cout << "Even numbers: ";
    for(int i = 0; i < e; i++) cout << even[i] << " ";
    cout << "\nOdd numbers: ";
    for(int i = 0; i < o; i++) cout << odd[i] << " ";
    return 0;
}

