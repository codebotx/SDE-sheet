//{ Driver Code Starts
// Program to find minimum number of platforms
// required on a railway station
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
	// Function to find the minimum number of platforms required at the
	// railway station such that no train waits.
	int findPlatform(int arr[], int dep[], int n)
	{
		vector<pair<int, int>> vect;
		for (int i = 0; i < n; i++)
			vect.push_back(make_pair(arr[i], dep[i]));
		sort(vect.begin(), vect.end(),
				 [&](const pair<int, int> &a, const pair<int, int> &b)
				 {
					 return (a.first < b.first);
				 });
		int p = 0;
		while (!vect.empty())
		{
			int ct = 0;
			for (int i = 1; i < vect.size(); i++)
			{
				if (vect[i].first >= vect[ct].second)
				{
					vect.erase(vect.begin() + ct);
					i--;
					ct = i;
				}
			}
			vect.erase(vect.begin() + ct);
			p++;
		}
		return p;
	}
};

//{ Driver Code Starts.
// Driver code
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int arr[n];
		int dep[n];
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		for (int j = 0; j < n; j++)
		{
			cin >> dep[j];
		}
		Solution ob;
		cout << ob.findPlatform(arr, dep, n) << endl;
	}
	return 0;
}
// } Driver Code Ends