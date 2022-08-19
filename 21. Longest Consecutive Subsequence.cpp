class Solution
{
public:
	int longestConsecutive(vector<int> &nums)
	{
		// O(nlogn)
		// 	sort(nums.begin(), nums.end());
		// 	set<int> s(nums.begin(), nums.end());
		// 	vector<int> num(s.begin(), s.end());

		// 	vector<int> v;
		// 	int count = 0;
		// 	if (nums.empty())
		// 		return 0;
		// 	else if (nums.size() == 1)
		// 		return 1;

		// 	for (int i = 1; i < num.size(); i++)
		// 	{
		// 		if (num[i] - num[i - 1] == 1)
		// 		{
		// 			count++;
		// 			v.push_back(count);
		// 		}
		// 		else
		// 			count = 0;
		// 	}
		// 	if (v.empty())
		// 		return 1;
		// 	else
		// 		return *max_element(v.begin(), v.end()) + 1;
		// }

		// O(N)
		set<int> hashSet;
		for (int num : nums)
		{
			hashSet.insert(num);
		}

		int longestStreak = 0;

		for (int num : nums)
		{
			if (!hashSet.count(num - 1))
			{
				int currentNum = num;
				int currentStreak = 1;

				while (hashSet.count(currentNum + 1))
				{
					currentNum += 1;
					currentStreak += 1;
				}

				longestStreak = max(longestStreak, currentStreak);
			}
		}

		return longestStreak;
	};