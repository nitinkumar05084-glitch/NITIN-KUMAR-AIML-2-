#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n = 5;
    int arr[n];
    cout<<"Enter array:";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    //logic to sort an array
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    cout<<"sorted array is:";
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    if(n % 2 !=0){
        //logic when observation is odd
        cout<<"Median is:"<<arr[n / 2];
    } else{
        //logic when observation is even
        int median = (arr[n / 2 - 1] + arr[n / 2]) / 2;
        cout<<"Median is:"<<median;
    }
    return 0;
}
