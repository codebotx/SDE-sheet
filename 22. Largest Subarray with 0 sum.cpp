O(n ^ 2)
class Solution
{
public:
	int maxLen(vector<int> &A, int n)
	{
		// int max = 0;
		// for (int i = 0; i < A.size(); i++)
		// {
		// 	int sum = 0;
		// 	for (int j = i; j < A.size(); j++)
		// 	{
		// 		sum += A[j];
		// 		if (sum == 0)
		// 			(j - i + 1) > max ? max = j - i + 1 : max = max;
		// 	}
		// }
		// return max;
		// O(N)
		unordered_map<int, int> mpp;
		int max = 0;
		int sum = 0;
		for (int i = 0; i < n; i++)
		{
			sum += A[i];
			if (sum == 0)
			{
				max = i + 1;
			}
			else
			{
				if (mpp.find(sum) != mpp.end())
				{
					max = max(max, i - mpp[sum]);
				}
				else
				{
					mpp[sum] = i;
				}
			}
		}

		return max;
	}
};