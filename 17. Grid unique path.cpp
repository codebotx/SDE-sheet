// O(n)
class Solution
{
public:
	int uniquePaths(int m, int n)
	{
		double ans = 1;
		for (int i = 1; i <= n - 1; i++)
			ans = ans * (m - 1 + i) / i;
		return (int)ans;
	}
};