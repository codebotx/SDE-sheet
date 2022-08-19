class Solution
{
public:
	int lengthOfLongestSubstring(string s)
	{
		if (s.empty())
			return 0;
		vector<char> rep;
		vector<int> v;
		int count = 0;
		int maxi = 0;
		for (int i = 0; i < s.length(); i++)
		{
			auto it = find(rep.begin(), rep.end(), s[i]);
			if (it == rep.end())
			{
				rep.push_back(s[i]);
				count++;
				// cout<<count<<endl;
				v.push_back(count);
				// for(int j=0;j<rep.size();j++)
				//     cout<<rep[j]<<endl;
			}
			else
			{
				rep.erase(rep.begin(), ++it);
				// for(int j=0;j<rep.size();j++)
				//     cout<<rep[j]<<endl;
				count = rep.size();
				// cout<<count<<endl;
				rep.push_back(s[i]);
				count++;
				// cout<<count<<endl;
			}
		}
		if (v.empty())
			return s.length();
		else
			return *max_element(v.begin(), v.end());
	}
};