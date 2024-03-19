import queue

# Create a queue
q = queue.Queue()

# Add elements to the queue
q.put("Apple")
q.put("Banana")
q.put("Cherry")

# Display the queue size
print(f"Queue size: {q.qsize()}")  # 3

# Remove and display an element from the queue
print(f"Removed from queue: {q.get()}")  # Apple

# Display the queue size after removing an element
print(f"Queue size after remove: {q.qsize()}")  # 2