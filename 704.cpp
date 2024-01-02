int search(vector<int>& nums, int target) {
    int min = 0;
    int max = nums.size() - 1;
    int mid;

    do {
        mid = (min + max) / 2;

        if(nums[mid] < target) {
            if(min == mid) {
                min++;
            }
            else {
                min = mid;
            }
        }
        else if (nums[mid] == target) {
            return mid;
        }
        else {
            if(max == mid) {
                max--;
            }
            else {
                max = mid;
            }
        }

    } while(min != max);

    mid = (min + max) / 2;
    if(nums[mid] == target) {
        return mid;
    }

    return -1;
}
