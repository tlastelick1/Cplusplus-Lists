#include <iostream>
#include <string>
#include "LinkedList.h"
#include <list>
#include <fstream>

using namespace std;

void intDriver();
void stringDriver();

int main()
{
    LinkedList<int> list;
    int num = 0;
  
    cout << "Enter a nunmber to be added to a list, or -1 to stop: ";
    cin >> num;
    
    while (num != -1)
    {   
        list.insertNode(num);
        cout << "Enter a number to be added to a list, or -1 to stop: ";
        cin >> num;
    } 
    cout << "Original List: " << endl;
    list.displayList();
    cout << endl;
    
    cout << "Popping back the value " << list.pop_back() << endl;
    
    cout << "Now the list contains " << endl;
    list.displayList();
    cout << endl;
    
    cout << "Popping front the value " << list.pop_front() << endl;
    cout << "Now the list contains: " << endl;
    list.displayList();
    cout << endl;
    
    cout << "Pushing 999 onto the front. " << endl;
    cout << "Now the list contains: " << endl;
    list.push_front(999);
    list.displayList();
    cout << endl;
    
    cout << "Pushing 777 onto the end. " << endl;
    cout << "Now the list contains: " << endl;
    list.push_back(777);
    list.displayList();
    cout << endl;
    
    intDriver();
    stringDriver();
    
    return 0;
}

void intDriver()
{
    int intTemp = 0;

    // open file with integer data
    ifstream intFile ("intData.dat"); 
    // open file with items to search for in intFile
    ifstream intSearchFile ("intSearch.dat");
	// create linked list of integer items
	LinkedList <int> intList;           

    // put each data line into a temporary int variable
    // insert each line of file into integer list
    // will insert into list from least to greatest integer 
    while(intFile >> intTemp)
        intList.insertNode(intTemp);
    
    cout << "The integer list from least to greatest is: " << endl;
    intList.displayList();
    cout << endl;
    cout << "The sum of the integer list is: " << intList.getTotal() << endl << endl;

    intFile.close();
    
    // open the file with numbers to search if they exist in intList
    ifstream searchFile ("intSearch.dat");
    int search = 0; // temp variable to hold values of intSearch.dat
    int count = 0;  // count to hold return value of sequential search
    while(searchFile >> search)
    {
        count = intList.search(search);
            
            if (count != 0)
                cout << search << " was found in the list" << endl;
            else
                cout << search << " was NOT found in the list" << endl;
    }
    searchFile.close();
    
}
    

void stringDriver()
{
    string strTemp;
    
    // open file with string data
    ifstream strFile ("strData.dat");
    // create linked list of string items
    LinkedList <string> strList;
    
    // put each data line into a temporary string variable
    // insert each line of the file into the string list
    while(strFile >> strTemp)
        strList.insertNode(strTemp);
        
    cout << "The string list in alphabetical order is: " << endl;
    strList.displayList();
    cout << endl;
    cout << "The string list concactenated into a sentence is: " << strList.getTotal() << endl;
    
    strFile.close();
    
    // open the file with numbers to search if they exist in stringList
    ifstream searchFile ("strSearch.dat");
    string search; // temp variable to hold values of strSearch.dat
    int count = 0;  // count to hold return value of sequential search
    while(searchFile >> search)
    {
        count = strList.search(search);
            
            if (count != 0)
                cout << search << " was found in the list" << endl;
            else
                cout << search << " was NOT found in the list" << endl;
    }
 
    searchFile.close();   
}
