from collections import deque

# Create a deque
d = deque()

# Add elements to the deque
d.append("Apple")
d.append("Banana")
d.append("Cherry")

# Display the deque size
print(f"Deque size: {len(d)}")  # 3

# Remove and display an element from the front of the deque
print(f"Removed from front of deque: {d.popleft()}")  # Apple

# Remove and display an element from the end of the deque
print(f"Removed from end of deque: {d.pop()}")  # Cherry

# Display the deque size after removing elements
print(f"Deque size after remove: {len(d)}")  # 1