#include <iostream>
using namespace std;

int main(){
 int arr[]={-1,0,1,2,-1,-4};
 int n = 6;
 //first loop first number
 for(int i = 0; i < n - 2; i++){
    //second loop for second number
    for(int j = i + 1; j < n - 1; j++){
        //third loop for third number
        for(int k = j + 1; k < n; k++){
            if(arr[i] + arr[j] + arr[k] == 0){
                cout<<"index of i:"<<i<<endl<<"index of j:"<<j<<endl<<"index of k:"<<k<<endl;
            }
        }

    }
 }
 return 0;

}