#pragma once

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Description résumée de SupprimerClient
	/// </summary>
	public ref class SupprimerClient : public System::Windows::Forms::Form
	{
	public:
		SupprimerClient(void)
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
		~SupprimerClient()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ buttonValider;
	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::NumericUpDown^ numUpDownSuppr;
	private: System::Windows::Forms::Button^ buttonActualiser;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SupprimerClient::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->buttonValider = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->numUpDownSuppr = (gcnew System::Windows::Forms::NumericUpDown());
			this->buttonActualiser = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numUpDownSuppr))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(38, 35);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 82;
			this->dataGridView1->Size = System::Drawing::Size(1093, 551);
			this->dataGridView1->TabIndex = 0;
			// 
			// buttonValider
			// 
			this->buttonValider->Location = System::Drawing::Point(457, 696);
			this->buttonValider->Margin = System::Windows::Forms::Padding(2);
			this->buttonValider->Name = L"buttonValider";
			this->buttonValider->Size = System::Drawing::Size(232, 68);
			this->buttonValider->TabIndex = 1;
			this->buttonValider->Text = L"Valider";
			this->buttonValider->UseVisualStyleBackColor = true;
			this->buttonValider->Click += gcnew System::EventHandler(this, &SupprimerClient::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(122, 623);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(191, 20);
			this->label1->TabIndex = 2;
			this->label1->Text = L"ID du Client à supprimer : ";
			this->label1->Click += gcnew System::EventHandler(this, &SupprimerClient::label1_Click);
			// 
			// numUpDownSuppr
			// 
			this->numUpDownSuppr->Location = System::Drawing::Point(319, 621);
			this->numUpDownSuppr->Name = L"numUpDownSuppr";
			this->numUpDownSuppr->Size = System::Drawing::Size(120, 26);
			this->numUpDownSuppr->TabIndex = 3;
			this->numUpDownSuppr->ValueChanged += gcnew System::EventHandler(this, &SupprimerClient::numUpDownSuppr_ValueChanged);
			// 
			// buttonActualiser
			// 
			this->buttonActualiser->Location = System::Drawing::Point(985, 599);
			this->buttonActualiser->Margin = System::Windows::Forms::Padding(2);
			this->buttonActualiser->Name = L"buttonActualiser";
			this->buttonActualiser->Size = System::Drawing::Size(136, 44);
			this->buttonActualiser->TabIndex = 4;
			this->buttonActualiser->Text = L"Actualiser";
			this->buttonActualiser->UseVisualStyleBackColor = true;
			this->buttonActualiser->Click += gcnew System::EventHandler(this, &SupprimerClient::buttonActualiser_Click);
			// 
			// SupprimerClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1169, 775);
			this->Controls->Add(this->buttonActualiser);
			this->Controls->Add(this->numUpDownSuppr);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonValider);
			this->Controls->Add(this->dataGridView1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"SupprimerClient";
			this->Text = L"SupprimerClient";
			this->Load += gcnew System::EventHandler(this, &SupprimerClient::SupprimerClient_Load_1);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numUpDownSuppr))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int clientId = static_cast<int>(numUpDownSuppr->Value); // Remplacer UpDownClientId par le nom réel de votre contrôle NumericUpDown
		String^ connectionString = "Data Source=MARTIN_GOA;Initial Catalog=Projet;Integrated Security=True";
		SqlConnection^ connection = gcnew SqlConnection(connectionString);

		try {
			connection->Open();

			// Commencer une transaction
			SqlTransaction^ transaction = connection->BeginTransaction();

			SqlCommand^ command = connection->CreateCommand();
			command->Transaction = transaction;

			try {
				// Supprimer les enregistrements de la table POSSEDE1 pour ce client
				SqlCommand^ commandPossede = gcnew SqlCommand("DELETE FROM POSSEDE1 WHERE ID_CLIENT = @ClientId", connection, transaction);
				commandPossede->Parameters->AddWithValue("@ClientId", clientId);
				commandPossede->ExecuteNonQuery();

				// Supprimer les enregistrements de la table ADRESSE pour ce client
				SqlCommand^ commandAdresse = gcnew SqlCommand("DELETE FROM ADRESSE WHERE ID_ADRESSE IN (SELECT ID_ADRESSE FROM POSSEDE1 WHERE ID_CLIENT = @ClientId)", connection, transaction);
				commandAdresse->Parameters->AddWithValue("@ClientId", clientId);
				commandAdresse->ExecuteNonQuery();

				// Supprimer le client de la table CLIENT
				SqlCommand^ commandClient = gcnew SqlCommand("DELETE FROM CLIENT WHERE ID_CLIENT = @ClientId", connection, transaction);
				commandClient->Parameters->AddWithValue("@ClientId", clientId);
				commandClient->ExecuteNonQuery();
				// Valider la transaction
				transaction->Commit();
				MessageBox::Show("Client supprimé.", "Information");
			}
			catch (Exception^ ex) {
				// En cas d'erreur, annuler la transaction
				transaction->Rollback();
				MessageBox::Show("Erreur lors de la suppression du client : " + ex->Message, "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("Erreur lors de la connexion à la base de données : " + ex->Message, "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally {
			if (connection->State == ConnectionState::Open) {
				connection->Close();
			}
		}
	}

	private: System::Void SupprimerClient_Load_1(System::Object^ sender, System::EventArgs^ e) {
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
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {

}

private: System::Void numUpDownSuppr_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void buttonActualiser_Click(System::Object^ sender, System::EventArgs^ e) {
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
};
}



	