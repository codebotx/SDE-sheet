class Solution
{
public:
	vector<vector<int>> threeSum(vector<int> &nums)
	{
		// vector<vector<int>> v;
		// for(int i =0;i<nums.size();i++)
		//     for(int j=i+1;j<nums.size();j++)
		//         v.push_back({nums[i], nums[j]});

		// for(int i =0;i<v.size();i++)
		//     if(find(nums.begin(),nums.end(),-v[i][0]-v[i][1])!=nums.end()){
		//         if(-v[i][0]-v[i][1]==0 )
		//             v[i].push_back(-v[i][0]-v[i][1]);
		//         else if(find(v[i].begin(),v[i].end(),-v[i][0]-v[i][1])==v[i].end())
		//             v[i].push_back(-v[i][0]-v[i][1]);
		//     }
		// for(int i =0;i<v.size();i++)
		//     if(v[i].size()!=3){
		//         v.erase(v.begin()+i);
		//         i--;
		//     }
		// for(int i=0;i<v.size();i++){
		//     sort(v[i].begin(),v[i].end());
		// }
		// set<vector<int>> s(v.begin(),v.end());
		// vector<vector<int>> res(s.begin(),s.end());
		// vector<int> vect(3, 0);
		// if(find(res.begin(),res.end(),vect) == res.end())
		//     return res;
		// else{
		//     if(count(nums.begin(), nums.end(), 0)>=3)
		//         return res;
		//     else{
		//         auto it = find(res.begin(),res.end(),vect);
		//         res.erase(it);
		//         return res;
		//     }
		// }
	}
};