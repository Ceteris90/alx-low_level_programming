#!/usr/bin/python3
"""
calculate the perimeter of the island
"""


def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in the grid.

    Args:
        grid (list): A list of list of integers representing the grid.

    Returns:
        int: The perimeter of the island.

    """
    c = 0
    length = len(grid) - 1
    width = len(grid[0]) - 1

    for i, r in enumerate(grid):
        for j, n in enumerate(r):
            if n == 1:
                if i == 0 or grid[i - 1][j] != 1:
                    c += 1
                if j == 0 or grid[i][j - 1] != 1:
                    c += 1
                if j == width or grid[i][j + 1] != 1:
                    c += 1
                if i == length or grid[i + 1][j] != 1:
                    c += 1
    return c
