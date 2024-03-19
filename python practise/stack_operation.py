# Create a stack
stack = []

# Add elements to the stack
stack.append("Apple")
stack.append("Banana")
stack.append("Cherry")

# Display the stack size
print(f"Stack size: {len(stack)}")  # 3

# Remove and display an element from the top of the stack
print(f"Removed from stack: {stack.pop()}")  # Cherry

# Display the stack size after removing an element
print(f"Stack size after pop: {len(stack)}")  # 2