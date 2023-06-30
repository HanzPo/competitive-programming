current_input = ""
inputs_list = [[], []]

current_input = input()
inputs_list[0].append(current_input.split()[0])
inputs_list[1].append(int(current_input.split()[1]))

while (current_input.split()[0] != "Waterloo"):
    current_input = input()
    inputs_list[0].append(current_input.split()[0])
    inputs_list[1].append(int(current_input.split()[1]))
    
min_temp = 201
min_index = 0

for i in range(len(inputs_list[1])):
    if (inputs_list[1][i] < min_temp):
        min_temp = inputs_list[1][i]
        min_index = i
        
print(inputs_list[0][min_index])
