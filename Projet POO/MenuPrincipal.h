#pragma once
#include "CreerClient.h"
#include "ModifierClient.h"
#include "SupprimerClient.h"
#include "AfficherClient.h"

using namespace ProjetPOO::P6new;

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MenuPrincipal
	/// </summary>
	public ref class MenuPrincipal : public System::Windows::Forms::Form
	{
	public:
		MenuPrincipal(void)
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
		~MenuPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}





	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ clientToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ créerToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ modifierToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ supprimerToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ afficherToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ personnelToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ créerToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ modifierToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ supprimerToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ afficherToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ commandesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ stockToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ statistiquesToolStripMenuItem;
	protected:

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->clientToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->créerToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modifierToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->supprimerToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->afficherToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->personnelToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->créerToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modifierToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->supprimerToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->afficherToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->commandesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->stockToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->statistiquesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(32, 32);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->clientToolStripMenuItem,
					this->personnelToolStripMenuItem, this->commandesToolStripMenuItem, this->stockToolStripMenuItem, this->statistiquesToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1208, 40);
			this->menuStrip1->TabIndex = 5;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// clientToolStripMenuItem
			// 
			this->clientToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->créerToolStripMenuItem,
					this->modifierToolStripMenuItem, this->supprimerToolStripMenuItem, this->afficherToolStripMenuItem
			});
			this->clientToolStripMenuItem->Name = L"clientToolStripMenuItem";
			this->clientToolStripMenuItem->Size = System::Drawing::Size(97, 36);
			this->clientToolStripMenuItem->Text = L"Client";
			// 
			// créerToolStripMenuItem
			// 
			this->créerToolStripMenuItem->Name = L"créerToolStripMenuItem";
			this->créerToolStripMenuItem->Size = System::Drawing::Size(359, 44);
			this->créerToolStripMenuItem->Text = L"Créer";
			this->créerToolStripMenuItem->Click += gcnew System::EventHandler(this, &MenuPrincipal::créerToolStripMenuItem_Click);
			// 
			// modifierToolStripMenuItem
			// 
			this->modifierToolStripMenuItem->Name = L"modifierToolStripMenuItem";
			this->modifierToolStripMenuItem->Size = System::Drawing::Size(359, 44);
			this->modifierToolStripMenuItem->Text = L"Modifier";
			this->modifierToolStripMenuItem->Click += gcnew System::EventHandler(this, &MenuPrincipal::modifierToolStripMenuItem_Click);
			// 
			// supprimerToolStripMenuItem
			// 
			this->supprimerToolStripMenuItem->Name = L"supprimerToolStripMenuItem";
			this->supprimerToolStripMenuItem->Size = System::Drawing::Size(359, 44);
			this->supprimerToolStripMenuItem->Text = L"Supprimer";
			this->supprimerToolStripMenuItem->Click += gcnew System::EventHandler(this, &MenuPrincipal::supprimerToolStripMenuItem_Click);
			// 
			// afficherToolStripMenuItem
			// 
			this->afficherToolStripMenuItem->Name = L"afficherToolStripMenuItem";
			this->afficherToolStripMenuItem->Size = System::Drawing::Size(359, 44);
			this->afficherToolStripMenuItem->Text = L"Afficher";
			this->afficherToolStripMenuItem->Click += gcnew System::EventHandler(this, &MenuPrincipal::afficherToolStripMenuItem_Click);
			// 
			// personnelToolStripMenuItem
			// 
			this->personnelToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->créerToolStripMenuItem1,
					this->modifierToolStripMenuItem1, this->supprimerToolStripMenuItem1, this->afficherToolStripMenuItem1
			});
			this->personnelToolStripMenuItem->Name = L"personnelToolStripMenuItem";
			this->personnelToolStripMenuItem->Size = System::Drawing::Size(139, 36);
			this->personnelToolStripMenuItem->Text = L"Personnel";
			// 
			// créerToolStripMenuItem1
			// 
			this->créerToolStripMenuItem1->Name = L"créerToolStripMenuItem1";
			this->créerToolStripMenuItem1->Size = System::Drawing::Size(260, 44);
			this->créerToolStripMenuItem1->Text = L"Créer";
			// 
			// modifierToolStripMenuItem1
			// 
			this->modifierToolStripMenuItem1->Name = L"modifierToolStripMenuItem1";
			this->modifierToolStripMenuItem1->Size = System::Drawing::Size(260, 44);
			this->modifierToolStripMenuItem1->Text = L"Modifier";
			// 
			// supprimerToolStripMenuItem1
			// 
			this->supprimerToolStripMenuItem1->Name = L"supprimerToolStripMenuItem1";
			this->supprimerToolStripMenuItem1->Size = System::Drawing::Size(260, 44);
			this->supprimerToolStripMenuItem1->Text = L"Supprimer";
			// 
			// afficherToolStripMenuItem1
			// 
			this->afficherToolStripMenuItem1->Name = L"afficherToolStripMenuItem1";
			this->afficherToolStripMenuItem1->Size = System::Drawing::Size(260, 44);
			this->afficherToolStripMenuItem1->Text = L"Afficher";
			// 
			// commandesToolStripMenuItem
			// 
			this->commandesToolStripMenuItem->Name = L"commandesToolStripMenuItem";
			this->commandesToolStripMenuItem->Size = System::Drawing::Size(169, 36);
			this->commandesToolStripMenuItem->Text = L"Commandes";
			// 
			// stockToolStripMenuItem
			// 
			this->stockToolStripMenuItem->Name = L"stockToolStripMenuItem";
			this->stockToolStripMenuItem->Size = System::Drawing::Size(92, 36);
			this->stockToolStripMenuItem->Text = L"Stock";
			// 
			// statistiquesToolStripMenuItem
			// 
			this->statistiquesToolStripMenuItem->Name = L"statistiquesToolStripMenuItem";
			this->statistiquesToolStripMenuItem->Size = System::Drawing::Size(156, 36);
			this->statistiquesToolStripMenuItem->Text = L"Statistiques";
			// 
			// MenuPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1208, 738);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MenuPrincipal";
			this->Text = L"MenuPrincipal";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		CreerClient obj;
		obj.ShowDialog();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		ModifierClient obj;
		obj.ShowDialog();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		SupprimerClient obj;
		obj.ShowDialog();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		AfficherClient obj;
		obj.ShowDialog();
	}
	private: System::Void créerToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		CreerClient obj;
		obj.ShowDialog();
	}
	private: System::Void modifierToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		ModifierClient obj;
		obj.ShowDialog();
	}
	private: System::Void supprimerToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		SupprimerClient obj;
		obj.ShowDialog();
	}
	private: System::Void afficherToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		AfficherClient obj;
		obj.ShowDialog();
	}
	};
}

