#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[100]; 
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Duplicate elements are: ";
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                cout << arr[i] << " ";
                break;
            }
        }
    }

    return 0;
}