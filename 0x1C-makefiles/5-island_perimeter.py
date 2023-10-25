#!/usr/bin/python3


""" calculate the perimeter of an island described in a grid."""


def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in the grid.

    Args:
        grid (list of list of int): The grid representing the island.

    Returns:
        int: The perimeter of the island.

    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    perimeter = 0

    for n in range(height):
        for j in range(width):
            if grid[n][j] == 1:
                perimeter += 1
                if (j > 0 and grid[n][j - 1] == 1):
                    edges += 1
                if (n > 0 and grid[n - 1][j] == 1):
                    edges += 1
    return perimeter * 4 - edges * 2
