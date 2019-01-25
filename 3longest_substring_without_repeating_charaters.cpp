/*************************************************************************
	> File Name: 3longest_substring_without_repeating_charaters.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月25日 星期五 16时48分22秒
 ************************************************************************/

#include<iostream>
using namespace std;
class Solution {
    public:
    int lengthOfLongestSubstring(string s) {
                int longest=0;
                int nowlongest=0;
                int strlength=s.length();
                int i,j=1,k,rest=0;
                bool flag=false;
                for(i=0;i<strlength;)
        {
                       for(;j<strlength;j++)
            {
                               for(k=i;k<j;k++)
                                   if(s[k]==s[j])
                {
                                           flag=true;
                                           break;
                }
                               if(flag) break;
            }
                        nowlongest=j-i+rest;
                        if(nowlongest>longest)
                            longest=nowlongest;
                        if(longest==26) return 26;//加这一行，快了8ms
                        i=k+1;
                        rest=k-i+1;
                        flag=false;
                    
        }
                return longest;
            
    }

};
