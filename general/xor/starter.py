string = "label"

for str in string:
    twig = ord(str) ^ 13
    sol = chr(twig)
    print(sol)
