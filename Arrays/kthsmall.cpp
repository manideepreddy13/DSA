#include <iostream>
using namespace std;

int kthsmall(int arr[], int k, int n);

int main(){
    int n;
    cin >> n;
    int arr[n];
    int i;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    int k;
    cin>>k;
    int result;
    result = kthsmall(arr,k,n);

    cout<<result<<endl;

return 0;
}

int kthsmall(int arr[], int k, int n){
    int i=0;
    int j=0;
    int temp;

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    return arr[k-1];
}