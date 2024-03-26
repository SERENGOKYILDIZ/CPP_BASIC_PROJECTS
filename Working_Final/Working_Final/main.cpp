#include <iostream>
using namespace std;
class Sanal {
private:
	int real;
	int img;
public:
	Sanal(){}
	Sanal(int a, int b)
	{
		real = a;
		img = b;
	}
	Sanal operator+(Sanal const& obj)
	{
		Sanal sum;
		sum.real = this->real + obj.real;
		sum.img = this->img + obj.img;
		return sum;
	}
	void set(int a, int b)
	{
		real = a;
		img = b;
	}
	void print() const
	{
		cout << real << " + j" << img << endl;
	}
};
class Insan: public Sanal {
private:
	int yas;
	string ad;
public:
	Insan()
	{
		ad = "Adsiz";
		cout << "Bir insan olustu" << endl;
	}
	Insan(int yas)
	{
		ad = "Adsiz";
		this->yas = yas;
		cout << "Yasi " << yas << " bir insan olustu" << endl;
	}
	void setYas(int yas)
	{
		this->yas = yas;
	}
	void print() const
	{
		cout << "===========================" << endl;
		cout << "Ad:" << ad << endl;
		cout << "Yas:" << yas << endl;
	}
	int getYas() const
	{
		return yas;
	}
	friend class Topluluk;
};
class Topluluk {
public:
	void Goster(Insan& insan)
	{
		insan.ad = "Eren";
		insan.yas = 21;
	}
};
int main()
{
	const float PI = 3.14;
	Insan i1;
	Insan i2(31);
	i1.setYas(12);

	const Insan i3(24);

	Topluluk top;
	Insan i4;
	top.Goster(i4);


	i1.print();
	i2.print();
	i3.print();
	i4.print();

	Sanal s1(1, 2);
	Sanal s2(3, -1);
	Sanal s3;
	s3 = s1 + s2;
	s3.print();

	int* sayi = new int;
	*sayi = 13;
	cout << *sayi << endl;
	delete sayi;
	sayi = nullptr;
	i1.set(4, 5);

	i1.print();
	// explicit
	return 0;
}