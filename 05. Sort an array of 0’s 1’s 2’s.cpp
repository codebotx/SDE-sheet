class Solution {
public:
    void sortColors(vector<int>& nums) {
        int mid=0, i=0,j=nums.size()-1;
        int swap=0;
        while(mid<=j){
            if(nums[mid]==0){
                swap=nums[mid];
                nums[mid]=nums[i];
                nums[i]=swap;
                mid++;
                i++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else{
                swap=nums[mid];
                nums[mid]=nums[j];
                nums[j]=swap;
                j--;
            }
        }
        
    }
};