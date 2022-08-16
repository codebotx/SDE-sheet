class Solution
{
public:
	// O(Nlog(N))
	int findDuplicate(vector<int> &nums)
	{
		int low = 1, high = nums.size() - 1, cnt;
		while (low <= high)
		{
			int mid = low + (high - low) / 2;
			cnt = 0;
			for (int n : nums)
			{
				if (n <= mid)
					++cnt;
			}
			if (cnt <= mid)
				low = mid + 1;
			else
				high = mid - 1;
		}
		return low;

		// O(N)
		// 	int slow = nums[0];
		// 	int fast = nums[0];
		// 	do
		// 	{
		// 		slow = nums[slow];
		// 		fast = nums[nums[fast]];
		// 	} while (slow != fast);
		// 	fast = nums[0];
		// 	while (slow != fast)
		// 	{
		// 		slow = nums[slow];
		// 		fast = nums[fast];
		// 	}
		// 	return slow;
	}
};