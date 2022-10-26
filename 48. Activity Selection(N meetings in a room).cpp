int maxMeetings(int start[], int end[], int n)
{
	vector<pair<int, int>> vect;
	for (int i = 0; i < n; i++)
		vect.push_back(make_pair(start[i], end[i]));
	sort(vect.begin(), vect.end(), [&](const pair<int, int> &a, const pair<int, int> &b)
			 { return (a.second < b.second); });
	int cnt = 1;
	int endt = vect[0].second;
	for (int i = 1; i < n; i++)
	{
		if (vect[i].first > endt)
		{
			endt = vect[i].second;
			cnt++;
		}
	}
	return cnt;
}
