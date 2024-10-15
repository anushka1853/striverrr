class Solution {
public:
    bool check(vector<int>& nums) {

        //this is leetcode submitted solution

        int n =  nums.size();

        int count = 0;

        for(int i=1; i<n; i++){

            if(nums[i-1] > nums[i]){
                count++;
            }
        }

        //compare (n-1)th element and 0th element as the element next to last element will 
        //be first element bcs of rotated nature

        if( nums[n-1] > nums[0]){

            count++;
        } 

        if(count <= 1){
            return true;
        }

        return false;
    }
};
