#ifndef Unit2H
#define Unit2H

#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>

// Клас форми
class TForm2 : public TForm
{
__published:    // IDE-управляється
    TButton *Button1; // Кнопка на формі
    void __fastcall Button1Click(TObject *Sender); // Обробник кліку кнопки

public:        // Користувацька секція
	__fastcall TForm2(TComponent* Owner);
};

extern PACKAGE TForm2 *Form2;

#endif

