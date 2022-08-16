class Solution
{
public:
	int majorityElement(vector<int> &nums)
	{

		// O(nlogn)
		set<int> s;
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
			if (setc[i] > nums.size() / 2)
				return setv[i];

		return 0;

		// O(n^2)
		//     vector<int> copy2;
		//     int count=0;
		//     for(int i=0;i<nums.size();i++){
		//         for(int j=0;j<nums.size();j++){
		//             if(nums[i]==nums[j])
		//                 count++;

		//         }
		//         copy2.push_back(count);
		//         count=0;
		//     }
		//     for(int i=0;i<copy2.size();i++){
		//         if(copy2[i]-1>=nums.size()/2)
		//             return nums[i];
		//     }
		//     return 0;
		// }
	};