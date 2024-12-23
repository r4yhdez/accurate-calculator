import Foundation

print("Accurate calculator made by Aditya.Wnc. Free for everyone and open source\n")

// Variables for user input and result
var input1: Int = 0
var input2: Int = 0
var result: Int = 0
var operation: Character = " "
var validation1: Int = 0
var validation2: Int = 0
var validResult: Int = 0

// User input
if let userInput1 = readLine(), let userInput2 = readLine(), let userOperation = readLine() {
    input1 = Int(userInput1) ?? 0
    operation = Character(userOperation)
    input2 = Int(userInput2) ?? 0
}

// Logic
switch operation {
case "+":
    result = input1 + input2
case "-":
    result = input1 - input2
case "*":
    result = input1 * input2
case "/":
    if input1 == 0 && input2 == 0 {
        print("\n can't buddy")
    } else {
        result = input1 / input2
    }
case "%":
    result = input1 % input2
default:
    print("You have to enter arithmetic operations :)")
}

// Validation
validation1 = input1
validation2 = input2

switch operation {
case "+":
    validResult = validation1 + validation2
case "-":
    validResult = validation1 - validation2
case "*":
    validResult = validation1 * validation2
case "/":
    if validation1 == 0 && validation2 == 0 {
        print("\n can't buddy")
    } else {
        validResult = validation1 / validation2
    }
case "%":
    validResult = validation1 % validation2
default:
    print(" ")
}

// Logic 2
if validResult == result {
    print(result)
} else {
    print("How can it be wrong?? You entered the wrong input.. or if it still errors contact my instagram @aditya.wnc")
}

//Made by Humans for humans 