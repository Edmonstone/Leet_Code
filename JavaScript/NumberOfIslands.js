const numIslands = (grid) => {
    let CountIslands = 0;

    const check = (row, col) => {
        if (row < 0 || col < 0 || row >= grid.length || col >= grid[0].length || grid[row][col] === '0') {
            return;
        }

        grid[row][col] = '0';
        check(row + 1, col);
        check(row - 1, col);
        check(row, col + 1);
        check(row, col - 1);
    };

    for (let row = 0; row < grid.length; row++) {
        for (let col = 0; col < grid[0].length; col++) {
            if (grid[row][col] === '1') {
                CountIslands++;
                check(row, col);
            }
        }
    }

    return CountIslands;
};
