factorial () {
  local n=$1
  if [ $n -eq 0 ]
  then
    echo 1
  else
    local result=$((n * $(factorial $((n - 1)))))
    echo $result
  fi
}

# Take input from the user
echo "Enter a number: "
read num

# Call the function to calculate the factorial
result=$(factorial $num)

# Display the result
echo "The factorial of $num is $result"
