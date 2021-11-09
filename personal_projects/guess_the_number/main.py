# Simple guess the number game
from random import randint

g_easy = 5
g_normal = 3
g_impossible = 1

difficulty = ['easy', 'normal', 'impossible']
difficulty_choice = input('What difficulty do you want? (easy, normal, impossible)\n>>> ')

def game_easy(g_easy):
    guessed = False
    number = randint(1, 15)
    guess_number = 0

    while guessed == False and g_easy > 0:
        guess_number = int(input('Enter your guess: '))
        if guess_number == number and type(guess_number) == int:
            guessed = True
        if guess_number != number and type(guess_number) == int:
            print(f'Sorry, your guess was wrong! You still have {g_easy - 1} guesses left.')
            g_easy -= 1

    if g_easy == 0:
        print('You lost! Try again.')
    else:
        print('Congratulations, you won!')

    return g_easy

def game_normal(g_normal):
    guessed = False
    number = randint(1, 15)
    guess_number = 0

    while guessed == False and g_normal > 0:
        guess_number = int(input('Enter your guess: '))
        if guess_number == number and type(guess_number) == int:
            guessed = True
        if guess_number != number and type(guess_number) == int:
            print(f'Sorry, your guess was wrong! You still have {g_normal - 1} guesses left.')
            g_normal -= 1
            continue

    if g_normal == 0:
        print('You lost! Try again.')
    else:
        print('Congratulations, you won!')

    return g_normal

def game_impossible(g_impossible):
    guessed = False
    number = randint(1, 15)
    guess_number = 0

    while guessed == False and g_impossible > 0:
        guess_number = int(input('Enter your guess: '))
        if guess_number == number and type(guess_number) == int:
            guessed = True
        if guess_number != number and type(guess_number) == int:
            g_impossible -= 1
            continue

    if g_impossible == 0:
        print('You lost! Try again.')
    else:
        print('Congratulations, you won!')

    return g_impossible

if difficulty_choice in difficulty:
    if difficulty_choice == 'easy':
        game_easy(g_easy)
    if difficulty_choice == 'normal':
        game_normal(g_normal)
    if difficulty_choice == 'impossible':
        game_impossible(g_impossible)

