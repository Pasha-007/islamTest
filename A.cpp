#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){
    int x, y;
    cin >> x >> y;
    
    int arr1[x];
    int arr2[y];

    for(int i = 0; i < x; i++){
        cin >> arr1[i];
    }
    for(int j = 0; j < y; j++){
        cin >> arr2[j];
    }

    for(int i = 0; i < y; i++){
        int min = abs(arr2[i] - arr1[0]);
        int ans = arr1[0];

        for(int j = 1; j < x; j++){
            int k = abs(arr2[i] - arr1[j]);
            if(k < min || (k == min && arr1[j] < ans)){
                min = k;
                ans = arr1[j];
            }
        }
        cout << ans << endl;
    }
}