#pragma once

namespace proyfereteria {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de formsalida
	/// </summary>
	public ref class formsalida : public System::Windows::Forms::Form
	{
	public:
		formsalida(void)
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
		~formsalida()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label4;
	protected:
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::ColumnHeader^ Nombre_del_Producto;
	private: System::Windows::Forms::ColumnHeader^ codigo_del_producto;
	private: System::Windows::Forms::ColumnHeader^ fecha_de_salida;
	private: System::Windows::Forms::ColumnHeader^ Numero_del_cliente;
	private: System::Windows::Forms::Label^ label5;
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
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->Nombre_del_Producto = (gcnew System::Windows::Forms::ColumnHeader());
			this->codigo_del_producto = (gcnew System::Windows::Forms::ColumnHeader());
			this->fecha_de_salida = (gcnew System::Windows::Forms::ColumnHeader());
			this->Numero_del_cliente = (gcnew System::Windows::Forms::ColumnHeader());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(503, 132);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(224, 20);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Numero de telefono del cliente";
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::Silver;
			this->textBox4->Location = System::Drawing::Point(733, 122);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(276, 30);
			this->textBox4->TabIndex = 14;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(42, 125);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(116, 20);
			this->label3->TabIndex = 13;
			this->label3->Text = L"fecha de salida";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(539, 73);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(148, 20);
			this->label2->TabIndex = 11;
			this->label2->Text = L"codigo del producto";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(27, 73);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(155, 20);
			this->label1->TabIndex = 10;
			this->label1->Text = L"nombre del producto";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::Silver;
			this->textBox2->Location = System::Drawing::Point(693, 63);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(276, 30);
			this->textBox2->TabIndex = 9;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Silver;
			this->textBox1->Location = System::Drawing::Point(203, 63);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(276, 30);
			this->textBox1->TabIndex = 8;
			// 
			// button1
			// 
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(320, 243);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 42);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Guardar";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(533, 228);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(112, 42);
			this->button2->TabIndex = 17;
			this->button2->Text = L"consultar";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {
				this->Nombre_del_Producto,
					this->codigo_del_producto, this->fecha_de_salida, this->Numero_del_cliente
			});
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(12, 318);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(1097, 283);
			this->listView1->TabIndex = 18;
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
			this->fecha_de_salida->Width = 196;
			// 
			// Numero_del_cliente
			// 
			this->Numero_del_cliente->Text = L"Numero del cliente";
			this->Numero_del_cliente->Width = 202;
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::Teal;
			this->label5->Location = System::Drawing::Point(-7, -12);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(1123, 61);
			this->label5->TabIndex = 19;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::Silver;
			this->textBox3->Location = System::Drawing::Point(183, 122);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(276, 30);
			this->textBox3->TabIndex = 12;
			// 
			// formsalida
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(1111, 643);
			this->Controls->Add(this->label5);
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
			this->Name = L"formsalida";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"formsalida";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
