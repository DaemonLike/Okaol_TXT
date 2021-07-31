
#include <iostream>
#include <cstdlib>
#include <string>
#include <cstdlib>
#include <fstream>

using namespace std;
using std::cout;
using std::cin;
using std::endl;

fstream plik; 

int x;
int y;
int s;
int a;
int czas = 0;
int i;
/*Szukane voidy*/
void Oku1();
void Oku11();
void Oku1121();
void Oku_poruszanie();
void Miejsce();
/*Ekwipunek*/
bool przedmioty = false;
bool tarcza_L = false;
bool kij_M = false;
bool plecak_x = false;
int namiot = 0;
int zapasy = 0;
/*Jagody*/
int niebieskie = 0;
int biale = 0;
int czerwone = 0;
int zielone = 0;
/*wiedza*/
int W_OKU = 0;
int W_tarcza_L = 0;
int W_kij_M = 0;
int W_plecak_x = 0;
int Bukaczek_Wody = 0;
/*Efekty*/
int OBUZ_x;
int OBUZ_y;
int zmenczenie = 0;
bool predkosc = false;

void wczytaj(){
	
	plik.open("Zap1.txt",ios::in);
	
	if(plik.good()==false){
		cout << "brak zapisanej gry" <<endl;
	}
	string daneP;
	int nr_lini =1;
	
	while(getline(plik,daneP)){
		
		switch(nr_lini){
			
			case 1:x = atoi(daneP.c_str()); break;
			case 2:y = atoi(daneP.c_str());break;
			case 3:czas = atoi(daneP.c_str());break;
			case 4:przedmioty = atoi(daneP.c_str());break;
			case 5:tarcza_L = atoi(daneP.c_str());break;
			case 6:kij_M = atoi(daneP.c_str());break;
			case 7:plecak_x = atoi(daneP.c_str());break;
			case 8:namiot = atoi(daneP.c_str());break;
			case 9:zapasy = atoi(daneP.c_str());break;
			case 10:niebieskie = atoi(daneP.c_str());break;
			case 11:biale = atoi(daneP.c_str());break;
			case 12:czerwone = atoi(daneP.c_str());break;
			case 13:zielone = atoi(daneP.c_str());break;
			case 14:W_OKU = atoi(daneP.c_str());break;
			case 15:W_tarcza_L = atoi(daneP.c_str());break;
			case 16:W_kij_M = atoi(daneP.c_str());break;
			case 17:W_plecak_x = atoi(daneP.c_str());break;
			case 18:Bukaczek_Wody = atoi(daneP.c_str());break;
			case 19:OBUZ_x = atoi(daneP.c_str());break;
			case 20:OBUZ_y = atoi(daneP.c_str());break;
			case 21:zmenczenie = atoi(daneP.c_str());break;
			case 22:predkosc = atoi(daneP.c_str());break;
		}
		
		
		nr_lini++;
	}
	
	plik.close();
	Miejsce();
}
void zapis(){
	
	plik.open("Zap1.txt",ios::out);
	
	plik<<x<<endl;
	plik<<y<<endl;
	plik<<czas<<endl;
	plik<<przedmioty<<endl;
	plik<<tarcza_L<<endl;
	plik<<kij_M<<endl;
	plik<<plecak_x<<endl;
	plik<<namiot<<endl;
	plik<<zapasy<<endl;
	plik<<niebieskie<<endl;
	plik<<biale<<endl;
	plik<<czerwone<<endl;
	plik<<zielone<<endl;
	plik<<W_OKU<<endl;
	plik<<W_tarcza_L<<endl;
	plik<<W_kij_M<<endl;
	plik<<W_plecak_x<<endl;
	plik<<Bukaczek_Wody<<endl;
	plik<<OBUZ_x<<endl;
	plik<<OBUZ_y<<endl;
	plik<<zmenczenie<<endl;
	plik<<predkosc<<endl;
	
	plik.close();
}
void Oku_DEAD(int d){
	cout << "Zobaczmy" << endl;
	switch(d){
		case 1:
		cout << "Szybka œmieræ nawet nic nie zdonzy³eœ zobaczyc ¿al mi cie wracaj" << endl;
		czas = 0;
		przedmioty = false;
		tarcza_L = false;
		kij_M = false;
		plecak_x = false;
		namiot = 0;
		zapasy = 0;
		niebieskie = 0;
		biale = 0;
		czerwone = 0;
		zielone = 0;
		Bukaczek_Wody = 0;
		predkosc = false;
		Oku1();
		break;
	}
}
void OKU_RAND_MIEJSCE(){
	
}
void OKU_Sister(){
	
}
void OKU_Vi(){
	
}
void OKU_M_czas(int c){
	switch(c){
		
		case 1:
		cout << "Jestes przy leœnym Ÿrude³ku" << endl;
		if(czas >= 350 && czas <= 500){
			cout << "Wreszcie ,nie bêdziemy tu sta³y wiecznie oddawaj kosztownoœci" << endl;
			OKU_Sister();
		}
		break;
		
		case 2:
		cout << "Jestes na polanie" << endl;
		if(czas >= 280 && czas <= 340){
		cout << "Widzisz dziewczyne otoczon¹ przez wilki" << endl;
	    }
		break;
	}
}
void Oku1123(){
	cout << "Trafiasz na kolejna polanê" << endl;
	OKU_M_czas(2);
}
void Oku1122(int z){
	cout << "Trafiasz na rzeke a na niej most" << endl;
	cout << "Op³ata za przejœcie prze muj most" << endl;
	/*ob 1,2*/
}
void Oku1121211(){
	cout << "Po dok³adniejszej analizie stwierdzasz ¿e to obuz bandytów" << endl;
	cout << "1.Wbij tam jak do siebie 2.Sprubuj z³apac jednego z nich 3.Omiñ obuz" << endl;
}
void Oku11212121(){
	cout << "Niedaleko widaæ podniszczon¹ chatke ryback¹, a na horyzoncie mozna dostszec jakiœ statek" << endl;
	cout << "1.Sprawdz chatkê 2.idz dalej" << endl;
	
}

