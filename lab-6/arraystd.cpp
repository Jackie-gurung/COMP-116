#include<array>
#include<iostream>

class IQueue {
public:
    virtual int insert(int ) = 0;
    virtual int remove() = 0;
    virtual int front() = 0;
    virtual int rear() = 0;
};

class ArrayQueue : public IQueue {
private:
    int position{0};
    std::array<int,5> queue = {};
public:

    ArrayQueue() = default;

    int insert(int x){
        if (position >= queue.size()) {
            throw "Queue is full.";
        } else {
            queue[position] = x;
            position++;
        }
        return x;
    };
    
    int remove(){
        int removed;
        if (position == 0) {
            throw "Queue is empty.";
        } else {
            removed = queue[0];
            std::cout << "Removing " << queue[0] << " from the queue" << std::endl;
            for (int i = 0; i < position; i++) {
                queue[i] = queue[i + 1];
            }
            position--;
        }
        return removed;
    };
    
    int front(){
        // if (queue.empty()) 
        if (position == 0)
            throw "Queue is empty.";
        return queue.front();
    }

    int rear(){
        // if (queue.empty())
        if (position == 0)
            throw "Queue is empty.";
        // return queue.back();
        return queue[position - 1];
    };
};

int main(){
    int choice;  
        
        ArrayQueue obj;
        do {
            std::cout << std::endl;
            std::cout << "Enter your choice : " << std::endl;
            std::cout << "1. Insert in the queue." << std::endl;
            std::cout << "2. Remove from the queue." << std::endl;
            std::cout << "3. Get front of the queue." << std::endl;
            std::cout << "4. Get rear of the queue." << std::endl;
            std::cout << "0. quit the program." << std::endl;

            std::cout << "Your choice : ";
            std::cin >> choice;
            std::cout << std::endl;
            try {
                switch (choice) {
                    case 1:
                        int x;
                        std::cout << "Enter element to insert: ";
                        std::cin >> x;
                        std::cout << obj.insert(x) << " inserted successfully in the queue." << std::endl;
                        break;
                    case 2:
                        std::cout << obj.remove() << " removed from the queue" << std::endl;
                        break;
                    case 3:
                        std::cout << obj.front() << " is front element."<< std::endl;
                        break;
                    case 4:
                        std::cout << obj.rear() << " is rear element." << std::endl;
                        break;
                    case 0:
                        std::cout << "Ending the program" << std::endl;
                        break;
                    default:
                        std::cout<<"\nPlease Enter correct option" << std::endl;
                        break;
                }
            } catch (const char *error) {
                std::cout << error << std::endl;
            }        
        }while(choice != 0);
}