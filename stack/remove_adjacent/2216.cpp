#include <iostream>
#include <stack>
#include <vector>

class Solution {
public:
    int minDeletion(std::vector<int>& nums) {
        std::stack<int>st;
        for(auto n:nums)
        {
            if(st.size()%2==0)
            {
                st.push(n);
            }else if(st.top()!=n)
            {
                st.push(n);
            }
        }
        if(st.size()%2==0)
        {
            return nums.size()-st.size();
        }else {
            return nums.size()-(st.size()-1);
        }
    }
};

int main(int argc,const char*argv[])
{
    std::vector<int>nums;
    int n=0;
    std::cin>>n;
    int val=0;
    for(int i=0;i<n;i++)
    {
        std::cin>>val;
        nums.push_back(val);
    }
    Solution so;
    int res=so.minDeletion(nums);
    std::cout<<res<<std::endl<<std::flush;              
    std::cout<<"你好"<<std::endl<<std::flush;      aaaaaaaa
    return 0;
}
