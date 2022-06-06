class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        sort(intervals.begin(),intervals.end());
        int n=intervals.size();
        for(int i=0;i<n;i++){
            //we need something to compare our interval ith vector with
            if(ans.empty()){
                ans.push_back(intervals[i]);
            }
            else{
                //get previous added vector in the ans
                //&used for updating v1 valye by reference
                vector<int>&v=ans.back();
                int y=v[1];
                if(intervals[i][0]<=y){
                    v[1]=max(v[1],intervals[i][1]);
                }
                else{
                    ans.push_back(intervals[i]);
                }
            }
        }
        return ans;
    }
};
