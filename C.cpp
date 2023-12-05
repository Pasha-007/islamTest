#include <iostream>

using namespace std;

int binarySearch(const int arr[], int low, int high, int target) {
    if (target <= arr[low]) {
        return (arr[low] == target) ? 1 : 0;
    }
    if (target >= arr[high]) {
        return (arr[high] == target) ? 1 : 0;
    }

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return 1; // Element found, return 1
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return 0; // Element not found, return 0
}

int main() {
    int N, K;
    cin >> N >> K;

    int firstArray[N];
    int secondArray[K];

    for (int i = 0; i < N; i++) {
        cin >> firstArray[i];
    }

    for (int i = 0; i < K; i++) {
        int target;
        cin >> target;

        int isFound = binarySearch(firstArray, 0, N - 1, target);

        if (isFound) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}