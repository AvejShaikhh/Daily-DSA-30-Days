#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum = ((arr[n-1])*(arr[n-1]+1))/2;
    
    int arrSum=0;
    for(int i=0;i<n;i++){
       arrSum=arrSum + arr[i];
    }
   
    int missingNum = sum - arrSum;
    cout<<missingNum;
    return 0;
}