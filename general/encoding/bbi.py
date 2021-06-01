from Crypto.Util.number import long_to_bytes

value = 11515195063862318899931685488813747395775516287289682636499965282714637259206269
ref = hex(value)

sol = long_to_bytes(int(ref, 16)).decode()
print(sol)
