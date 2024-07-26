# 입력 받기
n = int(input())
numbers = list(map(int, input().split()))

# 최솟값과 최댓값 찾기
min_value = min(numbers)
max_value = max(numbers)

# 결과 출력
print(min_value, max_value)