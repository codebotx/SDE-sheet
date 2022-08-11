class Solution
{
public:
	int maxProfit(vector<int> &prices)
	{
		int max = INT_MIN;
		reverse(prices.begin(), prices.end());
		if (is_sorted(prices.begin(), prices.end()))
			return 0;
		else
			reverse(prices.begin(), prices.end());

		int maxPro = 0;
		int n = arr.size();
		int minPrice = INT_MAX;

		for (int i = 0; i < arr.size(); i++)
		{
			minPrice = min(minPrice, arr[i]);
			maxPro = max(maxPro, arr[i] - minPrice);
		}

		return maxPro;

		// O(n^2)
		//  for(int i=prices.size()-1;i>=0;i--){
		//      for(int j=0;j<i;j++){
		//          if(prices[j]<prices[i]){
		//              if(prices[i]-prices[j]>max)
		//                  max=prices[i]-prices[j];
		//          }
		//      }
		//  }

		return max;
	}
};