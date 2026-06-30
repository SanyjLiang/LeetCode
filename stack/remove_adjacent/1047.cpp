#include <iostream>
#include <stack>
#include <string>
#include <functional>
#include <algorithm>
using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        string str;
        for(auto &c:s)
        {
            if(!st.empty()&&st.top()==c)
            {
                st.pop();
            }else{
                 st.push(c);
            }
           
        }
        while(!st.empty())
        {
            str+=st.top();
            st.pop();
        }        
        reverse(str.begin(),str.end());
        return str;
    }
};

int main(int argc,const char*argv[])
{
    string s;
    cin>>s;
    Solution so;
    string res=so.removeDuplicates(s);
    cout<<res<<endl;
    return 0;
}