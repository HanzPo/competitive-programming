input_string = input()

count = 0

count += input_string.count("I")
count += input_string.count("O")
count += input_string.count("S")
count += input_string.count("H")
count += input_string.count("Z")
count += input_string.count("X")
count += input_string.count("N")

if (count == len(input_string)):
    print("YES")
else:
    print("NO")
