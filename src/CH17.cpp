#include<iostream>
using namespace std;
/*
class Rectangle{
	public:
		int w, h;
		int Area() {
			return w * h;
		}
		int Bondary(){
			return 2 * (w + h);
		}
		void Init(int e, int f) {
			w = e;
			h = f;
		}
};
*/

/*
�����Ա�ͺ�������
Ҳ���Զ����Ա��ͬʱֱ�ӽ��к���������趨
*/

class Rectangle {
public:
	int w, h;
	int Area();
	int Bondary();
	void Init(int e, int f);
};

void Rectangle::Init(int e, int f) {
	w = e;
	h = f;
}
int Rectangle::Area(){return w * h;}
int Rectangle::Bondary() { return 2 * (w + h); }


int main() {
	int w = 10;
	int h = 10;

	Rectangle rec;
	rec.Init(w, h);
	int area_value = rec.Area();
	int bondary_value = rec.Bondary();

	cout << area_value << endl;
	cout << bondary_value << endl;

	return 0;

}