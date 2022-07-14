#!/usr/bin/python3
"""Defines a island perimeter measuring function"""


def island_perimeter(grid):
    """temp"""

    width = len(grid[0])
    height = len(grid)
    size = 0
    edges = 0

    for j in range(height):
        for i in range(width):
            if grid[j][i] == 1:
                size += 1
                if(j > 0 and grid[j - 1][i] == 1):
                    edges += 1
                if (i > 0 and grid[j][i - 1] == 1):
                    edges += 1
    return size * 4 - edges * 2
