#pragma once

namespace proyfereteria {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de formentrada
	/// </summary>
	public ref class formentrada : public System::Windows::Forms::Form
	{
	public:
		formentrada(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~formentrada()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^ listView1;
	protected:
	private: System::Windows::Forms::ColumnHeader^ Nombre_del_Producto;
	private: System::Windows::Forms::ColumnHeader^ codigo_del_producto;
	private: System::Windows::Forms::ColumnHeader^ fecha_de_salida;
	private: System::Windows::Forms::ColumnHeader^ Nombre_del_proveedor;


	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::ColumnHeader^ ID_del_proveedor;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox3;


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->Nombre_del_Producto = (gcnew System::Windows::Forms::ColumnHeader());
			this->codigo_del_producto = (gcnew System::Windows::Forms::ColumnHeader());
			this->fecha_de_salida = (gcnew System::Windows::Forms::ColumnHeader());
			this->Nombre_del_proveedor = (gcnew System::Windows::Forms::ColumnHeader());
			this->ID_del_proveedor = (gcnew System::Windows::Forms::ColumnHeader());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(5) {
				this->Nombre_del_Producto,
					this->codigo_del_producto, this->fecha_de_salida, this->Nombre_del_proveedor, this->ID_del_proveedor
			});
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(16, 331);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(1090, 263);
			this->listView1->TabIndex = 29;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// Nombre_del_Producto
			// 
			this->Nombre_del_Producto->Text = L"Nombre del Producto";
			this->Nombre_del_Producto->Width = 206;
			// 
			// codigo_del_producto
			// 
			this->codigo_del_producto->Text = L"codigo del producto";
			this->codigo_del_producto->Width = 209;
			// 
			// fecha_de_salida
			// 
			this->fecha_de_salida->Text = L"Fecha de salida";
			this->fecha_de_salida->Width = 254;
			// 
			// Nombre_del_proveedor
			// 
			this->Nombre_del_proveedor->Text = L"Nombre del proveedor";
			this->Nombre_del_proveedor->Width = 202;
			// 
			// ID_del_proveedor
			// 
			this->ID_del_proveedor->Text = L"ID del proveedor";
			this->ID_del_proveedor->Width = 152;
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(580, 260);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(112, 42);
			this->button2->TabIndex = 28;
			this->button2->Text = L"consultar";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(415, 260);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 42);
			this->button1->TabIndex = 27;
			this->button1->Text = L"Guardar";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(528, 127);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(165, 20);
			this->label4->TabIndex = 26;
			this->label4->Text = L"Nombre del proveedor";
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::Silver;
			this->textBox4->Location = System::Drawing::Point(718, 124);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(276, 30);
			this->textBox4->TabIndex = 25;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 130);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(130, 20);
			this->label3->TabIndex = 24;
			this->label3->Text = L"fecha de entrada";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(545, 60);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(148, 20);
			this->label2->TabIndex = 22;
			this->label2->Text = L"codigo del producto";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 70);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(155, 20);
			this->label1->TabIndex = 21;
			this->label1->Text = L"nombre del producto";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::Silver;
			this->textBox2->Location = System::Drawing::Point(699, 50);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(276, 30);
			this->textBox2->TabIndex = 20;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Silver;
			this->textBox1->Location = System::Drawing::Point(188, 60);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(276, 30);
			this->textBox1->TabIndex = 19;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(303, 190);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(126, 20);
			this->label5->TabIndex = 31;
			this->label5->Text = L"ID del proveedor";
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::Silver;
			this->textBox5->Location = System::Drawing::Point(497, 187);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(276, 30);
			this->textBox5->TabIndex = 30;
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::Teal;
			this->label6->Location = System::Drawing::Point(-12, -16);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(1144, 53);
			this->label6->TabIndex = 32;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::Silver;
			this->textBox3->Location = System::Drawing::Point(153, 127);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(276, 30);
			this->textBox3->TabIndex = 23;
			// 
			// formentrada
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1144, 617);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"formentrada";
			this->Text = L"formentrada";
			this->Load += gcnew System::EventHandler(this, &formentrada::formentrada_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void formentrada_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
