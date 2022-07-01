# Cplusplus-Lists
Working with integer and string lists in C++.

Write a driver program(mainLists.cpp)that definesan integerlist anda string list.  After creating the two lists, use the input from intData.datand strData.datfiles to insert data into the linked lists.These files have one data item per line.  Insert the data items to their respective list objects.Display the lists. 

-Use getTotal()function with the definedintegerand stringlistsobjectsand display the output.

-Use the search function,provided inthe class,to look for certain items in the lists.  The intSearch.datand strSearch.datfiles have one data item per line.  Search the respective lists for each data item in these files.  Your program should display whether or not the item is found in the list.

For example, if your integer list object contains 4, 19, and 23and the search file contains 8and 25, your program should output:
8 was NOT found in the list
23 was found in the list 

Same for the string items.

2.Modify the class by adding the following member functions:
T pop_back();//Removes the lastelementand returns its value
T pop_front();//Removes the first elementand returns its value
voidpush_front(T value);//Inserts an element at the front of the list
voidpush_back(T value);//Inserts an element at the end of the list.

Update mainLists.cpp to demonstrate the added functions.Youmaybuild your list from the user, using a loop and a sentinel value. Also, get from the user the values for pushing front and pushing back.

---------

Feedback:

when pushing a node into a list, you must set newNode->next = nullptr or ensure it is done at somepoint. in your push_front, if(!head) leaves the ->next empty.

if (nodePtr->next == nullptr) will always be true after the loop that gets to the node where nodePtr->next = nullptr.
