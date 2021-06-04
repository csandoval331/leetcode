class Solution:
    def get_digit(self, number, position):
        if(position <= 0):
            return None

        power = pow(10, position)
        division = pow(10,position-1)

        remainder = number%power
        value = int(remainder/division)

        return value

    def get_range(self, number:int) -> int:
        my_range = 1
        counter = 0
        while number >= my_range:
            my_range *= 10
            counter += 1

        return counter
    
    def reverse(self, x: int) -> int:
        is_negative = False
        
        if x < 0:
            is_negative = True
            x *= -1

        my_range = self.get_range(x)
        reversed_number = 0

        # print(my_range)
        for i in range(my_range,0, -1):
            position = self.get_digit(x, i)
            power = pow(10,my_range-i)*position
            reversed_number += power
            # print("number",i, position, power, reversed_number)
            
        if reversed_number > 2147483647:
            return 0     
        elif is_negative:
            return (reversed_number * -1)
        else:
            return reversed_number  