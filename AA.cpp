#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int binarySearchClosest(const int arr[], int low, int high, int target) {
    if (target <= arr[low]) {
        return arr[low];
    }
    if (target >= arr[high]) {
        return arr[high];
    }

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return arr[mid];
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    // Find the closest element
    if (abs(arr[low] - target) < abs(arr[high] - target)) {
        return arr[low];
    } else {
        return arr[high];
    }
}

int main() {
    int N, K;
    cin >> N >> K;

    int arr1[N];
    int arr2[K];

    for (int i = 0; i < N; i++) {
        cin >> arr1[i];
    }

    for (int i = 0; i < K; i++) {
        cin >> arr2[i];
        int closest = binarySearchClosest(arr1, 0, N - 1, arr2[i]);
        cout << closest << endl;
    }

    return 0;
}
