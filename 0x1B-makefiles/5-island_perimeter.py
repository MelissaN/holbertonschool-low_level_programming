#!/usr/bin/python3
"""
Module Island Perimeter
"""


def island_perimeter(grid):
    """ Calculate perimeter of grid where "1" is found"""
    if grid == []:
        return 0

    leftmost = rightmost = 0
    length = 0
    for i in range(len(grid)):
        w_idx = w_idxL = w_idxR = -1
        for j in range(len(grid[0])):
            if grid[i][j] == 1 and w_idxL >= 0:
                w_idxR += 1
            elif grid[i][j] == 1:
                w_idxL = w_idxR = j
            else:
                pass
        if w_idxL >= 0:
            length += 1
        if (w_idxL < leftmost):
            leftmost = w_idxL
        if (w_idxR > rightmost):
            rightmost = w_idxR
    return (((rightmost - leftmost + 1) + length) * 2)
