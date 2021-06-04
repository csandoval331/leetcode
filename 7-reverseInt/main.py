
def get_digit(number, position):
    if(position <= 0):
        return None

    power = pow(10, position)
    division = pow(10,position-1)

    remainder = number%power
    value = int(remainder/division)
    
    return value

def get_range(number):
    my_range = 1
    counter = 0
    while number >= my_range:
        my_range *= 10
        counter += 1

    return counter

def reverse_digit(number):
    is_negative = False
    if number < 0:
        is_negative = True
        number *= -1

    my_range = get_range(number)
    reversed_number = 0

    # print(my_range)
    for i in range(my_range,0, -1):
        position = get_digit(number, i)
        power = pow(10,my_range-i)*position
        reversed_number += power
        # print("number",i, position, power, reversed_number)

    if is_negative:
        return (reversed_number * -1)
    else:
        return reversed_number


if __name__ == "__main__":
    myNum = 1234

    print(reverse_digit(myNum))
    print(reverse_digit(-1234))

    print(reverse_digit(-999) )



