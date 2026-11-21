class CustomStack {
public:
vector<int>nums;
int i,maxSize;
    CustomStack(int maxSize) {
        this->maxSize=maxSize;
    }
    void push(int x) {
        if(nums.size()<maxSize)
        {
            nums.push_back(x);
        }
    }
    int pop() {
        if(nums.empty())
        {
            return -1;
        }
        else
        {
        int removed=nums.back();
        nums.pop_back();
        return removed;
        }
    }
    void increment(int k, int val) {
            for(i=0;i<min(k,(int)nums.size());i++)
            {
                nums[i]+=val;
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