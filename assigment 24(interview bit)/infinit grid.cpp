int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int step = 0;
    for (int i = 1; i < A.size(); i++) {
        int x = abs(A[i - 1] - A[i]);
        int y= abs(B[i - 1] - B[i]);
        step += max(x, y);
    }
    return step;
