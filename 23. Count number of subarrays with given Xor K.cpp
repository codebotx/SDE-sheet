int Solution::solve(vector<int> &A, int B)
{
	// O(n^2)
	//  long long c=0;
	//  for(int i=0;i<A.size();i++){
	//      int current_xor = 0;
	//      for(int j=i;j<A.size();j++){
	//          current_xor^=A[j];
	//          if(current_xor==B) c++;
	//      }
	//  }
	//  return c;

	// O(n)
	unordered_map<int, int> visited;
	int cpx = 0;
	long long c = 0;
	for (int i = 0; i < A.size(); i++)
	{
		cpx ^= A[i];
		if (cpx == B)
			c++;
		int h = cpx ^ B;
		if (visited.find(h) != visited.end())
		{
			c = c + visited[h];
		}
		visited[cpx]++;
	}
	return c;
}
