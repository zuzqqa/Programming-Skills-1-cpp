class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(), salary.end());
        double sum = 0;

        for( vector<int>::iterator itr = salary.begin() + 1; itr != salary.end() - 1; itr++){
            sum += *itr;
        }

        return sum/ (salary.size() - 2);
    }
};
