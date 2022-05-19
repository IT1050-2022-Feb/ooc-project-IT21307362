#include<iostream>
#include<cstring>

#include "timetable.h"
#define SIZE 4
using namespace std;

class Subject{
	private:
		 string Sub_name;
		 string Sub_ID;
		 timetable *t[SIZE];
		
	public:
		Subject(){/*
			for(int i=0; i<SIZE; i++){
				t[i]= new timetable();
			}*/
		}
		
		Subject(string sName, istring sID){
			Sub_name=sName;
			Sub_ID=sID;
		};
		void setSubID(string ID, string name){
			Sub_name=name;
			Sub_ID=ID;
		};
		//void setSubName(string Name);
	
		void displaySubDetails();
	
	//~Subject()
	{ 
	/*cout<<"Subject Close "<<endl;
	for(i=0; i<SIZE; i++)
		delete t[i];
		cout<<"the end"<<endl;*/
			}
			
	
	};
	
	
	
	
	void Subject::displaySubDetails(){
		cout<<"Subject ID:"<<Sub_ID<<endl;
		cout<<"Subject Name :"<<Sub_name<<endl;
		
		
	}
	
	int main(){
		Subject s1( "Maths", 87);
		
		s1.displaySubDetails();
		return 0;
		
	}
	
