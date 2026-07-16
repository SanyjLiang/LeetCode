#include <iostream>
#include <string>
#include <stack>

class Solution {
public:
    int minAddToMakeValid(std::string s) {
        std::stack<char>st;
        int cnt=0;
        for(auto &c:s)
        {
            if(c=='(')
            {
                st.push(c);
            }else if(!st.empty()&&c==')')
            {
                st.pop();
            }else if(st.empty()&&c==')')
            {
                cnt++;
            }
        }
        return !st.empty()?cnt+st.size():cnt;
    }
};

int main(int argc,const char*argv[])
{
    std::string s;
    std::cin>>s;
    Solution so;
    int res=so.minAddToMakeValid(s);
    std::cout<<res<<std::endl<<std::flush;
    return 0;
}