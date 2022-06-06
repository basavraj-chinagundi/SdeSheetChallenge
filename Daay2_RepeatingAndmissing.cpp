vector<int> Solution::repeatedNumber(const vector<int> &A) {
    vector<int> V(A.size()+1,0);
    int n=A.size();
    for(int i=0;i<n;i++){
        V[A[i]]++;
    }
    int a,b;
    for(int i=1;i<=n;i++){
        if(V[i]==0){
            b=i;
        }
        else if(V[i]>1){
            a=i;
        }
    }
    return {a,b};
}
//Missing
//         int n = nums.size();
//         int sum = 0;
//         for (int i =0; i<=n; i++){
//             sum+=i;
//         }
//         int temp = 0;
//         for (auto it:nums){
//             temp+=it;
//         }
//         return sum-temp;

//Duplicate
//      sort(nums.begin(),nums.end());
//      for(int i=1;i<nums.size();i++){
//          if(nums[i-1]==nums[i]){
//              return nums[i];
//          }
//      }
//         return -1;
//     }
