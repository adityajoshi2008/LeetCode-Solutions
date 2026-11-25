bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target) {
    if (matrix == NULL || matrixSize == 0 || matrixColSize == NULL || matrixColSize[0] == 0) {
        return false;
    }
    int rows = matrixSize;
    int cols = matrixColSize[0];
    int left = 0;
    int right = rows * cols - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        int val = matrix[mid / cols][mid % cols];
        if (val == target) {
            return true;
        } else if (val < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return false;
}