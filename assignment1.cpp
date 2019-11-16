#include<iostream>
#include<string.h>
using namespace std;
class Book
{
	private:
		int bookno;
		char title[51], author[51];
		float price;
	public:	
		Book(int bookno, char *title, char *author, float price)
		{
			this->bookno=bookno;
			strcpy(this->title,title);
			strcpy(this->author,author);
			this->price=price;
		}
		void setBookNo(int bookno)
		{
			this->bookno=bookno;
		}
		void setTitle(char *title)
		{
			strcpy(this->title,title);
		}
		void setAuthor(char *author)
		{
			strcpy(this->author,author);
		}
		void setPrice(float price)
		{
			this->price=price;
		}
		int getBookNo()
		{
			return bookno;
		}
		char *getTitle()
		{
			return title;
		}
		char *getAuthor()
		{
			return author;
		}
		float getPrice()
		{
			return price;
		}
};
main()
{
	int bookno;char title[51], author[51];float price;
	cout << "Book No : "; cin>>bookno;
	cout << "Title : "; cin>>title;
	cout << "Author : "; cin >>author;
	cout << "Price : "; cin >>price;
	
	Book *b=new Book(bookno,title,author,price);
	
	cout << "Book having title "<<b->getTitle() << " written by " << b->getAuthor() <<" has price " << b->getPrice() << " and bookno " << b->getBookNo() << "\n";
	b->setPrice(b->getPrice()*1.2);
	cout << "Book having title "<<b->getTitle() << " written by " << b->getAuthor() <<" has price " << b->getPrice() << " and bookno " << b->getBookNo() << "\n";
}
