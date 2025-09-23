#include <bits/stdc++.h>
using namespace std;

int binary_search(int arr[], int start, int end, int target) {
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] > target) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return -1;
}

void ans(int arr[], int target) {
    int start = 0;
    int end = 1;

    // expand search range
    while (end < 11 && target > arr[end]) {
        start = end + 1;
        end = end * 2;
        if (end >= 11) end = 10;
    }

    int result = binary_search(arr, start, end, target);
    cout << "Index: " << result << endl;
}

int main() {
    int arr[]={3,5,7,9,10,90,100,130,140,160,170};
    int target=100;
    ans(arr,target);
}
