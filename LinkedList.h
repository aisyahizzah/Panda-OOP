#include <iostream>
using namespace std;

template <class T>
struct ElmtList
{
    T info;
    ElmtList *next;
};

template <class T>
class LinkedList {
	public:
		ElmtList<T> *first, *last;
	
	public:
		LinkedList<T>(){
			first = NULL;
			last = NULL;
		}
		
		T get(int indeks){
			ElmtList<T> *temp = first;
			
			while(indeks>1){
				temp = temp->next;
				indeks--;
			}
			
			return temp->info;
		}
		
		int find(T element){
			int i = 1;
			ElmtList<T> *temp = first;
			
			while (temp->info != element && first != last){
				temp = temp->next;
				i++;
			}
			
			if (temp->info == element){
				return i;
			} else {
				return -1;
			}
		}
		
		bool isEmpty(){
			return (first == NULL && last == NULL);
		}
		
		void add(T element){
			ElmtList<T> *temp = new ElmtList<T>();
			temp->info = element;
			temp->next = NULL;
			
			if (isEmpty()){
				first = temp;
				last = temp;
			} else {
				last->next = temp;
				last = last->next;
			}
		}
		
		void remove(T element){
			if (first->info == element){
				first = first->next;
			} else {
				
				ElmtList<T> *temp = first;
				
				while (temp->next->info != element && first != last){
					temp = temp->next;
				}
				
				if (temp->next->info == element){
					if (temp->next == last){
						last = temp;
					}
					
					temp->next = temp->next->next;
					
				}
			}
		}
		
		void print(){
			ElmtList<T> *temp = first;
			
			while (temp != NULL){
				cout<<temp->info<<" ";
				temp = temp->next;
			}
			
			cout<<endl;
		}

};
