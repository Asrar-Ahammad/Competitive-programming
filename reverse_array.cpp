#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    int arr[]={2,1,5,2,6,2,7,9,3,67,8,90}, n = sizeof(arr)/sizeof(arr[0]);
    int arr2[n];
    int temp=n - 1;
    cout<<"temp: "<<temp<<endl;
    cout<<"n: "<<n<<endl;
    for(int i=0;i<n;i++){
        arr2[i]=0;
    }
    for (int i = 0; i < n; i++){
        arr2[i]=arr[temp];
        temp = temp - 1;
    }
    
    for(int i = 0; i < n; i++){
        cout<<arr2[i]<<"  ";
    }
    return 0;
}