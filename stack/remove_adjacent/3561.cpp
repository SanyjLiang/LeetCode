#include <iostream>
#include <algorithm>
#include <string>
#include <stack>

class Solution {
public:
    bool is_consecutive(char x, char y)
    {
        int d=abs(x-y);
        return d==1||d==25;
    }

    std::string resultingString(std::string s) {
        std::stack<char>st;
        std::string ans;
        for(char &c:s)
        {
            if(!st.empty()&&is_consecutive(st.top(),c))
            {
                st.pop();
            }else{
                st.push(c);
            }
        }
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

int main(int argc,const char*argv[])
{
    std::string s;
    std::cin>>s;
    Solution so;
    std::string res=so.resultingString(s);
    std::cout<<res<<std::endl<<std::flush;
    return 0;
}