echo "Enter a number: "
read num

# Store the original number
original=$num

# Initialize the reverse to 0
reverse=0

# Find the reverse of the number
while [ $num -gt 0 ]
do
  # Find the last digit of the number
  last_digit=$((num % 10))

  # Add the last digit to the reverse
  reverse=$((reverse * 10 + last_digit))

  # Remove the last digit from the number
  num=$((num / 10))
done

# Check if the original and reverse are equal
if [ $original -eq $reverse ]
then
  echo "The number is a palindrome."
else
  echo "The number is not a palindrome."
fi



