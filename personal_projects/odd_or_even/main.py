# Simple python odd or even program
number = input('Enter a number: ')

try:
    number = float(number)
except:
    print('Invalid input.')
    quit()

if number % 2 == 0:
    try:
        print(f'{int(number)} is even.')
    except:
        print(f'{number} is even.')
elif number % 2 != 0:
    print(f'{number} is odd.')
