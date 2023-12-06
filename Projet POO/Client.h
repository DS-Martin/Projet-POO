#pragma once
#ifndef CLIENT_H
#define CLIENT_H

#include <iostream>

ref class Client
{
public:
    Client();
    Client(System::String^ new_Nom, System::String^ new_Prenom, System::String^ new_Date_de_Naissance, System::String^ new_Date_premier_achat);

    System::String^ get_Nom() { return Nom; }
    System::String^ get_Prenom() { return Prenom; }
    System::String^ get_Date_de_Naissance() { return Date_de_Naissance; }
    System::String^ get_Date_premier_achat() { return Date_premier_achat; }

    void set_Nom(System::String^ cNom) { Nom = cNom; }
    void set_Prenom(System::String^ cPrenom) { Prenom = cPrenom; }
    void set_Date_de_Naissance(System::String^ cDate_de_Naissance) { Date_de_Naissance = cDate_de_Naissance; }
    void set_Date_premier_achat(System::String^ cDate_premier_achat) { Date_premier_achat = cDate_premier_achat; }

private:
    int ID_Client;
    System::String^ Nom;
    System::String^ Prenom;
    System::String^ Date_de_Naissance;
    System::String^ Date_premier_achat;
};

#endif
