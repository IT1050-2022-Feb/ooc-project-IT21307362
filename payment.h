#include<iostream>
#include<cstring>
//#include "Fees.h"
using namespace std;

class Payment{
	private
	:
		int Pay_ID;
		char Pay_Date[20];
		char Acc_holderName[30];
		double payAmount;
	   
	   //Fees *f;
		
	public: 
		Payment();
		Payment(int pID , char *n ,char *acc , double P_amount );
		void setPayID(int pID);
		void setPayDate(char *n );
		void setAccHolderName(char *acc);
		void setPayAmount(double P_amount);
		void UpdateDetais();
		void displayPayment();
	//	~Payment();
	};
		Payment::Payment(int pID,char *n, char *acc,double P_amount)
		{
			Pay_ID = pID;
			strcpy( Pay_Date ,n);
			strcpy(Acc_holderName, acc);
			payAmount= P_amount;
			
		}
		
		void Payment::displayPayment(){
			cout<<"Payment ID :"<<Pay_ID <<endl;
			cout<<"Payment Date :"<<Pay_Date<<endl;
			cout<<"Account holder name"<<Acc_holderName<<endl;
			cout<<"Payment amount :"<<payAmount<<endl;
			
		}

int main(){
	Payment p1(23,"2020/09/7","Fernando I.T" , 27868);
	
	p1.displayPayment();

return 0;
}
