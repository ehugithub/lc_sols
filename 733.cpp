class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(image[sr][sc] == color) {
            return image;
        }

        int s = image[sr][sc];

        fill(image, sr, sc, color, s);

        return image;

    }


    void fill(vector<vector<int>>& image, int sr, int sc, int color, int s) {
        if(sr < 0 || sc < 0 || sr >= image.size() || sc >= image[0].size() || image[sr][sc] != s) {
            return;
        }

        image[sr][sc] = color;

        fill(image, sr + 1, sc, color, s);
        fill(image, sr - 1, sc, color, s);
        fill(image, sr, sc + 1, color, s);
        fill(image, sr, sc - 1, color, s);
    }
};
