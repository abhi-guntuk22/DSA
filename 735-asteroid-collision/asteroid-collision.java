class Solution {
    public int[] asteroidCollision(int[] asteroids) {
        Stack<Integer> st=new Stack<>();
        Stack<Integer> st1=new Stack<>();
        int i=0;
        while(i<asteroids.length){
            int num=asteroids[i];
             if(!st.isEmpty() && st.peek()<0){
                    st.push(num);
                    i++;
                    continue;
                }
            if(num>0){
              st.push(num);
            }
            else{
              while(!st.isEmpty() && st.peek()<Math.abs(num) && st.peek()>0){
                  st.pop();
              }
              if(!st.isEmpty() && st.peek()==Math.abs(num)){
                st.pop();
                i++;
                continue;
              }
              if(st.isEmpty() || st.peek()<0){
                st.push(num);
              }
            }
            i++;
        }
        int n=st.size();
        int []arr=new int[n];
        int j=0;
        while(!st.isEmpty()){
            st1.push(st.peek());
            st.pop();
        }
        while(!st1.isEmpty()){
           arr[j]=st1.peek();
            st1.pop();
            j++;
        }

        return arr;
    }
}