//link = https://www.codingninjas.com/studio/problems/find-unique_625159

//....................approach1:
    // int ans;
    // for(int i=0;i<size;i++){
    //     int count=1;
    //     for(int j=0;j<size;j++){
    //         if(j!=i){
    //             if(arr[i]==arr[j]){
    //                 break;
    //             }
    //             else{
    //                 count+=1;
    //                 if(count==size){
    //                     ans=arr[i];
    //                 }
    //             }
    //         }
    //         else if(j==i && size==1){
    //             ans=arr[i];
    //         }
    //     }
    // }return ans;



//...........................approach2:
    // int ans;
    // for(int i=0;i<size;i++){
    //     int count=0;
    //     for(int j=0;j<size;j++){
    //         if(arr[i] == arr[j]){
    //         count += 1;
    //         }
    //     }
    //     if (count == 1) {
    //         return arr[i];
    //     }
    // }


//...............approach3: BEST : approach was XOR method