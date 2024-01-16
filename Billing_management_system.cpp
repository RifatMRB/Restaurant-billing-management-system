#include<iostream>
#include<fstream>
//#include<bits/stdc++.h>
using namespace std;
class BOX{
   string V[5];
   string N[5];
   int VP[5];
   int NP[5];
    public:

    void get(string x[],string y[],int z[],int f[]){
      for(int i=0;i<5;i++){
         V[i]=x[i];
         N[i]=y[i];
         VP[i]=z[i];
         NP[i]=f[i];
      }
    }
    
    char c;
    char item;
    string vegItem;
    int billAmount=0;
    char selectAgain;
    string nonvegItem;
    int intValue;

    void Intro(){
        cout<<"\n";
        cout<<"----------------Welcome to Online Food Order--------------"<<endl;
        cout<<"--------------Please follow below instructions-----------"<<endl;
        cout<<"Step 1 : Please press s or S to start your order"<<endl;
        cout<<"Step 2 : You can press b or B to go back "<<endl;
        cout<<"Step 3 : You can press e or E to take exit from the website"<<endl;
        cout<<"Step 4 : You can order both veg and nonveg item"<<endl;
        cout<<"Step 5 : Please press v or V to select veg item"<<endl;
        cout<<"Step 6 : Please press n or N to select noveg item"<<endl;
        cout<<"Step 7 : You will get your final Bill after your order"<<endl;
        cout<<"Step 8 : If your bill amount more than 1000 Taka.Then you will get 10 percent discount"<<endl;
    }

