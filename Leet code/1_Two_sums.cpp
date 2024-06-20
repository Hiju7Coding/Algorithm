#include<vector>
#include<iostream>

class Solution {

/*
    nums:    2 7 11 15
    id:      0 1 2  3
    
    target: 9 = nums[0] + nums[1]

    return: [0,1]



    knowledge: Vector
*/
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> out;
        for(int i = 0; i < nums.size() - 1; i++){          
            for(int j = i + 1; j < nums.size();j++){
                if(nums[i] + nums[j] == target){
                    out.push_back(i);
                    out.push_back(j);
                }
            }
        }
        return out;
    }
};

int main(){
	vector<int> nums = [2,7,11,15];
	int target = 9;
	Solution sol = new Solution();
	cout<<"Result: "<<sol.twoSum(nums,target);
	return 0;
}
