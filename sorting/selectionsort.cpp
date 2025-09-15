#include <bits/stdc++.h>
using namespace std;

void selectionSortMax(int arr[], int n) {
    for (int i = n - 1; i > 0; i--) {
        int maxIndex = i;
        for (int j = 0; j < i; j++) {
            if (arr[j] > arr[maxIndex]) {
                maxIndex = j;
            }
        }
        swap(arr[i], arr[maxIndex]);
    }
}

int main() {
    int arr[] = {10, 8, 2, 3, 1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    selectionSortMax(arr, n);
    cout << "Sorted elements are: ";
    for (int x : arr) {
     cout << x << " ";
    }
    cout << endl;
}
