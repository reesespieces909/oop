#define __USBCONNECTION_H

#ifndef __USBCONNECTION_H 123

#include<iostream>

#include<stack>

using namespace std;

class USBConnection
{

private :
int id=0;
static stack<int> s;
USBConnection();

public :
static USBConnection* CreateUsbConnection();

int get_id();

~USBConnection();

};

#endif

USBConnection.cpp

#include"USBConnection.h"

#include<iostream>

#include<stack>

using namespace std;

stack<int> USBConnection :: s; 

USBConnection :: USBConnection()
{
if(s.size()==0){
this->id=1;
s.push(1);
}
else 
{
this->id=(s.size()+1);
s.push(s.size()+1);
}
}


public :
static USBConnection* USBConnection :: CreateUsbConnection()
{
USBConnection *b=nullptr;
if(s.size()==3) return b;
USBConnection b1;
b=&b1;
return b;
}

int USBConnection :: get_id()
{return this->id;}

USBConnection :: ~USBConnection()
{
for(int i=0;i<s.size();i++) s.pop();
}