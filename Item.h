// Item.h

class Item {
   private:
      int itemCode;
      float unitPrice;
      float discount; 
   public:
      // 1 Default Constructor
      Item();
      // 2. Overloaded Constructor
      Item(int icode ,float uprice);
      // 3. Destructor
      ~Item();


      void setDiscount(float punitPrice);
      float getDiscount();
      float discountedPrice();
      void display();
};
