N = int(input())

t_count = 0
s_count = 0

for _ in range(N):
    current_line = input().lower()
    t_count += current_line.count("t")
    s_count += current_line.count("s")
    
if (t_count > s_count):
    print("English")
else:
    print("French")
