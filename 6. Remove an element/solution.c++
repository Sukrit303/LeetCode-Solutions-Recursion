class Solution {
public:

    int removeElement(vector<int>& nums, int val) {
        int i=0;
        int count =0;

        for(int j=0 ;j <nums.size();j++){
            if(nums[j]== val){
                count++;
            } else {
                nums[i++] = nums[j];
            }
        }
        return nums.size()- count;
    }
};