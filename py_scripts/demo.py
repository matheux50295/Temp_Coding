def quickSort(arr):
	#base case
	if len(arr) <= 1:
		return arr
	pivot = arr[len(arr)//2] # // : integer div
	left=[x for x in arr if x< pivot]
	middle=[x for x in arr if x==pivot]
	right=[x for x in arr if x>pivot]
	return quickSort(left)+middle+quickSort(right)

print quickSort([2,3,1,3,5])

l=[x for x in range(5)]
print l

a="ab"
b="ac"
j=lambda a,b :a if a<b else b
print j(a,b)

l=[1,2,3,4,5]

l2=[x**2 for x in l]
print l2

def sq2(l):
	return l**2

l2=list(map(sq2,l))
print l2

l2=[sq2(x) for x in l]
print l2