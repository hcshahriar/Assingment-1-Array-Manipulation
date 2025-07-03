#include <iostream>
using namespace std;

int main() {
    int n, isUnique;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Unique elements:\n";
    for(int i = 0; i < n; i++) {
        isUnique = 1;
        for(int j = 0; j < n; j++) {
            if(i != j && arr[i] == arr[j]) {
                isUnique = 0;
                break;
            }
        }
        if(isUnique)
            cout << arr[i] << " ";
    }
    return 0;
}

