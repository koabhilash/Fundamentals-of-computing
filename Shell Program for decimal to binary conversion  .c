echo "Enter a decimal number: "
read decimal

# Initialize the binary number to an empty string
binary=""

# Repeat until the decimal number is 0
while [ $decimal -gt 0 ]
do
  # Find the remainder when the decimal number is divided by 2
  remainder=$((decimal % 2))

  # Add the remainder to the binary number
  binary="$remainder$binary"

  # Divide the decimal number by 2
  decimal=$((decimal / 2))
done

# Display the binary number
echo "The binary equivalent of $decimal is $binary"
