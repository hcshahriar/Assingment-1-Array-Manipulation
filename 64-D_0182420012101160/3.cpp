#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, i = 0;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];

    cout << "Enter elements:\n";
    while(i < n) {
        cin >> arr[i];
        sum += arr[i];
        i++;
    }

    cout << "Sum = " << sum;
    return 0;
}

