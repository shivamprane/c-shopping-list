#include<iostream>

using namespace std;

const char *products[10]={"Quercetin", "Quercetin Complex", "Spirulina", "Bromelain", "Glutathione", "Lung Protector", "Hitolla", "Biwtia", "Osha Root", "Lipoma Care"};
int price[11] = {0,2661,3100,999,2400,3000,2400,1590,2200,2220,1500};
class shopping{
    
    int userip1,userip2, userip3;
    public:
    void product_display(){
        cout<<"Product List: "<< endl;
        for(int i=0; i<=9; i++)
        {
            cout << i+1 << ") " << products[i] << endl;
        }
        cout << "\nEnter product number to get details about product" << endl;
        cin >> userip1;
        cout << "\nDetails:" <<endl;
        cout << "Product Name: " << products[userip1-1]<<endl;
        cout << "Price: " << price[userip1] << "/-" << endl;
        more_options();
}
    void selectqt(){
        cout << "Enter Quantity of " << products[userip1-1] << endl;
        cin >> userip3;
        int unit_price = price[userip1];
        int price = userip3*unit_price;
        cout << "For " << userip3 << " quantity of " << products[userip1-1] << " you need to pay Rs " << price << "/-" << endl;
    }
    void more_options(){
        cout << "\nMore options:" << endl;
        cout<< "1) Select Quantity" << endl;
        cout<< "2) Go back to Product list" << endl;
        cout<< "3) Exit" << endl;
        cout<<"\nEnter a option number"<<endl;
        cin>>userip2;
        if(userip2==1){
            selectqt();
            more_options();
        }
        else if (userip2==2)
        {
            product_display();
            more_options();
        }
        else{
            
        }
        
    }

};

int main(){
    shopping shopping1;
    shopping1.product_display();
return 0;
}
