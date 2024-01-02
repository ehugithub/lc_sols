int maxProfit(vector<int>& prices) {
    int min = INT_MAX;
    int max = 0;

    for(auto &num : prices) {
        if(num < min) {
            min = num;
        }
        if(num - min > max) {
            max = num - min;
        }
    }

    return max;
}
