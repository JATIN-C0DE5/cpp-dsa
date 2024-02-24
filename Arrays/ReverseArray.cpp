#include <iostream>
using namespace std;

void PrintArr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;
}

void ReverseArr(int Rev[],int size){
    int ArrNew[size]={0};
    for(int i=0;i<(size);i++){
        ArrNew[i]= Rev[size-i-1];
    }
    PrintArr(ArrNew,size);
}
//.................OR...............//

// void ReverseArr(int Rev[],int size){
//     for(int i=0;i<(size/2);i++){
//         swap(Rev[i],Rev[size-i-1]);
//     }
//     PrintArr(Rev,size);
// }

int main(){
    int n=5;
    cout<<"Array is\n";
    int arr[5]={2,5,9,3,1};
    PrintArr(arr,n);
    cout<<endl<<"Reversed Array is: "<<endl;
    ReverseArr(arr,n);
}