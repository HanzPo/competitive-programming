N = int(input())
student_answers = list()
correct_answers = list()

correct = 0

for _ in range(N):
    student_answers.append(input())
    
for _ in range(N):
    correct_answers.append(input())
    
for i in range(N):
    if (student_answers[i] == correct_answers[i]):
        correct += 1
        
print(correct)
