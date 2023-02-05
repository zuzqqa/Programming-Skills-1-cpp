class Solution {
public:
    int kthFactor(int n, int k) {
        set <int> factors;

        int i = n / 2;

        while ( i > 0 ){
            if( n % i == 0 ) factors.insert(i);
            i--;
        }

        factors.insert(n);
        
        if( k > factors.size()) return -1;
        else 
            return *next(factors.begin(), k - 1);
    }
};
