class Solution
{
public:
	int maxSubArray(vector<int> &nums)
	{

		// O(n^2)

		// long int max=INT_MIN, temp=0;
		// for(int i=0;i<nums.size();i++){
		//     for(int j=i;j<nums.size();j++){
		//        temp+=nums[j];
		//         if(temp>max)
		//             max=temp;
		//     }
		//     temp=0;
		// }
		// return max;
		vector<int> subarray;
		int msf = INT_MIN, meh = 0;
		int s = 0;
		for (int i = 0; i < nums.size(); i++)
		{
			meh += nums[i];
			if (meh > msf)
			{
				subarray.clear();
				msf = meh;
				subarray.push_back(s);
				subarray.push_back(i);
			}
			if (meh < 0)
			{
				meh = 0;
				s = i + 1;
			}
		}

		return msf;
	}
};