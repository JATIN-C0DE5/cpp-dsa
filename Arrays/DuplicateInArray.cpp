//Link = https://www.codingninjas.com/studio/problems/duplicate-in-array_893397


//..........................................approach1:
    // for(int i=0;i<arr.size();i++){
    //     int count=0;
    //     for(int j=0;j<arr.size();j++){
    //         if(arr[i] == arr[j]){
    //         count += 1;
    //         }
    //     }
    //     if (count == 2) {
    //         return arr[i];
    //     }
    // }



//..........................................approach2:
//{
//     int num=0;
//     for(int i=0;i<arr.size();i++){
//         for(int j=0;j<arr.size();j++){
//             if(i!=j){
//                 if((arr[i]^arr[j]) == 0) {
//                     num= arr[j];
//                 }
//             }
//         }
//     }return num;
// }



//............................................approach3:BEST: (sum of all the elemens)^(sum of 0 to n) = duplicate no.
// {
//     int ans=0;
//     for (int i = 0; i < arr.size(); i++) {
//         ans=ans^arr[i];
//     }
//     for (int i = 0; i < arr.size(); i++) {
//         ans = ans ^ i;
//     }
//     return ans;
// }

