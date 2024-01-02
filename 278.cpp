// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low = 0;
        int high = n;
        double mid;

        while(1) {
            mid = low + (high - low) / 2;
            if(low == mid) {
                return mid + 1;
            }
            if(isBadVersion(mid)) {
                high = mid;
            }
            else {
                low = mid;
            }
        }
    }
};



/*
  o o o o o o
  - - - - + +

  + = bad (T)
  - = not bad (F)

  mid = 5 / 2 = 2

  l = 2, h = 5 (F)
  m = 7 / 2 = 3

  l = 3, h = 5
  m = 4 (T)

  l = 3, h = 4
  m = 3
*/


