/*
!  file main_screen.c generated from main.idc at Tue Jul 26 16:57:41 1994
!  by translator IDCC, version 1.65
*/
#define _idc_source
#define _idcc_version 1.65
#define PC
#ifndef PC
@_sysattr: equ $8001
@_sysedit: equ   65
#endif
#include <time.h>

//#include "idcio.h"
#include "duc1.h"
void welcome()
{
//  display("Fastbr\004nslelinje 1 %5.2f MW,DUC1 AS20\n", dm->FP1_effekt);
  display("Fastbr\004nslelinje 1 %5.2f MW,DUC1 AS20x\n", dm->FP1_effekt);
  display("%s IVT Control", xxxswdctime(0));
  dm->level = 2;
}
void digitala_1()
{
  display("Kortplats 7 digtala in 987654321\n");
  display("                       %0.9a", dm->Kort_7);
}
void digitala_2()
{
  int visa_dq;
  visa_dq = dm->Dq8_1 + dm->Dq8_2 * 2 + dm->Dq8_3 * 4 + dm->Dq8_4 * 8 + dm->Dq8_5 * 16 + dm->Dq8_6 * 32 + dm->Dq8_7 * 64 + dm->Dq8_8 * 128;
  display("Kortplats 8 digtala ut 87654321\n");
  display("                       %0.8a", visa_dq);
}
void Pass()
{
  dm->level3 = dm->level_jour;
  dm->level4 = dm->level_drift;
  password();
  dm->level_nu = dm->level;
}
void Pass_1()
{
  if (dm->level_nu == 3)
    {
      dm->level = 2;
    }
  dm->level_jour = enter("\016ndra l\024senord Jour %D", dm->level_jour);
}
void Pass_2()
{
  if (dm->level_nu == 3)
    {
      dm->level = 2;
    }
  dm->level_drift = enter("\016ndra l\024senord Drift %D", dm->level_drift);
}
void FP1_temp()
{
  display("Temperaturvisning");
}
void FP1_temp_1()
{
  display("W51GT101A Framtemp  panna =%5.1f\017C\n", dm->W51GT101A);
  display("W51GT101B Returtemp panna =%5.1f\017C", dm->W51GT101B);
}
void FP1_temp_2()
{
  display("W36GT101A Framtemp  RGK =%5.1f\017C\n", dm->W36GT101A);
  display("W36GT101B Returtemp RGK =%5.1f\017C", dm->W36GT101B);
}
void FP1_temp_3()
{
  display("W51GT108 Retur roster-VVX    =%5.1f\017C\n", dm->W51GT108);
  display("W51GT109 Framtemp roster-VVX =%5.1f\017C", dm->W51GT109);
}
void FP1_temp_4()
{
  display("W51GT105 Inloppstemp panna =%5.1f\017C\n", dm->W51GT105);
  display(" Utetemp =%5.1f\017C", dm->utetemp);
}
void FP1_temp_5()
{
  display("W52GT101 Retur rosterkylning =%5.1f\017C\n", dm->W52GT101);
  display("W52GT102 Framtemp rosterkyln =%5.1f\017C", dm->W52GT102);
}
void FP1_tryck()
{
  display("Tryck, effekt och fl\024de");
}
void FP1_tryck_1()
{
  display("W51GF101 Pannfl\024de  =%5.1f m3/s\n", dm->W51GF101);
  display("W51GE101 Panneffekt =%5.2f MW", dm->W51GE101);
}
void FP1_tryck_2()
{
  display("W36GF101 RGK fl\024de  =%5.1f m3/s\n", dm->W36GF101);
  display("W36GE101 RGK effekt =%5.2f MW", dm->W36GE101);
}
void FP1_tryck_3()
{
  display("W52GP101 Tryck rosterkyln. =%5.2f bar\n", dm->W52GP101);
  display("W51GP103 Tryck Panna =%5.2f bar", dm->W51GP103);
}
void FP1_regl()
{
  display("Sekvens");
}
void FP1_regl_sekv()
{
  if (dm->FP1_auto)
    {
      if (dm->FP1_ned)
        {
          display("DRIFTSTATUS: nedeldning  \n");
        }
      else 
        {
          display("DRIFTSTATUS: i drift \n");
        }
    }
  else 
    {
      if (dm->FP1_ned)
        {
          display("DRIFTSTATUS: nedeldning  \n");
        }
      else 
        {
          display("DRIFTSTATUS:avst\004lld      \n");
        }
    }
  display("W51GE101=%5.1fMW, W36GE101=%5.1fMW", dm->W51GE101, dm->W36GE101);
}
void FB1_forbr()
{
  display("Energiproduktion");
}
void FB1_forbr_1()
{
  dm->W51GW101_visa = enter("M\004tarst\004llning  = %6.3f MW\nEnergi panna", dm->W51GW101_visa);
}
void FB1_forbr_1_1()
{
  dm->W51GW101_skal = enter("V\004rdet av en puls = %5.3f MW\nfr\006n panna", dm->W51GW101_skal);
}
void FB1_forbr_2()
{
  dm->W36GW101_visa = enter("M\004tarst\004llning  = %6.3f MW\nfr\006n RGK", dm->W36GW101_visa);
}
void FB1_forbr_2_1()
{
  dm->W36GW101_skal = enter("V\004rdet av en puls = %5.3f MW\nfr\006n RGK", dm->W36GW101_skal);
}
void hand()
{
  display("Handman\024vering");
}
void hand_1()
{
  if (dm->W51SV101_hand == 0)
    dm->W51SV101_hand = enter("Ventil W51SV101 : Manuell%D %3.0f %%\n(0 = Manuell,1 = Auto)", dm->W51SV101_hand, dm->W51SV101_man);
  else 
    dm->W51SV101_hand = enter("Ventil W51SV101 : Auto   %D %3.0f %%\n(0 = Manuell,1 = Auto)", dm->W51SV101_hand, dm->W51SV101);
}
void hand_1_1()
{
  if (dm->W51SV101_hand == 0)
    {
      dm->W51SV101_man = enter("Ventil W51SV101 i %%= %4.1f %%", dm->W51SV101_man);
    }
  else 
    display("Ventil st\006r inte i Manuell.");
}
void hand_2()
{
  switch(dm->W36AV101_hand)
  {
    case 0:
    dm->W36AV101_hand = enter("Ventil W36AV101 : stillast\006ende \n%d=Stillast\006ende,1=Minska,2=ka,3=Auto", dm->W36AV101_hand);
    break;
    case 1:
    dm->W36AV101_hand = enter("Ventil W36AV101 : Minska \n0=Stillast\006ende,%d=Minska,2=ka,3=Auto", dm->W36AV101_hand);
    break;
    case 2:
    dm->W36AV101_hand = enter("Ventil W36AV101 : ka \n0=Stillast\006ende,1=Minska,%d=ka,3=Auto", dm->W36AV101_hand);
    break;
    case 3:
    dm->W36AV101_hand = enter("Ventil W36AV101 : Auto \n0=Stillast\006ende,1=Minska,2=ka,%d=Auto", dm->W36AV101_hand);
    break;
  }
}
void hand_3()
{
  if (dm->FP1_drifttill_hand == 0)
    dm->FP1_drifttill_hand = enter("FP1 drifttill : Fr\006n%D\n(0 = Fr\006n,1 = Till,2 = Auto)", dm->FP1_drifttill_hand);
  else 
    if (dm->FP1_drifttill_hand == 1)
      dm->FP1_drifttill_hand = enter("FP1 drifttill : Till%D\n(0 = Fr\006n,1 = Till,2 = Auto)", dm->FP1_drifttill_hand);
    else 
      {
        if (dm->FP1_drifttill_Auto)
          dm->FP1_drifttill_hand = enter("FP1 drifttill : Auto%D / Till\n(0 = Fr\006n,1 = Till,2 = Auto)", dm->FP1_drifttill_hand);
        else 
          dm->FP1_drifttill_hand = enter("FP1 drifttill : Auto%D / Fr\006n\n(0 = Fr\006n,1 = Till,2 = Auto)", dm->FP1_drifttill_hand);
      }
}
void hand_4()
{
  if (dm->FP1_till_hand == 0)
    dm->FP1_till_hand = enter("FP1 drift : Fr\006n%D\n(0 = Fr\006n,1 = Till,2 = Auto)", dm->FP1_till_hand);
  else 
    if (dm->FP1_till_hand == 1)
      dm->FP1_till_hand = enter("FP1 drift : Till%D\n(0 = Fr\006n,1 = Till,2 = Auto)", dm->FP1_till_hand);
    else 
      {
        if (dm->FP1_till_Auto)
          dm->FP1_till_hand = enter("FP1 drift : Auto%D / Till\n(0 = Fr\006n,1 = Till,2 = Auto)", dm->FP1_till_hand);
        else 
          dm->FP1_till_hand = enter("FP1 drift : Auto%D / Fr\006n\n(0 = Fr\006n,1 = Till,2 = Auto)", dm->FP1_till_hand);
      }
}
void datumtid()
{
  display("St\004ll Datum och Tid ");
}
void stalltid()
{
  set_time();
}
void Pilar()
{
  display("Pilarna i h\024gerkanten visar \006t\n");
  display("vilka h\006ll man kan g\006");
}
void Temp()
{
  display("Vid givarfel l\006ses senaste rimliga\n");
  display("temperatur");
}
void tryck()
{
  display("Vid givarfel l\006ses senaste rimliga\n");
  display("v\004rde");
}
void Status()
{
  display("H\004r visas vilket driftl\004ge\n");
  display("aggregatet befinner sig i just nu.");
}
void Andra()
{
  display("F\024rst visade v\004rdet kan \004ndras   \n");
  display("Tryck \016ndra och avsluta med Enter");
}
void Klocka()
{
  display("Duc 0 ( Master ) st\004ller alla klockor\n");
  display("i anl\004ggningen");
}
void Digitalpilar()
{
  display("Pil upp -  aktiv\n");
  display("Pil ner -  ej aktiv");
}
void Losen()
{
  display("L\024senord kr\004vs f\024r att kunna \004ndra\n");
  display("L\024senord kr\004vs ej f\024r att avl\004sa");
}
typedef void (*PFI)();
struct {
  short left, right, up, down, help;
  PFI fcn;
  char *name;
} screens[] = {
    /*left	right	up	down	help	fcn	name*/
    { 0,	0,	0,	0,	-1,	Andra,	"Andra"},	/*1*/
    { 0,	0,	0,	0,	-1,	Digitalpilar,	"Digitalpilar"},	/*2*/
    { 0,	4,	8,	31,	25,	FB1_forbr,	"FB1_forbr"},	/*3*/
    { 3,	5,	0,	6,	1,	FB1_forbr_1,	"FB1_forbr_1"},	/*4*/
    { 4,	0,	0,	0,	1,	FB1_forbr_1_1,	"FB1_forbr_1_1"},	/*5*/
    { 0,	7,	4,	0,	1,	FB1_forbr_2,	"FB1_forbr_2"},	/*6*/
    { 6,	0,	0,	0,	1,	FB1_forbr_2_1,	"FB1_forbr_2_1"},	/*7*/
    { 0,	9,	16,	3,	25,	FP1_regl,	"FP1_regl"},	/*8*/
    { 8,	0,	0,	0,	26,	FP1_regl_sekv,	"FP1_regl_sekv"},	/*9*/
    { 0,	11,	22,	16,	25,	FP1_temp,	"FP1_temp"},	/*10*/
    { 10,	0,	0,	12,	27,	FP1_temp_1,	"FP1_temp_1"},	/*11*/
    { 0,	0,	11,	13,	27,	FP1_temp_2,	"FP1_temp_2"},	/*12*/
    { 0,	0,	12,	14,	27,	FP1_temp_3,	"FP1_temp_3"},	/*13*/
    { 0,	0,	13,	15,	27,	FP1_temp_4,	"FP1_temp_4"},	/*14*/
    { 0,	0,	14,	0,	27,	FP1_temp_5,	"FP1_temp_5"},	/*15*/
    { 0,	17,	10,	8,	25,	FP1_tryck,	"FP1_tryck"},	/*16*/
    { 16,	0,	0,	18,	38,	FP1_tryck_1,	"FP1_tryck_1"},	/*17*/
    { 0,	0,	17,	19,	38,	FP1_tryck_2,	"FP1_tryck_2"},	/*18*/
    { 0,	0,	18,	0,	38,	FP1_tryck_3,	"FP1_tryck_3"},	/*19*/
    { 0,	0,	0,	0,	-1,	Klocka,	"Klocka"},	/*20*/
    { 0,	0,	0,	0,	-1,	Losen,	"Losen"},	/*21*/
    { 0,	23,	39,	10,	21,	Pass,	"Pass"},	/*22*/
    { 22,	0,	0,	24,	1,	Pass_1,	"Pass_1"},	/*23*/
    { 0,	0,	23,	0,	1,	Pass_2,	"Pass_2"},	/*24*/
    { 0,	0,	0,	0,	-1,	Pilar,	"Pilar"},	/*25*/
    { 0,	0,	0,	0,	-1,	Status,	"Status"},	/*26*/
    { 0,	0,	0,	0,	-1,	Temp,	"Temp"},	/*27*/
    { 0,	37,	31,	0,	25,	datumtid,	"datumtid"},	/*28*/
    { 39,	0,	0,	30,	2,	digitala_1,	"digitala_1"},	/*29*/
    { 0,	0,	29,	0,	2,	digitala_2,	"digitala_2"},	/*30*/
    { 0,	32,	3,	28,	25,	hand,	"hand"},	/*31*/
    { 31,	33,	0,	34,	1,	hand_1,	"hand_1"},	/*32*/
    { 32,	0,	0,	0,	1,	hand_1_1,	"hand_1_1"},	/*33*/
    { 0,	0,	32,	35,	1,	hand_2,	"hand_2"},	/*34*/
    { 0,	0,	34,	36,	1,	hand_3,	"hand_3"},	/*35*/
    { 0,	0,	35,	0,	1,	hand_4,	"hand_4"},	/*36*/
    { 28,	0,	0,	0,	20,	stalltid,	"stalltid"},	/*37*/
    { 0,	0,	0,	0,	-1,	tryck,	"tryck"},	/*38*/
    { 0,	29,	0,	22,	25,	welcome,	"welcome"},	/*39*/
    { 0, 0, 0, 0, 0, 0}
};
int _ROOT_SCREEN_POINTER = 39;
