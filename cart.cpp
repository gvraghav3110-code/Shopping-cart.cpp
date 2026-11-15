#include <iostream>
using namespace std;
class ShoppingCart{
    public:
    string name;
    float price;
    int quantity;
    float q;
    void additems(int q){
        quantity+=q;
    }
    void display(){
        cout<<"Name:"<<name<<endl;
        cout<<"Quantity:"<<quantity<<endl;
        cout<<"Price:"<<price<<endl;
    }
    void removeitems(int q){
        if(q<quantity){
            quantity-=q;
        }
        else{
            cout<<"Not enough items in the cart";
        }
    }
    float totalcartitems(){
        float value=price*quantity;
        return value;
    }
};
int main()
{
 ShoppingCart cart;
 cout<<"Enter the name:";
 cin>>cart.name;
 cout<<"Enter the price:";
 cin>>cart.price;
 cout<<"Enter the quantity:";
 cin>>cart.quantity;

 cart.additems(4);
 cart.removeitems(2);
 cart.display();
float total= cart.totalcartitems();
cout<<"Total items:"<<total;
    return 0;
}
