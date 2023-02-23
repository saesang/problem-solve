K = int(input())

# 정수 list 저장
nums = []  # 정수 list 초기화
for i in range(K):
    tmp = int(input())
    if tmp != 0:  # tmp가 0이 아니면
        nums.append(tmp)    # nums에 추가
    else:  # tmp가 0이면
        del nums[-1]    # nums의 맨 뒤 원소 삭제

# nums의 원소 모두 더하기
sum = 0  # sum 초기화
for num in nums:
    sum += num

print(sum)
