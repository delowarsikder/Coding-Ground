#include<iostream>
#include<string>
using namespace std;

int main()
{
    string line1,line2,line3;
    cin>>line1>>line2>>line3;

    if(line1=="vertebrado")
    {
        if(line2=="ave")
        {
            if(line3=="carnivoro")
            {
                cout<<"aguia"<<endl;
            }
            else if(line3=="onivoro")
            {
                cout<<"pomba"<<endl;
            }
        }

        else if(line2=="mamifero")
        {
            if(line3=="onivoro")
            {
                cout<<"homem"<<endl;
            }
            else if(line3=="herbivoro")
            {
                cout<<"vaca"<<endl;
            }

        }
    }
    else if(line1=="invertebrado")
    {
        if(line2=="inseto")
        {
            if(line3=="hematofago")
            {
                cout<<"pulga"<<endl;
            }
            else if(line3=="herbivoro")
            {
                cout<<"lagarta"<<endl;
            }
        }
        else if(line2=="anelideo")
        {
            if(line3=="hematofago")
            {
                cout<<"sanguessuga"<<endl;
            }
            else if(line3=="onivoro")
            {
                cout<<"minhoca"<<endl;
            }
        }
    }

    return 0;
}


