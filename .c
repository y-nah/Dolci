#include <stdio.h>

struct Laptop {
    char brand[50];
    int price;
};

void Display(struct Laptop *ptr);

int main(){
    struct Laptop myLaptop = {"Lenovo", 1200};
    struct Laptop *ptr = &myLaptop;

    Display(ptr);    

    return 0;
}

void Display(struct Laptop *ptr) {
    printf("Brand: %s\n", ptr->brand);
    printf("Price: %d\n", ptr->price);
}