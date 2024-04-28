bool canMakeSquare(char** grid, int gridSize, int* gridColSize) {
    int count = 0;
    
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            if(grid[i][j] == 'W')
                count++;
            if(grid[i][j+1] == 'W')
                count++;
            if(grid[i+1][j] == 'W')
                count++;
            if(grid[i+1][j+1] == 'W')
                count++;
            if(count != 2)
               return 1;
            else
               count = 0;
        }
    }
    return 0;
}