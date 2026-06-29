#include <iostream>
#include <stdio.h>

class induk{
	protected:
		int sisi_a, sisi_b;
	
	public:
		void input(float panjang, float lebar);
};

void induk::input(float panjang, float lebar){
	sisi_a = panjang;
	sisi_b = lebar;
}

class anak: public induk{ 
	public: 
		float luas(){
			return sisi_a * sisi_b;
	}
};

int main(){
	anak o;
	o.input (7, 8);

	std::cout << "Nilai dari o.luas() adalah = " << o.luas();

return 0;
}

