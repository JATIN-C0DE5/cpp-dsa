//Link == https://www.codingninjas.com/studio/problems/intersection-of-2-arrays_1082149


//............................Approach1:basic
// {
// 	vector<int> ans;
// 	for(int i=0;i<n;i++){
// 		for(int j=0;j<m;j++){
// 			if(arr1[i]==arr2[j]){
// 				ans.push_back(arr1[i]);
// 				arr2[j]=-1497389429;
// 				break;
// 			}
// 		}
// 	}return ans;	
// }


//.............................Approach2:one loop  (BEST)
// {
// 	int i=0;
// 	int j=0;
// 	vector<int> ans;
// 	while(i<n && j<m){
// 		if(arr1[i]>arr2[j]){
// 			j++;
// 		}
// 		else if(arr1[i]<arr2[j]){
// 			i++;
// 		}else if(arr1[i]==arr2[j]){
// 			ans.push_back(arr1[i]);
// 			arr2[j]=-134143;
// 			i++;
// 			j++;
// 		}
// 	}
// 	return ans;
// }
