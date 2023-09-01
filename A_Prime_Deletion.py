def is_prime(number):
    if number <= 1:
        return False

    for i in range(2, int(number**0.5) + 1):
        if number % i == 0:
            return False

    return True


n = int(input())
while n > 0:
    s = input()
    ans = ""
    for i in s:
        if len(ans) >= 1:
            ans[1] = i
        else:
            ans = ans + i
        if len(ans) >= 2 and is_prime(int(ans)):
            print(ans)
            break
    n -= 1
