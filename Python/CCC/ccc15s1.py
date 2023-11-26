nums = []

for _ in range(int(input())):
    current_num = int(input())
    
    if (current_num == 0):
        nums.pop()
    else:
        nums.append(current_num)
        
print(sum(nums))
