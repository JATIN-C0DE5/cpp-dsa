#include<iostream>
#include<math.h>
using namespace std;



// int main(){
//     int n;
//     cin>>n;
//     int ans=0;
//     while(n!=0){
//         int digit=n%10;
//         ans=(ans*10)+digit;
//         n=n/10;
//     }
//     if((ans>INT32_MAX/10) || (ans<INT32_MIN/10)){
//         return 0;
//     }
//     else{
//     cout<<ans;
//     }
// }




// int main(){
//     int n;
//     cin>>n;
//     int ans=0;
//     int i=0;
//     int newbit;
//     while(n!=0){
//         int bit =(n&1);
//         if (bit==0){
//             newbit = 1;
//         }else if (bit==1)
//         {
//             newbit = 0;
//         }
//         ans=((newbit*pow(10,i)+ans));
//         i++;
//         n=n>>1;
//     }
//     cout<<"binary of new complement : "<<ans<<endl;
//     int j=0;
//     int newans=0;
//     while(ans!=0){
//         if(ans&1==1){
//             newans=newans+pow(2,j);
//         }
//         ans=ans/10;
//         j++;
//     }
//     cout<<"complement of base 10: "<<newans<<endl;
// }




int main(){
    int n=0;
    cin>>n;
    string a;
    for(int i=0;i<=30;i++){
        int check=pow(2,i);
        if(check==n){
            a="True";
            break;
        }else{
            a="False";
        }
    }cout<<a<<endl;
}