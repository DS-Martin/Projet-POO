#pragma once

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de AfficherClient
	/// </summary>
	public ref class AfficherClient : public System::Windows::Forms::Form
	{
	public:
		AfficherClient(void)
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
		~AfficherClient()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::NumericUpDown^ UpDownNumAdr;
	private: System::Windows::Forms::TextBox^ textBoxCodePostal;
	private: System::Windows::Forms::TextBox^ textBoxRue;
	private: System::Windows::Forms::TextBox^ textBoxVille;
	private: System::Windows::Forms::TextBox^ textBoxPrenom;
	private: System::Windows::Forms::TextBox^ textBoxNom;
	private: System::Windows::Forms::ComboBox^ comboBoxAnnee;
	private: System::Windows::Forms::ComboBox^ comboBoxJour;
	private: System::Windows::Forms::ComboBox^ comboBoxMois;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->UpDownNumAdr = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBoxCodePostal = (gcnew System::Windows::Forms::TextBox());
			this->textBoxRue = (gcnew System::Windows::Forms::TextBox());
			this->textBoxVille = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPrenom = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNom = (gcnew System::Windows::Forms::TextBox());
			this->comboBoxAnnee = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxJour = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxMois = (gcnew System::Windows::Forms::ComboBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UpDownNumAdr))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(28, 29);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 82;
			this->dataGridView1->Size = System::Drawing::Size(1034, 174);
			this->dataGridView1->TabIndex = 0;
			// 
			// UpDownNumAdr
			// 
			this->UpDownNumAdr->Location = System::Drawing::Point(217, 469);
			this->UpDownNumAdr->Name = L"UpDownNumAdr";
			this->UpDownNumAdr->Size = System::Drawing::Size(79, 26);
			this->UpDownNumAdr->TabIndex = 81;
			this->UpDownNumAdr->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBoxCodePostal
			// 
			this->textBoxCodePostal->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->textBoxCodePostal->Location = System::Drawing::Point(164, 571);
			this->textBoxCodePostal->Margin = System::Windows::Forms::Padding(2);
			this->textBoxCodePostal->Name = L"textBoxCodePostal";
			this->textBoxCodePostal->Size = System::Drawing::Size(122, 26);
			this->textBoxCodePostal->TabIndex = 80;
			// 
			// textBoxRue
			// 
			this->textBoxRue->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->textBoxRue->Location = System::Drawing::Point(179, 519);
			this->textBoxRue->Margin = System::Windows::Forms::Padding(2);
			this->textBoxRue->Name = L"textBoxRue";
			this->textBoxRue->Size = System::Drawing::Size(422, 26);
			this->textBoxRue->TabIndex = 79;
			// 
			// textBoxVille
			// 
			this->textBoxVille->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->textBoxVille->Location = System::Drawing::Point(360, 471);
			this->textBoxVille->Margin = System::Windows::Forms::Padding(2);
			this->textBoxVille->Name = L"textBoxVille";
			this->textBoxVille->Size = System::Drawing::Size(241, 26);
			this->textBoxVille->TabIndex = 78;
			// 
			// textBoxPrenom
			// 
			this->textBoxPrenom->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->textBoxPrenom->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBoxPrenom->Location = System::Drawing::Point(133, 331);
			this->textBoxPrenom->Margin = System::Windows::Forms::Padding(2);
			this->textBoxPrenom->Name = L"textBoxPrenom";
			this->textBoxPrenom->Size = System::Drawing::Size(468, 26);
			this->textBoxPrenom->TabIndex = 77;
			// 
			// textBoxNom
			// 
			this->textBoxNom->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->textBoxNom->Location = System::Drawing::Point(120, 287);
			this->textBoxNom->Margin = System::Windows::Forms::Padding(2);
			this->textBoxNom->Name = L"textBoxNom";
			this->textBoxNom->Size = System::Drawing::Size(481, 26);
			this->textBoxNom->TabIndex = 76;
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
			this->comboBoxAnnee->Location = System::Drawing::Point(400, 376);
			this->comboBoxAnnee->Margin = System::Windows::Forms::Padding(2);
			this->comboBoxAnnee->Name = L"comboBoxAnnee";
			this->comboBoxAnnee->Size = System::Drawing::Size(96, 28);
			this->comboBoxAnnee->TabIndex = 75;
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
			this->comboBoxJour->Location = System::Drawing::Point(217, 376);
			this->comboBoxJour->Margin = System::Windows::Forms::Padding(2);
			this->comboBoxJour->Name = L"comboBoxJour";
			this->comboBoxJour->Size = System::Drawing::Size(69, 28);
			this->comboBoxJour->TabIndex = 74;
			// 
			// comboBoxMois
			// 
			this->comboBoxMois->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->comboBoxMois->FormattingEnabled = true;
			this->comboBoxMois->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"01", L"02", L"03", L"04", L"05", L"06", L"07",
					L"08", L"09", L"10", L"11", L"12"
			});
			this->comboBoxMois->Location = System::Drawing::Point(309, 376);
			this->comboBoxMois->Margin = System::Windows::Forms::Padding(2);
			this->comboBoxMois->Name = L"comboBoxMois";
			this->comboBoxMois->Size = System::Drawing::Size(69, 28);
			this->comboBoxMois->TabIndex = 73;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(316, 471);
			this->label24->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(38, 20);
			this->label24->TabIndex = 72;
			this->label24->Text = L"Ville";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(64, 574);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(94, 20);
			this->label7->TabIndex = 71;
			this->label7->Text = L"Code postal";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(64, 519);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(107, 20);
			this->label6->TabIndex = 70;
			this->label6->Text = L"Nom de la rue";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(64, 471);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(138, 20);
			this->label5->TabIndex = 69;
			this->label5->Text = L"Numéro d\'adresse";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(44, 441);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(158, 20);
			this->label4->TabIndex = 68;
			this->label4->Text = L"Adresse de livraison :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(64, 379);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(142, 20);
			this->label3->TabIndex = 67;
			this->label3->Text = L"Date de naissance";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(64, 334);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(64, 20);
			this->label2->TabIndex = 66;
			this->label2->Text = L"Prénom";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(64, 289);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 20);
			this->label1->TabIndex = 65;
			this->label1->Text = L"Nom";
			// 
			// AfficherClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1094, 783);
			this->Controls->Add(this->UpDownNumAdr);
			this->Controls->Add(this->textBoxCodePostal);
			this->Controls->Add(this->textBoxRue);
			this->Controls->Add(this->textBoxVille);
			this->Controls->Add(this->textBoxPrenom);
			this->Controls->Add(this->textBoxNom);
			this->Controls->Add(this->comboBoxAnnee);
			this->Controls->Add(this->comboBoxJour);
			this->Controls->Add(this->comboBoxMois);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"AfficherClient";
			this->Text = L"AfficherClient";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UpDownNumAdr))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
