echo "Enter first number: "
read num1
echo "Enter second number: "
read num2

# Perform arithmetic operations
sum=$((num1 + num2))
diff=$((num1 - num2))
product=$((num1 * num2))
quotient=$((num1 / num2))

# Display results
echo "Sum: $sum"
echo "Difference: $diff"
echo "Product: $product"
echo "Quotient: $quotient"
