class Solution {
public:
        vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> sum;
        sort(candidates.begin(), candidates.end());
        calculatesum(candidates, target, 0, sum, res);
        for(int i =0;i<res.size();i++)
            sort(res[i].begin(),res[i].end());
            
        set<vector<int>>s(res.begin(),res.end());
        res.assign(s.begin(),s.end());
        return res;
    }
		void calculatesum(vector<int>& candidates, int target, int index, vector<int>& sum, vector<vector<int>>& res){
			if(target == 0){
				res.push_back(sum);
				return;
			}
			if(find(candidates.begin(), candidates.end(), target) != candidates.end()){
				sum.push_back(target);
				res.push_back(sum);
				sum.pop_back();
			}
			for(int i = index; i < candidates.size(); i++){
				if(target < candidates[i]) return;
				sum.push_back(candidates[i]);
				calculatesum(candidates, target - candidates[i], i, sum, res);
				sum.pop_back();
			}

		}
  
};
