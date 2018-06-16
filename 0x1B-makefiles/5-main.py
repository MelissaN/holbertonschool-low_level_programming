#!/usr/bin/python3
"""
Find perimeter of 1's (4 sides of 3 in this instance of grid)
"""
island_perimeter = __import__('5-island_perimeter').island_perimeter

if __name__ == "__main__":
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]
    grid2 = []
    grid3 = [[1]]
    grid4 = [
        [1, 0],
        [0, 1]
    ]
    print(island_perimeter(grid))  # 12
    print(island_perimeter(grid2))  # 0
    print(island_perimeter(grid3))  # 4
    print(island_perimeter(grid4))  # 8
