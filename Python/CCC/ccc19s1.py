grid = [[1, 2], [3, 4]]

flips = list(input())

for i in flips:
    if i == "V":
        for j in range(len(grid)):
            grid[j] = grid[j][::-1]
    elif i == "H":
        temp = grid[0][:]
        grid[0] = grid[1][:]
        grid[1] = temp
    else:
        print("Something went wrong")
        
for i in range(len(grid)):
    print(f"{grid[i][0]} {grid[i][1]}")
