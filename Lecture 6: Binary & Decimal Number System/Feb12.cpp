//      NOTES       //

#include<iostream>
#include<math.h>
using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     while(n!=0){
//     cout<<"number is "<<n<<endl;

//     int bit=(n&1);
//     cout<<"bit is "<<bit<<endl;
//     n=(n>>1);
//     cout<<endl;
//     }
// }



//....................Decimal to Binary.........................//

int main(){
    int n;
    cin>>n;
    int i=0;
    int ans=0;
    while(n!=0){
        int bit=(n&1);
        n=(n>>1);
        ans=((bit*pow(10,i)+ans));
        i++;
    }
    cout<<ans<<endl;
}

//.....................OR......................//

// int main(){
//     int n;
//     cin>>n;
//     int i=0;
//     int ans=0;
//     while(n!=0){
//         int bit=(n%2);
//         n=(n/2);
//         ans=((bit*pow(10,i)+ans));
//         i++;
//     }
//     cout<<ans<<endl;
// }





//............................Binary to Decimal............................//

// int main(){
//     int n;
//     int i=0;
//     int ans = 0;
//     cin>>n;
//     while(n!=0){
//         int bit=(n&1);
//         if(bit==1){
//             ans=ans+pow(2,i);
//         }
//         i++;
//         n=(n/10);
//     }
//     cout<<ans<<endl;
// }

