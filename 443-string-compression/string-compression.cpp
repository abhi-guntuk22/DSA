class Solution {
public:
    int compress(vector<char>& chars) {

        int read =0;
        int write=0;
        int n=chars.size();

        while(read<n)
        {
           int  count=0;
            int current=chars[read];
            while(read<n  && current==chars[read])
            {
                count++;
                read++;
            }

                chars[write++]=current;
                if(count>1)
                {
                    string cnt= to_string(count);
                    for(char c:cnt)
                    {
                        chars[write++]=c;
                    }
                }
        }
        return write;
    }
};