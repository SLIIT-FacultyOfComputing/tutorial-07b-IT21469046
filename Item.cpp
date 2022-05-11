#include "Item.h"
#include <iostream>
using namespace std;

// 4. Implement Default Constructor 
   Item:: Item (){
     itemCode=0;
     unitPrice =0.0;
   }

// 5. Implement Overloaded Constructor
   Item :: Item (int icode ,float uprice){
     itemCode=icode;
     unitPrice=uprice;
     
   }

// 6. Implement Destructor 
Item::~Item(){
  cout << "destructors Called "<< endl;
}

void Item::setDiscount(float pdiscount) {
  discount = pdiscount;
}

float Item::getDiscount() {
  return discount;
}

float Item::discountedPrice() {
   return unitPrice - unitPrice * discount/100;
}

void Item::display() {
  cout << "Item : " << itemCode << endl;
  cout << "Discounted Price " << discountedPrice() << endl;
}
