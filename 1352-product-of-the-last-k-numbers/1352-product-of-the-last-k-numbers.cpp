class ProductOfNumbers {
public:
    vector<int>numbs;
    ProductOfNumbers() {
        
    }
    
    void add(int num) {
        numbs.push_back(num);
    }
    
    int getProduct(int k) {
        int prod=1;
        int j=numbs.size()-1;
        while(k){
            prod*=numbs[j];
            k--;
            j--;
        }
        return prod;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */