
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
   // Declare a map with string keys and integer values
   map<string, int> myMap;

   // Insert some key-value pairs into the map
   myMap["apple"] = 5;
   myMap["banana"] = 10;
   myMap["cherry"] = 15;

   // Access a string from the map using its key
   string fruit = "banana";
   int quantity = myMap[fruit];
   cout << "There are " << quantity << " " << fruit << "s." << endl;

   return 0;
}
