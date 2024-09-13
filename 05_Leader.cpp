#include <iostream>
using namespace std;

void findLeaders(int arr[], int n) {
    int leaders[n]; 
    int max_from_right = arr[n - 1];
    int leader_count = 0;
    leaders[leader_count] = max_from_right;
    leader_count++;

    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > max_from_right) {
            max_from_right = arr[i];
            leaders[leader_count] = max_from_right;
            leader_count++;
        }
    }
    cout << "Leaders: ";
    for (int i = leader_count - 1; i >= 0; i--) {
        cout << leaders[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {16, 17, 4, 3, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    findLeaders(arr, n);

    return 0;
}