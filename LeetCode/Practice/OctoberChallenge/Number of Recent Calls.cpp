class RecentCounter {
public:std::queue<int> q;
    RecentCounter() {
        while(q.empty()!=true){
            q.pop();
        }
    }
    
    int ping(int t) {
        while((t-q.front()>3000)&&(q.size()>0)){
            q.pop();}
        q.push(t);         
        return q.size();
        
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */
