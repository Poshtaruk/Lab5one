#pragma once

namespace Lab5one {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ���ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;

	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip2;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem1;



	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem2;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem3;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->contextMenuStrip2 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->��������ToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->��������ToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip2->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->contextMenuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ContextMenuStrip = this->contextMenuStrip2;
			this->label1->Location = System::Drawing::Point(196, 237);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(57, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"�����";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// contextMenuStrip2
			// 
			this->contextMenuStrip2->ImageScalingSize = System::Drawing::Size(24, 24);
			this->contextMenuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->��������ToolStripMenuItem2,
					this->�������ToolStripMenuItem2, this->����ToolStripMenuItem2
			});
			this->contextMenuStrip2->Name = L"contextMenuStrip2";
			this->contextMenuStrip2->Size = System::Drawing::Size(168, 100);
			// 
			// ��������ToolStripMenuItem2
			// 
			this->��������ToolStripMenuItem2->Name = L"��������ToolStripMenuItem2";
			this->��������ToolStripMenuItem2->Size = System::Drawing::Size(167, 32);
			this->��������ToolStripMenuItem2->Text = L"��������";
			this->��������ToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::��������ToolStripMenuItem2_Click);
			// 
			// �������ToolStripMenuItem2
			// 
			this->�������ToolStripMenuItem2->Name = L"�������ToolStripMenuItem2";
			this->�������ToolStripMenuItem2->Size = System::Drawing::Size(167, 32);
			this->�������ToolStripMenuItem2->Text = L"�������";
			this->�������ToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::�������ToolStripMenuItem2_Click);
			// 
			// ����ToolStripMenuItem2
			// 
			this->����ToolStripMenuItem2->Name = L"����ToolStripMenuItem2";
			this->����ToolStripMenuItem2->Size = System::Drawing::Size(167, 32);
			this->����ToolStripMenuItem2->Text = L"����";
			this->����ToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::����ToolStripMenuItem2_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->����ToolStripMenuItem,
					this->�����ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(483, 36);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->���ToolStripMenuItem,
					this->�����ToolStripMenuItem
			});
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(73, 32);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// ���ToolStripMenuItem
			// 
			this->���ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->��������ToolStripMenuItem,
					this->�������ToolStripMenuItem, this->����ToolStripMenuItem
			});
			this->���ToolStripMenuItem->Name = L"���ToolStripMenuItem";
			this->���ToolStripMenuItem->Size = System::Drawing::Size(154, 34);
			this->���ToolStripMenuItem->Text = L"���";
			this->���ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::���ToolStripMenuItem_Click);
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(195, 34);
			this->��������ToolStripMenuItem->Text = L"��������";
			this->��������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::��������ToolStripMenuItem_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(195, 34);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�������ToolStripMenuItem_Click);
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(195, 34);
			this->����ToolStripMenuItem->Text = L"����";
			this->����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::����ToolStripMenuItem_Click);
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->��������ToolStripMenuItem1,
					this->�������ToolStripMenuItem1, this->����ToolStripMenuItem1
			});
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(154, 34);
			this->�����ToolStripMenuItem->Text = L"�����";
			// 
			// ��������ToolStripMenuItem1
			// 
			this->��������ToolStripMenuItem1->Name = L"��������ToolStripMenuItem1";
			this->��������ToolStripMenuItem1->Size = System::Drawing::Size(195, 34);
			this->��������ToolStripMenuItem1->Text = L"��������";
			this->��������ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::��������ToolStripMenuItem1_Click);
			// 
			// �������ToolStripMenuItem1
			// 
			this->�������ToolStripMenuItem1->Name = L"�������ToolStripMenuItem1";
			this->�������ToolStripMenuItem1->Size = System::Drawing::Size(195, 34);
			this->�������ToolStripMenuItem1->Text = L"�������";
			this->�������ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::�������ToolStripMenuItem1_Click);
			// 
			// ����ToolStripMenuItem1
			// 
			this->����ToolStripMenuItem1->Name = L"����ToolStripMenuItem1";
			this->����ToolStripMenuItem1->Size = System::Drawing::Size(195, 34);
			this->����ToolStripMenuItem1->Text = L"����";
			this->����ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::����ToolStripMenuItem1_Click);
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(70, 32);
			this->�����ToolStripMenuItem->Text = L"�����";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�����ToolStripMenuItem_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->��������ToolStripMenuItem3,
					this->�������ToolStripMenuItem3, this->����ToolStripMenuItem3
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(168, 100);
			// 
			// ��������ToolStripMenuItem3
			// 
			this->��������ToolStripMenuItem3->Name = L"��������ToolStripMenuItem3";
			this->��������ToolStripMenuItem3->Size = System::Drawing::Size(167, 32);
			this->��������ToolStripMenuItem3->Text = L"��������";
			this->��������ToolStripMenuItem3->Click += gcnew System::EventHandler(this, &MyForm::��������ToolStripMenuItem3_Click);
			// 
			// �������ToolStripMenuItem3
			// 
			this->�������ToolStripMenuItem3->Name = L"�������ToolStripMenuItem3";
			this->�������ToolStripMenuItem3->Size = System::Drawing::Size(167, 32);
			this->�������ToolStripMenuItem3->Text = L"������� ";
			this->�������ToolStripMenuItem3->Click += gcnew System::EventHandler(this, &MyForm::�������ToolStripMenuItem3_Click);
			// 
			// ����ToolStripMenuItem3
			// 
			this->����ToolStripMenuItem3->Name = L"����ToolStripMenuItem3";
			this->����ToolStripMenuItem3->Size = System::Drawing::Size(167, 32);
			this->����ToolStripMenuItem3->Text = L"����";
			this->����ToolStripMenuItem3->Click += gcnew System::EventHandler(this, &MyForm::����ToolStripMenuItem3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(483, 500);
			this->ContextMenuStrip = this->contextMenuStrip1;
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->contextMenuStrip2->ResumeLayout(false);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->contextMenuStrip1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ���ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void ��������ToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->ForeColor = Color::Red;
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void �������ToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->ForeColor = Color::Green;

}
private: System::Void ����ToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->ForeColor = Color::Blue;

}
private: System::Void ��������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	BackColor = Color::Red;
}
private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	BackColor = Color::Green;
}
private: System::Void ����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	BackColor = Color::Blue;
}
private: System::Void �����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void toolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ��������ToolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
	BackColor = Color::Red;
}
private: System::Void �������ToolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
	BackColor = Color::Green;
}
private: System::Void ����ToolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
	BackColor = Color::Blue;
}
private: System::Void ��������ToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->ForeColor = Color::Red;
}
private: System::Void �������ToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->ForeColor = Color::Green;
}
private: System::Void ����ToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->ForeColor = Color::Blue;
}
};
}
