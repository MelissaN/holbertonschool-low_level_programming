#!/usr/bin/python3
"""
Module Island Perimeter
"""


def island_perimeter(grid):
    """ Calculate perimeter of grid where "1" is found"""
    maxWidth = 0
    length = 0
    for i in range(len(grid)):
        width = 0
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                width += 1
        if width:
            length += 1
        if width > maxWidth:
            maxWidth = width
    return ((maxWidth + length) * 2)
