#pragma once
#include <Windows.h>
#include <sqlext.h>
#include <sqltypes.h>
#include <sql.h>
namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	
	/// <summary>
	/// Description résumée de ModifierClient
	/// </summary>
	public ref class ModifierClient : public System::Windows::Forms::Form
	{
	public:
		ModifierClient(void)
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
		~ModifierClient()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::NumericUpDown^ UpDownNumAdr;
	private: System::Windows::Forms::TextBox^ textBoxCodePostal;
	private: System::Windows::Forms::TextBox^ textBoxNomRue;
	private: System::Windows::Forms::TextBox^ textBoxNomVille;


	private: System::Windows::Forms::TextBox^ textBoxPrenom;
	private: System::Windows::Forms::TextBox^ textBoxNom;



	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ buttonChargerBDD;
	private: System::Windows::Forms::Button^ buttonReculer;
	private: System::Windows::Forms::Button^ buttonAvancer;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ labelCurrentID;
	private: System::Windows::Forms::TextBox^ textBoxDatedeNaissance;
	private: System::Windows::Forms::NumericUpDown^ UpDownAdr2;
	private: System::Windows::Forms::TextBox^ textBoxCodePostal2;


	private: System::Windows::Forms::TextBox^ textBoxNomRue2;

	private: System::Windows::Forms::TextBox^ textBoxNomVille2;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;



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
			this->textBoxNomRue = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNomVille = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPrenom = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNom = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttonChargerBDD = (gcnew System::Windows::Forms::Button());
			this->buttonReculer = (gcnew System::Windows::Forms::Button());
			this->buttonAvancer = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->labelCurrentID = (gcnew System::Windows::Forms::Label());
			this->textBoxDatedeNaissance = (gcnew System::Windows::Forms::TextBox());
			this->UpDownAdr2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBoxCodePostal2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNomRue2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNomVille2 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UpDownNumAdr))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UpDownAdr2))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(26, 34);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 82;
			this->dataGridView1->Size = System::Drawing::Size(1561, 288);
			this->dataGridView1->TabIndex = 0;
			// 
			// UpDownNumAdr
			// 
			this->UpDownNumAdr->Location = System::Drawing::Point(224, 618);
			this->UpDownNumAdr->Name = L"UpDownNumAdr";
			this->UpDownNumAdr->Size = System::Drawing::Size(79, 26);
			this->UpDownNumAdr->TabIndex = 81;
			this->UpDownNumAdr->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->UpDownNumAdr->ValueChanged += gcnew System::EventHandler(this, &ModifierClient::UpDownNumAdr_ValueChanged);
			// 
			// textBoxCodePostal
			// 
			this->textBoxCodePostal->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->textBoxCodePostal->Location = System::Drawing::Point(171, 720);
			this->textBoxCodePostal->Margin = System::Windows::Forms::Padding(2);
			this->textBoxCodePostal->Name = L"textBoxCodePostal";
			this->textBoxCodePostal->Size = System::Drawing::Size(122, 26);
			this->textBoxCodePostal->TabIndex = 80;
			this->textBoxCodePostal->TextChanged += gcnew System::EventHandler(this, &ModifierClient::textBoxCodePostal_TextChanged);
			// 
			// textBoxNomRue
			// 
			this->textBoxNomRue->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->textBoxNomRue->Location = System::Drawing::Point(186, 668);
			this->textBoxNomRue->Margin = System::Windows::Forms::Padding(2);
			this->textBoxNomRue->Name = L"textBoxNomRue";
			this->textBoxNomRue->Size = System::Drawing::Size(422, 26);
			this->textBoxNomRue->TabIndex = 79;
			this->textBoxNomRue->TextChanged += gcnew System::EventHandler(this, &ModifierClient::textBoxNomRue_TextChanged);
			// 
			// textBoxNomVille
			// 
			this->textBoxNomVille->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->textBoxNomVille->Location = System::Drawing::Point(367, 620);
			this->textBoxNomVille->Margin = System::Windows::Forms::Padding(2);
			this->textBoxNomVille->Name = L"textBoxNomVille";
			this->textBoxNomVille->Size = System::Drawing::Size(241, 26);
			this->textBoxNomVille->TabIndex = 78;
			this->textBoxNomVille->TextChanged += gcnew System::EventHandler(this, &ModifierClient::textBoxNomVille_TextChanged_1);
			// 
			// textBoxPrenom
			// 
			this->textBoxPrenom->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->textBoxPrenom->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBoxPrenom->Location = System::Drawing::Point(140, 480);
			this->textBoxPrenom->Margin = System::Windows::Forms::Padding(2);
			this->textBoxPrenom->Name = L"textBoxPrenom";
			this->textBoxPrenom->Size = System::Drawing::Size(468, 26);
			this->textBoxPrenom->TabIndex = 77;
			this->textBoxPrenom->TextChanged += gcnew System::EventHandler(this, &ModifierClient::textBoxPrenom_TextChanged);
			// 
			// textBoxNom
			// 
			this->textBoxNom->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->textBoxNom->Location = System::Drawing::Point(127, 436);
			this->textBoxNom->Margin = System::Windows::Forms::Padding(2);
			this->textBoxNom->Name = L"textBoxNom";
			this->textBoxNom->Size = System::Drawing::Size(481, 26);
			this->textBoxNom->TabIndex = 76;
			this->textBoxNom->TextChanged += gcnew System::EventHandler(this, &ModifierClient::textBoxNom_TextChanged);
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(323, 620);
			this->label24->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(38, 20);
			this->label24->TabIndex = 72;
			this->label24->Text = L"Ville";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(71, 723);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(94, 20);
			this->label7->TabIndex = 71;
			this->label7->Text = L"Code postal";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(71, 668);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(107, 20);
			this->label6->TabIndex = 70;
			this->label6->Text = L"Nom de la rue";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(71, 620);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(138, 20);
			this->label5->TabIndex = 69;
			this->label5->Text = L"Numéro d\'adresse";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(51, 590);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(158, 20);
			this->label4->TabIndex = 68;
			this->label4->Text = L"Adresse de livraison :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(71, 528);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(142, 20);
			this->label3->TabIndex = 67;
			this->label3->Text = L"Date de naissance";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(71, 483);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(64, 20);
			this->label2->TabIndex = 66;
			this->label2->Text = L"Prénom";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(71, 438);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 20);
			this->label1->TabIndex = 65;
			this->label1->Text = L"Nom";
			// 
			// buttonChargerBDD
			// 
			this->buttonChargerBDD->Location = System::Drawing::Point(972, 378);
			this->buttonChargerBDD->Name = L"buttonChargerBDD";
			this->buttonChargerBDD->Size = System::Drawing::Size(136, 35);
			this->buttonChargerBDD->TabIndex = 83;
			this->buttonChargerBDD->Text = L"Charger BDD";
			this->buttonChargerBDD->UseVisualStyleBackColor = true;
			this->buttonChargerBDD->Click += gcnew System::EventHandler(this, &ModifierClient::buttonChargerBDD_Click);
			// 
			// buttonReculer
			// 
			this->buttonReculer->Location = System::Drawing::Point(75, 804);
			this->buttonReculer->Name = L"buttonReculer";
			this->buttonReculer->Size = System::Drawing::Size(75, 41);
			this->buttonReculer->TabIndex = 84;
			this->buttonReculer->Text = L"<";
			this->buttonReculer->UseVisualStyleBackColor = true;
			this->buttonReculer->Click += gcnew System::EventHandler(this, &ModifierClient::buttonReculer_Click);
			// 
			// buttonAvancer
			// 
			this->buttonAvancer->Location = System::Drawing::Point(171, 804);
			this->buttonAvancer->Name = L"buttonAvancer";
			this->buttonAvancer->Size = System::Drawing::Size(75, 41);
			this->buttonAvancer->TabIndex = 85;
			this->buttonAvancer->Text = L">";
			this->buttonAvancer->UseVisualStyleBackColor = true;
			this->buttonAvancer->Click += gcnew System::EventHandler(this, &ModifierClient::button2_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(71, 378);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(104, 20);
			this->label8->TabIndex = 86;
			this->label8->Text = L"ID du Client : ";
			this->label8->Click += gcnew System::EventHandler(this, &ModifierClient::label8_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(180, 378);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 20);
			this->label9->TabIndex = 87;
			this->label9->Click += gcnew System::EventHandler(this, &ModifierClient::label9_Click);
			// 
			// labelCurrentID
			// 
			this->labelCurrentID->AutoSize = true;
			this->labelCurrentID->Location = System::Drawing::Point(220, 378);
			this->labelCurrentID->Name = L"labelCurrentID";
			this->labelCurrentID->Size = System::Drawing::Size(0, 20);
			this->labelCurrentID->TabIndex = 88;
			this->labelCurrentID->Click += gcnew System::EventHandler(this, &ModifierClient::label10_Click);
			// 
			// textBoxDatedeNaissance
			// 
			this->textBoxDatedeNaissance->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->textBoxDatedeNaissance->Location = System::Drawing::Point(224, 525);
			this->textBoxDatedeNaissance->Margin = System::Windows::Forms::Padding(2);
			this->textBoxDatedeNaissance->Name = L"textBoxDatedeNaissance";
			this->textBoxDatedeNaissance->Size = System::Drawing::Size(241, 26);
			this->textBoxDatedeNaissance->TabIndex = 89;
			this->textBoxDatedeNaissance->TextChanged += gcnew System::EventHandler(this, &ModifierClient::textBoxDatedeNaissance_TextChanged);
			// 
			// UpDownAdr2
			// 
			this->UpDownAdr2->Location = System::Drawing::Point(919, 620);
			this->UpDownAdr2->Name = L"UpDownAdr2";
			this->UpDownAdr2->Size = System::Drawing::Size(79, 26);
			this->UpDownAdr2->TabIndex = 98;
			this->UpDownAdr2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->UpDownAdr2->ValueChanged += gcnew System::EventHandler(this, &ModifierClient::numericUpDown1_ValueChanged);
			// 
			// textBoxCodePostal2
			// 
			this->textBoxCodePostal2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->textBoxCodePostal2->Location = System::Drawing::Point(866, 722);
			this->textBoxCodePostal2->Margin = System::Windows::Forms::Padding(2);
			this->textBoxCodePostal2->Name = L"textBoxCodePostal2";
			this->textBoxCodePostal2->Size = System::Drawing::Size(122, 26);
			this->textBoxCodePostal2->TabIndex = 97;
			this->textBoxCodePostal2->TextChanged += gcnew System::EventHandler(this, &ModifierClient::textBox1_TextChanged);
			// 
			// textBoxNomRue2
			// 
			this->textBoxNomRue2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->textBoxNomRue2->Location = System::Drawing::Point(881, 670);
			this->textBoxNomRue2->Margin = System::Windows::Forms::Padding(2);
			this->textBoxNomRue2->Name = L"textBoxNomRue2";
			this->textBoxNomRue2->Size = System::Drawing::Size(422, 26);
			this->textBoxNomRue2->TabIndex = 96;
			this->textBoxNomRue2->TextChanged += gcnew System::EventHandler(this, &ModifierClient::textBox2_TextChanged);
			// 
			// textBoxNomVille2
			// 
			this->textBoxNomVille2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->textBoxNomVille2->Location = System::Drawing::Point(1062, 622);
			this->textBoxNomVille2->Margin = System::Windows::Forms::Padding(2);
			this->textBoxNomVille2->Name = L"textBoxNomVille2";
			this->textBoxNomVille2->Size = System::Drawing::Size(241, 26);
			this->textBoxNomVille2->TabIndex = 95;
			this->textBoxNomVille2->TextChanged += gcnew System::EventHandler(this, &ModifierClient::textBox3_TextChanged);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(1018, 622);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(38, 20);
			this->label10->TabIndex = 94;
			this->label10->Text = L"Ville";
			this->label10->Click += gcnew System::EventHandler(this, &ModifierClient::label10_Click_1);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(766, 725);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(94, 20);
			this->label11->TabIndex = 93;
			this->label11->Text = L"Code postal";
			this->label11->Click += gcnew System::EventHandler(this, &ModifierClient::label11_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(766, 670);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(107, 20);
			this->label12->TabIndex = 92;
			this->label12->Text = L"Nom de la rue";
			this->label12->Click += gcnew System::EventHandler(this, &ModifierClient::label12_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(766, 622);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(138, 20);
			this->label13->TabIndex = 91;
			this->label13->Text = L"Numéro d\'adresse";
			this->label13->Click += gcnew System::EventHandler(this, &ModifierClient::label13_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(746, 592);
			this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(170, 20);
			this->label14->TabIndex = 90;
			this->label14->Text = L"Adresse de facturation";
			this->label14->Click += gcnew System::EventHandler(this, &ModifierClient::label14_Click);
			// 
			// ModifierClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1598, 900);
			this->Controls->Add(this->UpDownAdr2);
			this->Controls->Add(this->textBoxCodePostal2);
			this->Controls->Add(this->textBoxNomRue2);
			this->Controls->Add(this->textBoxNomVille2);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->textBoxDatedeNaissance);
			this->Controls->Add(this->labelCurrentID);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->buttonAvancer);
			this->Controls->Add(this->buttonReculer);
			this->Controls->Add(this->buttonChargerBDD);
			this->Controls->Add(this->UpDownNumAdr);
			this->Controls->Add(this->textBoxCodePostal);
			this->Controls->Add(this->textBoxNomRue);
			this->Controls->Add(this->textBoxNomVille);
			this->Controls->Add(this->textBoxPrenom);
			this->Controls->Add(this->textBoxNom);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"ModifierClient";
			this->Text = L"ModifierClient";
			this->Load += gcnew System::EventHandler(this, &ModifierClient::ModifierClient_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UpDownNumAdr))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UpDownAdr2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void ModifierClient_Load(System::Object^ sender, System::EventArgs^ e) {
			labelCurrentID->Text = "1"; 
			ChargerInformationsClient(1); // 
			
			ChargerAdresseFacturation(1);
			ChargerAdresseLivraison(1); // Charge l'adresse de livraison pour l'ID du client 1
			String^ connectionString = "Data Source=MARTIN_GOA;Initial Catalog=Projet;Integrated Security=True";
			SqlConnection^ connection = gcnew SqlConnection(connectionString);

			try
			{
				connection->Open();

				// Requête pour sélectionner les informations du client et de son adresse associée
				String^ query = "SELECT dbo.Client.ID_CLIENT, dbo.Client.NOM, dbo.Client.PRENOM, dbo.Client.DATE_NAISSANCE, ADRESSE.NUMERO, ADRESSE.NOM_RUE, ADRESSE.NOM_VILLE, ADRESSE.CODE_POSTAL, ADRESSE.TYPE_ADRESSE "
					"FROM dbo.Client "
					"LEFT JOIN Possede1 ON dbo.Client.ID_CLIENT = Possede1.ID_CLIENT "
					"LEFT JOIN ADRESSE ON Possede1.ID_ADRESSE = ADRESSE.ID_ADRESSE";

				SqlDataAdapter^ dataAdapter;
				dataAdapter = gcnew SqlDataAdapter(query, connection);

				// Création d'un DataSet pour stocker les données
				DataSet^ dataSet = gcnew DataSet();

				// Remplissage du DataSet avec les données de la requête
				dataAdapter->Fill(dataSet, "ClientAdresse");

				// Liaison du DataSet à la DataGridView
				dataGridView1->DataSource = dataSet;
				dataGridView1->DataMember = "ClientAdresse";

				// Cacher la colonne ID_ADRESSE si nécessaire
				// dataGridView1->Columns["ID_ADRESSE"]->Visible = false;
			}
			catch (Exception^ ex)
			{
				MessageBox::Show("Erreur lors du chargement des données : " + ex->Message, "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			finally
			{
				connection->Close();
			}	
			
		}
	private: System::Void buttonChargerBDD_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ connectionString = "Data Source=MARTIN_GOA;Initial Catalog=Projet;Integrated Security=True";
		SqlConnection^ connection = gcnew SqlConnection(connectionString);

		try
		{
			connection->Open();

			// Requête pour sélectionner les informations du client et de son adresse associée
			String^ query = "SELECT dbo.Client.ID_CLIENT, dbo.Client.NOM, dbo.Client.PRENOM, dbo.Client.DATE_NAISSANCE, ADRESSE.NUMERO, ADRESSE.NOM_RUE, ADRESSE.NOM_VILLE, ADRESSE.CODE_POSTAL, ADRESSE.TYPE_ADRESSE "
				"FROM dbo.Client "
				"LEFT JOIN Possede1 ON dbo.Client.ID_CLIENT = Possede1.ID_CLIENT "
				"LEFT JOIN ADRESSE ON Possede1.ID_ADRESSE = ADRESSE.ID_ADRESSE";

			SqlDataAdapter^ dataAdapter;
			dataAdapter = gcnew SqlDataAdapter(query, connection);

			// Création d'un DataSet pour stocker les données
			DataSet^ dataSet = gcnew DataSet();

			// Remplissage du DataSet avec les données de la requête
			dataAdapter->Fill(dataSet, "ClientAdresse");

			// Liaison du DataSet à la DataGridView
			dataGridView1->DataSource = dataSet;
			dataGridView1->DataMember = "ClientAdresse";

			// Cacher la colonne ID_ADRESSE si nécessaire
			// dataGridView1->Columns["ID_ADRESSE"]->Visible = false;
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Erreur lors du chargement des données : " + ex->Message, "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally
		{
			connection->Close();
		}
	}



		   // Variable membre pour stocker l'ID de l'adresse de livraison

int adresseLivraisonId;
int adresseFacturationId;
private: void ChargerAdresseFacturation(int clientId) {
	String^ connectionString = "Data Source=MARTIN_GOA;Initial Catalog=Projet;Integrated Security=True";
	SqlConnection^ connection = gcnew SqlConnection(connectionString);
	SqlDataReader^ reader = nullptr;
	try {
		connection->Open();

		// Requête pour sélectionner l'ID de l'adresse de facturation
		String^ query = "SELECT ADRESSE.* FROM ADRESSE "
			"JOIN POSSEDE1 ON ADRESSE.ID_ADRESSE = POSSEDE1.ID_ADRESSE "
			"WHERE POSSEDE1.ID_CLIENT = @ClientId AND ADRESSE.TYPE_ADRESSE = 1";

		SqlCommand^ command = gcnew SqlCommand(query, connection);
		// Utilisation de paramètres pour prévenir les injections SQL
		command->Parameters->AddWithValue("@ClientId", clientId);

		SqlDataReader^ reader = command->ExecuteReader();

		if (reader->Read()) {
			// Récupérez l'ID de l'adresse de facturation
			int adresseFacturationId = Convert::ToInt32(reader["ID_Adresse"]);
			reader->Close();

			// Requête pour les détails de l'adresse de facturation
			query = "SELECT * FROM Adresse WHERE ID_Adresse = " + adresseFacturationId;
			command = gcnew SqlCommand(query, connection);
			reader = command->ExecuteReader();

			if (reader->Read()) {
				// Remplir les TextBox avec les informations
				UpDownAdr2->Value = Convert::ToInt32(reader["NUMERO"]);
				textBoxNomRue2->Text = reader["NOM_RUE"]->ToString();
				textBoxNomVille2->Text = reader["NOM_VILLE"]->ToString();
				textBoxCodePostal2->Text = reader["CODE_POSTAL"]->ToString();
				// Ajoutez d'autres champs ici si nécessaire
			}
		}
		else {
			// Effacer les champs si aucune adresse de facturation trouvée
			UpDownAdr2->Value = 0;
			textBoxNomRue2->Text = "";
			textBoxNomVille2->Text = "";
			textBoxCodePostal2->Text = "";
			// Effacez d'autres champs ici si nécessaire

			MessageBox::Show("Aucune adresse de facturation trouvée pour le client avec l'ID : " + clientId, "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("Erreur lors du chargement de l'adresse de facturation : " + ex->Message, "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	
		
	if (connection->State == ConnectionState::Open) {
			connection->Close();
		
	}
}




private: void ChargerAdresseLivraison(int clientId) {
	String^ connectionString = "Data Source=MARTIN_GOA;Initial Catalog=Projet;Integrated Security=True";
	SqlConnection^ connection = gcnew SqlConnection(connectionString);
	try {
		connection->Open();

		// Requête pour sélectionner l'adresse de livraison du client en fonction de l'ID
		String^ query = "SELECT ADRESSE.* FROM dbo.Adresse "
			"JOIN Possede1 ON Adresse.ID_ADRESSE = Possede1.ID_ADRESSE "
			"WHERE Possede1.ID_CLIENT = @ClientId AND Adresse.TYPE_ADRESSE = 0";

		SqlCommand^ command = gcnew SqlCommand(query, connection);
		// Utilisation de paramètres pour prévenir les injections SQL
		command->Parameters->AddWithValue("@ClientId", clientId);

		SqlDataReader^ reader = command->ExecuteReader();

		if (reader->Read()) {
			// Stocker l'ID de l'adresse de livraison
			adresseLivraisonId = Convert::ToInt32(reader["ID_ADRESSE"]);

			// Remplir les TextBox avec les informations de l'adresse de livraison
			UpDownNumAdr->Value = Convert::ToInt32(reader["NUMERO"]);
			textBoxNomRue->Text = reader["NOM_RUE"]->ToString();
			textBoxNomVille->Text = reader["NOM_VILLE"]->ToString();
			textBoxCodePostal->Text = reader["CODE_POSTAL"]->ToString();
		}
		else {
			// Si aucune adresse de livraison trouvée, effacer les TextBox et réinitialiser l'ID
			UpDownNumAdr->Value = 0;
			textBoxNomRue->Text = "";
			textBoxNomVille->Text = "";
			textBoxCodePostal->Text = "";
			adresseLivraisonId = -1; // Valeur pour indiquer qu'aucune adresse n'est chargée

			MessageBox::Show("Aucune adresse de livraison trouvée pour le client avec l'ID : " + clientId, "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("Erreur lors du chargement de l'adresse de livraison : " + ex->Message, "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	finally {
		// Fermer le DataReader et la connexion
		if (connection->State == ConnectionState::Open) {
			connection->Close();
		}
	}
}

private: void MettreAJourClient(int clientId, String^ champ, String^ valeur) {
		   String^ connectionString = "Data Source=MARTIN_GOA;Initial Catalog=Projet;Integrated Security=True";
		   SqlConnection^ connection = gcnew SqlConnection(connectionString);

		   try {
			   connection->Open();
			   String^ query = "UPDATE dbo.Client SET " + champ + " = @Valeur WHERE ID_CLIENT = @ClientID";
			   SqlCommand^ command = gcnew SqlCommand(query, connection);
			   command->Parameters->AddWithValue("@Valeur", valeur);
			   command->Parameters->AddWithValue("@ClientID", clientId);
			   command->ExecuteNonQuery();
		   }
		   catch (Exception^ ex) {
			   MessageBox::Show("Erreur lors de la mise à jour : " + ex->Message, "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
		   }
		   finally {
			   connection->Close();
		   }
	   }
private: void MettreAJourAdresse(int adresseId, String^ champ, String^ valeur) {
    String^ connectionString = "Data Source=MARTIN_GOA;Initial Catalog=Projet;Integrated Security=True";
    SqlConnection^ connection = gcnew SqlConnection(connectionString);

    try {
        connection->Open();
        String^ query = "UPDATE dbo.ADRESSE SET " + champ + " = @Valeur WHERE ID_ADRESSE = @AdresseID";
        SqlCommand^ command = gcnew SqlCommand(query, connection);
        command->Parameters->AddWithValue("@Valeur", valeur);
        command->Parameters->AddWithValue("@AdresseID", adresseId);
        command->ExecuteNonQuery();
    }
    catch (Exception^ ex) {
        MessageBox::Show("Erreur lors de la mise à jour de l'adresse : " + ex->Message, "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
    finally {
        connection->Close();
    }
}


private: void ChargerInformationsClient(int clientId) {
	String^ connectionString = "Data Source=MARTIN_GOA;Initial Catalog=Projet;Integrated Security=True";
	SqlConnection^ connection = gcnew SqlConnection(connectionString);
	
	try {
		connection->Open();

		// Requête pour sélectionner les informations du client en fonction de l'ID
		String^ query = "SELECT * FROM dbo.Client WHERE ID_CLIENT = " + clientId;
		SqlCommand^ command = gcnew SqlCommand(query, connection);
		SqlDataReader^ reader = command->ExecuteReader();

		// Vérifier s'il y a des résultats
		if (reader->Read()) {
			// Remplir les TextBox avec les informations du client
			textBoxNom->Text = reader["NOM"]->ToString();
			textBoxPrenom->Text = reader["PRENOM"]->ToString();
			String^ dateNaissanceStr = reader["DATE_NAISSANCE"]->ToString();
			DateTime dateNaissance = Convert::ToDateTime(dateNaissanceStr);
			textBoxDatedeNaissance->Text = dateNaissance.ToShortDateString();
			// Ajouter le code pour les autres champs...

			// Fermer le DataReader
			reader->Close();
		}
		else {
			// Si aucun client trouvé, effacer les TextBox
			textBoxNom->Text = "";
			textBoxPrenom->Text = "";
			textBoxDatedeNaissance->Text = "";
			// Ajouter le code pour les autres champs...

			// Fermer le DataReader
			reader->Close();

			// Afficher un message indiquant que le client n'existe pas
			MessageBox::Show("Aucun client trouvé avec l'ID : " + clientId, "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("Erreur lors du chargement des données : " + ex->Message, "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	finally {
		connection->Close();
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	// Vérifiez d'abord si le label contient une valeur numérique valide
	int currentId;
	if (Int32::TryParse(labelCurrentID->Text, currentId)) {
		int nextId = currentId + 1;

		labelCurrentID->Text = nextId.ToString();

		// Charger les informations du nouveau client dans les TextBox
		ChargerInformationsClient(nextId);
		ChargerAdresseLivraison(nextId);
		ChargerAdresseFacturation(nextId);
	}
	else {
		// Gérez l'erreur, par exemple en réinitialisant le label à une valeur par défaut ou en informant l'utilisateur
		MessageBox::Show("L'ID du client actuel n'est pas valide.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void buttonReculer_Click(System::Object^ sender, System::EventArgs^ e) {
	// Reculer vers le précédent ID client
	int currentId = Convert::ToInt32(labelCurrentID->Text);
	int previousId = currentId - 1;

	// Mettre à jour le label avec le nouvel ID client
	labelCurrentID->Text = previousId.ToString();

	// Charger les informations du nouveau client dans les TextBox
	ChargerInformationsClient(previousId);
	ChargerAdresseLivraison(previousId);
	ChargerAdresseFacturation(previousId);
}

private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBoxNom_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	int clientId = Convert::ToInt32(labelCurrentID->Text);
	String^ nouveauNom = textBoxNom->Text;
	MettreAJourClient(clientId, "NOM", nouveauNom);
}
private: System::Void textBoxPrenom_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	int clientId = Convert::ToInt32(labelCurrentID->Text);
	String^ nouveauPrenom = textBoxPrenom->Text;
	MettreAJourClient(clientId, "PRENOM", nouveauPrenom);
}

private: System::Void textBoxDatedeNaissance_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	int clientId = Convert::ToInt32(labelCurrentID->Text);
	String^ nouvelleDateNaissance = textBoxDatedeNaissance->Text;
	// Assurez-vous de valider et de convertir la date correctement
	MettreAJourClient(clientId, "DATE_NAISSANCE", nouvelleDateNaissance);
}


private: System::Void textBoxNomVille_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
	String^ nouveauNomVille = textBoxNomVille->Text;
	MettreAJourAdresse(adresseLivraisonId, "NOM_VILLE", nouveauNomVille);
}
private: System::Void UpDownNumAdr_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	int nouveauNumero = static_cast<int>(UpDownNumAdr->Value);
	MettreAJourAdresse(adresseLivraisonId, "NUMERO", nouveauNumero.ToString());
}
private: System::Void textBoxNomRue_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ nouveauNomRue = textBoxNomRue->Text;
	MettreAJourAdresse(adresseLivraisonId, "NOM_RUE", nouveauNomRue);
}
private: System::Void textBoxCodePostal_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ nouveauCodePostal = textBoxCodePostal->Text;
	MettreAJourAdresse(adresseLivraisonId, "CODE_POSTAL", nouveauCodePostal);
}
private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label10_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}

