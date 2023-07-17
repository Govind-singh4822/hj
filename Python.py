
// Extract digit
def solve(s):
    res = ''.join(filter(lambda i: i.isdigit(), s))
    return str(res);

s = input()
ans = solve(s)
print(ans)

helowq12 word34 jsk56
123456

--------------------------------------------------------------------------

def solve(s):
    res = [int(i) for i in s.split() if i.isdigit()]
    return str(res);

s = input()
ans = solve(s)
print(ans)

as 1 asas 34 asda 12
[1, 34, 12]
