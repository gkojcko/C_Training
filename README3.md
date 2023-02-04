
## 🔁 About us 🔁
L00perz is a group consisting of 3 college students and friends that attend at IEK AKMI. The group was created with the soul purpose of creating projects/assignments like this.


# IN REGARDS TO THE ASSIGNMENT

This is assignment is an application that has a user intreface, which prompts the user to enter an IP Adress and convert it to either binary or decimal. The applications contains of three functions. The first funcion is the main function where the interface is stored. Then the second functions converts decimal to binary, and the last one converts bianry to decimal, always depending on the user input.


## BREAKING DEEPER INTO THE FUNCTIONS

- USER INTERFACE
![App Screenshot](https://imgur.com/a/w1GnamE)
 Starting with the interface the user gets prompted to either press 'A' or 'B'. Pressing option 'A' allows him to enter a decimal IP so it can be converted to binary and then it calls the appropriate function. Pressing 'B' allows him to convert a binary IP to a decimal IP by calling the appropriate function as well. If the user accidentally makes a typo, the code enters into a while loop and it continuously prompting the user to enter either A or B. The whie loop will keep until the user types the correct options. Scanf function stores the user input in four different octets, each one represented by four ints. 





- Decimal to Binary function

In this function 4 arrays that store the binary numbers are created, these arrays will store the output from the decimal conversion, and store them in arrays so as the numbers can be easily manipulated, and printed from the Most Significant Bit to the Least Significant Bit.

Modulus 2 (%2) is performed on all of the fouroctet, and the output is saved on the binary arrays. This is done because we want to extract 1's and 0's. Modulus 2 returns 0 if the number is even, 1 if odd. Then octet is divided by 2 and repeats until the octets eventually be zero.

A second for loop is now created. What this for loop does is it prints the bits in the correct binary represantation (MSB->LSB). It starts from the last index and prints the numbers backwards until index 0 is reached. 
![App Screenshot](https://imgur.com/a/gFW6NJp)

- Binary to Decimal function

In this function 4 parameters are assigned that will hold the the binary numbers. All of the decimal integers are set to 0 since we do not want them to affect our math operations. 4 while loops are created that will keep running until the binaryip integer turns to 0. Modulus 10 (%10) this time is extracting the last digit from the binary ip intgers, and it stores it in the remainder integer. The remainder is then multiplied by its weight, which it will be doubled in each iteration (but it will be set to 1 once the loop ends.). The result is then stored to the decimal integers. And the binaryip is divided by 10. This will keep the loop running until it reaches 0. 
![App Screenshot](https://imgur.com/a/poND4s0)




## Authors

             ********************  L00PERZ ********************

- [@gkojcko](https://github.com/gkojcko)

- [@PanagisVr](https://github.com/PanagisVr)

- [@dharampreetc](https://github.com/dharampreetc)

WE APPREICIATE YOUR TIME.


