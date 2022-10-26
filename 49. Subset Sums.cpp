class Solution
{
public:
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int> res;
        if(N==1){
            res.push_back(0);
            res.push_back(arr[0]);
            return res;
        }
        else if(N>1){
            vector<int> temp = subsetSums(arr,N-1);
            res=temp;
            for(int i=0;i<temp.size();i++)
				res.push_back(temp[i]+arr[N-1]);
			return res;
        }
    }
};
