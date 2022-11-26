#include <iostream>

class Eis
{
 private :
    std :: string marke; 
    std :: string sorte;
    double kosten;
    int fuellmenge;

 public : 

    Eis(std :: string marke = "ben and jerry's" , std :: string sorte = "cookie dough", double kosten = 2, int fuellmenge = 465 )
    {
        this->marke = marke;
        this->sorte = sorte;
        this->kosten = kosten;
        this->fuellmenge = fuellmenge;
    }

    void geschmakstest(std::string geschmack)
    {
        std::cout << "Das Eis  " << sorte.c_str() << " von "<< marke.c_str() 
        << " für " << kosten << " EUR schmeckt " << geschmack.c_str() << "."<< std::endl;

    }

    /*double preis_pro_liter()
    {
        double preis ;
        preis = kosten / füllmenge * 1000;
        return preis;
    }
*/
};


int main()
{
    Eis eis1;
    eis1.geschmakstest("ok");
    Eis eis2("häagen dazs", "strawberry", 5.49, 460);
    eis2.geschmakstest("mega geil"); 

    system("PAUSE");
    return 0;
}
