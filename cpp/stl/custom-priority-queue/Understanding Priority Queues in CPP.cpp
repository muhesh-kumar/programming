// std::priority_queue
//  C++ Containers library std::priority_queue 
// Defined in header <queue>
// template<
//     class T,
//     class Container = std::vector<T>,
//     class Compare = std::less<typename Container::value_type>
// > class priority_queue;
// A priority queue is a container adaptor that provides constant time lookup of the largest (by default) element, at the expense of logarithmic insertion and extraction.

// A user-provided Compare can be supplied to change the ordering, e.g. using std::greater<T> would cause the smallest element to appear as the top().

// Working with a priority_queue is similar to managing a heap in some random access container, with the benefit of not being able to accidentally invalidate the heap.

// Template parameters
// T	-	The type of the stored elements. The behavior is undefined if T is not the same type as Container::value_type. (since C++17)
// Container	-	The type of the underlying container to use to store the elements. The container must satisfy the requirements of SequenceContainer, and its iterators must satisfy the requirements of LegacyRandomAccessIterator. Additionally, it must provide the following functions with the usual semantics:
// front()
// push_back()
// pop_back()
// The standard containers std::vector and std::deque satisfy these requirements.

// Compare	-	A Compare type providing a strict weak ordering.
// Note that the Compare parameter is defined such that it returns true if its first argument comes before its second argument in a weak ordering. But because the priority queue outputs largest elements first, the elements that "come before" are actually output last. That is, the front of the queue contains the "last" element according to the weak ordering imposed by Compare.