class CustomStack {
public:
     int index=-1;
     int maxSize;
     vector<int>st;
    CustomStack(int maxSize) {
        this->maxSize=maxSize;
        st.resize(maxSize);
    }
    void push(int x) {
        if(index==maxSize-1)
        {
            return;
        }  
        else
        {
            index++;
            st[index]=x;
        } 
        }
    int pop() {
        if(index==-1)
        return -1;
        int x=st[index];
        index--;
        return x;
    }
    
    
    void increment(int k, int val) {
       for(int i = 0; i < min(k, index + 1); i++)
        {
    st[i] += val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */