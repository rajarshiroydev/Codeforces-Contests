t = int(input())
while t > 0:
    n, m = map(int, input().split())
    x = input()
    s = input()
    count = 0
    while True:
        if len(x) < len(s):
            if s in x:
                print(count)
                break
            else:
                x = x + x
                count += 1
        if len(x) > len(s):
            and s not in x:
            print(-1)
            break
    t -= 1
