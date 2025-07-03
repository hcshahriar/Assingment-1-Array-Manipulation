#include <iostream>
using namespace std;

int main() {
    int n, visited[100] = {0};
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Frequency of each element:\n";
    for(int i = 0; i < n; i++) {
        if(visited[i]) continue;

        int count = 1;
        for(int j = i+1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
                visited[j] = 1;
            }
        }
        cout << arr[i] << " occurs " << count << " times\n";
    }
    return 0;
}

