#include <iostream>
#include <vector>
using namespace std;

class List {
    public:
        vector<string> list;
        string name;

        List(){
            //Constructor
        }
        ~List(){
            //Destructor
        }
        void print_menu();
        void print_list();
        void add_item();
        void delete_item();
   };