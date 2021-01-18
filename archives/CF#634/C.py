def solve(l, n):
    t = max(l)
    return max(min(n-1, t), min(n, t-1))


T = int(input())
for t in range(T):
    n = int(input())
    a = list(map(int, input().strip().split()))
    d = {}

    for item in a:
        if item not in d:
            d[item] = 1
        else:
            d[item] += 1
    
    l = sorted(d.values())
    # cf = [l[0]]
    # for i in range(1, len(l)):
    #     cf.append(cf[-1]+l[i])
    # print(l)
    print(solve(l, len(l)))
