#include <iostream>
#include <stack>
#include <vector>
#include <string>
#include <algorithm>

class Solution {
public:
    std::vector<long long> mergeAdjacent(std::vector<int>& nums) {
        std::vector<long long>vt;
        for(auto &n:nums)
        {
            long long cur=n;
            while(!vt.empty()&&vt.back()==cur)
            {
                vt.pop_back();
                cur=2*cur;
            }
            vt.push_back(cur);
        }
        return vt;
    }
};


int main(int argc,const char*argv[])
{
    std::vector<int>nums;
    int num=0;
    for(int i=0;i<4;i++)
    {
        std::cin>>num;
        nums.push_back(num);
    }
    Solution so;
    std::vector<long long>res=so.mergeAdjacent(nums);
    std::for_each(res.begin(),res.end(),[](long long val){
        std::cout<<val<<" ";
    });
    
    return 0;
}