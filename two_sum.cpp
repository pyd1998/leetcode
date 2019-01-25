/*************************************************************************
	> File Name: two_sum.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月25日 星期五 16时01分40秒
 ************************************************************************/

#include<iostream>
using namespace std;
class Solution {
    public:
    vector<int> twoSum(vector<int>& nums, int target) {
                int temp;
                vector<int> answer(2);
                answer[0]=-1;
                answer[1]=-1;
                int i,j;
        for(i=0;i<nums.size();i++)
        {
            temp=target-nums[i];
            for(j=i+1;j<nums.size();j++)
            if(nums[j]==temp)
            {
                answer[0]=i;
                answer[1]=j;
                return answer;
                                
            }
                    
        }
               return answer;

    };

};
