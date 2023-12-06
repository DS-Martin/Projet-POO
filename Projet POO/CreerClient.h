#pragma once
#include "Adresse.h";
#include "Client.h";
namespace ProjetPOO {

	using namespace System::Data;
	using namespace System::Data::SqlClient;
	using namespace System::Xml;
	using namespace System;
	namespace P6new {

		using namespace System;
		using namespace System::ComponentModel;
		using namespace System::Collections;
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;

		/// <summary>
		/// Description résumée de CreerClient
		/// </summary>
		public ref class CreerClient : public System::Windows::Forms::Form
		{
		public:
			CreerClient(void)
			{
				InitializeComponent();
				//
				//TODO: ajoutez ici le code du constructeur
				//
			}

		protected:
			/// <summary>
			/// Nettoyage des ressources utilisées.
			/// </summary>
			~CreerClient()
			{
				if (components)
				{
					delete components;
				}
			}
		private: System::Windows::Forms::Label^ label1;
		protected:
		private: System::Windows::Forms::Label^ label2;
		private: System::Windows::Forms::Label^ label3;
		private: System::Windows::Forms::Label^ label4;
		private: System::Windows::Forms::Label^ label5;
		private: System::Windows::Forms::Label^ label6;
		private: System::Windows::Forms::Label^ label7;
		private: System::Windows::Forms::Label^ label8;
		private: System::Windows::Forms::Label^ label9;



		private: System::Windows::Forms::Label^ label13;
		private: System::Windows::Forms::Label^ label14;
		private: System::Windows::Forms::Label^ label15;



		private: System::Windows::Forms::Label^ label19;
		private: System::Windows::Forms::Label^ label20;



		private: System::Windows::Forms::Label^ label24;
		private: System::Windows::Forms::Label^ label25;


		private: System::Windows::Forms::Label^ label28;
		private: System::Windows::Forms::Label^ label10;
		private: System::Windows::Forms::Label^ label11;
		private: System::Windows::Forms::Label^ label12;
		private: System::Windows::Forms::Label^ label16;
		private: System::Windows::Forms::Label^ label17;
		private: System::Windows::Forms::Label^ label18;
		private: System::Windows::Forms::Label^ label21;
		private: System::Windows::Forms::Label^ label22;
		private: System::Windows::Forms::Label^ label23;
		private: System::Windows::Forms::Label^ label26;
		private: System::Windows::Forms::Button^ button1;
		private: System::Windows::Forms::ComboBox^ comboBoxMois;

		private: System::Windows::Forms::Label^ label27;
		private: System::Windows::Forms::ComboBox^ comboBoxJour;

		private: System::Windows::Forms::Label^ label29;
		private: System::Windows::Forms::ComboBox^ comboBoxAnnee;

		private: System::Windows::Forms::TextBox^ textBoxNom;
		private: System::Windows::Forms::TextBox^ textBoxPrenom;

		private: System::Windows::Forms::TextBox^ textBoxVille;
		private: System::Windows::Forms::TextBox^ textBoxRue;
		private: System::Windows::Forms::TextBox^ textBoxCodePostal;










		private: System::Windows::Forms::TextBox^ textBox8;
		private: System::Windows::Forms::TextBox^ textBox9;
		private: System::Windows::Forms::TextBox^ textBox10;
		private: System::Windows::Forms::TextBox^ textBox11;
		private: System::Windows::Forms::TextBox^ textBox12;
		private: System::Windows::Forms::TextBox^ textBox13;
		private: System::Windows::Forms::TextBox^ textBox14;
		private: System::Windows::Forms::TextBox^ textBox15;
		private: System::Windows::Forms::TextBox^ textBox16;
		private: System::Windows::Forms::TextBox^ textBox17;
		private: System::Windows::Forms::TextBox^ textBox18;
		private: System::Windows::Forms::TextBox^ textBox19;
		private: System::Windows::Forms::NumericUpDown^ UpDownNumAdr;







		private:
			/// <summary>
			/// Variable nécessaire au concepteur.
			/// </summary>
			System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
			/// <summary>
			/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
			/// le contenu de cette méthode avec l'éditeur de code.
			/// </summary>
			void InitializeComponent(void)
			{
				this->label1 = (gcnew System::Windows::Forms::Label());
				this->label2 = (gcnew System::Windows::Forms::Label());
				this->label3 = (gcnew System::Windows::Forms::Label());
				this->label4 = (gcnew System::Windows::Forms::Label());
				this->label5 = (gcnew System::Windows::Forms::Label());
				this->label6 = (gcnew System::Windows::Forms::Label());
				this->label7 = (gcnew System::Windows::Forms::Label());
				this->label8 = (gcnew System::Windows::Forms::Label());
				this->label9 = (gcnew System::Windows::Forms::Label());
				this->label13 = (gcnew System::Windows::Forms::Label());
				this->label14 = (gcnew System::Windows::Forms::Label());
				this->label15 = (gcnew System::Windows::Forms::Label());
				this->label19 = (gcnew System::Windows::Forms::Label());
				this->label20 = (gcnew System::Windows::Forms::Label());
				this->label24 = (gcnew System::Windows::Forms::Label());
				this->label25 = (gcnew System::Windows::Forms::Label());
				this->label28 = (gcnew System::Windows::Forms::Label());
				this->label10 = (gcnew System::Windows::Forms::Label());
				this->label11 = (gcnew System::Windows::Forms::Label());
				this->label12 = (gcnew System::Windows::Forms::Label());
				this->label16 = (gcnew System::Windows::Forms::Label());
				this->label17 = (gcnew System::Windows::Forms::Label());
				this->label18 = (gcnew System::Windows::Forms::Label());
				this->label21 = (gcnew System::Windows::Forms::Label());
				this->label22 = (gcnew System::Windows::Forms::Label());
				this->label23 = (gcnew System::Windows::Forms::Label());
				this->label26 = (gcnew System::Windows::Forms::Label());
				this->button1 = (gcnew System::Windows::Forms::Button());
				this->comboBoxMois = (gcnew System::Windows::Forms::ComboBox());
				this->label27 = (gcnew System::Windows::Forms::Label());
				this->comboBoxJour = (gcnew System::Windows::Forms::ComboBox());
				this->label29 = (gcnew System::Windows::Forms::Label());
				this->comboBoxAnnee = (gcnew System::Windows::Forms::ComboBox());
				this->textBoxNom = (gcnew System::Windows::Forms::TextBox());
				this->textBoxPrenom = (gcnew System::Windows::Forms::TextBox());
				this->textBoxVille = (gcnew System::Windows::Forms::TextBox());
				this->textBoxRue = (gcnew System::Windows::Forms::TextBox());
				this->textBoxCodePostal = (gcnew System::Windows::Forms::TextBox());
				this->textBox8 = (gcnew System::Windows::Forms::TextBox());
				this->textBox9 = (gcnew System::Windows::Forms::TextBox());
				this->textBox10 = (gcnew System::Windows::Forms::TextBox());
				this->textBox11 = (gcnew System::Windows::Forms::TextBox());
				this->textBox12 = (gcnew System::Windows::Forms::TextBox());
				this->textBox13 = (gcnew System::Windows::Forms::TextBox());
				this->textBox14 = (gcnew System::Windows::Forms::TextBox());
				this->textBox15 = (gcnew System::Windows::Forms::TextBox());
				this->textBox16 = (gcnew System::Windows::Forms::TextBox());
				this->textBox17 = (gcnew System::Windows::Forms::TextBox());
				this->textBox18 = (gcnew System::Windows::Forms::TextBox());
				this->textBox19 = (gcnew System::Windows::Forms::TextBox());
				this->UpDownNumAdr = (gcnew System::Windows::Forms::NumericUpDown());
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UpDownNumAdr))->BeginInit();
				this->SuspendLayout();
				// 
				// label1
				// 
				this->label1->AutoSize = true;
				this->label1->Location = System::Drawing::Point(56, 24);
				this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label1->Name = L"label1";
				this->label1->Size = System::Drawing::Size(42, 20);
				this->label1->TabIndex = 0;
				this->label1->Text = L"Nom";
				this->label1->Click += gcnew System::EventHandler(this, &CreerClient::label1_Click);
				// 
				// label2
				// 
				this->label2->AutoSize = true;
				this->label2->Location = System::Drawing::Point(56, 69);
				this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label2->Name = L"label2";
				this->label2->Size = System::Drawing::Size(64, 20);
				this->label2->TabIndex = 1;
				this->label2->Text = L"Prénom";
				// 
				// label3
				// 
				this->label3->AutoSize = true;
				this->label3->Location = System::Drawing::Point(56, 114);
				this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label3->Name = L"label3";
				this->label3->Size = System::Drawing::Size(142, 20);
				this->label3->TabIndex = 2;
				this->label3->Text = L"Date de naissance";
				// 
				// label4
				// 
				this->label4->AutoSize = true;
				this->label4->Location = System::Drawing::Point(36, 176);
				this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label4->Name = L"label4";
				this->label4->Size = System::Drawing::Size(158, 20);
				this->label4->TabIndex = 3;
				this->label4->Text = L"Adresse de livraison :";
				// 
				// label5
				// 
				this->label5->AutoSize = true;
				this->label5->Location = System::Drawing::Point(56, 206);
				this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label5->Name = L"label5";
				this->label5->Size = System::Drawing::Size(138, 20);
				this->label5->TabIndex = 4;
				this->label5->Text = L"Numéro d\'adresse";
				// 
				// label6
				// 
				this->label6->AutoSize = true;
				this->label6->Location = System::Drawing::Point(56, 254);
				this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label6->Name = L"label6";
				this->label6->Size = System::Drawing::Size(107, 20);
				this->label6->TabIndex = 5;
				this->label6->Text = L"Nom de la rue";
				// 
				// label7
				// 
				this->label7->AutoSize = true;
				this->label7->Location = System::Drawing::Point(56, 309);
				this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label7->Name = L"label7";
				this->label7->Size = System::Drawing::Size(94, 20);
				this->label7->TabIndex = 6;
				this->label7->Text = L"Code postal";
				// 
				// label8
				// 
				this->label8->AutoSize = true;
				this->label8->Location = System::Drawing::Point(56, 365);
				this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label8->Name = L"label8";
				this->label8->Size = System::Drawing::Size(206, 20);
				this->label8->TabIndex = 7;
				this->label8->Text = L"Ajouter une autre adresse \?";
				// 
				// label9
				// 
				this->label9->AutoSize = true;
				this->label9->Location = System::Drawing::Point(56, 422);
				this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label9->Name = L"label9";
				this->label9->Size = System::Drawing::Size(199, 20);
				this->label9->TabIndex = 8;
				this->label9->Text = L"Autre adresse de livraison :";
				// 
				// label13
				// 
				this->label13->AutoSize = true;
				this->label13->Location = System::Drawing::Point(56, 634);
				this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label13->Name = L"label13";
				this->label13->Size = System::Drawing::Size(332, 20);
				this->label13->TabIndex = 12;
				this->label13->Text = L"Même adresse pour l\'adresse de facturation \?";
				// 
				// label14
				// 
				this->label14->AutoSize = true;
				this->label14->Location = System::Drawing::Point(56, 690);
				this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label14->Name = L"label14";
				this->label14->Size = System::Drawing::Size(82, 20);
				this->label14->TabIndex = 13;
				this->label14->Text = L"Laquelle \?";
				// 
				// label15
				// 
				this->label15->AutoSize = true;
				this->label15->Location = System::Drawing::Point(56, 741);
				this->label15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label15->Name = L"label15";
				this->label15->Size = System::Drawing::Size(178, 20);
				this->label15->TabIndex = 14;
				this->label15->Text = L"Adresse de facturation :";
				// 
				// label19
				// 
				this->label19->AutoSize = true;
				this->label19->Location = System::Drawing::Point(56, 962);
				this->label19->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label19->Name = L"label19";
				this->label19->Size = System::Drawing::Size(206, 20);
				this->label19->TabIndex = 18;
				this->label19->Text = L"Ajouter une autre adresse \?";
				// 
				// label20
				// 
				this->label20->AutoSize = true;
				this->label20->Location = System::Drawing::Point(56, 1014);
				this->label20->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label20->Name = L"label20";
				this->label20->Size = System::Drawing::Size(219, 20);
				this->label20->TabIndex = 19;
				this->label20->Text = L"Autre adresse de facturation :";
				// 
				// label24
				// 
				this->label24->AutoSize = true;
				this->label24->Location = System::Drawing::Point(308, 206);
				this->label24->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label24->Name = L"label24";
				this->label24->Size = System::Drawing::Size(38, 20);
				this->label24->TabIndex = 23;
				this->label24->Text = L"Ville";
				// 
				// label25
				// 
				this->label25->AutoSize = true;
				this->label25->Location = System::Drawing::Point(308, 470);
				this->label25->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label25->Name = L"label25";
				this->label25->Size = System::Drawing::Size(38, 20);
				this->label25->TabIndex = 24;
				this->label25->Text = L"Ville";
				this->label25->Click += gcnew System::EventHandler(this, &CreerClient::label25_Click);
				// 
				// label28
				// 
				this->label28->AutoSize = true;
				this->label28->Location = System::Drawing::Point(60, 470);
				this->label28->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label28->Name = L"label28";
				this->label28->Size = System::Drawing::Size(138, 20);
				this->label28->TabIndex = 27;
				this->label28->Text = L"Numéro d\'adresse";
				// 
				// label10
				// 
				this->label10->AutoSize = true;
				this->label10->Location = System::Drawing::Point(60, 577);
				this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label10->Name = L"label10";
				this->label10->Size = System::Drawing::Size(94, 20);
				this->label10->TabIndex = 29;
				this->label10->Text = L"Code postal";
				// 
				// label11
				// 
				this->label11->AutoSize = true;
				this->label11->Location = System::Drawing::Point(60, 522);
				this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label11->Name = L"label11";
				this->label11->Size = System::Drawing::Size(107, 20);
				this->label11->TabIndex = 28;
				this->label11->Text = L"Nom de la rue";
				// 
				// label12
				// 
				this->label12->AutoSize = true;
				this->label12->Location = System::Drawing::Point(60, 896);
				this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label12->Name = L"label12";
				this->label12->Size = System::Drawing::Size(94, 20);
				this->label12->TabIndex = 33;
				this->label12->Text = L"Code postal";
				// 
				// label16
				// 
				this->label16->AutoSize = true;
				this->label16->Location = System::Drawing::Point(60, 842);
				this->label16->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label16->Name = L"label16";
				this->label16->Size = System::Drawing::Size(107, 20);
				this->label16->TabIndex = 32;
				this->label16->Text = L"Nom de la rue";
				// 
				// label17
				// 
				this->label17->AutoSize = true;
				this->label17->Location = System::Drawing::Point(60, 789);
				this->label17->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label17->Name = L"label17";
				this->label17->Size = System::Drawing::Size(138, 20);
				this->label17->TabIndex = 31;
				this->label17->Text = L"Numéro d\'adresse";
				// 
				// label18
				// 
				this->label18->AutoSize = true;
				this->label18->Location = System::Drawing::Point(308, 789);
				this->label18->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label18->Name = L"label18";
				this->label18->Size = System::Drawing::Size(38, 20);
				this->label18->TabIndex = 30;
				this->label18->Text = L"Ville";
				// 
				// label21
				// 
				this->label21->AutoSize = true;
				this->label21->Location = System::Drawing::Point(60, 1171);
				this->label21->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label21->Name = L"label21";
				this->label21->Size = System::Drawing::Size(94, 20);
				this->label21->TabIndex = 37;
				this->label21->Text = L"Code postal";
				// 
				// label22
				// 
				this->label22->AutoSize = true;
				this->label22->Location = System::Drawing::Point(60, 1117);
				this->label22->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label22->Name = L"label22";
				this->label22->Size = System::Drawing::Size(107, 20);
				this->label22->TabIndex = 36;
				this->label22->Text = L"Nom de la rue";
				// 
				// label23
				// 
				this->label23->AutoSize = true;
				this->label23->Location = System::Drawing::Point(60, 1064);
				this->label23->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label23->Name = L"label23";
				this->label23->Size = System::Drawing::Size(138, 20);
				this->label23->TabIndex = 35;
				this->label23->Text = L"Numéro d\'adresse";
				// 
				// label26
				// 
				this->label26->AutoSize = true;
				this->label26->Location = System::Drawing::Point(308, 1064);
				this->label26->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label26->Name = L"label26";
				this->label26->Size = System::Drawing::Size(38, 20);
				this->label26->TabIndex = 34;
				this->label26->Text = L"Ville";
				// 
				// button1
				// 
				this->button1->Location = System::Drawing::Point(445, 1210);
				this->button1->Margin = System::Windows::Forms::Padding(2);
				this->button1->Name = L"button1";
				this->button1->Size = System::Drawing::Size(124, 38);
				this->button1->TabIndex = 38;
				this->button1->Text = L"Valider";
				this->button1->UseVisualStyleBackColor = true;
				this->button1->Click += gcnew System::EventHandler(this, &CreerClient::button1_Click);
				// 
				// comboBoxMois
				// 
				this->comboBoxMois->BackColor = System::Drawing::SystemColors::ActiveCaption;
				this->comboBoxMois->FormattingEnabled = true;
				this->comboBoxMois->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
					L"01", L"02", L"03", L"04", L"05", L"06", L"07",
						L"08", L"09", L"10", L"11", L"12"
				});
				this->comboBoxMois->Location = System::Drawing::Point(301, 111);
				this->comboBoxMois->Margin = System::Windows::Forms::Padding(2);
				this->comboBoxMois->Name = L"comboBoxMois";
				this->comboBoxMois->Size = System::Drawing::Size(69, 28);
				this->comboBoxMois->TabIndex = 39;
				// 
				// label27
				// 
				this->label27->AutoSize = true;
				this->label27->Location = System::Drawing::Point(283, 114);
				this->label27->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label27->Name = L"label27";
				this->label27->Size = System::Drawing::Size(13, 20);
				this->label27->TabIndex = 40;
				this->label27->Text = L"/";
				// 
				// comboBoxJour
				// 
				this->comboBoxJour->BackColor = System::Drawing::SystemColors::ActiveCaption;
				this->comboBoxJour->FormattingEnabled = true;
				this->comboBoxJour->Items->AddRange(gcnew cli::array< System::Object^  >(31) {
					L"01", L"02", L"03", L"04", L"05", L"06", L"07",
						L"08", L"09", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25",
						L"26", L"27", L"28", L"29", L"30", L"31"
				});
				this->comboBoxJour->Location = System::Drawing::Point(209, 111);
				this->comboBoxJour->Margin = System::Windows::Forms::Padding(2);
				this->comboBoxJour->Name = L"comboBoxJour";
				this->comboBoxJour->Size = System::Drawing::Size(69, 28);
				this->comboBoxJour->TabIndex = 41;
				this->comboBoxJour->SelectedIndexChanged += gcnew System::EventHandler(this, &CreerClient::comboBoxJour_SelectedIndexChanged);
				// 
				// label29
				// 
				this->label29->AutoSize = true;
				this->label29->Location = System::Drawing::Point(374, 114);
				this->label29->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label29->Name = L"label29";
				this->label29->Size = System::Drawing::Size(13, 20);
				this->label29->TabIndex = 42;
				this->label29->Text = L"/";
				// 
				// comboBoxAnnee
				// 
				this->comboBoxAnnee->BackColor = System::Drawing::SystemColors::ActiveCaption;
				this->comboBoxAnnee->FormattingEnabled = true;
				this->comboBoxAnnee->Items->AddRange(gcnew cli::array< System::Object^  >(123) {
					L"2023", L"2022", L"2021", L"2020", L"2019",
						L"2018", L"2017", L"2016", L"2015", L"2014", L"2013", L"2012", L"2011", L"2010", L"2009", L"2008", L"2007", L"2006", L"2005",
						L"2004", L"2003", L"2002", L"2001", L"2000", L"1999", L"1998", L"1997", L"1996", L"1995", L"1994", L"1993", L"1992", L"1991",
						L"1990", L"1989", L"1988", L"1987", L"1986", L"1985", L"1984", L"1983", L"1982", L"1981", L"1980", L"1979", L"1978", L"1977",
						L"1976", L"1975", L"1974", L"1973", L"1972", L"1971", L"1970", L"1969", L"1968", L"1967", L"1966", L"1965", L"1964", L"1963",
						L"1962", L"1961", L"1960", L"1959", L"1958", L"1957", L"1956", L"1955", L"1954", L"1953", L"1952", L"1951", L"1950", L"1949",
						L"1948", L"1947", L"1946", L"1945", L"1944", L"1943", L"1942", L"1941", L"1940", L"1939", L"1938", L"1937", L"1936", L"1935",
						L"1934", L"1933", L"1932", L"1931", L"1930", L"1929", L"1928", L"1927", L"1926", L"1925", L"1924", L"1923", L"1922", L"1921",
						L"1920", L"1919", L"1918", L"1917", L"1916", L"1915", L"1914", L"1913", L"1912", L"1911", L"1910", L"1909", L"1908", L"1907",
						L"1906", L"1905", L"1904", L"1903", L"1902", L"1901"
				});
				this->comboBoxAnnee->Location = System::Drawing::Point(392, 111);
				this->comboBoxAnnee->Margin = System::Windows::Forms::Padding(2);
				this->comboBoxAnnee->Name = L"comboBoxAnnee";
				this->comboBoxAnnee->Size = System::Drawing::Size(96, 28);
				this->comboBoxAnnee->TabIndex = 43;
				// 
				// textBoxNom
				// 
				this->textBoxNom->BackColor = System::Drawing::SystemColors::ActiveCaption;
				this->textBoxNom->Location = System::Drawing::Point(112, 22);
				this->textBoxNom->Margin = System::Windows::Forms::Padding(2);
				this->textBoxNom->Name = L"textBoxNom";
				this->textBoxNom->Size = System::Drawing::Size(481, 26);
				this->textBoxNom->TabIndex = 44;
				this->textBoxNom->TextChanged += gcnew System::EventHandler(this, &CreerClient::textBoxNom_TextChanged);
				// 
				// textBoxPrenom
				// 
				this->textBoxPrenom->BackColor = System::Drawing::SystemColors::ActiveCaption;
				this->textBoxPrenom->ForeColor = System::Drawing::SystemColors::InactiveBorder;
				this->textBoxPrenom->Location = System::Drawing::Point(125, 66);
				this->textBoxPrenom->Margin = System::Windows::Forms::Padding(2);
				this->textBoxPrenom->Name = L"textBoxPrenom";
				this->textBoxPrenom->Size = System::Drawing::Size(468, 26);
				this->textBoxPrenom->TabIndex = 45;
				this->textBoxPrenom->TextChanged += gcnew System::EventHandler(this, &CreerClient::textBoxPrenom_TextChanged);
				// 
				// textBoxVille
				// 
				this->textBoxVille->BackColor = System::Drawing::SystemColors::ActiveCaption;
				this->textBoxVille->Location = System::Drawing::Point(352, 206);
				this->textBoxVille->Margin = System::Windows::Forms::Padding(2);
				this->textBoxVille->Name = L"textBoxVille";
				this->textBoxVille->Size = System::Drawing::Size(241, 26);
				this->textBoxVille->TabIndex = 48;
				// 
				// textBoxRue
				// 
				this->textBoxRue->BackColor = System::Drawing::SystemColors::ActiveCaption;
				this->textBoxRue->Location = System::Drawing::Point(170, 254);
				this->textBoxRue->Margin = System::Windows::Forms::Padding(2);
				this->textBoxRue->Name = L"textBoxRue";
				this->textBoxRue->Size = System::Drawing::Size(422, 26);
				this->textBoxRue->TabIndex = 49;
				// 
				// textBoxCodePostal
				// 
				this->textBoxCodePostal->BackColor = System::Drawing::SystemColors::ActiveCaption;
				this->textBoxCodePostal->Location = System::Drawing::Point(156, 306);
				this->textBoxCodePostal->Margin = System::Windows::Forms::Padding(2);
				this->textBoxCodePostal->Name = L"textBoxCodePostal";
				this->textBoxCodePostal->Size = System::Drawing::Size(122, 26);
				this->textBoxCodePostal->TabIndex = 50;
				// 
				// textBox8
				// 
				this->textBox8->Location = System::Drawing::Point(176, 522);
				this->textBox8->Margin = System::Windows::Forms::Padding(2);
				this->textBox8->Name = L"textBox8";
				this->textBox8->Size = System::Drawing::Size(417, 26);
				this->textBox8->TabIndex = 52;
				// 
				// textBox9
				// 
				this->textBox9->Location = System::Drawing::Point(200, 465);
				this->textBox9->Margin = System::Windows::Forms::Padding(2);
				this->textBox9->Name = L"textBox9";
				this->textBox9->Size = System::Drawing::Size(78, 26);
				this->textBox9->TabIndex = 53;
				// 
				// textBox10
				// 
				this->textBox10->Location = System::Drawing::Point(352, 465);
				this->textBox10->Margin = System::Windows::Forms::Padding(2);
				this->textBox10->Name = L"textBox10";
				this->textBox10->Size = System::Drawing::Size(241, 26);
				this->textBox10->TabIndex = 54;
				// 
				// textBox11
				// 
				this->textBox11->Location = System::Drawing::Point(176, 574);
				this->textBox11->Margin = System::Windows::Forms::Padding(2);
				this->textBox11->Name = L"textBox11";
				this->textBox11->Size = System::Drawing::Size(122, 26);
				this->textBox11->TabIndex = 55;
				// 
				// textBox12
				// 
				this->textBox12->Location = System::Drawing::Point(174, 894);
				this->textBox12->Margin = System::Windows::Forms::Padding(2);
				this->textBox12->Name = L"textBox12";
				this->textBox12->Size = System::Drawing::Size(122, 26);
				this->textBox12->TabIndex = 59;
				// 
				// textBox13
				// 
				this->textBox13->Location = System::Drawing::Point(350, 784);
				this->textBox13->Margin = System::Windows::Forms::Padding(2);
				this->textBox13->Name = L"textBox13";
				this->textBox13->Size = System::Drawing::Size(241, 26);
				this->textBox13->TabIndex = 58;
				// 
				// textBox14
				// 
				this->textBox14->Location = System::Drawing::Point(199, 784);
				this->textBox14->Margin = System::Windows::Forms::Padding(2);
				this->textBox14->Name = L"textBox14";
				this->textBox14->Size = System::Drawing::Size(78, 26);
				this->textBox14->TabIndex = 57;
				// 
				// textBox15
				// 
				this->textBox15->Location = System::Drawing::Point(174, 842);
				this->textBox15->Margin = System::Windows::Forms::Padding(2);
				this->textBox15->Name = L"textBox15";
				this->textBox15->Size = System::Drawing::Size(417, 26);
				this->textBox15->TabIndex = 56;
				// 
				// textBox16
				// 
				this->textBox16->Location = System::Drawing::Point(174, 1169);
				this->textBox16->Margin = System::Windows::Forms::Padding(2);
				this->textBox16->Name = L"textBox16";
				this->textBox16->Size = System::Drawing::Size(122, 26);
				this->textBox16->TabIndex = 63;
				// 
				// textBox17
				// 
				this->textBox17->Location = System::Drawing::Point(350, 1059);
				this->textBox17->Margin = System::Windows::Forms::Padding(2);
				this->textBox17->Name = L"textBox17";
				this->textBox17->Size = System::Drawing::Size(241, 26);
				this->textBox17->TabIndex = 62;
				// 
				// textBox18
				// 
				this->textBox18->Location = System::Drawing::Point(199, 1059);
				this->textBox18->Margin = System::Windows::Forms::Padding(2);
				this->textBox18->Name = L"textBox18";
				this->textBox18->Size = System::Drawing::Size(78, 26);
				this->textBox18->TabIndex = 61;
				// 
				// textBox19
				// 
				this->textBox19->Location = System::Drawing::Point(174, 1117);
				this->textBox19->Margin = System::Windows::Forms::Padding(2);
				this->textBox19->Name = L"textBox19";
				this->textBox19->Size = System::Drawing::Size(417, 26);
				this->textBox19->TabIndex = 60;
				// 
				// UpDownNumAdr
				// 
				this->UpDownNumAdr->Location = System::Drawing::Point(209, 204);
				this->UpDownNumAdr->Name = L"UpDownNumAdr";
				this->UpDownNumAdr->Size = System::Drawing::Size(79, 26);
				this->UpDownNumAdr->TabIndex = 64;
				this->UpDownNumAdr->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
				this->UpDownNumAdr->ValueChanged += gcnew System::EventHandler(this, &CreerClient::numericUpDown1_ValueChanged);
				// 
				// CreerClient
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->AutoScroll = true;
				this->BackColor = System::Drawing::SystemColors::HighlightText;
				this->ClientSize = System::Drawing::Size(685, 450);
				this->Controls->Add(this->UpDownNumAdr);
				this->Controls->Add(this->textBox16);
				this->Controls->Add(this->textBox17);
				this->Controls->Add(this->textBox18);
				this->Controls->Add(this->textBox19);
				this->Controls->Add(this->textBox12);
				this->Controls->Add(this->textBox13);
				this->Controls->Add(this->textBox14);
				this->Controls->Add(this->textBox15);
				this->Controls->Add(this->textBox11);
				this->Controls->Add(this->textBox10);
				this->Controls->Add(this->textBox9);
				this->Controls->Add(this->textBox8);
				this->Controls->Add(this->textBoxCodePostal);
				this->Controls->Add(this->textBoxRue);
				this->Controls->Add(this->textBoxVille);
				this->Controls->Add(this->textBoxPrenom);
				this->Controls->Add(this->textBoxNom);
				this->Controls->Add(this->comboBoxAnnee);
				this->Controls->Add(this->label29);
				this->Controls->Add(this->comboBoxJour);
				this->Controls->Add(this->label27);
				this->Controls->Add(this->comboBoxMois);
				this->Controls->Add(this->button1);
				this->Controls->Add(this->label21);
				this->Controls->Add(this->label22);
				this->Controls->Add(this->label23);
				this->Controls->Add(this->label26);
				this->Controls->Add(this->label12);
				this->Controls->Add(this->label16);
				this->Controls->Add(this->label17);
				this->Controls->Add(this->label18);
				this->Controls->Add(this->label10);
				this->Controls->Add(this->label11);
				this->Controls->Add(this->label28);
				this->Controls->Add(this->label25);
				this->Controls->Add(this->label24);
				this->Controls->Add(this->label20);
				this->Controls->Add(this->label19);
				this->Controls->Add(this->label15);
				this->Controls->Add(this->label14);
				this->Controls->Add(this->label13);
				this->Controls->Add(this->label9);
				this->Controls->Add(this->label8);
				this->Controls->Add(this->label7);
				this->Controls->Add(this->label6);
				this->Controls->Add(this->label5);
				this->Controls->Add(this->label4);
				this->Controls->Add(this->label3);
				this->Controls->Add(this->label2);
				this->Controls->Add(this->label1);
				this->Margin = System::Windows::Forms::Padding(2);
				this->MaximizeBox = false;
				this->Name = L"CreerClient";
				this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
				this->Text = L"CreerClient";
				this->Load += gcnew System::EventHandler(this, &CreerClient::CreerClient_Load);
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UpDownNumAdr))->EndInit();
				this->ResumeLayout(false);
				this->PerformLayout();

			}