void /*pre obuz band*/Oku112121(){
	cout << "S³yszysz dziwny gwar dobiegajacy z lasu" << endl;
	cout << "1.Sprawdz to 2.Idz dalej" << endl;
	cin >> a;
	switch(a){
		case 1:
		cout << "to ufortyfikowany obuz" << endl;
		Oku1121211();
		break;
		case 2:
		cout << "Idz na" << endl;
		Oku_poruszanie();
		break;
	}
}
void Oku_Jagody(){
	for(i = 0;i<1;i=i){
		cout << "1.Niebieskie 2.Bia³e 3.Czerwone 4.Zielone" << endl;
		cin >> a;
		switch(a){
			case 1:
			if(niebieskie >= 1){
				niebieskie =- 1;
			cout << "Zjadasz garœæ niebieskich jagód"<< endl;
			cout << "zaczyna krêcic ci sie w g³owie"<< endl;
			czas =+ 120;
			cout << "coœ w ciebie przywali³o" << endl;
			cout << "Budzisz siê" << endl;
			i =1;
			OKU_M_czas(1);
			}
			break;
			case 2:
			if(biale >= 1){
			biale = -1;
			cout << "Zjadasz garœæ bia³ych jagód"<< endl;
			cout << "Czujesz siê super lekki"<< endl;
			predkosc = true;
			i=1;
			}
			break;
			case 3:
			if(czerwone>=1){
			cout << "Zjadasz garœæ czerwonych jagód"<< endl;
			cout << "Zaczyna cie strasznie paliæ w gardle dobrze ¿e obok wci¹sz jest Ÿrude³ko" << endl;
			i=1;
			}
			break;
			case 4:
			if(zielone >=1){
			cout << "Zjadasz garœæ zielonych jagód"<< endl;
			cout << "o nie one by³y truj¹ce"<< endl;
			i=1;
			Oku_DEAD(1);
			}
			break;
		}
		
		cout << "Brak³o tych jagudek" << endl;
	}
	Oku_poruszanie();
}
void /*Pre jagody*/Oku112111(){
	czas =+ 3;
	cout << "Znalaz³es trochê róznych jagód" << endl;
	niebieskie =+1;
	biale =+1;
	czerwone =+1;
	zielone =+1;
	Oku_Jagody();
}
void /*ru jagody*/Oku11211(){
	cout << "1.Przeszukaj okolice" << endl;
	if(zapasy >= 1){
		cout << "2.Zjedz zapasy" << endl;
		cin >> a;
		switch(a){
			case 1:
			Oku112111();
			break;
			case 2:
			zapasy =- 1;
			Oku_poruszanie();
			break;
		}
	}else{
		cin >> a;
		switch(a){
			case 1:
			Oku112111();
			break;
		}
	}
}
void /*Ÿrude³ko*/Oku1121(){
	cout << "1.Napij siê" << endl;
	if(przedmioty == true || plecak_x == true){
		cout << "2.Nape³nij buk³aczek" << endl;
		cin >> a;
		switch(a){
			case 1:
			cout << "Ugasi³eœ pragnienie, przyda³o by siê jescze cos zjeœæ" << endl;
			Oku11211();
			break;
			case 2:
			Bukaczek_Wody = 2;
			cout << "Cos do picia na puzniej" << endl;
			Oku_poruszanie();
			break;
		}
	}else{
		cin >> a;
	switch(a){
			case 1:
			cout << "Ugasi³eœ pragnienie, przyda³o by siê jescze cos zjeœæ" << endl;
			Oku11211();
			break;
	}
	}
}
void /*Przedmioty2*/Oku1111(){
	for(i = 0;i < 1; i = i  ){
		cout << "1.Tarcza" << endl << "2.Laska" << endl << "3.plecak" << endl << "4.Id¿ z t¹d" << endl;
	cin >> a;
	switch(a){
		case 1:
		czas =+ 1;
		W_tarcza_L = 1;
		cout << "Zaskakujaco letka na œrodku jest spory kryszta³ w kolorze lodu" << endl;
		cout << "Weœ 1.Tak 2.Nie" << endl;
		cin >> a;
		switch(a){
			case 1:
			tarcza_L = true;
			break;
			case 2:
			tarcza_L = false;
			break;
		}
		break;
		case 2:
		czas =+ 1;
		W_kij_M = 1;
		cout << "Wilkoœci cz³owieka zakonczona filoketowym kryszta³em" << endl;
		cout << "Weœ 1.Tak 2.Nie" << endl;
		cin >> a;
		switch(a){
			case 1:
			kij_M = true;
			break;
			case 2:
			kij_M = false;
			break;
		}
		break;
		case 3:
		czas =+ 1;
		cout << "Pojemny plecak nigdy nie dokopiesz sie do rzeczy na dnie" << endl;
		zapasy =+ 3;
		cout << "Prubuj¹c znajdujesz troche zapasów" << endl;
		cout << "Weœ 1.Tak 2.Nie" << endl;
		cin >> a;
		switch(a){
			case 1:
			plecak_x = true;
			namiot = 1;
			break;
			case 2:
			plecak_x = false;
			namiot = 0;
			break;
		}
		break;
	
	
	case 4:
	i=1;
	break;
	}
	}
	Oku_poruszanie();
}
void /*Przedmioty1*/Oku111(){
	cout << "Znajdujesz kilka przedmiotów" << endl;
	cout << "1.Obej¿yj" << endl << "2.Weœ wszystko" << endl << "3.zostaw" << endl;
	cin >> a;
	switch(a){
		case 1:
		Oku1111();
		break;
		case 2:
		przedmioty = true;
		namiot = 1;
		Oku_poruszanie();
		break;
		case 3:
		Oku_poruszanie();
		break;
	}
}
void /*Polana*/Oku11(){
	cout << "Jestes na polanie"<< endl;
	if(przedmioty == false && tarcza_L == false && kij_M == false && plecak_x == false){
		cout << "1.Przeszukaj" << endl;
		}
	 cout << "2.idŸ"<< endl;
	cin >> a;
	switch(a){
		case 1:
		Oku111();
		break;
		case 2:
		Oku_poruszanie();
		break;
	}
}
void Miejsce(){
	switch(x){
		
		case 99:
		switch(y){
			
			case 100:
			czas =+3;
			cout << "trafiasz na scieszkê gdzie dalej" << endl;
			cout << "1. Napszud w las 2.W lewo scieszk¹ 3.W prawo scieszk¹" << endl;
			cin >> a;
			switch(a){
				
			case 1:
			czas =+ 5;
			Oku1123();
			break;
			
			case 101:
			czas =+ 80;
			x = 103;
			y = 99;
			cout << "Idziesz dalej ,a¿ ... ";
			Oku1122(2);
			break;
			
			case 3:
			czas =+ 60;
			x = 105;
			y = 101;
			cout << "Idziesz dalej ,a¿ ... ";
			Oku1122(1);
			break;
			
			}
			break;
		}
		break;
		
		case 100:
		switch(y){
			
			case 99:
			czas =+ 60;
			x = 100;
			y = 103;
			cout << "Idziesz dalej ,a¿ ... ";
			Oku1122(1);
			break;
			
			case 100:
			czas =+10;
			Oku11();
			break;
			
			case 101:
			x = 99;
			y = 105;
			cout << "Idziesz dalej ,a¿ ... ";
			Oku1122(2);
			break;
			
			case 102:
			czas =+ 15;
			x = 104;
			y = 100;
			cout << "Idziesz wzd³u¿ rzeczki" << endl;
			Oku112121();
			break;
			
			
		}
		break;
		
		case 101:
		switch(y){
			
			case 100:
			czas =+ 10;
			cout << "Trafisz na ¿rude³ko" << endl;
			Oku1121();
			break;
			
			case 101:
			czas =+ 30;
			cout << "Przedziersz sie przez gesty las chyba siê zgubi³eœ" << endl;
			OKU_RAND_MIEJSCE();
			break;
		}
		break;
		
		case 103:
		switch(y){
			
			case 99:
			Oku1122(2);
			break;
			
			case 100:
			czas =+ 12;
			cout << "Jestes przy Ÿrudle" << endl;
			Oku1121();
			break;
		}
		break;
		
		case 104:
		switch(y){
			
			case 99:
			czas =+ 2;
			cout << "to ufortyfikowany obuz" << endl;
			Oku11212121();
			break;
			
			case 101:
			czas =+ 30;
		cout << "Przedziersz sie przez gesty las chyba siê zgubi³eœ" << endl;
		OKU_RAND_MIEJSCE();
			break;
		}
		break;
		
		case 105:
		switch(y){
			
			case 100:
			czas =+ 30;
			x = 107;
			y = 100;
			cout << "Wychodisz z lasu prosto na pla¿e" << endl;
			Oku11212121();
			break;
			
			case 101:
			czas =+ 60;
			Oku1122(1);
			break;
		}
		break;
	}
}
void Oku_poruszanie(){
	zapis();
	if(czas>1080 && czas <1300){
		cout << "Zaczyna sie ciemniæ lepiej znajdŸ miejsce na obuz" << endl;
	}else if(czas > 1300){
		cout << "Rozbijasz obuz" << endl;
		cout << "1.Tak 2.Nie" << endl;
		cin >> a;
		switch(a){
			case 1:
			OBUZ_x = x;
			OBUZ_y = y;
			zmenczenie = 0;
			czas = 300;
			break;
			case 2:
			zmenczenie =+ 1;
			if (zmenczenie >=3){
				zmenczenie=0;
				cout << "Padasz ze zmêczenia i zasypiasz tu gdzie jesteœ" << endl;
			}
			break;
		}
	}else{
		cout << "idŸesz na:" << endl;
	cout << "1.Pó³noc 2.Wschód 3.Po³udnie 4.Zachód" << endl;
	cin >> a;
	switch(a){
		case 1:
		x = x + 1;
		break;
		case 2:
		y = y + 1;
		break;
		case 3:
		x = x - 1;
		break;
		case 4:
		y = y - 1;
		break;
	}
	Miejsce();
}
}
void Oku1(){
	x = 100;
	y = 100;
	W_OKU = 1;
	czas =+ 240;
	cout << "Budzisz siê w namiocie"<< endl;
	cout << "1.Rozejzyj siê" << endl << "2.Œpij dalej"<< endl;
	cin >> a;
	switch(a){
		case 1:
		Oku11();
		break;
		case 2:
		czas =+ 60;
		cout << "Budzi cie wycie wilków" << endl;
	cout << "1.Sprawdz to" << endl << "2.Œpij dalej" << endl;
	cin >> a;
	switch(a){
		case 1:
		cout << "wycie dobiega³o z po³udnia" << endl;
		Oku11();
		break;
		case 2:
		czas =+ 60;
		cout << "wyspa³eœ sie porz¹dnie" << endl;
		Oku11();
		break;
	}
		break;
	}
}
int main(){
	setlocale(LC_CTYPE, "Polish");
	cout << "Ostrze¿enie gcdcdra ma pe³no b³êdów ortograficznych, kto znajdzie wiêcej xd"<< endl;
	cout << "Graj" << endl << "1.nowa gra" << endl << "2.wczytaj grê" << endl << "3.wyjdz z gry" << endl;
	cin >> a;
	switch (a){
	case 1:
	Oku1();
		break;
	case 0:
		break;
	case 2:
	wczytaj();
		break;
	}
																																																			
	cout << "Okaol Studios dziêkuje za grê" << endl;
	cin >> a;
	return s;
	
}