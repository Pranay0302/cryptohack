import re

value = "73626960647f6b206821204f21254f7d694f7624662065622127234f726927756d"

twig = bytes.fromhex(value)


def xor(val, key):
    return bytes(x ^ key for x in val)

for val in range(256):
    op = xor(twig, val).decode(encoding='latin-1')
    # check = re.match("crypto", op)
    check = re.findall("crypto", op)
    if (op.startswith("crypto")):
        print(op)
