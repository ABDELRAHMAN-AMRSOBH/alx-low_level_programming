#!/usr/bin/python3
"""
description
"""


def island_perimeter(grid):
    """calculates and return perimeter"""
    width = len(grid[0])
    height = len(grid)
    ans = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                ans += 4
                if (j > 0 and grid[i][j - 1] == 1):
                    ans -= 2
                if (i > 0 and grid[i - 1][j] == 1):
                    ans -= 2
    return ans
