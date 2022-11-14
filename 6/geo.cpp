#include <math.h>
#include <stdio.h>
#include "geo.hpp"


class Rechteck {
    private:
        enum Color farbe = ROT;
        float hoehe, breite;
    
    public:
        Rechteck(float h, float b) {
            sethoehe(h);
            setbreite(b);
        }
        void sethoehe(float h) {hoehe = h;}
        float gethoehe() {return hoehe;}        
        void setbreite(float b) {breite = b;}
        float getbreite() {return breite;}
        
        float flaeche() {return hoehe * breite;}
        float umfang() {return 2 * hoehe + 2 * breite;}
        void print() {
            printf("Rechteck:\n");
            printf("Hoehe: %f\n", hoehe);
            printf("Breite: %f\n", breite);
            printf("Flaeche: %f\n", flaeche());
            printf("Umfang: %f\n", umfang());
        }
};


class Kreis {
    private:
        enum Color farbe = BLAU;
        float radius;
    
    public:
        Kreis(float r) {setradius(r);}
        void setradius(float r) {radius = r;}
        float getradius() {return radius;}        
        
        float flaeche() {return radius * radius * PI;}
        float umfang() {return 2 * PI * radius;}
        void print() {
            printf("Kreis:\n");
            printf("Radius %f\n", radius);
            printf("Flaeche: %f\n", flaeche());
            printf("Umfang: %f\n", umfang());
        }
    
};


class Dreieck {
    private:
        enum Color farbe = GRUEN;
        float k1, k2, k3;
        
    public:
        Dreieck(float ka1, float ka2, float ka3) {
            setk1(ka1);
            setk2(ka2);
            setk3(ka3);
        }
        void setk1(float k) {k1 = k;}
        float getk1() {return k1;}  
         void setk2(float k) {k2 = k;}
        float getk2() {return k2;}           
         void setk3(float k) {k3 = k;}
        float getk3() {return k3;}           
        
        float flaeche() {
            float s = (k1 + k2 + k3) / 2;
            return sqrt(s * (s - k1) * (s - k2) * (s - k3));
        }
        float umfang() {return k1 + k2 + k3;};
        void print() {
            printf("Dreieck:\n");
            printf("Kante 1 %f\n", k1);
            printf("Kante 2 %f\n", k2);
            printf("Kante 3 %f\n", k3);
            printf("Flaeche: %f\n", flaeche());
            printf("Umfang: %f\n", umfang());
        }
};


class Quadrat: public Rechteck {
    public:
        Quadrat(float a) :  Rechteck(a, a) {
        }
        float diagonale() {return getbreite() * sqrt(2.0f);}
        void print() {
            printf("Quadrat:\n");
            printf("Flaeche: %f\n", flaeche());
            printf("Umfang: %f\n", umfang());
            printf("Diagonale %f\n", diagonale());
        }
};
