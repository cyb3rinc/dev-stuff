# Simple madlibs
mode = input('Do you want RO or EN mode? (RO, EN)\n>>> ')

if mode == 'EN':
    noun = input('Please input a noun: ')
    adjective = input('Please input an adjective: ')

    noun2 = input('Please input a noun again: ')
    adjective2 = input('Please input an adjective again: ')

    print(f'The {noun} is really {adjective}\
            \nBut it cannot walk to {noun2} because it is also {adjective2}')

elif mode == 'RO':
    noun = input('Substantiv: ')
    adjective = input('Adjectiv: ')

    noun2 = input('Substantiv: ')
    adjective2 = input('Adjectiv: ')

    print(f'{noun} este foarte {adjective}\
            \nDar nu poate vorbi cu {noun2} pentru ca este si foarte {adjective2}')

