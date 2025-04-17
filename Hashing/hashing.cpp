// => What is hashing ?
// => It is techniquee which is used in data structure to store and retrive data
// effectively.
// => Hashing means pre-storing data and fetching it.
// => Hashing is used to precompute the required data and store it in place such
// that when multiple queries are asked we don't have to recompute the same data
// again and again, instead we can just pick the info from the stored data that
// we precompute in the beginning.

// Hashing can be done using one of the below two mentioned method -
// 1. Hashing data using array.
// 2. Hashing data using maps (map -> (ordered map), unordered_map, set,
// unordered_set in CPP and hashmaps in java)

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
// https://www.geeksforgeeks.org/open-addressing-collision-handling-technique-in-hashing/
// https://stackoverflow.com/questions/27742285/what-is-primary-and-secondary-clustering-in-hash

// 1. So basically, Hash Functions decide where and how to store the data in the
// memory(generally Hash Table). But if for some reason hash functions decides
// to store more than one data in the same memory place then it will cause
// something known as Hash Collision.

// 2. Hash Functions also handles the case of Hash Collisions.

// 3. Methods for Hash Collision Handling -
//    a. Seperate Chaining - In this method, when collision happens then we will
//    save the data in form of linked list(worst case complexity is O(n) for
//    searching an element) or AVL tree(worst case complexity is O(logn) for
//    searching an element).
//
//    b. Linear Probing - Linear probing is a collision
//    resolution technique in hashing where, when a collision occurs (two keys
//    hash to the same index), the algorithm sequentially searches for the next
//    available slot in the hash table. It starts from the colliding index and
//    moves through consecutive indices until an empty slot is found. Linear
//    probing is simple to implement and has constant expected time complexity
//    for search, insertion, and deletion operations when using a random hash
//    function. However, it can lead to clustering, where many elements are
//    stored near each other, which can degrade performance.
//    -> Primary Clustering - Primary clustering is a phenomenon in hash tables,
//    particularly those using linear probing, where keys that collide and are
//    subsequently placed in adjacent slots due to linear probing tend to form
//    long contiguous groups. This clustering effect leads to a higher
//    likelihood of longer probe sequences and slower lookups.
//    H(K) = (K + I) % 10; where index in table starting from 0 and K is the
//    number.
//
//    c. Quadratic Probing - Quadratic probing operates by taking the original
//    hash index and adding successive values of an arbitrary quadratic
//    polynomial until an open slot is found. Quadratic probing is often
//    recommended as an alternative to linear probing because it incurs less
//    clustering.
//    -> Secondary Clustering - Secondary clustering refers to the tendency for
//    keys to form clusters in the probe sequence due to a poor choice of
//    secondary hash function or step size in double hashing. When using double
//    hashing, the secondary hash function is used to determine the step size
//    for each probe. If the step size is not well-distributed or poorly chosen,
//    it can lead to secondary clustering. Keys that collide at the same primary
//    position may follow the same probe sequence and form clusters at different
//    slots in the table. Secondary clustering can also impact the search
//    performance and efficiency of hash-based data structures.
//    H(K) = (K + I^2) % 10; where index in table starting from 0 and K is the
//    number.
//
//    d. Double Hashing -  double hashing, we make use of two hash functions.
//    The first hash function is h1​(k), this function takes in our key and
//    gives out a location on the hash-table. If the new location is empty, we
//    can easily place our key in there without ever using the secondary hash
//    function. However, in case of a collision, we need to use secondary
//    hash-function h2​(k) in combination with the first hash-function
//    h1​(k) to find a new location on the hash-table. The combined
//    hash-function used is of the form h(k,i) = (h1​(k) + i * h2​(k))%m.
//    Here, i is an non-negative integer which signifies the collision number,
//    k = element/key which is being hashed and m= hash table size. The use of
//    secondary hash-function h2​(k) after the collision, helps us to reach
//    new locations on the hash-table, each new location is at a distance of
//    h2​(k), 2*h2​(k), 3*h2​(k)….., this results in a non-linear
//    fashion of addressing hash-table which reduces the number of collisions. A
//    very important point to be considered is that both the hash functions
//    should be computed in order of O(1) time.

// 4. Load Factor - Total number of elements / Size of table
//    eg- loadfactor = 9 / 10 => 0.9

// Note ->. In case of collisions, where in the edge case, all the data is
// stored in same hash place, then in that case worst case scenerio happens
// which will lead to O(n) time complexity.

// => How hashing is implemented in C++ Unordered Map -
// In C++, for unordered_map, hashing is implemented using seperate chaining
// method. But when the load factor reaches more than 5, it doubles the size of
// the hash table which eventually decreases the load time so that we can
// insert, access, and delete element in O(n) time.

// => Why hashing(mapping) function is important ?
// Hashing function consists of two function -
//    a. Hash Code function (which encrypt the data to store the data more efficiently)
//    b. Compression function (which does the mapping and find out where to store and access the stored element)

