#!/user/bin/python3
"""
    This is a module that Create a function def island_perimeter(grid)

    Requirements:
        => First line contains #!/usr/bin/python3
        => You are not allowed to import any module
        => Module and function must be documented
"""


def island_perimeter(grid):
    """
        This is a function that returns the perimeter of the island described
        in grid:
        ** grid is a list of list of integers:
            => 0 represents a water zone
            => 1 represents a land zone
            => One cell is a square with side length 1
            => Grid cells are connected horizontally/vertically (not diagonall
                y).
            => Grid is rectangular, width and height don’t exceed 100
        ** Grid is completely surrounded by water, and there is one island
            (or nothing).
        ** The island doesn’t have “lakes” (water inside that isn’t connected
            to the water around the island).
    """

    perimeter = 0
    for i in range(len(grid)):

        if 1 in grid[i]:
            perimeter += 2

        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                try:
                    if grid[i - 1][j] == 0 or i == 0:
                        perimeter += 1
                except IndexError:
                    if i == 0:
                        preimeter += 1

                try:
                    if grid[i + 1][j] == 0 or i == len(grid) - 1:
                        perimeter += 1
                except IndexError:
                    if i == len(grid) - 1:
                        perimeter += 1

    return perimeter
