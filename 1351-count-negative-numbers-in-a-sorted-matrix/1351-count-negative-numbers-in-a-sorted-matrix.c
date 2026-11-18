int countNegatives(int** grid, int gridSize, int* gridColSize) {
    int rows = gridSize;
    int cols = gridColSize[0];
    int count = 0;
    int r = rows - 1; 
    int c = 0;      
    while (r >= 0 && c < cols) {
        if (grid[r][c] < 0) {
            count += (cols - c);
            r--; 
        } else {
            c++;
        }
    }
    return count;
}
