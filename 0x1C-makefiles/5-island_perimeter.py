#!/usr/bin/python3
"""grid"""


def island_perimeter(grid):
    """grid is a list of integer"""
    row = len(grid)
    col = len(grid[0])

    island = 0
    neg = 0
    for i in range(row):
        for j in range(col):
            if grid[i][j] == 1:
                island = island + 1
                if i + 1 < row and grid[i + 1][j]:
                    neg = neg + 1
                if j + 1 < col and grid[i][j + 1]:
                    neg = neg + 1
    return island * 4 - neg * 2
