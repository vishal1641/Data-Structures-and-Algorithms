class MedianFinder {
public:
    priority_queue<int>maxheap;
    priority_queue<int,vector<int>,greater<int>>minheap;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
       if(maxheap.empty()||num<=maxheap.top())
           maxheap.push(num);
        else
            minheap.push(num);
        
        if(maxheap.size()>minheap.size()+1){
            minheap.push(maxheap.top());
            maxheap.pop();
        }
          else if(maxheap.size()+1<minheap.size()){
            maxheap.push(minheap.top());
            minheap.pop();
        }
           
           
    }
    
    double findMedian() {
      if(maxheap.size() > minheap.size()) return maxheap.top();
        else if(minheap.size() > maxheap.size()) return minheap.top();
        else return (maxheap.top() + minheap.top()) / 2.0;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */