/*
!  file Main_screen.c generated from Main.idc at Thu Oct 14 19:36:23 1993
!  by translator IDCC, version 1.60
*/
#define _idc_source
#define _idcc_version 1.60
#define PC
#ifndef PC
@_sysattr: equ $8001
@_sysedit: equ   60
#endif
#include <time.h>

//#include "idcio.h"
#include "duc0.h"
void welcome()
{
  display("Hufvudstaden KV Oxhuvudet DUC 1:1\n");
  display("     %s", xxxswdctime(0));
  dm->level = 1;
  dm->Port_kod_ok = 1;		// 0;
}
void rulle1()
{
  password();
  dm->Port_kod_ok = 0;
}
void rulle2()
{
  display("Elenergi");
  dm->Port_kod_ok = 0;
}
void rulle2_1()
{
  display("Elenergi EL1-MQ21 (fastighetsel)");
}
void rulle2_1_1()
{
  dm->Som_Hog_energi_MQ21 = enter("H\024glast sommar MQ21 : %7.2f kWh", dm->Som_Hog_energi_MQ21);
}
void rulle2_1_2()
{
  dm->Som_Log_energi_MQ21 = enter("L\006glast sommar MQ21 : %7.2f kWh", dm->Som_Log_energi_MQ21);
}
void rulle2_1_3()
{
  dm->Vin_Hog_energi_MQ21 = enter("H\024glast vinter MQ21 : %7.2f kWh", dm->Vin_Hog_energi_MQ21);
}
void rulle2_1_4()
{
  dm->Vin_Log_energi_MQ21 = enter("L\006glast vinter MQ21 : %7.2f kWh", dm->Vin_Log_energi_MQ21);
}
void rulle2_1_1_1()
{
  dm->energiskal_MQ21 = enter("Elenergi MQ21 : %7.2f pulser/kWh\nPulsv\004rdes inst\004llning", dm->energiskal_MQ21);
}
void rulle2_2()
{
  display("Elenergi EL1-MQ22 (fastighetsel)");
}
void rulle2_2_1()
{
  dm->Som_Hog_energi_MQ22 = enter("H\024glast sommar MQ22 : %7.2f kWh", dm->Som_Hog_energi_MQ22);
}
void rulle2_2_2()
{
  dm->Som_Log_energi_MQ22 = enter("L\006glast sommar MQ22 : %7.2f kWh", dm->Som_Log_energi_MQ22);
}
void rulle2_2_3()
{
  dm->Vin_Hog_energi_MQ22 = enter("H\024glast vinter MQ22 : %7.2f kWh", dm->Vin_Hog_energi_MQ22);
}
void rulle2_2_4()
{
  dm->Vin_Log_energi_MQ22 = enter("L\006glast vinter MQ22 : %7.2f kWh", dm->Vin_Log_energi_MQ22);
}
void rulle2_2_1_1()
{
  dm->energiskal_MQ22 = enter("Elenergi MQ22 : %7.2f pulser/kWh\nPulsv\004rdes inst\004llning", dm->energiskal_MQ22);
}
void rulle2_3()
{
  display("Elenergi EL1-MQ23 (fastighetsel)");
}
void rulle2_3_1()
{
  dm->Som_Hog_energi_MQ23 = enter("H\024glast sommar MQ23 : %7.2f kWh", dm->Som_Hog_energi_MQ23);
}
void rulle2_3_2()
{
  dm->Som_Log_energi_MQ23 = enter("L\006glast sommar MQ23 : %7.2f kWh", dm->Som_Log_energi_MQ23);
}
void rulle2_3_3()
{
  dm->Vin_Hog_energi_MQ23 = enter("H\024glast vinter MQ23 : %7.2f kWh", dm->Vin_Hog_energi_MQ23);
}
void rulle2_3_4()
{
  dm->Vin_Log_energi_MQ23 = enter("L\006glast vinter MQ23 : %7.2f kWh", dm->Vin_Log_energi_MQ23);
}
void rulle2_3_1_1()
{
  dm->energiskal_MQ23 = enter("Elenergi MQ23 : %7.2f pulser/kWh\nPulsv\004rdes inst\004llning", dm->energiskal_MQ23);
}
void rulle3_1()
{
  display("Elenergi KM1-MQ11");
}
void rulle3_1_1()
{
  dm->Som_Hog_e_KM1_MQ11 = enter("H\024glast sommar MQ11 : %7.2f kWh", dm->Som_Hog_e_KM1_MQ11);
}
void rulle3_1_2()
{
  dm->Som_Log_e_KM1_MQ11 = enter("L\006glast sommar MQ11 : %7.2f kWh", dm->Som_Log_e_KM1_MQ11);
}
void rulle3_1_3()
{
  dm->Vin_Hog_e_KM1_MQ11 = enter("H\024glast vinter MQ11 : %7.2f kWh", dm->Vin_Hog_e_KM1_MQ11);
}
void rulle3_1_4()
{
  dm->Vin_Log_e_KM1_MQ11 = enter("L\006glast vinter MQ11 : %7.2f kWh", dm->Vin_Log_e_KM1_MQ11);
}
void rulle3_1_1_1()
{
  dm->energiskal_KM1_MQ11 = enter("Elenergi MQ11 : %7.2f pulser/kWh\nPulsv\004rdes inst\004llning", dm->energiskal_KM1_MQ11);
}
void rulle3_2()
{
  display("Elenergi KM1-MQ12");
}
void rulle3_2_1()
{
  dm->Som_Hog_e_KM1_MQ12 = enter("H\024glast sommar MQ12 : %7.2f kWh", dm->Som_Hog_e_KM1_MQ12);
}
void rulle3_2_2()
{
  dm->Som_Log_e_KM1_MQ12 = enter("L\006glast sommar MQ12 : %7.2f kWh", dm->Som_Log_e_KM1_MQ12);
}
void rulle3_2_3()
{
  dm->Vin_Hog_e_KM1_MQ12 = enter("H\024glast vinter MQ12 : %7.2f kWh", dm->Vin_Hog_e_KM1_MQ12);
}
void rulle3_2_4()
{
  dm->Vin_Log_e_KM1_MQ12 = enter("L\006glast vinter MQ12 : %7.2f kWh", dm->Vin_Log_e_KM1_MQ12);
}
void rulle3_2_1_1()
{
  dm->energiskal_KM1_MQ12 = enter("Elenergi MQ12 : %7.2f pulser/kWh\nPulsv\004rdes inst\004llning", dm->energiskal_KM1_MQ12);
}
void rulle3_3()
{
  display("Tids inst\004llningar");
}
void rulle3_3_1()
{
  double tillf;
  tillf = dm->Vin_Mon_fran;
  tillf = enter("Vinterlast b\024rjar m\006nad : %2.0f ", tillf);
  dm->Vin_Mon_fran = tillf;
}
void rulle3_3_2()
{
  double tillf;
  tillf = dm->Vin_Mon_till;
  tillf = enter("Vinterlast slutar m\006nad : %2.0f", tillf);
  dm->Vin_Mon_till = tillf;
}
void rulle3_3_3()
{
  double tillf;
  tillf = dm->Vin_Dag_fran;
  tillf = enter("Vinterlast b\024rjar dag : %2.0f ", tillf);
  dm->Vin_Dag_fran = tillf;
}
void rulle3_3_4()
{
  double tillf;
  tillf = dm->Vin_Dag_till;
  tillf = enter("Vinterlast slutar dag : %2.0f ", tillf);
  dm->Vin_Dag_till = tillf;
}
void rulle3_3_5()
{
  double tillf;
  tillf = dm->Hoglast_Tim_till;
  tillf = enter("H\024glast b\024rjar timme : %2.0f ", tillf);
  dm->Hoglast_Tim_till = tillf;
}
void rulle3_3_6()
{
  double tillf;
  tillf = dm->Hoglast_Tim_fran;
  tillf = enter("H\024glast slutar timme : %2.0f ", tillf);
  dm->Hoglast_Tim_fran = tillf;
}
void rulle4()
{
  display("Hissar Hi1-Hi8");
  dm->Port_kod_ok = 0;
}
void rulle4_1()
{
  display("Larmf\024rdr\024jningar");
}
void rulle4_1_1()
{
  double delay1;
  delay1 = dm->larmmin1;
  delay1 = enter("Summalarm hiss 1 : %5.0f min", delay1);
  dm->larmmin1 = delay1;
}
void rulle4_1_2()
{
  double delay2;
  delay2 = dm->larmmin2;
  delay2 = enter("Summalarm hiss 2 : %5.0f min", delay2);
  dm->larmmin2 = delay2;
}
void rulle4_1_3()
{
  double delay3;
  delay3 = dm->larmmin3;
  delay3 = enter("Summalarm hiss 3 : %5.0f min", delay3);
  dm->larmmin3 = delay3;
}
void rulle4_1_4()
{
  double delay4;
  delay4 = dm->larmmin4;
  delay4 = enter("Summalarm hiss 4 : %5.0f min", delay4);
  dm->larmmin4 = delay4;
}
void rulle4_1_5()
{
  double delay5;
  delay5 = dm->larmmin5;
  delay5 = enter("Summalarm hiss 5 : %5.0f min", delay5);
  dm->larmmin5 = delay5;
}
void rulle4_1_6()
{
  double delay6;
  delay6 = dm->larmmin6;
  delay6 = enter("Summalarm hiss 6 : %5.0f min", delay6);
  dm->larmmin6 = delay6;
}
void rulle4_1_7()
{
  double delay7;
  delay7 = dm->larmmin7;
  delay7 = enter("Summalarm hiss 7 : %5.0f min", delay7);
  dm->larmmin7 = delay7;
}
void rulle4_1_8()
{
  double delay8;
  delay8 = dm->larmmin8;
  delay8 = enter("Summalarm hiss 8 : %5.0f min", delay8);
  dm->larmmin8 = delay8;
}
void rulle5()
{
  display("Tidkanaler");
  dm->Port_kod_ok = 0;
}
void rulle5_1()
{
  display("Trappbelysning");
}
void rulle5_1_1()
{
  display("   - start p\006 kalendern -");
}
void rulle5_1_1_1()
{
  enter_calendar(&dm->kalender_Belysning);
}
void rulle5_2()
{
  display("Tidkanal 1");
}
void rulle5_2_1()
{
  display("   - start p\006 kalendern -");
}
void rulle5_2_1_1()
{
  enter_calendar(&dm->Tid1_Kalender);
}
void rulle5_3()
{
  display("Tidkanal 2");
}
void rulle5_3_1()
{
  display("   - start p\006 kalendern -");
}
void rulle5_3_1_1()
{
  enter_calendar(&dm->Tid2_Kalender);
}
void rulle5_4()
{
  display("Tidkanal 3");
}
void rulle5_4_1()
{
  display("   - start p\006 kalendern -");
}
void rulle5_4_1_1()
{
  enter_calendar(&dm->Tid3_Kalender);
}
void rulle5_5()
{
  display("Tidkanal 4");
}
void rulle5_5_1()
{
  display("   - start p\006 kalendern -");
}
void rulle5_5_1_1()
{
  enter_calendar(&dm->Tid4_Kalender);
}
void rulle5_6()
{
  display("Manuellstyrning ");
}
void rulle5_6_1()
{
  double Man;
  Man = dm->Man_Belysning;
  if (dm->Man_Belysning == 0)
    Man = enter("Tidkanal Belysning : Fr\006n\n(%g = Fr\006n,1 = Till,2 = Auto)", Man);
  else 
    if (dm->Man_Belysning == 1)
      Man = enter("Tidkanal Belysning : Till\n(0 = Fr\006n,%g = Till,2 = Auto)", Man);
    else 
      Man = enter("Tidkanal Belysning : Auto\n(0 = Fr\006n,1 = Till,%g = Auto)", Man);
  dm->Man_Belysning = Man;
}
void rulle5_6_2()
{
  if (dm->Tid1_hand == 0)
    dm->Tid1_hand = enter("Tidkanal 1: Fr\006n\n(%D0 = Fr\006n,1 = Till,2 = Auto)", dm->Tid1_hand);
  else 
    if (dm->Tid1_hand == 1)
      dm->Tid1_hand = enter("Tidkanal 1: Till\n(%D0 = Fr\006n,1 = Till,2 = Auto)", dm->Tid1_hand);
    else 
      dm->Tid1_hand = enter("Tidkanal 1: Auto\n(%D0 = Fr\006n,1 = Till,2 = Auto)", dm->Tid1_hand);
}
void rulle5_6_3()
{
  if (dm->Tid2_hand == 0)
    dm->Tid2_hand = enter("Tidkanal 2: Fr\006n\n(%D0 = Fr\006n,1 = Till,2 = Auto)", dm->Tid2_hand);
  else 
    if (dm->Tid2_hand == 1)
      dm->Tid2_hand = enter("Tidkanal 2: Till\n(%D0 = Fr\006n,1 = Till,2 = Auto)", dm->Tid2_hand);
    else 
      dm->Tid2_hand = enter("Tidkanal 2: Auto\n(%D0 = Fr\006n,1 = Till,2 = Auto)", dm->Tid2_hand);
}
void rulle5_6_4()
{
  if (dm->Tid3_hand == 0)
    dm->Tid3_hand = enter("Tidkanal 3: Fr\006n\n(%D0 = Fr\006n,1 = Till,2 = Auto)", dm->Tid3_hand);
  else 
    if (dm->Tid3_hand == 1)
      dm->Tid3_hand = enter("Tidkanal 3: Till\n(%D0 = Fr\006n,1 = Till,2 = Auto)", dm->Tid3_hand);
    else 
      dm->Tid3_hand = enter("Tidkanal 3: Auto\n(%D0 = Fr\006n,1 = Till,2 = Auto)", dm->Tid3_hand);
}
void rulle5_6_5()
{
  if (dm->Tid4_hand == 0)
    dm->Tid4_hand = enter("Tidkanal 4: Fr\006n\n(%D0 = Fr\006n,1 = Till,2 = Auto)", dm->Tid4_hand);
  else 
    if (dm->Tid4_hand == 1)
      dm->Tid4_hand = enter("Tidkanal 4: Till\n(%D0 = Fr\006n,1 = Till,2 = Auto)", dm->Tid4_hand);
    else 
      dm->Tid4_hand = enter("Tidkanal 4: Auto\n(%D0 = Fr\006n,1 = Till,2 = Auto)", dm->Tid4_hand);
}
void rulle6()
{
  display("Portkoder");
  dm->Port_kod_ok = 1;         // 0;
}
void rulle6__1()
{
  int Level;
  int Level1;
  int Level2;
  int Level3;
  int Level4;
  int Level5;
  Level =   0;
    Level1 = 0;
    Level2 = 0;
    Level3 = 0;
    Level4 = 0;
    Level5 = 0;
  Level = dm->level;
  Level1 = dm->level1;
  Level2 = dm->level2;
  Level3 = dm->level3;
  Level4 = dm->level4;
  Level5 = dm->level5;
  dm->level1 = 98765;
  dm->level2 = 98765;
  dm->level3 = 98765;
  dm->level4 = 98765;
  dm->level5 = dm->Port_kods_kod;
  password();
  if (dm->level == 5)
    dm->Port_kod_ok = 1;
  dm->level = Level;
  dm->level1 = Level1;
  dm->level2 = Level2;
  dm->level3 = Level3;
  dm->level4 = Level4;
  dm->level5 = Level5;
}
void rulle6_1()
{
  if (dm->Port_kod_ok)
    {
      display("Portkoder Sveav\004gen 28/30");
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_1_1()
{
  if (dm->Port_kod_ok)
    {
      display("Postkod");
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_1_1_1()
{
  if (dm->Port_kod_ok)
    {
      display("Aktuellkod \004r : %4d sedan : %6d", dm->Nu_PostKod_Sv28, dm->Nu_Dag_PostKod_Sv28);
    }
  else 
    {
      display("F\024r l\006g beh\024righet");
    }
}
void rulle6_1_1_2()
{
  if (dm->Port_kod_ok)
    {
      enter_calendar(&dm->Cal_PostKod_Sv28);
    }
  else 
    {
      display("F\024r l\006g beh\024righet");
    }
}
void rulle6_1_1_1_1()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_PostKod_Sv28;
      if (dm->Ny_PostKod_Sv28 >= 0)
        {
          Kod = enter("Framtidakod : %4.0f", Kod);
          dm->Ny_PostKod_Sv28 = Kod;
        }
      else 
        {
          dm->Ny_PostKod_Sv28 = enter("Framtidakod : ----%D", dm->Ny_PostKod_Sv28);
        }
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_1_1_1_2()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_Dag_PostKod_Sv28;
      if (dm->Ny_Dag_PostKod_Sv28 >= 0)
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : %6.0f", Kod);
        }
      else 
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : ------%F", Kod);
        }
      dm->Ny_Dag_PostKod_Sv28 = Kod;
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_1_2()
{
  if (dm->Port_kod_ok)
    {
      display("Hyresg\004stkod");
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_1_2_1()
{
  if (dm->Port_kod_ok)
    {
      display("Aktuellkod \004r : %4d sedan : %6d", dm->Nu_HyresKod_Sv28, dm->Nu_Dag_HyresKod_Sv28);
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_1_2_2()
{
  if (dm->Port_kod_ok)
    {
      enter_calendar(&dm->Cal_HyresKod_Sv28);
    }
  else 
    {
      display("F\024r l\006g beh\024righet");
    }
}
void rulle6_1_2_1_1()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_HyresKod_Sv28;
      if (dm->Ny_HyresKod_Sv28 >= 0)
        {
          Kod = enter("Framtidakod : %4.0f", Kod);
          dm->Ny_HyresKod_Sv28 = Kod;
        }
      else 
        {
          dm->Ny_HyresKod_Sv28 = enter("Framtidakod : ----%D", dm->Ny_HyresKod_Sv28);
        }
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_1_2_1_2()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_Dag_HyresKod_Sv28;
      if (dm->Ny_Dag_HyresKod_Sv28 >= 0)
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : %6.0f", Kod);
        }
      else 
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : ------%F", Kod);
        }
      dm->Ny_Dag_HyresKod_Sv28 = Kod;
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_1_3()
{
  if (dm->Port_kod_ok)
    {
      display("Entreprenadkod");
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_1_3_1()
{
  if (dm->Port_kod_ok)
    {
      display("Aktuellkod \004r : %4d sedan : %6d", dm->Nu_EntreKod_Sv28, dm->Nu_Dag_EntreKod_Sv28);
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_1_3_2()
{
  if (dm->Port_kod_ok)
    {
      enter_calendar(&dm->Cal_EntreKod_Sv28);
    }
  else 
    {
      display("F\024r l\006g beh\024righet");
    }
}
void rulle6_1_3_1_1()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_EntreKod_Sv28;
      if (dm->Ny_EntreKod_Sv28 >= 0)
        {
          Kod = enter("Framtidakod : %4.0f", Kod);
          dm->Ny_EntreKod_Sv28 = Kod;
        }
      else 
        {
          dm->Ny_EntreKod_Sv28 = enter("Framtidakod : ----%D", dm->Ny_EntreKod_Sv28);
        }
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_1_3_1_2()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_Dag_EntreKod_Sv28;
      if (dm->Ny_Dag_EntreKod_Sv28 >= 0)
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : %6.0f", Kod);
        }
      else 
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : ------%F", Kod);
        }
      dm->Ny_Dag_EntreKod_Sv28 = Kod;
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_1_4()
{
  if (dm->Port_kod_ok)
    {
      display("Servicekod");
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_1_4_1()
{
  if (dm->Port_kod_ok)
    {
      display("Aktuellkod \004r : %4d sedan : %6d", dm->Nu_ServiceKod_Sv28, dm->Nu_Dag_ServiceKod_Sv28);
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_1_4_2()
{
  if (dm->Port_kod_ok)
    {
      enter_calendar(&dm->Cal_ServiceKod_Sv28);
    }
  else 
    {
      display("F\024r l\006g beh\024righet");
    }
}
void rulle6_1_4_1_1()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_ServiceKod_Sv28;
      if (dm->Ny_ServiceKod_Sv28 >= 0)
        {
          Kod = enter("Framtidakod : %4.0f", Kod);
          dm->Ny_ServiceKod_Sv28 = Kod;
        }
      else 
        {
          dm->Ny_ServiceKod_Sv28 = enter("Framtidakod : ----%D", dm->Ny_ServiceKod_Sv28);
        }
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_1_4_1_2()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_Dag_ServiceKod_Sv28;
      if (dm->Ny_Dag_ServiceKod_Sv28 >= 0)
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : %6.0f", Kod);
        }
      else 
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : ------%F", Kod);
        }
      dm->Ny_Dag_ServiceKod_Sv28 = Kod;
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_1_5()
{
  if (dm->Port_kod_ok)
    {
      display("Extrakod");
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_1_5_1()
{
  if (dm->Port_kod_ok)
    {
      display("Aktuellkod \004r : %4d sedan : %6d", dm->Nu_ExtraKod_Sv28, dm->Nu_Dag_ExtraKod_Sv28);
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_1_5_2()
{
  if (dm->Port_kod_ok)
    {
      enter_calendar(&dm->Cal_ExtraKod_Sv28);
    }
  else 
    {
      display("F\024r l\006g beh\024righet");
    }
}
void rulle6_1_5_1_1()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_ExtraKod_Sv28;
      if (dm->Ny_ExtraKod_Sv28 >= 0)
        {
          Kod = enter("Framtidakod : %4.0f", Kod);
          dm->Ny_ExtraKod_Sv28 = Kod;
        }
      else 
        {
          dm->Ny_ExtraKod_Sv28 = enter("Framtidakod : ----%D", dm->Ny_ExtraKod_Sv28);
        }
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_1_5_1_2()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_Dag_ExtraKod_Sv28;
      if (dm->Ny_Dag_ExtraKod_Sv28 >= 0)
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : %6.0f", Kod);
        }
      else 
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : ------%F", Kod);
        }
      dm->Ny_Dag_ExtraKod_Sv28 = Kod;
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_2()
{
  if (dm->Port_kod_ok)
    {
      display("Portkoder Kungsgatan 32");
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_2_1()
{
  if (dm->Port_kod_ok)
    {
      display("Postkod");
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_2_1_1()
{
  if (dm->Port_kod_ok)
    {
      display("Aktuellkod \004r : %4d sedan : %6d", dm->Nu_PostKod_Kg32, dm->Nu_Dag_PostKod_Kg32);
    }
  else 
    {
      display("F\024r l\006g beh\024righet");
    }
}
void rulle6_2_1_2()
{
  if (dm->Port_kod_ok)
    {
      enter_calendar(&dm->Cal_PostKod_Kg32);
    }
  else 
    {
      display("F\024r l\006g beh\024righet");
    }
}
void rulle6_2_1_1_1()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_PostKod_Kg32;
      if (dm->Ny_PostKod_Kg32 >= 0)
        {
          Kod = enter("Framtidakod : %4.0f", Kod);
          dm->Ny_PostKod_Kg32 = Kod;
        }
      else 
        {
          dm->Ny_PostKod_Kg32 = enter("Framtidakod : ----%D", dm->Ny_PostKod_Kg32);
        }
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_2_1_1_2()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_Dag_PostKod_Kg32;
      if (dm->Ny_Dag_PostKod_Kg32 >= 0)
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : %6.0f", Kod);
        }
      else 
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : ------%F", Kod);
        }
      dm->Ny_Dag_PostKod_Kg32 = Kod;
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_2_2()
{
  if (dm->Port_kod_ok)
    {
      display("Hyresg\004stkod");
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_2_2_1()
{
  if (dm->Port_kod_ok)
    {
      display("Aktuellkod \004r : %4d sedan : %6d", dm->Nu_HyresKod_Kg32, dm->Nu_Dag_HyresKod_Kg32);
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_2_2_2()
{
  if (dm->Port_kod_ok)
    {
      enter_calendar(&dm->Cal_HyresKod_Kg32);
    }
  else 
    {
      display("F\024r l\006g beh\024righet");
    }
}
void rulle6_2_2_1_1()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_HyresKod_Kg32;
      if (dm->Ny_HyresKod_Kg32 >= 0)
        {
          Kod = enter("Framtidakod : %4.0f", Kod);
          dm->Ny_HyresKod_Kg32 = Kod;
        }
      else 
        {
          dm->Ny_HyresKod_Kg32 = enter("Framtidakod : ----%D", dm->Ny_HyresKod_Kg32);
        }
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_2_2_1_2()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_Dag_HyresKod_Kg32;
      if (dm->Ny_Dag_HyresKod_Kg32 >= 0)
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : %6.0f", Kod);
        }
      else 
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : ------%F", Kod);
        }
      dm->Ny_Dag_HyresKod_Kg32 = Kod;
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_2_3()
{
  if (dm->Port_kod_ok)
    {
      display("Entreprenadkod");
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_2_3_1()
{
  if (dm->Port_kod_ok)
    {
      display("Aktuellkod \004r : %4d sedan : %6d", dm->Nu_EntreKod_Kg32, dm->Nu_Dag_EntreKod_Kg32);
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_2_3_2()
{
  if (dm->Port_kod_ok)
    {
      enter_calendar(&dm->Cal_EntreKod_Kg32);
    }
  else 
    {
      display("F\024r l\006g beh\024righet");
    }
}
void rulle6_2_3_1_1()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_EntreKod_Kg32;
      if (dm->Ny_EntreKod_Kg32 >= 0)
        {
          Kod = enter("Framtidakod : %4.0f", Kod);
          dm->Ny_EntreKod_Kg32 = Kod;
        }
      else 
        {
          dm->Ny_EntreKod_Kg32 = enter("Framtidakod : ----%D", dm->Ny_EntreKod_Kg32);
        }
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_2_3_1_2()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_Dag_EntreKod_Kg32;
      if (dm->Ny_Dag_EntreKod_Kg32 >= 0)
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : %6.0f", Kod);
        }
      else 
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : ------%F", Kod);
        }
      dm->Ny_Dag_EntreKod_Kg32 = Kod;
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_2_4()
{
  if (dm->Port_kod_ok)
    {
      display("Servicekod");
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_2_4_1()
{
  if (dm->Port_kod_ok)
    {
      display("Aktuellkod \004r : %4d sedan : %6d", dm->Nu_ServiceKod_Kg32, dm->Nu_Dag_ServiceKod_Kg32);
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_2_4_2()
{
  if (dm->Port_kod_ok)
    {
      enter_calendar(&dm->Cal_ServiceKod_Kg32);
    }
  else 
    {
      display("F\024r l\006g beh\024righet");
    }
}
void rulle6_2_4_1_1()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_ServiceKod_Kg32;
      if (dm->Ny_ServiceKod_Kg32 >= 0)
        {
          Kod = enter("Framtidakod : %4.0f", Kod);
          dm->Ny_ServiceKod_Kg32 = Kod;
        }
      else 
        {
          dm->Ny_ServiceKod_Kg32 = enter("Framtidakod : ----%D", dm->Ny_ServiceKod_Kg32);
        }
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_2_4_1_2()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_Dag_ServiceKod_Kg32;
      if (dm->Ny_Dag_ServiceKod_Kg32 >= 0)
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : %6.0f", Kod);
        }
      else 
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : ------%F", Kod);
        }
      dm->Ny_Dag_ServiceKod_Kg32 = Kod;
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_2_5()
{
  if (dm->Port_kod_ok)
    {
      display("Extrakod");
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_2_5_1()
{
  if (dm->Port_kod_ok)
    {
      display("Aktuellkod \004r : %4d sedan : %6d", dm->Nu_ExtraKod_Kg32, dm->Nu_Dag_ExtraKod_Kg32);
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_2_5_2()
{
  if (dm->Port_kod_ok)
    {
      enter_calendar(&dm->Cal_ExtraKod_Kg32);
    }
  else 
    {
      display("F\024r l\006g beh\024righet");
    }
}
void rulle6_2_5_1_1()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_ExtraKod_Kg32;
      if (dm->Ny_ExtraKod_Kg32 >= 0)
        {
          Kod = enter("Framtidakod : %4.0f", Kod);
          dm->Ny_ExtraKod_Kg32 = Kod;
        }
      else 
        {
          dm->Ny_ExtraKod_Kg32 = enter("Framtidakod : ----%D", dm->Ny_ExtraKod_Kg32);
        }
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_2_5_1_2()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_Dag_ExtraKod_Kg32;
      if (dm->Ny_Dag_ExtraKod_Kg32 >= 0)
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : %6.0f", Kod);
        }
      else 
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : ------%F", Kod);
        }
      dm->Ny_Dag_ExtraKod_Kg32 = Kod;
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_3()
{
  if (dm->Port_kod_ok)
    {
      display("Portkoder Kungsgatan 34");
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_3_1()
{
  if (dm->Port_kod_ok)
    {
      display("Postkod");
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_3_1_1()
{
  if (dm->Port_kod_ok)
    {
      display("Aktuellkod \004r : %4d sedan : %6d", dm->Nu_PostKod_Kg34, dm->Nu_Dag_PostKod_Kg34);
    }
  else 
    {
      display("F\024r l\006g beh\024righet");
    }
}
void rulle6_3_1_2()
{
  if (dm->Port_kod_ok)
    {
      enter_calendar(&dm->Cal_PostKod_Kg34);
    }
  else 
    {
      display("F\024r l\006g beh\024righet");
    }
}
void rulle6_3_1_1_1()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_PostKod_Kg34;
      if (dm->Ny_PostKod_Kg34 >= 0)
        {
          Kod = enter("Framtidakod : %4.0f", Kod);
          dm->Ny_PostKod_Kg34 = Kod;
        }
      else 
        {
          dm->Ny_PostKod_Kg34 = enter("Framtidakod : ----%D", dm->Ny_PostKod_Kg34);
        }
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_3_1_1_2()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_Dag_PostKod_Kg34;
      if (dm->Ny_Dag_PostKod_Kg34 >= 0)
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : %6.0f", Kod);
        }
      else 
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : ------%F", Kod);
        }
      dm->Ny_Dag_PostKod_Kg34 = Kod;
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_3_2()
{
  if (dm->Port_kod_ok)
    {
      display("Hyresg\004stkod");
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_3_2_1()
{
  if (dm->Port_kod_ok)
    {
      display("Aktuellkod \004r : %4d sedan : %6d", dm->Nu_HyresKod_Kg34, dm->Nu_Dag_HyresKod_Kg34);
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_3_2_2()
{
  if (dm->Port_kod_ok)
    {
      enter_calendar(&dm->Cal_HyresKod_Kg34);
    }
  else 
    {
      display("F\024r l\006g beh\024righet");
    }
}
void rulle6_3_2_1_1()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_HyresKod_Kg34;
      if (dm->Ny_HyresKod_Kg34 >= 0)
        {
          Kod = enter("Framtidakod : %4.0f", Kod);
          dm->Ny_HyresKod_Kg34 = Kod;
        }
      else 
        {
          dm->Ny_HyresKod_Kg34 = enter("Framtidakod : ----%D", dm->Ny_HyresKod_Kg34);
        }
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_3_2_1_2()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_Dag_HyresKod_Kg34;
      if (dm->Ny_Dag_HyresKod_Kg34 >= 0)
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : %6.0f", Kod);
        }
      else 
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : ------%F", Kod);
        }
      dm->Ny_Dag_HyresKod_Kg34 = Kod;
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_3_3()
{
  if (dm->Port_kod_ok)
    {
      display("Entreprenadkod");
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_3_3_1()
{
  if (dm->Port_kod_ok)
    {
      display("Aktuellkod \004r : %4d sedan : %6d", dm->Nu_EntreKod_Kg34, dm->Nu_Dag_EntreKod_Kg34);
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_3_3_2()
{
  if (dm->Port_kod_ok)
    {
      enter_calendar(&dm->Cal_EntreKod_Kg34);
    }
  else 
    {
      display("F\024r l\006g beh\024righet");
    }
}
void rulle6_3_3_1_1()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_EntreKod_Kg34;
      if (dm->Ny_EntreKod_Kg34 >= 0)
        {
          Kod = enter("Framtidakod : %4.0f", Kod);
          dm->Ny_EntreKod_Kg34 = Kod;
        }
      else 
        {
          dm->Ny_EntreKod_Kg34 = enter("Framtidakod : ----%D", dm->Ny_EntreKod_Kg34);
        }
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_3_3_1_2()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_Dag_EntreKod_Kg34;
      if (dm->Ny_Dag_EntreKod_Kg34 >= 0)
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : %6.0f", Kod);
        }
      else 
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : ------%F", Kod);
        }
      dm->Ny_Dag_EntreKod_Kg34 = Kod;
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_3_4()
{
  if (dm->Port_kod_ok)
    {
      display("Servicekod");
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_3_4_1()
{
  if (dm->Port_kod_ok)
    {
      display("Aktuellkod \004r : %4d sedan : %6d", dm->Nu_ServiceKod_Kg34, dm->Nu_Dag_ServiceKod_Kg34);
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_3_4_2()
{
  if (dm->Port_kod_ok)
    {
      enter_calendar(&dm->Cal_ServiceKod_Kg34);
    }
  else 
    {
      display("F\024r l\006g beh\024righet");
    }
}
void rulle6_3_4_1_1()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_ServiceKod_Kg34;
      if (dm->Ny_ServiceKod_Kg34 >= 0)
        {
          Kod = enter("Framtidakod : %4.0f", Kod);
          dm->Ny_ServiceKod_Kg34 = Kod;
        }
      else 
        {
          dm->Ny_ServiceKod_Kg34 = enter("Framtidakod : ----%D", dm->Ny_ServiceKod_Kg34);
        }
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_3_4_1_2()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_Dag_ServiceKod_Kg34;
      if (dm->Ny_Dag_ServiceKod_Kg34 >= 0)
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : %6.0f", Kod);
        }
      else 
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : ------%F", Kod);
        }
      dm->Ny_Dag_ServiceKod_Kg34 = Kod;
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_3_5()
{
  if (dm->Port_kod_ok)
    {
      display("Extrakod");
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_3_5_1()
{
  if (dm->Port_kod_ok)
    {
      display("Aktuellkod \004r : %4d sedan : %6d", dm->Nu_ExtraKod_Kg34, dm->Nu_Dag_ExtraKod_Kg34);
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_3_5_2()
{
  if (dm->Port_kod_ok)
    {
      enter_calendar(&dm->Cal_ExtraKod_Kg34);
    }
  else 
    {
      display("F\024r l\006g beh\024righet");
    }
}
void rulle6_3_5_1_1()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_ExtraKod_Kg34;
      if (dm->Ny_ExtraKod_Kg34 >= 0)
        {
          Kod = enter("Framtidakod : %4.0f", Kod);
          dm->Ny_ExtraKod_Kg34 = Kod;
        }
      else 
        {
          dm->Ny_ExtraKod_Kg34 = enter("Framtidakod : ----%D", dm->Ny_ExtraKod_Kg34);
        }
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_3_5_1_2()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_Dag_ExtraKod_Kg34;
      if (dm->Ny_Dag_ExtraKod_Kg34 >= 0)
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : %6.0f", Kod);
        }
      else 
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : ------%F", Kod);
        }
      dm->Ny_Dag_ExtraKod_Kg34 = Kod;
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_4()
{
  if (dm->Port_kod_ok)
    {
      display("Portkoder Kungsgatan 36");
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_4_1()
{
  if (dm->Port_kod_ok)
    {
      display("Postkod");
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_4_1_1()
{
  if (dm->Port_kod_ok)
    {
      display("Aktuellkod \004r : %4d sedan : %6d", dm->Nu_PostKod_Kg36, dm->Nu_Dag_PostKod_Kg36);
    }
  else 
    {
      display("F\024r l\006g beh\024righet");
    }
}
void rulle6_4_1_2()
{
  if (dm->Port_kod_ok)
    {
      enter_calendar(&dm->Cal_PostKod_Kg36);
    }
  else 
    {
      display("F\024r l\006g beh\024righet");
    }
}
void rulle6_4_1_1_1()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_PostKod_Kg36;
      if (dm->Ny_PostKod_Kg36 >= 0)
        {
          Kod = enter("Framtidakod : %4.0f", Kod);
          dm->Ny_PostKod_Kg36 = Kod;
        }
      else 
        {
          dm->Ny_PostKod_Kg36 = enter("Framtidakod : ----%D", dm->Ny_PostKod_Kg36);
        }
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_4_1_1_2()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_Dag_PostKod_Kg36;
      if (dm->Ny_Dag_PostKod_Kg36 >= 0)
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : %6.0f", Kod);
        }
      else 
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : ------%F", Kod);
        }
      dm->Ny_Dag_PostKod_Kg36 = Kod;
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_4_2()
{
  if (dm->Port_kod_ok)
    {
      display("Hyresg\004stkod");
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_4_2_1()
{
  if (dm->Port_kod_ok)
    {
      display("Aktuellkod \004r : %4d sedan : %6d", dm->Nu_HyresKod_Kg36, dm->Nu_Dag_HyresKod_Kg36);
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_4_2_2()
{
  if (dm->Port_kod_ok)
    {
      enter_calendar(&dm->Cal_HyresKod_Kg36);
    }
  else 
    {
      display("F\024r l\006g beh\024righet");
    }
}
void rulle6_4_2_1_1()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_HyresKod_Kg36;
      if (dm->Ny_HyresKod_Kg36 >= 0)
        {
          Kod = enter("Framtidakod : %4.0f", Kod);
          dm->Ny_HyresKod_Kg36 = Kod;
        }
      else 
        {
          dm->Ny_HyresKod_Kg36 = enter("Framtidakod : ----%D", dm->Ny_HyresKod_Kg36);
        }
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_4_2_1_2()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_Dag_HyresKod_Kg36;
      if (dm->Ny_Dag_HyresKod_Kg36 >= 0)
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : %6.0f", Kod);
        }
      else 
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : ------%F", Kod);
        }
      dm->Ny_Dag_HyresKod_Kg36 = Kod;
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_4_3()
{
  if (dm->Port_kod_ok)
    {
      display("Entreprenadkod");
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_4_3_1()
{
  if (dm->Port_kod_ok)
    {
      display("Aktuellkod \004r : %4d sedan : %6d", dm->Nu_EntreKod_Kg36, dm->Nu_Dag_EntreKod_Kg36);
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_4_3_2()
{
  if (dm->Port_kod_ok)
    {
      enter_calendar(&dm->Cal_EntreKod_Kg36);
    }
  else 
    {
      display("F\024r l\006g beh\024righet");
    }
}
void rulle6_4_3_1_1()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_EntreKod_Kg36;
      if (dm->Ny_EntreKod_Kg36 >= 0)
        {
          Kod = enter("Framtidakod : %4.0f", Kod);
          dm->Ny_EntreKod_Kg36 = Kod;
        }
      else 
        {
          dm->Ny_EntreKod_Kg36 = enter("Framtidakod : ----%D", dm->Ny_EntreKod_Kg36);
        }
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_4_3_1_2()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_Dag_EntreKod_Kg36;
      if (dm->Ny_Dag_EntreKod_Kg36 >= 0)
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : %6.0f", Kod);
        }
      else 
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : ------%F", Kod);
        }
      dm->Ny_Dag_EntreKod_Kg36 = Kod;
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_4_4()
{
  if (dm->Port_kod_ok)
    {
      display("Servicekod");
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_4_4_1()
{
  if (dm->Port_kod_ok)
    {
      display("Aktuellkod \004r : %4d sedan : %6d", dm->Nu_ServiceKod_Kg36, dm->Nu_Dag_ServiceKod_Kg36);
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_4_4_2()
{
  if (dm->Port_kod_ok)
    {
      enter_calendar(&dm->Cal_ServiceKod_Kg36);
    }
  else 
    {
      display("F\024r l\006g beh\024righet");
    }
}
void rulle6_4_4_1_1()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_ServiceKod_Kg36;
      if (dm->Ny_ServiceKod_Kg36 >= 0)
        {
          Kod = enter("Framtidakod : %4.0f", Kod);
          dm->Ny_ServiceKod_Kg36 = Kod;
        }
      else 
        {
          dm->Ny_ServiceKod_Kg36 = enter("Framtidakod : ----%D", dm->Ny_ServiceKod_Kg36);
        }
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_4_4_1_2()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_Dag_ServiceKod_Kg36;
      if (dm->Ny_Dag_ServiceKod_Kg36 >= 0)
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : %6.0f", Kod);
        }
      else 
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : ------%F", Kod);
        }
      dm->Ny_Dag_ServiceKod_Kg36 = Kod;
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_4_5()
{
  if (dm->Port_kod_ok)
    {
      display("Extrakod");
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_4_5_1()
{
  if (dm->Port_kod_ok)
    {
      display("Aktuellkod \004r : %4d sedan : %6d", dm->Nu_ExtraKod_Kg36, dm->Nu_Dag_ExtraKod_Kg36);
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_4_5_2()
{
  if (dm->Port_kod_ok)
    {
      enter_calendar(&dm->Cal_ExtraKod_Kg36);
    }
  else 
    {
      display("F\024r l\006g beh\024righet");
    }
}
void rulle6_4_5_1_1()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_ExtraKod_Kg36;
      if (dm->Ny_ExtraKod_Kg36 >= 0)
        {
          Kod = enter("Framtidakod : %4.0f", Kod);
          dm->Ny_ExtraKod_Kg36 = Kod;
        }
      else 
        {
          dm->Ny_ExtraKod_Kg36 = enter("Framtidakod : ----%D", dm->Ny_ExtraKod_Kg36);
        }
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_4_5_1_2()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_Dag_ExtraKod_Kg36;
      if (dm->Ny_Dag_ExtraKod_Kg36 >= 0)
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : %6.0f", Kod);
        }
      else 
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : ------%F", Kod);
        }
      dm->Ny_Dag_ExtraKod_Kg36 = Kod;
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_5()
{
  if (dm->Port_kod_ok)
    {
      display("Portkoder Kungsgatan 38");
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_5_1()
{
  if (dm->Port_kod_ok)
    {
      display("Postkod");
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_5_1_1()
{
  if (dm->Port_kod_ok)
    {
      display("Aktuellkod \004r : %4d sedan : %6d", dm->Nu_PostKod_Kg38, dm->Nu_Dag_PostKod_Kg38);
    }
  else 
    {
      display("F\024r l\006g beh\024righet");
    }
}
void rulle6_5_1_2()
{
  if (dm->Port_kod_ok)
    {
      enter_calendar(&dm->Cal_PostKod_Kg38);
    }
  else 
    {
      display("F\024r l\006g beh\024righet");
    }
}
void rulle6_5_1_1_1()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_PostKod_Kg38;
      if (dm->Ny_PostKod_Kg38 >= 0)
        {
          Kod = enter("Framtidakod : %4.0f", Kod);
          dm->Ny_PostKod_Kg38 = Kod;
        }
      else 
        {
          dm->Ny_PostKod_Kg38 = enter("Framtidakod : ----%D", dm->Ny_PostKod_Kg38);
        }
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_5_1_1_2()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_Dag_PostKod_Kg38;
      if (dm->Ny_Dag_PostKod_Kg38 >= 0)
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : %6.0f", Kod);
        }
      else 
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : ------%F", Kod);
        }
      dm->Ny_Dag_PostKod_Kg38 = Kod;
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_5_2()
{
  if (dm->Port_kod_ok)
    {
      display("Hyresg\004stkod");
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_5_2_1()
{
  if (dm->Port_kod_ok)
    {
      display("Aktuellkod \004r : %4d sedan : %6d", dm->Nu_HyresKod_Kg38, dm->Nu_Dag_HyresKod_Kg38);
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_5_2_2()
{
  if (dm->Port_kod_ok)
    {
      enter_calendar(&dm->Cal_HyresKod_Kg38);
    }
  else 
    {
      display("F\024r l\006g beh\024righet");
    }
}
void rulle6_5_2_1_1()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_HyresKod_Kg38;
      if (dm->Ny_HyresKod_Kg38 >= 0)
        {
          Kod = enter("Framtidakod : %4.0f", Kod);
          dm->Ny_HyresKod_Kg38 = Kod;
        }
      else 
        {
          dm->Ny_HyresKod_Kg38 = enter("Framtidakod : ----%D", dm->Ny_HyresKod_Kg38);
        }
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_5_2_1_2()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_Dag_HyresKod_Kg38;
      if (dm->Ny_Dag_HyresKod_Kg38 >= 0)
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : %6.0f", Kod);
        }
      else 
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : ------%F", Kod);
        }
      dm->Ny_Dag_HyresKod_Kg38 = Kod;
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_5_3()
{
  if (dm->Port_kod_ok)
    {
      display("Entreprenadkod");
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_5_3_1()
{
  if (dm->Port_kod_ok)
    {
      display("Aktuellkod \004r : %4d sedan : %6d", dm->Nu_EntreKod_Kg38, dm->Nu_Dag_EntreKod_Kg38);
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_5_3_2()
{
  if (dm->Port_kod_ok)
    {
      enter_calendar(&dm->Cal_EntreKod_Kg38);
    }
  else 
    {
      display("F\024r l\006g beh\024righet");
    }
}
void rulle6_5_3_1_1()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_EntreKod_Kg38;
      if (dm->Ny_EntreKod_Kg38 >= 0)
        {
          Kod = enter("Framtidakod : %4.0f", Kod);
          dm->Ny_EntreKod_Kg38 = Kod;
        }
      else 
        {
          dm->Ny_EntreKod_Kg36 = enter("Framtidakod : ----%D", dm->Ny_EntreKod_Kg36);
        }
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_5_3_1_2()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_Dag_EntreKod_Kg38;
      if (dm->Ny_Dag_EntreKod_Kg38 >= 0)
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : %6.0f", Kod);
        }
      else 
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : ------%F", Kod);
        }
      dm->Ny_Dag_EntreKod_Kg38 = Kod;
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_5_4()
{
  if (dm->Port_kod_ok)
    {
      display("Servicekod");
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_5_4_1()
{
  if (dm->Port_kod_ok)
    {
      display("Aktuellkod \004r : %4d sedan : %6d", dm->Nu_ServiceKod_Kg38, dm->Nu_Dag_ServiceKod_Kg38);
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_5_4_2()
{
  if (dm->Port_kod_ok)
    {
      enter_calendar(&dm->Cal_ServiceKod_Kg38);
    }
  else 
    {
      display("F\024r l\006g beh\024righet");
    }
}
void rulle6_5_4_1_1()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_ServiceKod_Kg38;
      if (dm->Ny_ServiceKod_Kg38 >= 0)
        {
          Kod = enter("Framtidakod : %4.0f", Kod);
          dm->Ny_ServiceKod_Kg38 = Kod;
        }
      else 
        {
          dm->Ny_ServiceKod_Kg38 = enter("Framtidakod : ----%D", dm->Ny_ServiceKod_Kg38);
        }
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_5_4_1_2()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_Dag_ServiceKod_Kg38;
      if (dm->Ny_Dag_ServiceKod_Kg38 >= 0)
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : %6.0f", Kod);
        }
      else 
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : ------%F", Kod);
        }
      dm->Ny_Dag_ServiceKod_Kg38 = Kod;
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_5_5()
{
  if (dm->Port_kod_ok)
    {
      display("Extrakod");
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_5_5_1()
{
  if (dm->Port_kod_ok)
    {
      display("Aktuellkod \004r : %4d sedan : %6d", dm->Nu_ExtraKod_Kg38, dm->Nu_Dag_ExtraKod_Kg38);
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_5_5_2()
{
  if (dm->Port_kod_ok)
    {
      enter_calendar(&dm->Cal_ExtraKod_Kg38);
    }
  else 
    {
      display("F\024r l\006g beh\024righet");
    }
}
void rulle6_5_5_1_1()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_ExtraKod_Kg38;
      if (dm->Ny_ExtraKod_Kg38 >= 0)
        {
          Kod = enter("Framtidakod : %4.0f", Kod);
          dm->Ny_ExtraKod_Kg38 = Kod;
        }
      else 
        {
          dm->Ny_ExtraKod_Kg38 = enter("Framtidakod : ----%D", dm->Ny_ExtraKod_Kg38);
        }
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_5_5_1_2()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_Dag_ExtraKod_Kg38;
      if (dm->Ny_Dag_ExtraKod_Kg38 >= 0)
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : %6.0f", Kod);
        }
      else 
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : ------%F", Kod);
        }
      dm->Ny_Dag_ExtraKod_Kg38 = Kod;
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_6()
{
  if (dm->Port_kod_ok)
    {
      display("Portkoder Malmskillnadsgatan 39");
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_6_1()
{
  if (dm->Port_kod_ok)
    {
      display("Postkod");
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_6_1_1()
{
  if (dm->Port_kod_ok)
    {
      display("Aktuellkod \004r : %4d sedan : %6d", dm->Nu_PostKod_Mg39, dm->Nu_Dag_PostKod_Mg39);
    }
  else 
    {
      display("F\024r l\006g beh\024righet");
    }
}
void rulle6_6_1_2()
{
  if (dm->Port_kod_ok)
    {
      enter_calendar(&dm->Cal_PostKod_Mg39);
    }
  else 
    {
      display("F\024r l\006g beh\024righet");
    }
}
void rulle6_6_1_1_1()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_PostKod_Mg39;
      if (dm->Ny_PostKod_Mg39 >= 0)
        {
          Kod = enter("Framtidakod : %4.0f", Kod);
          dm->Ny_PostKod_Mg39 = Kod;
        }
      else 
        {
          dm->Ny_PostKod_Mg39 = enter("Framtidakod : ----%D", dm->Ny_PostKod_Mg39);
        }
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_6_1_1_2()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_Dag_PostKod_Mg39;
      if (dm->Ny_Dag_PostKod_Mg39 >= 0)
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : %6.0f", Kod);
        }
      else 
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : ------%F", Kod);
        }
      dm->Ny_Dag_PostKod_Mg39 = Kod;
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_6_2()
{
  if (dm->Port_kod_ok)
    {
      display("Hyresg\004stkod");
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_6_2_1()
{
  if (dm->Port_kod_ok)
    {
      display("Aktuellkod \004r : %4d sedan : %6d", dm->Nu_HyresKod_Mg39, dm->Nu_Dag_HyresKod_Mg39);
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_6_2_2()
{
  if (dm->Port_kod_ok)
    {
      enter_calendar(&dm->Cal_HyresKod_Mg39);
    }
  else 
    {
      display("F\024r l\006g beh\024righet");
    }
}
void rulle6_6_2_1_1()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_HyresKod_Mg39;
      if (dm->Ny_HyresKod_Mg39 >= 0)
        {
          Kod = enter("Framtidakod : %4.0f", Kod);
          dm->Ny_HyresKod_Mg39 = Kod;
        }
      else 
        {
          dm->Ny_HyresKod_Mg39 = enter("Framtidakod : ----%D", dm->Ny_HyresKod_Mg39);
        }
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_6_2_1_2()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_Dag_HyresKod_Mg39;
      if (dm->Ny_Dag_HyresKod_Mg39 >= 0)
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : %6.0f", Kod);
        }
      else 
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : ------%F", Kod);
        }
      dm->Ny_Dag_HyresKod_Mg39 = Kod;
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_6_3()
{
  if (dm->Port_kod_ok)
    {
      display("Entreprenadkod");
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_6_3_1()
{
  if (dm->Port_kod_ok)
    {
      display("Aktuellkod \004r : %4d sedan : %6d", dm->Nu_EntreKod_Mg39, dm->Nu_Dag_EntreKod_Mg39);
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_6_3_2()
{
  if (dm->Port_kod_ok)
    {
      enter_calendar(&dm->Cal_EntreKod_Mg39);
    }
  else 
    {
      display("F\024r l\006g beh\024righet");
    }
}
void rulle6_6_3_1_1()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_EntreKod_Mg39;
      if (dm->Ny_EntreKod_Mg39 >= 0)
        {
          Kod = enter("Framtidakod : %4.0f", Kod);
          dm->Ny_EntreKod_Mg39 = Kod;
        }
      else 
        {
          dm->Ny_EntreKod_Mg39 = enter("Framtidakod : ----%D", dm->Ny_EntreKod_Mg39);
        }
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_6_3_1_2()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_Dag_EntreKod_Mg39;
      if (dm->Ny_Dag_EntreKod_Mg39 >= 0)
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : %6.0f", Kod);
        }
      else 
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : ------%F", Kod);
        }
      dm->Ny_Dag_EntreKod_Mg39 = Kod;
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_6_4()
{
  if (dm->Port_kod_ok)
    {
      display("Servicekod");
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_6_4_1()
{
  if (dm->Port_kod_ok)
    {
      display("Aktuellkod \004r : %4d sedan : %6d", dm->Nu_ServiceKod_Mg39, dm->Nu_Dag_ServiceKod_Mg39);
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_6_4_2()
{
  if (dm->Port_kod_ok)
    {
      enter_calendar(&dm->Cal_ServiceKod_Mg39);
    }
  else 
    {
      display("F\024r l\006g beh\024righet");
    }
}
void rulle6_6_4_1_1()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_ServiceKod_Mg39;
      if (dm->Ny_ServiceKod_Mg39 >= 0)
        {
          Kod = enter("Framtidakod : %4.0f", Kod);
          dm->Ny_ServiceKod_Mg39 = Kod;
        }
      else 
        {
          dm->Ny_ServiceKod_Mg39 = enter("Framtidakod : ----%D", dm->Ny_ServiceKod_Mg39);
        }
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_6_4_1_2()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_Dag_ServiceKod_Mg39;
      if (dm->Ny_Dag_ServiceKod_Mg39 >= 0)
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : %6.0f", Kod);
        }
      else 
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : ------%F", Kod);
        }
      dm->Ny_Dag_ServiceKod_Mg39 = Kod;
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_6_5()
{
  if (dm->Port_kod_ok)
    {
      display("Extrakod");
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_6_5_1()
{
  if (dm->Port_kod_ok)
    {
      display("Aktuellkod \004r : %4d sedan : %6d", dm->Nu_ExtraKod_Mg39, dm->Nu_Dag_ExtraKod_Mg39);
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_6_5_2()
{
  if (dm->Port_kod_ok)
    {
      enter_calendar(&dm->Cal_ExtraKod_Mg39);
    }
  else 
    {
      display("F\024r l\006g beh\024righet");
    }
}
void rulle6_6_5_1_1()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_ExtraKod_Mg39;
      if (dm->Ny_ExtraKod_Mg39 >= 0)
        {
          Kod = enter("Framtidakod : %4.0f", Kod);
          dm->Ny_ExtraKod_Mg39 = Kod;
        }
      else 
        {
          dm->Ny_ExtraKod_Mg39 = enter("Framtidakod : ----%D", dm->Ny_ExtraKod_Mg39);
        }
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_6_5_1_2()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_Dag_ExtraKod_Mg39;
      if (dm->Ny_Dag_ExtraKod_Mg39 >= 0)
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : %6.0f", Kod);
        }
      else 
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : ------%F", Kod);
        }
      dm->Ny_Dag_ExtraKod_Mg39 = Kod;
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_7()
{
  if (dm->Port_kod_ok)
    {
      display("Portkoder Appelbergsgatan 31");
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_7_1()
{
  if (dm->Port_kod_ok)
    {
      display("Postkod");
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_7_1_1()
{
  if (dm->Port_kod_ok)
    {
      display("Aktuellkod \004r : %4d sedan : %6d", dm->Nu_PostKod_Ag31, dm->Nu_Dag_PostKod_Ag31);
    }
  else 
    {
      display("F\024r l\006g beh\024righet");
    }
}
void rulle6_7_1_2()
{
  if (dm->Port_kod_ok)
    {
      enter_calendar(&dm->Cal_PostKod_Ag31);
    }
  else 
    {
      display("F\024r l\006g beh\024righet");
    }
}
void rulle6_7_1_1_1()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_PostKod_Ag31;
      if (dm->Ny_PostKod_Ag31 >= 0)
        {
          Kod = enter("Framtidakod : %4.0f", Kod);
          dm->Ny_PostKod_Ag31 = Kod;
        }
      else 
        {
          dm->Ny_PostKod_Ag31 = enter("Framtidakod : ----%D", dm->Ny_PostKod_Ag31);
        }
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_7_1_1_2()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_Dag_PostKod_Ag31;
      if (dm->Ny_Dag_PostKod_Ag31 >= 0)
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : %6.0f", Kod);
        }
      else 
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : ------%F", Kod);
        }
      dm->Ny_Dag_PostKod_Ag31 = Kod;
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_7_2()
{
  if (dm->Port_kod_ok)
    {
      display("Hyresg\004stkod");
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_7_2_1()
{
  if (dm->Port_kod_ok)
    {
      display("Aktuellkod \004r : %4d sedan : %6d", dm->Nu_HyresKod_Ag31, dm->Nu_Dag_HyresKod_Ag31);
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_7_2_2()
{
  if (dm->Port_kod_ok)
    {
      enter_calendar(&dm->Cal_HyresKod_Ag31);
    }
  else 
    {
      display("F\024r l\006g beh\024righet");
    }
}
void rulle6_7_2_1_1()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_HyresKod_Ag31;
      if (dm->Ny_HyresKod_Ag31 >= 0)
        {
          Kod = enter("Framtidakod : %4.0f", Kod);
          dm->Ny_HyresKod_Ag31 = Kod;
        }
      else 
        {
          dm->Ny_HyresKod_Ag31 = enter("Framtidakod : ----%D", dm->Ny_HyresKod_Ag31);
        }
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_7_2_1_2()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_Dag_HyresKod_Ag31;
      if (dm->Ny_Dag_HyresKod_Ag31 >= 0)
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : %6.0f", Kod);
        }
      else 
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : ------%F", Kod);
        }
      dm->Ny_Dag_HyresKod_Ag31 = Kod;
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_7_3()
{
  if (dm->Port_kod_ok)
    {
      display("Entreprenadkod");
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_7_3_1()
{
  if (dm->Port_kod_ok)
    {
      display("Aktuellkod \004r : %4d sedan : %6d", dm->Nu_EntreKod_Ag31, dm->Nu_Dag_EntreKod_Ag31);
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_7_3_2()
{
  if (dm->Port_kod_ok)
    {
      enter_calendar(&dm->Cal_EntreKod_Ag31);
    }
  else 
    {
      display("F\024r l\006g beh\024righet");
    }
}
void rulle6_7_3_1_1()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_EntreKod_Ag31;
      if (dm->Ny_EntreKod_Ag31 >= 0)
        {
          Kod = enter("Framtidakod : %4.0f", Kod);
          dm->Ny_EntreKod_Ag31 = Kod;
        }
      else 
        {
          dm->Ny_EntreKod_Ag31 = enter("Framtidakod : ----%D", dm->Ny_EntreKod_Ag31);
        }
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_7_3_1_2()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_Dag_EntreKod_Ag31;
      if (dm->Ny_Dag_EntreKod_Ag31 >= 0)
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : %6.0f", Kod);
        }
      else 
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : ------%F", Kod);
        }
      dm->Ny_Dag_EntreKod_Ag31 = Kod;
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_7_4()
{
  if (dm->Port_kod_ok)
    {
      display("Servicekod");
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_7_4_1()
{
  if (dm->Port_kod_ok)
    {
      display("Aktuellkod \004r : %4d sedan : %6d", dm->Nu_ServiceKod_Ag31, dm->Nu_Dag_ServiceKod_Ag31);
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_7_4_2()
{
  if (dm->Port_kod_ok)
    {
      enter_calendar(&dm->Cal_ServiceKod_Ag31);
    }
  else 
    {
      display("F\024r l\006g beh\024righet");
    }
}
void rulle6_7_4_1_1()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_ServiceKod_Ag31;
      if (dm->Ny_ServiceKod_Ag31 >= 0)
        {
          Kod = enter("Framtidakod : %4.0f", Kod);
          dm->Ny_ServiceKod_Ag31 = Kod;
        }
      else 
        {
          dm->Ny_ServiceKod_Ag31 = enter("Framtidakod : ----%D", dm->Ny_ServiceKod_Ag31);
        }
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_7_4_1_2()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_Dag_ServiceKod_Ag31;
      if (dm->Ny_Dag_ServiceKod_Ag31 >= 0)
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : %6.0f", Kod);
        }
      else 
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : ------%F", Kod);
        }
      dm->Ny_Dag_ServiceKod_Ag31 = Kod;
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_7_5()
{
  if (dm->Port_kod_ok)
    {
      display("Extrakod");
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_7_5_1()
{
  if (dm->Port_kod_ok)
    {
      display("Aktuellkod \004r : %4d sedan : %6d", dm->Nu_ExtraKod_Ag31, dm->Nu_Dag_ExtraKod_Ag31);
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_7_5_2()
{
  if (dm->Port_kod_ok)
    {
      enter_calendar(&dm->Cal_ExtraKod_Ag31);
    }
  else 
    {
      display("F\024r l\006g beh\024righet");
    }
}
void rulle6_7_5_1_1()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_ExtraKod_Ag31;
      if (dm->Ny_ExtraKod_Ag31 >= 0)
        {
          Kod = enter("Framtidakod : %4.0f", Kod);
          dm->Ny_ExtraKod_Ag31 = Kod;
        }
      else 
        {
          dm->Ny_ExtraKod_Ag31 = enter("Framtidakod : ----%D", dm->Ny_ExtraKod_Ag31);
        }
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_7_5_1_2()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_Dag_ExtraKod_Ag31;
      if (dm->Ny_Dag_ExtraKod_Ag31 >= 0)
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : %6.0f", Kod);
        }
      else 
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : ------%F", Kod);
        }
      dm->Ny_Dag_ExtraKod_Ag31 = Kod;
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_8()
{
  if (dm->Port_kod_ok)
    {
      display("Portkoder Appelbergsgatan 33");
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_8_1()
{
  if (dm->Port_kod_ok)
    {
      display("Postkod");
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_8_1_1()
{
  if (dm->Port_kod_ok)
    {
      display("Aktuellkod \004r : %4d sedan : %6d", dm->Nu_PostKod_Ag33, dm->Nu_Dag_PostKod_Ag33);
    }
  else 
    {
      display("F\024r l\006g beh\024righet");
    }
}
void rulle6_8_1_2()
{
  if (dm->Port_kod_ok)
    {
      enter_calendar(&dm->Cal_PostKod_Ag33);
    }
  else 
    {
      display("F\024r l\006g beh\024righet");
    }
}
void rulle6_8_1_1_1()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_PostKod_Ag33;
      if (dm->Ny_PostKod_Ag33 >= 0)
        {
          Kod = enter("Framtidakod : %4.0f", Kod);
          dm->Ny_PostKod_Ag33 = Kod;
        }
      else 
        {
          dm->Ny_PostKod_Ag33 = enter("Framtidakod : ----%D", dm->Ny_PostKod_Ag33);
        }
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_8_1_1_2()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_Dag_PostKod_Ag33;
      if (dm->Ny_Dag_PostKod_Ag33 >= 0)
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : %6.0f", Kod);
        }
      else 
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : ------%F", Kod);
        }
      dm->Ny_Dag_PostKod_Ag33 = Kod;
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_8_2()
{
  if (dm->Port_kod_ok)
    {
      display("Hyresg\004stkod");
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_8_2_1()
{
  if (dm->Port_kod_ok)
    {
      display("Aktuellkod \004r : %4d sedan : %6d", dm->Nu_HyresKod_Ag33, dm->Nu_Dag_HyresKod_Ag33);
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_8_2_2()
{
  if (dm->Port_kod_ok)
    {
      enter_calendar(&dm->Cal_HyresKod_Ag33);
    }
  else 
    {
      display("F\024r l\006g beh\024righet");
    }
}
void rulle6_8_2_1_1()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_HyresKod_Ag33;
      if (dm->Ny_HyresKod_Ag33 >= 0)
        {
          Kod = enter("Framtidakod : %4.0f", Kod);
          dm->Ny_HyresKod_Ag33 = Kod;
        }
      else 
        {
          dm->Ny_HyresKod_Ag33 = enter("Framtidakod : ----%D", dm->Ny_HyresKod_Ag33);
        }
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_8_2_1_2()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_Dag_HyresKod_Ag33;
      if (dm->Ny_Dag_HyresKod_Ag33 >= 0)
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : %6.0f", Kod);
        }
      else 
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : ------%F", Kod);
        }
      dm->Ny_Dag_HyresKod_Ag33 = Kod;
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_8_3()
{
  if (dm->Port_kod_ok)
    {
      display("Entreprenadkod");
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_8_3_1()
{
  if (dm->Port_kod_ok)
    {
      display("Aktuellkod \004r : %4d sedan : %6d", dm->Nu_EntreKod_Ag33, dm->Nu_Dag_EntreKod_Ag33);
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_8_3_2()
{
  if (dm->Port_kod_ok)
    {
      enter_calendar(&dm->Cal_EntreKod_Ag33);
    }
  else 
    {
      display("F\024r l\006g beh\024righet");
    }
}
void rulle6_8_3_1_1()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_EntreKod_Ag33;
      if (dm->Ny_EntreKod_Ag33 >= 0)
        {
          Kod = enter("Framtidakod : %4.0f", Kod);
          dm->Ny_EntreKod_Ag33 = Kod;
        }
      else 
        {
          dm->Ny_EntreKod_Ag33 = enter("Framtidakod : ----%D", dm->Ny_EntreKod_Ag33);
        }
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_8_3_1_2()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_Dag_EntreKod_Ag33;
      if (dm->Ny_Dag_EntreKod_Ag33 >= 0)
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : %6.0f", Kod);
        }
      else 
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : ------%F", Kod);
        }
      dm->Ny_Dag_EntreKod_Ag33 = Kod;
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_8_4()
{
  if (dm->Port_kod_ok)
    {
      display("Servicekod");
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_8_4_1()
{
  if (dm->Port_kod_ok)
    {
      display("Aktuellkod \004r : %4d sedan : %6d", dm->Nu_ServiceKod_Ag33, dm->Nu_Dag_ServiceKod_Ag33);
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_8_4_2()
{
  if (dm->Port_kod_ok)
    {
      enter_calendar(&dm->Cal_ServiceKod_Ag33);
    }
  else 
    {
      display("F\024r l\006g beh\024righet");
    }
}
void rulle6_8_4_1_1()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_ServiceKod_Ag33;
      if (dm->Ny_ServiceKod_Ag33 >= 0)
        {
          Kod = enter("Framtidakod : %4.0f", Kod);
          dm->Ny_ServiceKod_Ag33 = Kod;
        }
      else 
        {
          dm->Ny_ServiceKod_Ag33 = enter("Framtidakod : ----%D", dm->Ny_ServiceKod_Ag33);
        }
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_8_4_1_2()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_Dag_ServiceKod_Ag33;
      if (dm->Ny_Dag_ServiceKod_Ag33 >= 0)
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : %6.0f", Kod);
        }
      else 
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : ------%F", Kod);
        }
      dm->Ny_Dag_ServiceKod_Ag33 = Kod;
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_8_5()
{
  if (dm->Port_kod_ok)
    {
      display("Extrakod");
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_8_5_1()
{
  if (dm->Port_kod_ok)
    {
      display("Aktuellkod \004r : %4d sedan : %6d", dm->Nu_ExtraKod_Ag33, dm->Nu_Dag_ExtraKod_Ag33);
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_8_5_2()
{
  if (dm->Port_kod_ok)
    {
      enter_calendar(&dm->Cal_ExtraKod_Ag33);
    }
  else 
    {
      display("F\024r l\006g beh\024righet");
    }
}
void rulle6_8_5_1_1()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_ExtraKod_Ag33;
      if (dm->Ny_ExtraKod_Ag33 >= 0)
        {
          Kod = enter("Framtidakod : %4.0f", Kod);
          dm->Ny_ExtraKod_Ag33 = Kod;
        }
      else 
        {
          dm->Ny_ExtraKod_Ag33 = enter("Framtidakod : ----%D", dm->Ny_ExtraKod_Ag33);
        }
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void rulle6_8_5_1_2()
{
  if (dm->Port_kod_ok)
    {
      double Kod;
      Kod = dm->Ny_Dag_ExtraKod_Ag33;
      if (dm->Ny_Dag_ExtraKod_Ag33 >= 0)
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : %6.0f", Kod);
        }
      else 
        {
          Kod = enter("Framtidakod ska g\004lla fr\006n : ------%F", Kod);
        }
      dm->Ny_Dag_ExtraKod_Ag33 = Kod;
    }
  else 
    display("F\024r l\006g beh\024righet");
}
void datumtid()
{
  display("St\004ll Datum och Tid");
}
void stalltid()
{
  set_time();
}
void sc_h_1()
{
  display("Anv\004nd pil-funktion f\024r mera info\nM\024jliga val: se pilar i display");
}
void larmdelay()
{
  display("Larmf\024rdr\024jningstid i minuter\n");
}
void manuell()
{
  display("Manuell eller Auto drift\n");
}
void Tidkanal()
{
  display("Anv\004nd pil-funktion f\024r mera info\nM\024jliga val: se pilar i display");
}
typedef void (*PFI)();
struct {
  short left, right, up, down, help;
  PFI fcn;
  char *name;
} screens[] = {
    /*left	right	up	down	help	fcn	name*/
    { 0,	0,	0,	0,	-1,	Tidkanal,	"Tidkanal"},	/*1*/
    { 0,	287,	76,	0,	286,	datumtid,	"datumtid"},	/*2*/
    { 0,	0,	0,	0,	-1,	larmdelay,	"larmdelay"},	/*3*/
    { 0,	0,	0,	0,	-1,	manuell,	"manuell"},	/*4*/
    { 0,	0,	288,	6,	286,	rulle1,	"rulle1"},	/*5*/
    { 0,	7,	5,	44,	286,	rulle2,	"rulle2"},	/*6*/
    { 6,	8,	0,	13,	286,	rulle2_1,	"rulle2_1"},	/*7*/
    { 7,	9,	0,	10,	286,	rulle2_1_1,	"rulle2_1_1"},	/*8*/
    { 8,	0,	0,	0,	286,	rulle2_1_1_1,	"rulle2_1_1_1"},	/*9*/
    { 0,	0,	8,	11,	286,	rulle2_1_2,	"rulle2_1_2"},	/*10*/
    { 0,	0,	10,	12,	286,	rulle2_1_3,	"rulle2_1_3"},	/*11*/
    { 0,	0,	11,	0,	286,	rulle2_1_4,	"rulle2_1_4"},	/*12*/
    { 0,	14,	7,	19,	286,	rulle2_2,	"rulle2_2"},	/*13*/
    { 13,	15,	0,	16,	286,	rulle2_2_1,	"rulle2_2_1"},	/*14*/
    { 14,	0,	0,	0,	286,	rulle2_2_1_1,	"rulle2_2_1_1"},	/*15*/
    { 0,	0,	14,	17,	286,	rulle2_2_2,	"rulle2_2_2"},	/*16*/
    { 0,	0,	16,	18,	286,	rulle2_2_3,	"rulle2_2_3"},	/*17*/
    { 0,	0,	17,	0,	286,	rulle2_2_4,	"rulle2_2_4"},	/*18*/
    { 0,	20,	13,	25,	286,	rulle2_3,	"rulle2_3"},	/*19*/
    { 19,	21,	0,	22,	286,	rulle2_3_1,	"rulle2_3_1"},	/*20*/
    { 20,	0,	0,	0,	286,	rulle2_3_1_1,	"rulle2_3_1_1"},	/*21*/
    { 0,	0,	20,	23,	286,	rulle2_3_2,	"rulle2_3_2"},	/*22*/
    { 0,	0,	22,	24,	286,	rulle2_3_3,	"rulle2_3_3"},	/*23*/
    { 0,	0,	23,	0,	286,	rulle2_3_4,	"rulle2_3_4"},	/*24*/
    { 0,	26,	19,	31,	286,	rulle3_1,	"rulle3_1"},	/*25*/
    { 25,	27,	0,	28,	286,	rulle3_1_1,	"rulle3_1_1"},	/*26*/
    { 26,	0,	0,	0,	286,	rulle3_1_1_1,	"rulle3_1_1_1"},	/*27*/
    { 0,	0,	26,	29,	286,	rulle3_1_2,	"rulle3_1_2"},	/*28*/
    { 0,	0,	28,	30,	286,	rulle3_1_3,	"rulle3_1_3"},	/*29*/
    { 0,	0,	29,	0,	286,	rulle3_1_4,	"rulle3_1_4"},	/*30*/
    { 0,	32,	25,	37,	286,	rulle3_2,	"rulle3_2"},	/*31*/
    { 31,	33,	0,	34,	286,	rulle3_2_1,	"rulle3_2_1"},	/*32*/
    { 32,	0,	0,	0,	286,	rulle3_2_1_1,	"rulle3_2_1_1"},	/*33*/
    { 0,	0,	32,	35,	286,	rulle3_2_2,	"rulle3_2_2"},	/*34*/
    { 0,	0,	34,	36,	286,	rulle3_2_3,	"rulle3_2_3"},	/*35*/
    { 0,	0,	35,	0,	286,	rulle3_2_4,	"rulle3_2_4"},	/*36*/
    { 0,	38,	31,	0,	286,	rulle3_3,	"rulle3_3"},	/*37*/
    { 37,	0,	0,	39,	286,	rulle3_3_1,	"rulle3_3_1"},	/*38*/
    { 0,	0,	38,	40,	286,	rulle3_3_2,	"rulle3_3_2"},	/*39*/
    { 0,	0,	39,	41,	286,	rulle3_3_3,	"rulle3_3_3"},	/*40*/
    { 0,	0,	40,	42,	286,	rulle3_3_4,	"rulle3_3_4"},	/*41*/
    { 0,	0,	41,	43,	286,	rulle3_3_5,	"rulle3_3_5"},	/*42*/
    { 0,	0,	42,	0,	286,	rulle3_3_6,	"rulle3_3_6"},	/*43*/
    { 0,	45,	6,	54,	286,	rulle4,	"rulle4"},	/*44*/
    { 44,	46,	0,	0,	286,	rulle4_1,	"rulle4_1"},	/*45*/
    { 45,	0,	0,	47,	3,	rulle4_1_1,	"rulle4_1_1"},	/*46*/
    { 0,	0,	46,	48,	3,	rulle4_1_2,	"rulle4_1_2"},	/*47*/
    { 0,	0,	47,	49,	3,	rulle4_1_3,	"rulle4_1_3"},	/*48*/
    { 0,	0,	48,	50,	3,	rulle4_1_4,	"rulle4_1_4"},	/*49*/
    { 0,	0,	49,	51,	3,	rulle4_1_5,	"rulle4_1_5"},	/*50*/
    { 0,	0,	50,	52,	3,	rulle4_1_6,	"rulle4_1_6"},	/*51*/
    { 0,	0,	51,	53,	3,	rulle4_1_7,	"rulle4_1_7"},	/*52*/
    { 0,	0,	52,	0,	3,	rulle4_1_8,	"rulle4_1_8"},	/*53*/
    { 0,	55,	44,	76,	286,	rulle5,	"rulle5"},	/*54*/
    { 54,	56,	0,	58,	286,	rulle5_1,	"rulle5_1"},	/*55*/
    { 55,	0,	0,	57,	1,	rulle5_1_1,	"rulle5_1_1"},	/*56*/
    { 0,	0,	56,	0,	286,	rulle5_1_1_1,	"rulle5_1_1_1"},	/*57*/
    { 0,	59,	55,	61,	286,	rulle5_2,	"rulle5_2"},	/*58*/
    { 58,	0,	0,	60,	1,	rulle5_2_1,	"rulle5_2_1"},	/*59*/
    { 0,	0,	59,	0,	286,	rulle5_2_1_1,	"rulle5_2_1_1"},	/*60*/
    { 0,	62,	58,	64,	286,	rulle5_3,	"rulle5_3"},	/*61*/
    { 61,	0,	0,	63,	1,	rulle5_3_1,	"rulle5_3_1"},	/*62*/
    { 0,	0,	62,	0,	286,	rulle5_3_1_1,	"rulle5_3_1_1"},	/*63*/
    { 0,	65,	61,	67,	286,	rulle5_4,	"rulle5_4"},	/*64*/
    { 64,	0,	0,	66,	1,	rulle5_4_1,	"rulle5_4_1"},	/*65*/
    { 0,	0,	65,	0,	286,	rulle5_4_1_1,	"rulle5_4_1_1"},	/*66*/
    { 0,	68,	64,	70,	286,	rulle5_5,	"rulle5_5"},	/*67*/
    { 67,	0,	0,	69,	1,	rulle5_5_1,	"rulle5_5_1"},	/*68*/
    { 0,	0,	68,	0,	286,	rulle5_5_1_1,	"rulle5_5_1_1"},	/*69*/
    { 0,	71,	67,	0,	286,	rulle5_6,	"rulle5_6"},	/*70*/
    { 70,	0,	0,	72,	4,	rulle5_6_1,	"rulle5_6_1"},	/*71*/
    { 0,	0,	71,	73,	4,	rulle5_6_2,	"rulle5_6_2"},	/*72*/
    { 0,	0,	72,	74,	4,	rulle5_6_3,	"rulle5_6_3"},	/*73*/
    { 0,	0,	73,	75,	4,	rulle5_6_4,	"rulle5_6_4"},	/*74*/
    { 0,	0,	74,	0,	4,	rulle5_6_5,	"rulle5_6_5"},	/*75*/
    { 0,	285,	54,	2,	286,	rulle6,	"rulle6"},	/*76*/
    { 285,	78,	0,	103,	286,	rulle6_1,	"rulle6_1"},	/*77*/
    { 77,	79,	0,	83,	286,	rulle6_1_1,	"rulle6_1_1"},	/*78*/
    { 78,	80,	0,	82,	286,	rulle6_1_1_1,	"rulle6_1_1_1"},	/*79*/
    { 79,	0,	0,	81,	286,	rulle6_1_1_1_1,	"rulle6_1_1_1_1"},	/*80*/
    { 0,	0,	80,	0,	286,	rulle6_1_1_1_2,	"rulle6_1_1_1_2"},	/*81*/
    { 0,	0,	79,	0,	286,	rulle6_1_1_2,	"rulle6_1_1_2"},	/*82*/
    { 0,	84,	78,	88,	286,	rulle6_1_2,	"rulle6_1_2"},	/*83*/
    { 83,	85,	0,	87,	286,	rulle6_1_2_1,	"rulle6_1_2_1"},	/*84*/
    { 84,	0,	0,	86,	286,	rulle6_1_2_1_1,	"rulle6_1_2_1_1"},	/*85*/
    { 0,	0,	85,	0,	286,	rulle6_1_2_1_2,	"rulle6_1_2_1_2"},	/*86*/
    { 0,	0,	84,	0,	286,	rulle6_1_2_2,	"rulle6_1_2_2"},	/*87*/
    { 0,	89,	83,	93,	286,	rulle6_1_3,	"rulle6_1_3"},	/*88*/
    { 88,	90,	0,	92,	286,	rulle6_1_3_1,	"rulle6_1_3_1"},	/*89*/
    { 89,	0,	0,	91,	286,	rulle6_1_3_1_1,	"rulle6_1_3_1_1"},	/*90*/
    { 0,	0,	90,	0,	286,	rulle6_1_3_1_2,	"rulle6_1_3_1_2"},	/*91*/
    { 0,	0,	89,	0,	286,	rulle6_1_3_2,	"rulle6_1_3_2"},	/*92*/
    { 0,	94,	88,	98,	286,	rulle6_1_4,	"rulle6_1_4"},	/*93*/
    { 93,	95,	0,	97,	286,	rulle6_1_4_1,	"rulle6_1_4_1"},	/*94*/
    { 94,	0,	0,	96,	286,	rulle6_1_4_1_1,	"rulle6_1_4_1_1"},	/*95*/
    { 0,	0,	95,	0,	286,	rulle6_1_4_1_2,	"rulle6_1_4_1_2"},	/*96*/
    { 0,	0,	94,	0,	286,	rulle6_1_4_2,	"rulle6_1_4_2"},	/*97*/
    { 0,	99,	93,	0,	286,	rulle6_1_5,	"rulle6_1_5"},	/*98*/
    { 98,	100,	0,	102,	286,	rulle6_1_5_1,	"rulle6_1_5_1"},	/*99*/
    { 99,	0,	0,	101,	286,	rulle6_1_5_1_1,	"rulle6_1_5_1_1"},	/*100*/
    { 0,	0,	100,	0,	286,	rulle6_1_5_1_2,	"rulle6_1_5_1_2"},	/*101*/
    { 0,	0,	99,	0,	286,	rulle6_1_5_2,	"rulle6_1_5_2"},	/*102*/
    { 0,	104,	77,	129,	286,	rulle6_2,	"rulle6_2"},	/*103*/
    { 103,	105,	0,	109,	286,	rulle6_2_1,	"rulle6_2_1"},	/*104*/
    { 104,	106,	0,	108,	286,	rulle6_2_1_1,	"rulle6_2_1_1"},	/*105*/
    { 105,	0,	0,	107,	286,	rulle6_2_1_1_1,	"rulle6_2_1_1_1"},	/*106*/
    { 0,	0,	106,	0,	286,	rulle6_2_1_1_2,	"rulle6_2_1_1_2"},	/*107*/
    { 0,	0,	105,	0,	286,	rulle6_2_1_2,	"rulle6_2_1_2"},	/*108*/
    { 0,	110,	104,	114,	286,	rulle6_2_2,	"rulle6_2_2"},	/*109*/
    { 109,	111,	0,	113,	286,	rulle6_2_2_1,	"rulle6_2_2_1"},	/*110*/
    { 110,	0,	0,	112,	286,	rulle6_2_2_1_1,	"rulle6_2_2_1_1"},	/*111*/
    { 0,	0,	111,	0,	286,	rulle6_2_2_1_2,	"rulle6_2_2_1_2"},	/*112*/
    { 0,	0,	110,	0,	286,	rulle6_2_2_2,	"rulle6_2_2_2"},	/*113*/
    { 0,	115,	109,	119,	286,	rulle6_2_3,	"rulle6_2_3"},	/*114*/
    { 114,	116,	0,	118,	286,	rulle6_2_3_1,	"rulle6_2_3_1"},	/*115*/
    { 115,	0,	0,	117,	286,	rulle6_2_3_1_1,	"rulle6_2_3_1_1"},	/*116*/
    { 0,	0,	116,	0,	286,	rulle6_2_3_1_2,	"rulle6_2_3_1_2"},	/*117*/
    { 0,	0,	115,	0,	286,	rulle6_2_3_2,	"rulle6_2_3_2"},	/*118*/
    { 0,	120,	114,	124,	286,	rulle6_2_4,	"rulle6_2_4"},	/*119*/
    { 119,	121,	0,	123,	286,	rulle6_2_4_1,	"rulle6_2_4_1"},	/*120*/
    { 120,	0,	0,	122,	286,	rulle6_2_4_1_1,	"rulle6_2_4_1_1"},	/*121*/
    { 0,	0,	121,	0,	286,	rulle6_2_4_1_2,	"rulle6_2_4_1_2"},	/*122*/
    { 0,	0,	120,	0,	286,	rulle6_2_4_2,	"rulle6_2_4_2"},	/*123*/
    { 0,	125,	119,	0,	286,	rulle6_2_5,	"rulle6_2_5"},	/*124*/
    { 124,	126,	0,	128,	286,	rulle6_2_5_1,	"rulle6_2_5_1"},	/*125*/
    { 125,	0,	0,	127,	286,	rulle6_2_5_1_1,	"rulle6_2_5_1_1"},	/*126*/
    { 0,	0,	126,	0,	286,	rulle6_2_5_1_2,	"rulle6_2_5_1_2"},	/*127*/
    { 0,	0,	125,	0,	286,	rulle6_2_5_2,	"rulle6_2_5_2"},	/*128*/
    { 0,	130,	103,	155,	286,	rulle6_3,	"rulle6_3"},	/*129*/
    { 129,	131,	0,	135,	286,	rulle6_3_1,	"rulle6_3_1"},	/*130*/
    { 130,	132,	0,	134,	286,	rulle6_3_1_1,	"rulle6_3_1_1"},	/*131*/
    { 131,	0,	0,	133,	286,	rulle6_3_1_1_1,	"rulle6_3_1_1_1"},	/*132*/
    { 0,	0,	132,	0,	286,	rulle6_3_1_1_2,	"rulle6_3_1_1_2"},	/*133*/
    { 0,	0,	131,	0,	286,	rulle6_3_1_2,	"rulle6_3_1_2"},	/*134*/
    { 0,	136,	130,	140,	286,	rulle6_3_2,	"rulle6_3_2"},	/*135*/
    { 135,	137,	0,	139,	286,	rulle6_3_2_1,	"rulle6_3_2_1"},	/*136*/
    { 136,	0,	0,	138,	286,	rulle6_3_2_1_1,	"rulle6_3_2_1_1"},	/*137*/
    { 0,	0,	137,	0,	286,	rulle6_3_2_1_2,	"rulle6_3_2_1_2"},	/*138*/
    { 0,	0,	136,	0,	286,	rulle6_3_2_2,	"rulle6_3_2_2"},	/*139*/
    { 0,	141,	135,	145,	286,	rulle6_3_3,	"rulle6_3_3"},	/*140*/
    { 140,	142,	0,	144,	286,	rulle6_3_3_1,	"rulle6_3_3_1"},	/*141*/
    { 141,	0,	0,	143,	286,	rulle6_3_3_1_1,	"rulle6_3_3_1_1"},	/*142*/
    { 0,	0,	142,	0,	286,	rulle6_3_3_1_2,	"rulle6_3_3_1_2"},	/*143*/
    { 0,	0,	141,	0,	286,	rulle6_3_3_2,	"rulle6_3_3_2"},	/*144*/
    { 0,	146,	140,	150,	286,	rulle6_3_4,	"rulle6_3_4"},	/*145*/
    { 145,	147,	0,	149,	286,	rulle6_3_4_1,	"rulle6_3_4_1"},	/*146*/
    { 146,	0,	0,	148,	286,	rulle6_3_4_1_1,	"rulle6_3_4_1_1"},	/*147*/
    { 0,	0,	147,	0,	286,	rulle6_3_4_1_2,	"rulle6_3_4_1_2"},	/*148*/
    { 0,	0,	146,	0,	286,	rulle6_3_4_2,	"rulle6_3_4_2"},	/*149*/
    { 0,	151,	145,	0,	286,	rulle6_3_5,	"rulle6_3_5"},	/*150*/
    { 150,	152,	0,	154,	286,	rulle6_3_5_1,	"rulle6_3_5_1"},	/*151*/
    { 151,	0,	0,	153,	286,	rulle6_3_5_1_1,	"rulle6_3_5_1_1"},	/*152*/
    { 0,	0,	152,	0,	286,	rulle6_3_5_1_2,	"rulle6_3_5_1_2"},	/*153*/
    { 0,	0,	151,	0,	286,	rulle6_3_5_2,	"rulle6_3_5_2"},	/*154*/
    { 0,	156,	129,	181,	286,	rulle6_4,	"rulle6_4"},	/*155*/
    { 155,	157,	0,	161,	286,	rulle6_4_1,	"rulle6_4_1"},	/*156*/
    { 156,	158,	0,	160,	286,	rulle6_4_1_1,	"rulle6_4_1_1"},	/*157*/
    { 157,	0,	0,	159,	286,	rulle6_4_1_1_1,	"rulle6_4_1_1_1"},	/*158*/
    { 0,	0,	158,	0,	286,	rulle6_4_1_1_2,	"rulle6_4_1_1_2"},	/*159*/
    { 0,	0,	157,	0,	286,	rulle6_4_1_2,	"rulle6_4_1_2"},	/*160*/
    { 0,	162,	156,	166,	286,	rulle6_4_2,	"rulle6_4_2"},	/*161*/
    { 161,	163,	0,	165,	286,	rulle6_4_2_1,	"rulle6_4_2_1"},	/*162*/
    { 162,	0,	0,	164,	286,	rulle6_4_2_1_1,	"rulle6_4_2_1_1"},	/*163*/
    { 0,	0,	163,	0,	286,	rulle6_4_2_1_2,	"rulle6_4_2_1_2"},	/*164*/
    { 0,	0,	162,	0,	286,	rulle6_4_2_2,	"rulle6_4_2_2"},	/*165*/
    { 0,	167,	161,	171,	286,	rulle6_4_3,	"rulle6_4_3"},	/*166*/
    { 166,	168,	0,	170,	286,	rulle6_4_3_1,	"rulle6_4_3_1"},	/*167*/
    { 167,	0,	0,	169,	286,	rulle6_4_3_1_1,	"rulle6_4_3_1_1"},	/*168*/
    { 0,	0,	168,	0,	286,	rulle6_4_3_1_2,	"rulle6_4_3_1_2"},	/*169*/
    { 0,	0,	167,	0,	286,	rulle6_4_3_2,	"rulle6_4_3_2"},	/*170*/
    { 0,	172,	166,	176,	286,	rulle6_4_4,	"rulle6_4_4"},	/*171*/
    { 171,	173,	0,	175,	286,	rulle6_4_4_1,	"rulle6_4_4_1"},	/*172*/
    { 172,	0,	0,	174,	286,	rulle6_4_4_1_1,	"rulle6_4_4_1_1"},	/*173*/
    { 0,	0,	173,	0,	286,	rulle6_4_4_1_2,	"rulle6_4_4_1_2"},	/*174*/
    { 0,	0,	172,	0,	286,	rulle6_4_4_2,	"rulle6_4_4_2"},	/*175*/
    { 0,	177,	171,	0,	286,	rulle6_4_5,	"rulle6_4_5"},	/*176*/
    { 176,	178,	0,	180,	286,	rulle6_4_5_1,	"rulle6_4_5_1"},	/*177*/
    { 177,	0,	0,	179,	286,	rulle6_4_5_1_1,	"rulle6_4_5_1_1"},	/*178*/
    { 0,	0,	178,	0,	286,	rulle6_4_5_1_2,	"rulle6_4_5_1_2"},	/*179*/
    { 0,	0,	177,	0,	286,	rulle6_4_5_2,	"rulle6_4_5_2"},	/*180*/
    { 0,	182,	155,	207,	286,	rulle6_5,	"rulle6_5"},	/*181*/
    { 181,	183,	0,	187,	286,	rulle6_5_1,	"rulle6_5_1"},	/*182*/
    { 182,	184,	0,	186,	286,	rulle6_5_1_1,	"rulle6_5_1_1"},	/*183*/
    { 183,	0,	0,	185,	286,	rulle6_5_1_1_1,	"rulle6_5_1_1_1"},	/*184*/
    { 0,	0,	184,	0,	286,	rulle6_5_1_1_2,	"rulle6_5_1_1_2"},	/*185*/
    { 0,	0,	183,	0,	286,	rulle6_5_1_2,	"rulle6_5_1_2"},	/*186*/
    { 0,	188,	182,	192,	286,	rulle6_5_2,	"rulle6_5_2"},	/*187*/
    { 187,	189,	0,	191,	286,	rulle6_5_2_1,	"rulle6_5_2_1"},	/*188*/
    { 188,	0,	0,	190,	286,	rulle6_5_2_1_1,	"rulle6_5_2_1_1"},	/*189*/
    { 0,	0,	189,	0,	286,	rulle6_5_2_1_2,	"rulle6_5_2_1_2"},	/*190*/
    { 0,	0,	188,	0,	286,	rulle6_5_2_2,	"rulle6_5_2_2"},	/*191*/
    { 0,	193,	187,	197,	286,	rulle6_5_3,	"rulle6_5_3"},	/*192*/
    { 192,	194,	0,	196,	286,	rulle6_5_3_1,	"rulle6_5_3_1"},	/*193*/
    { 193,	0,	0,	195,	286,	rulle6_5_3_1_1,	"rulle6_5_3_1_1"},	/*194*/
    { 0,	0,	194,	0,	286,	rulle6_5_3_1_2,	"rulle6_5_3_1_2"},	/*195*/
    { 0,	0,	193,	0,	286,	rulle6_5_3_2,	"rulle6_5_3_2"},	/*196*/
    { 0,	198,	192,	202,	286,	rulle6_5_4,	"rulle6_5_4"},	/*197*/
    { 197,	199,	0,	201,	286,	rulle6_5_4_1,	"rulle6_5_4_1"},	/*198*/
    { 198,	0,	0,	200,	286,	rulle6_5_4_1_1,	"rulle6_5_4_1_1"},	/*199*/
    { 0,	0,	199,	0,	286,	rulle6_5_4_1_2,	"rulle6_5_4_1_2"},	/*200*/
    { 0,	0,	198,	0,	286,	rulle6_5_4_2,	"rulle6_5_4_2"},	/*201*/
    { 0,	203,	197,	0,	286,	rulle6_5_5,	"rulle6_5_5"},	/*202*/
    { 202,	204,	0,	206,	286,	rulle6_5_5_1,	"rulle6_5_5_1"},	/*203*/
    { 203,	0,	0,	205,	286,	rulle6_5_5_1_1,	"rulle6_5_5_1_1"},	/*204*/
    { 0,	0,	204,	0,	286,	rulle6_5_5_1_2,	"rulle6_5_5_1_2"},	/*205*/
    { 0,	0,	203,	0,	286,	rulle6_5_5_2,	"rulle6_5_5_2"},	/*206*/
    { 0,	208,	181,	233,	286,	rulle6_6,	"rulle6_6"},	/*207*/
    { 207,	209,	0,	213,	286,	rulle6_6_1,	"rulle6_6_1"},	/*208*/
    { 208,	210,	0,	212,	286,	rulle6_6_1_1,	"rulle6_6_1_1"},	/*209*/
    { 209,	0,	0,	211,	286,	rulle6_6_1_1_1,	"rulle6_6_1_1_1"},	/*210*/
    { 0,	0,	210,	0,	286,	rulle6_6_1_1_2,	"rulle6_6_1_1_2"},	/*211*/
    { 0,	0,	209,	0,	286,	rulle6_6_1_2,	"rulle6_6_1_2"},	/*212*/
    { 0,	214,	208,	218,	286,	rulle6_6_2,	"rulle6_6_2"},	/*213*/
    { 213,	215,	0,	217,	286,	rulle6_6_2_1,	"rulle6_6_2_1"},	/*214*/
    { 214,	0,	0,	216,	286,	rulle6_6_2_1_1,	"rulle6_6_2_1_1"},	/*215*/
    { 0,	0,	215,	0,	286,	rulle6_6_2_1_2,	"rulle6_6_2_1_2"},	/*216*/
    { 0,	0,	214,	0,	286,	rulle6_6_2_2,	"rulle6_6_2_2"},	/*217*/
    { 0,	219,	213,	223,	286,	rulle6_6_3,	"rulle6_6_3"},	/*218*/
    { 218,	220,	0,	222,	286,	rulle6_6_3_1,	"rulle6_6_3_1"},	/*219*/
    { 219,	0,	0,	221,	286,	rulle6_6_3_1_1,	"rulle6_6_3_1_1"},	/*220*/
    { 0,	0,	220,	0,	286,	rulle6_6_3_1_2,	"rulle6_6_3_1_2"},	/*221*/
    { 0,	0,	219,	0,	286,	rulle6_6_3_2,	"rulle6_6_3_2"},	/*222*/
    { 0,	224,	218,	228,	286,	rulle6_6_4,	"rulle6_6_4"},	/*223*/
    { 223,	225,	0,	227,	286,	rulle6_6_4_1,	"rulle6_6_4_1"},	/*224*/
    { 224,	0,	0,	226,	286,	rulle6_6_4_1_1,	"rulle6_6_4_1_1"},	/*225*/
    { 0,	0,	225,	0,	286,	rulle6_6_4_1_2,	"rulle6_6_4_1_2"},	/*226*/
    { 0,	0,	224,	0,	286,	rulle6_6_4_2,	"rulle6_6_4_2"},	/*227*/
    { 0,	229,	223,	0,	286,	rulle6_6_5,	"rulle6_6_5"},	/*228*/
    { 228,	230,	0,	232,	286,	rulle6_6_5_1,	"rulle6_6_5_1"},	/*229*/
    { 229,	0,	0,	231,	286,	rulle6_6_5_1_1,	"rulle6_6_5_1_1"},	/*230*/
    { 0,	0,	230,	0,	286,	rulle6_6_5_1_2,	"rulle6_6_5_1_2"},	/*231*/
    { 0,	0,	229,	0,	286,	rulle6_6_5_2,	"rulle6_6_5_2"},	/*232*/
    { 0,	234,	207,	259,	286,	rulle6_7,	"rulle6_7"},	/*233*/
    { 233,	235,	0,	239,	286,	rulle6_7_1,	"rulle6_7_1"},	/*234*/
    { 234,	236,	0,	238,	286,	rulle6_7_1_1,	"rulle6_7_1_1"},	/*235*/
    { 235,	0,	0,	237,	286,	rulle6_7_1_1_1,	"rulle6_7_1_1_1"},	/*236*/
    { 0,	0,	236,	0,	286,	rulle6_7_1_1_2,	"rulle6_7_1_1_2"},	/*237*/
    { 0,	0,	235,	0,	286,	rulle6_7_1_2,	"rulle6_7_1_2"},	/*238*/
    { 0,	240,	234,	244,	286,	rulle6_7_2,	"rulle6_7_2"},	/*239*/
    { 239,	241,	0,	243,	286,	rulle6_7_2_1,	"rulle6_7_2_1"},	/*240*/
    { 240,	0,	0,	242,	286,	rulle6_7_2_1_1,	"rulle6_7_2_1_1"},	/*241*/
    { 0,	0,	241,	0,	286,	rulle6_7_2_1_2,	"rulle6_7_2_1_2"},	/*242*/
    { 0,	0,	240,	0,	286,	rulle6_7_2_2,	"rulle6_7_2_2"},	/*243*/
    { 0,	245,	239,	249,	286,	rulle6_7_3,	"rulle6_7_3"},	/*244*/
    { 244,	246,	0,	248,	286,	rulle6_7_3_1,	"rulle6_7_3_1"},	/*245*/
    { 245,	0,	0,	247,	286,	rulle6_7_3_1_1,	"rulle6_7_3_1_1"},	/*246*/
    { 0,	0,	246,	0,	286,	rulle6_7_3_1_2,	"rulle6_7_3_1_2"},	/*247*/
    { 0,	0,	245,	0,	286,	rulle6_7_3_2,	"rulle6_7_3_2"},	/*248*/
    { 0,	250,	244,	254,	286,	rulle6_7_4,	"rulle6_7_4"},	/*249*/
    { 249,	251,	0,	253,	286,	rulle6_7_4_1,	"rulle6_7_4_1"},	/*250*/
    { 250,	0,	0,	252,	286,	rulle6_7_4_1_1,	"rulle6_7_4_1_1"},	/*251*/
    { 0,	0,	251,	0,	286,	rulle6_7_4_1_2,	"rulle6_7_4_1_2"},	/*252*/
    { 0,	0,	250,	0,	286,	rulle6_7_4_2,	"rulle6_7_4_2"},	/*253*/
    { 0,	255,	249,	0,	286,	rulle6_7_5,	"rulle6_7_5"},	/*254*/
    { 254,	256,	0,	258,	286,	rulle6_7_5_1,	"rulle6_7_5_1"},	/*255*/
    { 255,	0,	0,	257,	286,	rulle6_7_5_1_1,	"rulle6_7_5_1_1"},	/*256*/
    { 0,	0,	256,	0,	286,	rulle6_7_5_1_2,	"rulle6_7_5_1_2"},	/*257*/
    { 0,	0,	255,	0,	286,	rulle6_7_5_2,	"rulle6_7_5_2"},	/*258*/
    { 0,	260,	233,	0,	286,	rulle6_8,	"rulle6_8"},	/*259*/
    { 259,	261,	0,	265,	286,	rulle6_8_1,	"rulle6_8_1"},	/*260*/
    { 260,	262,	0,	264,	286,	rulle6_8_1_1,	"rulle6_8_1_1"},	/*261*/
    { 261,	0,	0,	263,	286,	rulle6_8_1_1_1,	"rulle6_8_1_1_1"},	/*262*/
    { 0,	0,	262,	0,	286,	rulle6_8_1_1_2,	"rulle6_8_1_1_2"},	/*263*/
    { 0,	0,	261,	0,	286,	rulle6_8_1_2,	"rulle6_8_1_2"},	/*264*/
    { 0,	266,	260,	270,	286,	rulle6_8_2,	"rulle6_8_2"},	/*265*/
    { 265,	267,	0,	269,	286,	rulle6_8_2_1,	"rulle6_8_2_1"},	/*266*/
    { 266,	0,	0,	268,	286,	rulle6_8_2_1_1,	"rulle6_8_2_1_1"},	/*267*/
    { 0,	0,	267,	0,	286,	rulle6_8_2_1_2,	"rulle6_8_2_1_2"},	/*268*/
    { 0,	0,	266,	0,	286,	rulle6_8_2_2,	"rulle6_8_2_2"},	/*269*/
    { 0,	271,	265,	275,	286,	rulle6_8_3,	"rulle6_8_3"},	/*270*/
    { 270,	272,	0,	274,	286,	rulle6_8_3_1,	"rulle6_8_3_1"},	/*271*/
    { 271,	0,	0,	273,	286,	rulle6_8_3_1_1,	"rulle6_8_3_1_1"},	/*272*/
    { 0,	0,	272,	0,	286,	rulle6_8_3_1_2,	"rulle6_8_3_1_2"},	/*273*/
    { 0,	0,	271,	0,	286,	rulle6_8_3_2,	"rulle6_8_3_2"},	/*274*/
    { 0,	276,	270,	280,	286,	rulle6_8_4,	"rulle6_8_4"},	/*275*/
    { 275,	277,	0,	279,	286,	rulle6_8_4_1,	"rulle6_8_4_1"},	/*276*/
    { 276,	0,	0,	278,	286,	rulle6_8_4_1_1,	"rulle6_8_4_1_1"},	/*277*/
    { 0,	0,	277,	0,	286,	rulle6_8_4_1_2,	"rulle6_8_4_1_2"},	/*278*/
    { 0,	0,	276,	0,	286,	rulle6_8_4_2,	"rulle6_8_4_2"},	/*279*/
    { 0,	281,	275,	0,	286,	rulle6_8_5,	"rulle6_8_5"},	/*280*/
    { 280,	282,	0,	284,	286,	rulle6_8_5_1,	"rulle6_8_5_1"},	/*281*/
    { 281,	0,	0,	283,	286,	rulle6_8_5_1_1,	"rulle6_8_5_1_1"},	/*282*/
    { 0,	0,	282,	0,	286,	rulle6_8_5_1_2,	"rulle6_8_5_1_2"},	/*283*/
    { 0,	0,	281,	0,	286,	rulle6_8_5_2,	"rulle6_8_5_2"},	/*284*/
    { 76,	77,	0,	0,	286,	rulle6__1,	"rulle6__1"},	/*285*/
    { 0,	0,	0,	0,	-1,	sc_h_1,	"sc_h_1"},	/*286*/
    { 2,	0,	0,	0,	0,	stalltid,	"stalltid"},	/*287*/
    { 0,	0,	0,	5,	286,	welcome,	"welcome"},	/*288*/
    { 0, 0, 0, 0, 0, 0}
};
int _ROOT_SCREEN_POINTER = 288;
