//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "MainForm.h"
#include "LoginForm.h"
#include "RegistrationForm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"

TMyMainForm *MyMainForm;
//---------------------------------------------------------------------------
__fastcall TMyMainForm::TMyMainForm(TComponent* Owner)
	: TForm(Owner){}
//---------------------------------------------------------------------------
void __fastcall TMyMainForm::loginNavButtonClick(TObject *Sender)
{
	MyLoginForm->Show();
	MyMainForm->Hide();
	}
//---------------------------------------------------------------------------
void __fastcall TMyMainForm::registrationNavButtonClick(TObject *Sender)
{
	MyRegistrationForm->Show();
	MyMainForm->Hide();
}
//---------------------------------------------------------------------------

