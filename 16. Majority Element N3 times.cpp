class Solution
{
public:
	vector<int> majorityElement(vector<int> &nums)
	{
		set<int> s;
		vector<int> res;
		for (int i = 0; i < nums.size(); i++)
			s.insert(nums[i]);
		vector<int> setv(s.begin(), s.end());
		vector<int> setc(s.begin(), s.end());

		for (int i = 0; i < nums.size(); i++)
		{
			auto it = find(setv.begin(), setv.end(), nums[i]);
			int index = it - setv.begin();
			setc[index]++;
		}

		for (int i = 0; i < setc.size(); i++)
			setc[i] -= setv[i];
		for (int i = 0; i < setc.size(); i++)
			if (setc[i] > nums.size() / 3)
				res.push_back(setv[i]);

		return res;
	}
};