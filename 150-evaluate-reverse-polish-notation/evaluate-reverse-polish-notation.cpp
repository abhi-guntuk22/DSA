class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;

        for(string &s: tokens)
        {
            if( !st.empty() && s=="+")
            {
              int t1=st.top()
              ;st.pop();
             int  t2=st.top();
              st.pop();
              st.push(t2+t1);
            }
            else if( !st.empty() &&s=="-")
            {
              int t1=st.top() ;
              st.pop();
             int  t2=st.top() ;
             st.pop();
              st.push(t2-t1);
            }
            else if(  !st.empty() && s=="*")
            {
              int  t1=st.top();
               st.pop();
              int t2=st.top();
               st.pop();
              st.push(t2*t1);

            }
            else if( !st.empty() && s== "/")
            {
              int  t1=st.top();
               st.pop();
              int t2=st.top();
               st.pop();
              st.push(t2/t1);
            }
            else {
                st.push(stoi(s));
            }
        }
        return st.top();
    }
};