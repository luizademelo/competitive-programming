class RecentCounter:

    def __init__(self):
        self.requests = []

    def ping(self, t: int) -> int:
        left = t - 3000
        self.requests.append(t)
        to_delete = 0
        for i in range(len(self.requests)):
            if self.requests[i] < left:
                to_delete += 1
            else:
                break
        
        for i in range(to_delete):
            self.requests.pop(0)
            
        
        return len(self.requests)


# Your RecentCounter object will be instantiated and called as such:
# obj = RecentCounter()
# param_1 = obj.ping(t)