class Solution {
public:
    void nextPermutation(vector<int>& nums){
    int n=nums.size()-1;
    int infpt=0;
    for(int i=n;i>0;i--){
        if(nums[i]>nums[i-1]){
            infpt=i;
            break;
        }
    }
    if(infpt==0){
        sort(nums.begin(),nums.end());
    }
    else{
    int toswap=nums[infpt-1];
    int min=INT_MAX;
        for(int j=infpt;j<=n;j++){
            if(nums[j]-toswap>0 and nums[j]-toswap<min){
                swap(nums[j],nums[infpt-1]);
            }
        }
        sort(nums.begin()+infpt,nums.end());
    }          
    }
};
