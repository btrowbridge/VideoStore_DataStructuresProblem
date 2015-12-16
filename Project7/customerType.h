#include "videoType.h"
#include "linkedList.h"
#include "videoBinaryTree.h"
using namespace std;


class customerType {
public:
	customerType(string,string);

	string getFullName()const;
	string getFirstName() const;
	string getLastName() const;
	void setFisrtName(string);
	void setFirstName(string);
	void checkOut(videoType video);
	void checkIn(videoType video);


private:
	string fname;
	string lname;
	videoBinaryTree videoList;


};