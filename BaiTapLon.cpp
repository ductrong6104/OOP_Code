
using namespace std;
class DOB{
	private:
		int day, month, year;
	public:
		friend istream& operator >> (istream &i, DOB &s){
			cout<<"Nhap Ngay Thang Nam Sinh: "<<endl;
			cout<<"\tNhap ngay sinh: ";
			i>>day;
			cout<<"\tNhap thang: ";
			i>>month;
			cout<<"\tNhap nam sinh: ";
			i>>year;
		}
	};
class info{
	private:
		float GPA;
		string ID, Class, Major;
	};
class SinhVien:private info{
	private: 
		string Name, Gender;
		DOB ns;
	public:
		void Nhap();
		void Xuat();
	};
typedef SinhVien Item;
struct Node{
	Item data;
	Node *next;
};
void SinhVien::Nhap(){
	 
struct SList{
	Node *head;
	Node *tail;
	long size;
	SList();
	Node* CreateNode(Item v);
	};
SList::SList(){
	head = NULL;
	tail = NULL;
	size = 0;
}

Node* SList::CreateNode(Item v)
{
	Node* p = new Node;
	p->data = v;	
	p->next = NULL;	
	return p; 
}
}
