echo "Enter the value of a: "
read a
echo "Enter the value of b: "
read b
echo "Enter the value of c: "
read c

# Calculate the discriminant
discriminant=$((b * b - 4 * a * c))

# Check the value of the discriminant
if [ $discriminant -lt 0 ]
then
  echo "The equation has no real roots."
else
  # Calculate the roots
  root1=$(echo "scale=2; (-b + sqrt($discriminant)) / (2 * $a)" | bc)
  root2=$(echo "scale=2; (-b - sqrt($discriminant)) / (2 * $a)" | bc)

  # Display the roots
  echo "The first root is $root1"
  echo "The second root is $root2"
fi
