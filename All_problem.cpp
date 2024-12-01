NOTICE: EVERY TASK WILL BE A BASH SCRIPT WITH NAME: Task_XXXX.sh, where
XXXX is the last 4 digits of your ID. It is impossible to identify the task otherwise, so
marks will be deducted. my id last 4 digit is 3007

Tasks:

Task 1: Finding a leap year
Write a bash function called isLeapYear that determines whether the year is a leap
year or not.
Input: isLeapYear 2012
Output: Leap Year
Input: isLeapYear 2013
Output: Not Leap Year

Task 2: Prime Numbers Function
Create a bash function named is_prime that takes an integer as input and returns
whether the number is prime or not. The function should use a proper algorithm to
efficiently determine if the number is prime.
Input: is_prime 71
Output: Prime Number
Input: is_prime 72
Output: Not a Prime Number

Task 3: Palindrome Check Function
Write a bash function called is_palindrome that checks whether a given string is a
palindrome (reads the same backward as forward).
Hint: check online how to access string elements in the bash script.
Input: noon
Output: palindrome
Input: “abaa”
Output: not a palindrome


Answer : 

Task 1: Leap Year Function
Script Name: Task_3007.sh

#!/bin/bash

# Function to check if a year is a leap year
isLeapYear() {
  year=$1
  if ((year % 400 == 0)); then
    echo "Leap Year"
  elif ((year % 100 == 0)); then
    echo "Not Leap Year"
  elif ((year % 4 == 0)); then
    echo "Leap Year"
  else
    echo "Not Leap Year"
  fi
}

# Get input from user
isLeapYear $1



Task 2: Prime Numbers Function

#!/bin/bash

# Function to check if a number is prime
is_prime() {
  num=$1
  if ((num <= 1)); then
    echo "Not a Prime Number"
    return
  fi

  for ((i = 2; i * i <= num; i++)); do
    if ((num % i == 0)); then
      echo "Not a Prime Number"
      return
    fi
  done
  echo "Prime Number"
}

# Get input from user
is_prime $1


Task 3: Palindrome Check Function

Script Name: Task_3007.sh

#!/bin/bash

# Function to check if a string is a palindrome
is_palindrome() {
  str=$1
  # Reverse the string using rev command
  rev_str=$(echo "$str" | rev)
  if [[ "$str" == "$rev_str" ]]; then
    echo "palindrome"
  else
    echo "not a palindrome"
  fi
}

# Get input from user
is_palindrome $1


......................................................................................................
......................................................................................................

NOTICE: EVERY TASK WILL BE A BASH SCRIPT WITH NAME: Task_XXXX.sh, where XXXX is the last 4 digits of your ID. It is not possible to identify the task otherwise and hence marks will be deducted.  my id last 4 digit is 3007
Tasks: 
1. Print a bash script to generate the following pattern: 
Input: 5 
Output: 
* 
** 
*** 
**** 
***** 
**** 
*** 
** 
* 
2. Print the first n numbers of the fibonacci series in terminal with a bash script: 
Input: 5 
Output: 0 1 1 23 
3. Write a bash script to find if a year is leap year or not 
HINT: A leap year is either divisible by 400 or divisible by 4 but not divisible by 100. 
Input: 2013 
Output: Not a leap year 
Input: 2012 
Output: Leap year 
4. Write a bash script to find the nearest leap year from the current year. 
Input: 2013 
Output: 2012 
Input: 2011 Output: 2012 


Answer : 

Task 1: Generate the Pattern
Script Name: Task_3007.sh

#!/bin/bash

# Function to generate the pattern
generate_pattern() {
  n=$1
  # Print the first half of the pattern
  for ((i = 1; i <= n; i++)); do
    for ((j = 1; j <= i; j++)); do
      echo -n "*"
    done
    echo ""
  done
  # Print the second half of the pattern
  for ((i = n - 1; i >= 1; i--)); do
    for ((j = 1; j <= i; j++)); do
      echo -n "*"
    done
    echo ""
  done
}

# Get input from the user
read -p "Enter a number: " num
generate_pattern $num



Task 2: Fibonacci Series
Script Name: Task_3007.sh

#!/bin/bash

# Function to print the Fibonacci series
fibonacci() {
  n=$1
  a=0
  b=1
  echo -n "$a $b "
  for ((i = 2; i < n; i++)); do
    c=$((a + b))
    echo -n "$c "
    a=$b
    b=$c
  done
  echo ""
}

# Get input from user
read -p "Enter the number of Fibonacci numbers to print: " num
fibonacci $num




Task 3: Leap Year Check
Script Name: Task_3007.sh


#!/bin/bash

# Function to check if a year is a leap year
check_leap_year() {
  year=$1
  if ((year % 400 == 0)); then
    echo "Leap year"
  elif ((year % 100 == 0)); then
    echo "Not a leap year"
  elif ((year % 4 == 0)); then
    echo "Leap year"
  else
    echo "Not a leap year"
  fi
}

# Get input from user
read -p "Enter a year: " year
check_leap_year $year

Task 4: Nearest Leap Year
Script Name: Task_3007.sh

#!/bin/bash

# Function to find the nearest leap year
nearest_leap_year() {
  year=$1
  while true; do
    if ((year % 400 == 0)) || ((year % 4 == 0 && year % 100 != 0)); then
      echo "Nearest leap year: $year"
      break
    fi
    year=$((year - 1))
  done
}

# Get input from user
read -p "Enter a year: " year
nearest_leap_year $year




.....................................
......................................


Task 1:
1. Create a bash script named Intro.sh
2. Ask the user for his/her name by echoing “What is your name?”
3. Store the name in a variable using read command
4. Similarly ask for Intake number, section, id separately.
5. Print the stored variable in the following way:
Name: John Doe
ID: 20214039587
Intake: 48
Section: 2

Task 2:
1. Create a sh file named Operator.sh
2. Take input 2 numbers while invoking the script file.
3. Print the addition, subtraction, multiplication and division operation
of the 2
Numbers.

Task 3:
1. Create a sh file named Greater.sh
2. Take input a number while invoking the script file.
3. If the number if greater than 100, print “CENTURY”
4. Else print “Getting There”


Task 1: Intro.sh
#!/bin/bash

# Ask the user for their name, intake number, section, and ID
echo "What is your name?"
read name

echo "What is your Intake number?"
read intake

echo "What is your Section?"
read section

echo "What is your ID?"
read id

# Print the stored variables
echo "Name: $name"
echo "ID: $id"
echo "Intake: $intake"
echo "Section: $section"


Task 2: Operator.sh



#!/bin/bash

# Check if exactly 2 arguments are passed
if [ $# -ne 2 ]; then
  echo "Please provide exactly two numbers as input."
  exit 1
fi

# Read the two numbers from the arguments
num1=$1
num2=$2

# Perform arithmetic operations
add=$((num1 + num2))
sub=$((num1 - num2))
mul=$((num1 * num2))
if [ $num2 -ne 0 ]; then
  div=$(echo "scale=2; $num1 / $num2" | bc)
else
  div="undefined (division by zero)"
fi

# Print the results
echo "Addition: $add"
echo "Subtraction: $sub"
echo "Multiplication: $mul"
echo "Division: $div"



Task 3: Greater.sh



#!/bin/bash

# Check if a number is provided as input
if [ $# -ne 1 ]; then
  echo "Please provide exactly one number as input."
  exit 1
fi

# Read the number from the argument
num=$1

# Check if the number is greater than 100
if [ $num -gt 100 ]; then
  echo "CENTURY"
else
  echo "Getting There"
fi




