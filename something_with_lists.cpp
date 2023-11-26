#include "iostream"
#include "string"
#include "vector"

// todo: fix problems with scopes

void print_menu(std::string name);

void list();

void display_list();

void add_to_list();

void delete_from_list();

int main(int argc, char* argv[]) {
    if(argc > 1) {
        std::string name(argv[1]);
        std::cout << "Hello " << name << std::endl;
    }
    else {
        std::cout << "Error, no argument supplied!\n";
        std::cout << "Exiting the Program.\n";
    }
    return 0;
}

void list() {
    std::vector<int> vector1;

    for(int i = 0; i <= 5; i++) {
    vector1.push_back(i);
    }
}

void print_menu(std::string name) {
    int choice;
    std::cout << "*************************\n";
    std::cout << "1) Print List.\n";
    std::cout << "2) Add to List.\n";
    std::cout << "3) Delete from List.\n";
    std::cout << "4) Quit.\n";
    std::cout << "*************************\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    switch(choice) {
        case 1:
            display_list();
            break;
        case 2:
            add_to_list(); // add function
            break;
        case 3:
            delete_from_list(); // add function
            break;
        case 4:
            exit(-1);
            break;
        default:
            std::cout << "Invalid Choice!\n";
    }
}

void display_list() {
    std::vector<int> vec1;
    for(int i = 0; i <= 5; i++) {
        vec1.push_back(i);
        std::cout << "List: " << vec1[i] << std::endl;
    }
}

void add_to_list() {
    std::cout << "Which number would you like to add to the list: ";
    int input_number;
    std::cin >> input_number;
}

void delete_from_list() {
    display_list();
    int delete_choice;
    std::cout << "Which part of the list would you like to delete?";
    std::cin >> delete_choice;

    switch (delete_choice) {
        case 1:
            vec1[-delete_choice];

    }
}