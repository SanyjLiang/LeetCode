#include <iostream>
#include <algorithm>
#include <string>
#include <stack>

class Solution {
public:
    //获取下一个字母
    char getNext(char c)
    {
        int pos=(c-'a'+1)%26;
        return pos+'a';
    }

    //获取上一个字母
    char getPrev(char c)
    {
        int pos=(c-'a'-1+26)%26;
        return pos+'a';
    }

    std::string resultingString(std::string s) {
        std::stack<char>st;
        std::string ans;
        for(char &c:s)
        {
            if(!st.empty()&&(getPrev(st.top())==c||getNext(st.top())==c))
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