class Solution
{
public:
	double myPow(double x, int n)
	{
		if (n == 0)
			return 1.0000;
		double ans = 1;
		long long int k = abs(n);
		while (k)
		{
			if (k % 2 == 0)
			{
				x = x * x;
				k = k / 2;
			}
			else
			{
				ans = ans * x;
				k -= 1;
			}
		}
		if (n < 0)
			ans = double(1.0) / double(ans);
		return ans;
	}
};