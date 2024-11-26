import random

def FillMatrix(rowCount, columnCount):
    matrix = []
    for i in range(rowCount):
        row = []
        for j in range(columnCount):
            row.append(random.randint(0, 9))
        matrix.append(row)
    return matrix

def PrintMatrix(matrix):
    for i in matrix:
        for j in i:
            print(j, end=' ')   
        print()

matrix = FillMatrix(3, 3)
PrintMatrix(matrix)
