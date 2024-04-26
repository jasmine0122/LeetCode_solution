int equalPairs(int** grid, int gridSize, int* gridColSize) {
    int count=0;
    
    for(int i=0; i<gridSize; i++){
        for(int j=0; j<gridSize; j++){
            for(int k=0; k<gridSize; k++){
                if(grid[i][k] != grid[k][j])
                    break;
                if(k == gridSize-1)
                    count++;
            }
        }
    }
    return count;
}