#include<iostream>
using namespace std;

class Library;
class Member{

    int memberID, bookBorrowed;
public:
    Member(int mid=0, int bookb=0){
        memberID = mid;
        bookBorrowed = bookb;
        cout << "Member Id: " << memberID << endl;
        cout << "Book Borrowed: " << bookBorrowed << endl;
    }

    void requestAccess(Library lib);

};
class Library{
    int totalBooks, restrictedSectionBooks;
public:
    Library(int tob=0, int rsb=0){
        totalBooks = tob;
        restrictedSectionBooks = rsb;
        cout << "Total Books: " << totalBooks << endl;
        cout << "Restricted Section Books: " << restrictedSectionBooks << endl;
    }
    friend void Member::requestAccess(Library lib);

};
    void Member::requestAccess(Library lib){
        if(bookBorrowed<3 && lib.totalBooks > 0){
            cout << "General Access: GRANTED" << endl;
        }else{
            cout << "General Access: DENIED" << endl;
        }
        if(lib.restrictedSectionBooks>5 && (memberID%2==0)){
            cout << "Restricted Access: GRANTED" << endl;
        }else{
            cout << "Restricted Access: DENIED" << endl;
        }

    }
int main(){

    int memid, bb, tb, rsbooks;

    cout << "Member ID: ";
    cin >> memid;

    cout << "Book Borrowed: ";
    cin >> bb;

    cout << "Total Books: ";
    cin >> tb;

    cout << "Restricted Section Books: ";
    cin >> rsbooks;

    Member m1(memid, bb);
    Library l1(tb, rsbooks);

    m1.requestAccess(l1);
    return 0;
}