    int returTotalBill(){ 
        Intro();
        cout<<"\n";
        start:
        cout<<"Please press s or S to start your order  : ";
        cin>>c;
        if(c=='s' || c=='S'){
            cout<<"\n";
            items:
            cout<<"Please select your choice"<<endl;
            cout<<"(v) Veg Items                (n) Non Veg Items"<<endl;
            cin>>item;

            if( item=='v' || item=='V'){
                cout<<"\n";
                vegItemList:
                cout<<"Please select 1, 2, 3, 4, 5 as per your choice"<<endl;
                for(int i=0;i<5;i++)
                {
                  cout<<"("<<i+1<<") "<<V[i]<<" : Price : "<<VP[i]<<" Taka"<<endl;
                }
                cin>>vegItem;
                if( vegItem == "1" ){
                    intValue = stoi(vegItem);
                    billAmount=billAmount+VP[intValue-1];
                }
                else if( vegItem == "2" ){
                    intValue = stoi(vegItem);
                    billAmount=billAmount+VP[intValue-1];
                }
                else if( vegItem == "3" ){
                    intValue = stoi(vegItem);
                    billAmount=billAmount+VP[intValue-1];
                }
                else if( vegItem == "4" ){
                    intValue = stoi(vegItem);
                    billAmount=billAmount+VP[intValue-1];
                }
                else if( vegItem == "5" ){
                    intValue = stoi(vegItem);
                    billAmount=billAmount+VP[intValue-1];
                }
                else if( vegItem == "b" || vegItem == "B"){
                    cout<<"\n";
                    goto items;
                }
                else if( vegItem == "e" || vegItem == "E"){
                    return billAmount;
                }
                else{
                    cout<<"\n";
                    cout<<"You have entered wrong value,please try again !"<<endl;
                    goto vegItemList;
                }

                add1:
                cout<<"Do you want to add more items, y or n?"<<endl;
                cin>>selectAgain;

                if( selectAgain == 'y' || selectAgain == 'Y'){
                    cout<<"\n";
                    goto items;
                }
                else if( selectAgain == 'n' || selectAgain == 'N'){
                    return billAmount;
                }
                else if( selectAgain == 'b' || selectAgain == 'B'){
                    goto vegItemList;
                }
                else if( selectAgain == 'e' || selectAgain == 'E'){
                    return billAmount;
                }
                else{
                    cout<<"\n";
                    cout<<"You have entered wrong value, please press try agin !"<<endl;
                    goto add1;
                }
            }

            else if(item=='n' || item=='N'){
                cout<<"\n";
                nonvegItemList:
                cout<<"Please select 1, 2, 3, 4, 5 as per your choice"<<endl;

                for(int i=0;i<5;i++){

                  cout<<"("<<i+1<<") "<<N[i]<<" : Price : "<<NP[i]<<" Taka"<<endl;

                }

                cin>>nonvegItem;
                if( nonvegItem == "1" ){
                    intValue = stoi(nonvegItem);
                    billAmount=billAmount+NP[intValue-1];
                }
                else if( nonvegItem == "2" ){
                    intValue = stoi(nonvegItem);
                    billAmount=billAmount+NP[intValue-1];
                }
                else if( nonvegItem == "3" ){
                    intValue = stoi(nonvegItem);
                    billAmount=billAmount+NP[intValue-1];
                }
                else if( nonvegItem == "4" ){
                    intValue = stoi(nonvegItem);
                    billAmount=billAmount+NP[intValue-1];
                }
                else if(nonvegItem== "5" ){
                    intValue = stoi(nonvegItem);
                    billAmount=billAmount+NP[intValue-1];
                }
                else if( nonvegItem == "b" || nonvegItem == "B"){
                    cout<<"\n";
                    goto items;
                }
                else if( nonvegItem == "e" || nonvegItem == "E"){
                    return billAmount;
                }
                else{
                    cout<<"\n";
                    cout<<"You have entered wrong value,please try again!"<<endl;
                    goto nonvegItemList;
                }

                add2:
                cout<<"Do you want to add more items, y or n?"<<endl;
                cin>>selectAgain;
                if( selectAgain == 'y' || selectAgain == 'Y'){
                    cout<<"\n";
                    goto items;
                }
                else if( selectAgain == 'n' || selectAgain == 'N'){
                    return billAmount;
                }
                else if( selectAgain == 'b' || selectAgain == 'B'){
                    goto nonvegItemList;
                }
                else if( selectAgain == 'e' || selectAgain == 'E'){
                    return billAmount;
                }
                else{
                    cout<<"You have entered wrong value, please press try agin !"<<endl;
                    goto add2;
                }

            }

            else if(item=='b'|| item=='B'){
                cout<<"\n";
                goto start;
            }

            else if(item=='e' || item=='E'){
                return billAmount;
            }

            else{
                cout<<"\n";
                cout<<"You have entered wrong value,please try again!"<<endl;
                goto items;
            }
        }

        else if(c=='e'||c=='E'||c=='b'||c=='B'){
            return billAmount;
        }

        else{
            cout<<"\n";
            cout<<"You have entered wrong value, please press try agin !"<<endl;
            goto start;
        }
    }
    
};
int main(){

    string vegitariyan[]={"Pasta","Vegetable Soup","Sweet Potato Tacos","Coconut Curry Ramen","Veg Roll"};
    string nonvegitariyan[]={"Chicken","Burger","Pizza","Mutton Korma","Chicken Roll"};

    int vegprice[]={400,500,350,555,200};
    int nonvegprice[]={200,300,350,400,500}; 

    ofstream file;
    file.open("Food.txt");
    file <<"Vegitariyan Food : "<<endl;
    for (int i = 0; i < 5; i++) {
        file << vegitariyan[i] << " : Price : " << vegprice[i] << " Taka" << endl;
    }
    file << "Non-Vegitariyan Food: " << endl;
    for (int i = 0; i < 5; i++) {
        file << nonvegitariyan[i] << " : Price : " << nonvegprice[i] << " Taka" << endl;
    }
    file.close();

    BOX p1;

    p1.get(vegitariyan,nonvegitariyan,vegprice,nonvegprice);
    int totalBill=p1.returTotalBill();
    float discount=totalBill*(10/100.0);

    if (totalBill>1000)
    {
        cout<<"\n";
        cout<<"Your total Bill Amount is "<<totalBill<<endl;
        cout<<"Your bill amount more than 1000 Taka.So you will get 10 percent discount"<<endl;
        cout<<"Discount amount : "<<discount<<endl;
        cout<<"Your total Bill Amount is "<<(totalBill-discount)<<endl;
        cout<<"\n";
    }

    else if(totalBill==0){
        cout<<"\n";
        cout<<"Thanks for visiting our website"<<endl;
        cout<<"\n";
    }

    else {
        cout<<"\n";
        cout<<"Your total Bill Amount is "<<totalBill<<endl;
        cout<<"Thank you for you order !"<<endl;
        cout<<"\n";
    }

    return 0;
}


