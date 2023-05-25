#!/usr/bin/python3

def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in the grid.

    Args:
        grid (list): A list of list of integers representing the grid.

    Returns:
        int: The perimeter of the island.

    """
    if not grid:
        return 0

    rows = len(grid)
    cols = len(grid[0])

    perimeter = 0

    for row in range(rows):
        for col in range(cols):
            if grid[row][col] == 1:
                if row == 0 or grid[row - 1][col] != 1:
                    perimeter += 1
                if col == 0 or grid[row][col - 1] != 1:
                    perimeter += 1
                if col == cols - 1 or grid[row][col + 1] != 1:
                    perimeter += 1
                if row == rows - 1 or grid[row + 1][col] != 1:
                    perimeter += 1

    return perimeter

