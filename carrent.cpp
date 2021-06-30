#include<iostream>
using namespace std;

struct Cars{
	string Cname[7]={"Ferrari","Bugatti","Lambo","Mercedes","Kia","Hundai","Rangerover"};
	string model[7]={"21d","chiron","Huracan","Gclass","Intro","Verna","Ultra"};
	string color[7]={"red","black","yellow","grey","white","orange","green"};
	string max_speed[7]={"200km/h","250km/h","150km/h","110km/h","100km/h","90km/h","130km/h"};
	string milage[7]={"10km/l","6km/l","5km/l","8km/l","15km/l","14km/l","9km/l"};
	int price[7]={ 700,600,500,400,300,200,100 };
};

struct Custo{
	string Name[20];
	string Nationality[10];
	int payment[10];
	int Mobile_no[15];
};
//declaring struct
Cars car;
Custo cus;

//first output
void menu(){
	int num=1;
	for(int i=0;i<=6;++i){
		cout<<num<<"-"<<car.Cname[i]<<endl;
		num++;
	}
}

//second output
void Details(int theChoice){
	cout<<car.Cname[theChoice-1]<<endl;
	cout<<car.model[theChoice-1]<<endl;
	cout<<car.color[theChoice-1]<<endl;
	cout<<car.max_speed[theChoice]<<endl;
	cout<<car.milage[theChoice-1]<<endl;
	cout<<car.price[theChoice-1]<<"K"<<endl;
}

//customer credit

void check(int j){
	if(cus.payment[j]>=car.price[j])
		cout<<"procee is successful"<<endl;
		else
		cout<<"not available"<<endl;
	
}
//user input
void user_input(int theChoice){
	int j=theChoice-1;
	
	cout<<"Enter your Name : ";
	cin>>cus.Name[j];
	cout<<"Enter your Nationality : ";
	cin>>cus.Nationality[j];
	cout<<"Enter your price : ";
	cin>>cus.payment[j];
	cout<<"Enter your Mobile number : ";
	cin>>cus.Mobile_no[j];
	
	check(j);
}
int main(){
	string decide="yes";
	
	cout<<"******WELCOME TO CAR-RENTAL-COMPANY******"<<endl;
	while(decide!="exit"){
		menu();
		cout<<"ENter your Choice : "<<endl;
		int theChoice;
		cin>>theChoice;
	    Details(theChoice);
	    cout<<"Do you want to rent this car : (yes/no/exit)"<<endl;
	    cin>>decide;
	    if(decide=="yes"){
	    	user_input(theChoice);
	    	cout<<"Thanks your car is Rented to you and Do you still want to continue?(yes/no/exit)"<<endl;
	    	cin>>decide;
	    	if(decide=="no") break;
	    	
		}
	 else {
      if(decide=="no")
      {
          continue ;
      }
     else if  (decide=="exit")
     {

         break ;
     }

   }
     }


    return 0;
}

