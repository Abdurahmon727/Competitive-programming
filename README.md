# competitive-programming
Exercises from Competitive Programmer's Handbook by Antti Laaksonen

# Data structures:
0. Array
1. Vector: dynamic array
2. Set: list of unique elements, saves elements sorted order (unordered_set is more efficient)
3. Map: just like array but can be accessed by custom key not only indexes.
4. Bitset: same with list but saves only 0 or 1, more efficient while working with binary
5. 


# C++ built in functions:
1. sort(s.begin(),s.end());
2. reverse(s.begin(),s.end());
3. random_shuffle(s.begin(),s.end());
4. s.lower_bound(first,last,val); - returns an iterator pointing to the first element in the range [first,last) which has a value not less than ‘val’
5. s.upper_bound(first,last,val); - returns an iterator pointing to the first element in the range [first,last) which has a value greater than ‘val’  and if the value is not present in the vector then it returns the end iterator

