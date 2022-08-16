class Solution
{
public:
	int binarySearch(vector<int> v, int To_Find)
	{
		int lo = 0, hi = v.size() - 1;
		int flag = 0;
		int mid;
		while (hi - lo > 1)
		{
			int mid = (hi + lo) / 2;
			if (v[mid] < To_Find)
			{
				lo = mid + 1;
			}
			else
			{
				hi = mid;
			}
		}
		if ((v[lo] == To_Find) || (v[hi] == To_Find))
		{
			flag = 1;
			return flag;
		}
		return flag;
	}

	bool searchMatrix(vector<vector<int>> &matrix, int target)
	{
		vector<int> newm;
		int ans = 0;
		for (int i = 0; i < matrix.size(); i++)
		{
			ans = binarySearch(matrix[i], target);
			if (ans)
				return true;
		}
		if (ans)
			return true;
		else
			return false;
	}
};