class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        int sum=0;
       for(int i=0;i<operations.size();i++)
       { 
        if(!st.empty() && operations[i]=="D")
        {
            st.push(2*(st.top()));
            sum+=st.top();
        }
        else if(!st.empty() && operations[i]=="C")
        {
            sum-=st.top();
            st.pop();
        }
        else if(!st.empty() && operations[i]=="+")
        {
            int t1=st.top(); st.pop();
            int t2=st.top();
            sum+=t1+t2;
            st.push(t1);
            st.push(t1+t2);
        }
        else {
            st.push(stoi(operations[i]));
            sum+=st.top();
        }
       }
       return sum;
    }
};