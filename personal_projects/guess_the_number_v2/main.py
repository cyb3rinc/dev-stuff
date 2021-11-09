# Guess the number game
import random

difficulty = ['baby', 'easy', 'normal', 'expert', 'random']
difficulty_choice = input('Choose your difficulty (baby, easy, normal, expert, random)\n>>> ')
random_number = random.randint(1, 11)

if difficulty_choice in difficulty:
    if difficulty_choice.lower() == 'baby':
        guesses = 10
    if difficulty_choice.lower() == 'easy':
        guesses = 5
    if difficulty_choice.lower() == 'normal':
        guesses = 3
    if difficulty_choice.lower() == 'expert':
        guesses = 1
    if difficulty_choice.lower() == 'random':
        guesses = random.randint(1, 11)
        print(f'The computer picked {guesses} guesses for you! Good luck!')

while guesses > 0:
    if int(input('-----------------------------------------\nPick a number! ')) == random_number:
        break
    else:
        print('Try again!')
        guesses -= 1

if guesses == 0:
    print('You lost!')
    quit()

print('Congrats, you won!')


