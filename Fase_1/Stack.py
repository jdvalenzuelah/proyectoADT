class Stack:
	"""docstring for ClassName"""
	def __init__(self):
		super(ClassName, self).__init__()
		self.list = []
	def isEmpty(self):
		return self.list == []

	def push(self, item):
		self.list.append(item)

	def pop(self):
		return self.list.pop()

	def peek(self):
		return self.list[len(list) - 1]

	def size(self):
		return len(self.list)
		