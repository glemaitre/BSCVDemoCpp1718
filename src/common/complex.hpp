#ifndef Complex
#define Complex

#include <cmath>


#define PI 3.14159265

class complex{
	// Member variable
	private:
		float real;
		float imag;
		float mod;
		float ar;
		// Member functions and methods
		float modulus();
		float arg();

	public:
		complex();
		complex(float &, float &);
		void set_real(float);
		void set_imag(float);
		float get_real() const;
		float get_imag() const;
		float get_mod();
		float get_arg();
		void clear_real();
};

complex operator+(const complex &, const complex &);
#endif /* ifndef Complex */