#pragma endregion
		private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void label25_Click(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void CreerClient_Load(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			// Définition des variables
			String^ nomClient = textBoxNom->Text;
			String^ prenomClient = textBoxPrenom->Text;
			String^ JourClient = comboBoxJour->Text;
			String^ MoisClient = comboBoxMois->Text;
			String^ YearClient = comboBoxAnnee->Text;
			String^ dateNaissance = String::Format("{0}-{1}-{2}", YearClient, MoisClient, JourClient);
			// ^ (membres de la table Client ( Martin ))
			String^ NumeroRue = UpDownNumAdr->Text;
			String^ NomRue = textBoxRue->Text;
			String^ NomVille = textBoxVille->Text;
			String^ CodePostal = textBoxCodePostal->Text;
			Client^ nouveauClient = gcnew Client();
			nouveauClient->set_Nom(nomClient);
			nouveauClient->set_Prenom(prenomClient);
			nouveauClient->set_Date_de_Naissance(dateNaissance);

			int numeroRue;
			if (!Int32::TryParse(NumeroRue, numeroRue)) {
				
				MessageBox::Show("Le numéro de rue doit être un nombre entier.", "Err conversion", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return; 
			}
			Adresse^ nouvelleAdresse = gcnew Adresse(numeroRue, NomRue, NomVille, CodePostal);
			

			
					
			

			// Connexion à la base de données
			String^ connectionString = "Data Source=MARTIN_GOA;Initial Catalog=Projet;Integrated Security=True";
			SqlConnection^ connection = gcnew SqlConnection(connectionString);

			try {
				
				connection->Open();

				// Creation des requêtes modifiées par la suite (Martin)
				
				String^ queryClient = "INSERT INTO CLIENT (NOM, PRENOM, DATE_NAISSANCE) VALUES (@Nom, @Prenom, @Date_de_Naissance)";
				String^ queryAdresse = "INSERT INTO ADRESSE(NUMERO, NOM_RUE, NOM_VILLE, CODE_POSTAL) VALUES (@NumeroRue, @NomRue, @NomVille, @CodePostal)";
				String^ queryPosseder = "INSERT INTO Possede1 (ID_CLIENT, ID_ADRESSE) VALUES (@IDClient, @IDAdresse)";
				String^ queryMaxID = "SELECT MAX(ID_Adresse) FROM Possede1";
				
				// génération des commandes (Martin)
				SqlCommand^ commandClient = gcnew SqlCommand(queryClient, connection);
				SqlCommand^ commandAdresse = gcnew SqlCommand(queryAdresse, connection);
				SqlCommand^ commandMaxID = gcnew SqlCommand(queryMaxID, connection);
				


				SqlCommand^ commandPosseder = gcnew SqlCommand(queryPosseder, connection);
				int idClient = Convert::ToInt32(commandClient->ExecuteScalar());
				Object^ result = commandMaxID->ExecuteScalar();
				int idAdresse;

				if (result == nullptr || result == DBNull::Value) {
					
					idAdresse = 1;
				}
				else {
				
					idAdresse = Convert::ToInt32(result) + 1;
				}

				commandPosseder->Parameters->AddWithValue("@IDClient", idClient);
				commandPosseder->Parameters->AddWithValue("@IDAdresse", idAdresse);
				
				// Ajout des Param de la command Adresse (Martin)
				commandClient->Parameters->AddWithValue("@Nom", nouveauClient->get_Nom());
				commandClient->Parameters->AddWithValue("@Prenom", nouveauClient->get_Prenom());
				commandClient->Parameters->AddWithValue("@Date_de_Naissance", SqlDbType::Date)->Value = nouveauClient->get_Date_de_Naissance();
				// Ajout des Param de la command Adresse (Martin)
				commandAdresse->Parameters->AddWithValue("@NumeroRue", nouvelleAdresse->Numero);
				commandAdresse->Parameters->AddWithValue("@NomRue", nouvelleAdresse->NomRue);
				commandAdresse->Parameters->AddWithValue("@NomVille", nouvelleAdresse->NomVille);
				commandAdresse->Parameters->AddWithValue("@CodePostal", nouvelleAdresse->CodePostal);
				// Gestion des ID adresses et client dans la table POSSEDE1
				
				// Exec des commandes (Martin)
				commandClient->ExecuteNonQuery();
				commandAdresse->ExecuteNonQuery();
				commandPosseder->ExecuteNonQuery();
				// Afficher un message de réussite
				MessageBox::Show("Le Client a été ajouté à la base de données avec succès.", "Succès", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}	
			catch (Exception^ ex) {
				// Gérer les erreurs (affichage ou journalisation)
				MessageBox::Show("Erreur lors de l'ajout du client : " + ex->Message, "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			finally {
				// Fermer la connexion, même en cas d'erreur
				connection->Close();
			}
		}
		private: System::Void textBoxPrenom_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		}

		private: System::Void textBoxNom_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void comboBoxJour_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		}
};
	}
}






