vector<int> Solution::repeatedNumber(const vector<int> &A)
{
	int sum = 0;
	vector<int> B;
	vector<int> res;
	for (int i = 0; i < A.size(); i++)
	{
		B.push_back(A[i]);
		sum += A[i];
	}
	sort(B.begin(), B.end());
	for (int i = 0; i < B.size() - 1; i++)
	{
		if (B[i] == B[i + 1])
			res.push_back(B[i]);
	}
	int tsum = (A.size() * (A.size() + 1)) / 2;
	res.push_back(tsum - (sum - res[0]));
	return res;
}
