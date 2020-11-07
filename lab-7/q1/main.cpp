#include<iostream>
#include<vector>

template <typename X>

void sort(std::vector<X> &array, int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(array[j] < array[i]){
                X temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

int main(){
    std::vector<int> array = {1,2,5,4};
    std::cout << "elements before sorting : ";
    for(int i = 0; i < array.size() ; i++ ){
        std::cout << array.at(i) << " ";
    }
    std::cout << std::endl;

    sort(array,array.size());
    std::cout << "elements after sorting : ";
    for(int i = 0; i < array.size() ; i++ ){
        std::cout << array.at(i) << " ";
    }
    std::cout << std::endl;
}