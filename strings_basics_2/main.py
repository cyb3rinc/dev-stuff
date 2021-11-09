# String formatting

# name = 'John'
# age = 55

# 1st method (f strings)
# print(f'hi {name}. You are {age} years old.')

# 2nd method (.format)
# print('hi {}. You are {} years old.'.format(name, age))
# print('hi {1}. You are {0} years old.'.format(name, age)) # With order
# print('hi {new_name}. You are {new_age} years old.'.format(new_name='sally', new_age=100))

# -------------------------------

# String indexes (slicing)

selfish = '01234567'
        #  01234567

# [start:stop]
print(selfish[0:2]) # 01
print(selfish[0:7]) # 0123456
print(selfish[0:8]) # 01234567
print(selfish[1:])  # 1234567
print(selfish[:5])  # 01234
print(selfish[-1])  # 7
print(selfish[-2])  # 6

# [start:stop:stepover]
print(selfish[0:8:2]) # 0246
print(selfish[::1]) # 01234567
print(selfish[::-1]) # 76543210

# -------------------------------

# Immutability

# selfish[0] = '8' # error, because strings are immutable
                   # the only way to change is to change the whole string






