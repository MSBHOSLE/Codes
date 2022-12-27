#chatbot
#Develop an elementary chatbot for any suitable customer interaction application.
def greet(bot_name, birth_year):
    print("Hello! My name is {0}.".format(bot_name))
    print("I was created in {0}.".format(birth_year))

def remind_name():
    print('Please, remind me your name.')
    name = input()
    print("What a great name you have, {0}!".format(name))

def test():
    print("Let's test your programming knowledge.")
    print("Why do we use methods?")
    print("1. To repeat a statement multiple times.")
    print("2. To decompose a program into several small subroutines.")
    print("3. To determine the execution time of a program.")
    print("4. To interrupt the execution of a program.")
    answer = 2
    guess = int(input())
    while guess != answer:
        print("Please, try again.")
        guess = int(input())
        print('Completed, have a nice day!')
    print('.................................')
    print('.................................')
    
def enter_age():
    print('Let me know your age.')
    print('')
    rem3 = int(input())
    age = rem3
    print("Your age is:-",(age))


def end():
    print('Congratulations, have a nice day!')
    print('.................................')
    print('.................................')
    print('.................................')
    input()
    
greet('Sbot', '2021') # change it as you need
remind_name()
enter_age()
test()
end()  

    

    
        


    
