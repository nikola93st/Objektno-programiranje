#include "zadatak1/hrana.h"
#include "vege.h"

Vege::Vege(std::string tip, std::string ime, int voda, int protein, int masti, int ugljikohidrati, int kolicina, std::string rok, float samostalno, float prilog) :
	Hrana(tip, ime, voda, protein, masti, ugljikohidrati, kolicina, rok)
{
	potrosnjaSamostalno = samostalno;
	potrosnjaPrilog = prilog;
}

Vege::~Vege()
{
	std::cout << "destruktor mljecni\n";

}
float Vege::getSamostalnaPotrosnja()
{
	return potrosnjaSamostalno;
}
float Vege::getPrilogPotrosnja()
{
	return potrosnjaPrilog;
}

Tofu::Tofu(std::string tip, std::string ime, int voda, int protein, int masti, int ugljikohidrati, int kolicina, std::string rok, float samostalno, float prilog, std::string naziv) :
	Vege(tip, ime, voda, protein, masti, ugljikohidrati, kolicina, rok, samostalno, prilog)
{
	naziv = naziv;
}

Tofu::~Tofu()
{
	std::cout << "destruktor madarica\n";

}

Riza::Riza(std::string tip, std::string ime, int voda, int protein, int masti, int ugljikohidrati, int kolicina, std::string rok, float samostalno, float prilog, std::string naziv) :
	Vege(tip, ime, voda, protein, masti, ugljikohidrati, kolicina, rok, samostalno, prilog)
{
	naziv = naziv;
}

Riza::~Riza()
{
	std::cout << "destruktor krempita\n";

}

Hummus::Hummus(std::string tip, std::string ime, int voda, int protein, int masti, int ugljikohidrati, int kolicina, std::string rok, float samostalno, float prilog, std::string naziv) :
	Vege(tip, ime, voda, protein, masti, ugljikohidrati, kolicina, rok, samostalno, prilog)
{
	naziv = naziv;
}

Hummus::~Hummus()
{
	std::cout << "destruktor torta\n";

}