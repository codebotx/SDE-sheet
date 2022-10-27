class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        set<vector<int>> res;
        vector<vector<int>> ans;
        vector<int> sum;
        
        for(int i =0;i<candidates.size();i++)
            if(candidates[i]>target)
                candidates.erase(candidates.begin()+i);
        sort(candidates.begin(),candidates.end());
        combination( candidates, 0, target, sum, res );
        ans.assign(res.begin(),res.end());
        return ans;
    }
    void combination(vector<int>& candidates, int index, int target, vector<int>& sum, set<vector<int>>& res){
        if(target ==0){
            sort(sum.begin(),sum.end());
            res.insert(sum);
            return;
        }
        for(int i=index;i<candidates.size();i++){
            if(target<candidates[i]) return;
            if(i>index && candidates[i]==candidates[i-1]) continue;
            sum.push_back(candidates[i]);
            combination( candidates, i+1, target-candidates[i], sum, res );
            sum.pop_back();
        }
        
        
    }
};
