# C++ Standard Library Containers

## Sequence Containers
*Elements are ordered in a strict sequence and are accessed by their position in the sequence.*

| Container            | Class Template         | Remarks                                                                 |
|---------------------|------------------------|-------------------------------------------------------------------------|
| array (C++11)       | Array class            | 1D array of **fixed-size**                                              |
| vector              | Vector                 | 1D array of fixed-size that can **change in size**                      |
| deque               | Double ended queue     | **Dynamically sized**, can be expanded / contracted on **both ends**    |
| forward_list (C++11)| Forward list           | Const. time insert / erase anywhere, done as **singly-linked list**     |
| list                | List                   | Const. time insert / erase anywhere, iteration in **both directions**   |

---

## Container Adaptors
*Sequence containers adapted with specific protocols of access like LIFO, FIFO, Priority.*

| Container        | Class Template  | Remarks                                                              |
|------------------|-----------------|----------------------------------------------------------------------|
| stack            | LIFO stack      | Underlying container is **deque** (default) or as specified          |
| queue            | FIFO queue      | Underlying container is **deque** (default) or as specified          |
| priority_queue   | Priority queue  | Underlying container is **vector** (default) or as specified         |

---

## Associative Containers
*Elements are referenced by their key and not by their absolute position in the container.  
Typically implemented as **binary search trees** and elements must be comparable.*

| Container  | Class Template       | Remarks                                                                  |
|------------|----------------------|---------------------------------------------------------------------------|
| set        | Set                  | Stores **unique elements** in a specific order                            |
| multiset   | Multiple-key set     | Stores elements in an order with **multiple equivalent values**          |
| map        | Map                  | Stores `<key, value>` in an order with **unique keys**                   |
| multimap   | Multiple-key map     | Stores `<key, value>` in an order with **multiple equivalent values**    |

---

## Unordered Associative Containers
*Elements are referenced by their key and not by their absolute position in the container.  
Implemented using a **hash table** with fast retrieval based on keys.*

| Container                 | Class Template        | Remarks                                                               |
|---------------------------|---------------------|-----------------------------------------------------------------------|
| unordered_set (C++11)     | Unordered Set        | Stores **unique elements** in **no particular order**                 |
| unordered_multiset (C++11)| Unordered Multiset   | Stores elements in no order with **multiple equivalent values**       |
| unordered_map (C++11)     | Unordered Map        | Stores `<key, value>` in no order with **unique keys**                |
| unordered_multimap (C++11)| Unordered Multimap   | Stores `<key, value>` in no order with **multiple equivalent values** |

---
