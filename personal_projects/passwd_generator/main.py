# Random password generator written in Python
import random
import string

print('Welcome to the random password generator!')
print('------------------------------')
length = input('Enter a length for your password: ')

characters = list(string.hexdigits)

for symbol in list(string.punctuation):
    characters.append(symbol)

try:
    raw_passwd = random.sample(characters, k=int(length))
except ValueError:
    print('Your password length is too large.')
    quit()

readable_passwd = ""

for char in raw_passwd:
    readable_passwd += char

print('------------------------------')
print(f'Your password is {readable_passwd}')

