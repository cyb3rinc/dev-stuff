# Simple list maker
temp_list = []
add_more = True

while add_more == True:
    item = input('Please write something to add in the list:\n>>> ')
    answer = input('Do you want to add more to the list? (y, n)\n>>> ')

    temp_list.append(item)

    final_list = []
    final_list.extend(temp_list)

    if answer == 'y':
        add_more = True
        continue
    if answer == 'n':
        add_more = True
        temp_list.clear()
        print(final_list)
        break
    else:
        print('Your input was not clear.')
        break
