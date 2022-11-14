#include "geo.cpp"

int main(void) {
	Rechteck rechteck(5.0f, 3.0f);
	rechteck.print();
	//float umfangRechteck = rechteck.umfang();
	//float flaecheRechteck = rechteck.flaeche();
	
	Kreis kreis(7.5f);
	kreis.print();
	//float umfangKreis = kreis.umfang();
	//float flaecheKreis = kreis.flaeche();
	
	Dreieck dreieck(4.0f, 2.6f, 3.1f);
	dreieck.print();
	//float umfangDreieck = dreieck.umfang();
	//float flaecheDreieck = dreieck.flaeche();
	
	Quadrat quadrat(4.3f);
	quadrat.print();
	
	return 0;
}
