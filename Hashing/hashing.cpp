// => What is hashing ?
// => Hashing means pre-storing data and fetching it.
// => Hashing is used to precompute the required data and store it in place such
// that when multiple queries are asked we don't have to recompute the same data
// again and again, instead we can just pick the info from the stored data that
// we precompute in the beginning.

// Hashing can be done using one of the below two mentioned method -
// 1. Hashing data using array.
// 2. Hashing data using maps (map -> (ordered map), unordered_map in CPP and
// hashmaps in java)

// => Maps in Cpp -
// 1. Ordered maps (map) -> This map stores the elements in <key, value> pair
// and in sorted manner. So, the time complexity to access any element value in
// Best, Average and Worst case scenerio is O(logn). Because it will store
// element in the map after sorting and most sorting algorithms generally take
// O(logn) time complexity.
// 2. Unordered maps (unordered_map) -> This map stores the elements in <key,
// value> pair but the elements stored in the map will have no pariticular order
// to it. So, the time complexity to access any element value in Best and
// Average case will be O(1) and in worst case it will be O(n), where n is the
// number of elements we are storing.

// Note -
// 1. Generally, in code we will always try to use the unordered_map because
// of its time complexity but in some cases, the compiler might throw a TLE,
// then in that case we will use the ordered map(map).
// 2. Another thing to note is that, in unordered_map we can only put primary
// data type as the key for storing the values, whereas, in map we can put any
// kind of data structure as key for storing the values.

// Types of Hashing
// 1. Division Method
// 2. Folding Method
// 3. Mid Square Method

// => Why Does the worst case happens in unordered map ?
// In case of collisions, where in the edge case, all the data is stored in same
// hash place, then in that case worst case scenerio happens which will lead to
// O(n) time complexity.