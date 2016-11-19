/*
!  file main_symTable.h generated from main.idc at Tue Oct 19 16:25:15 1993
!  by translator IDCC, version 1.60
*/
#define Ag31 (int) 7
#define Ag33 (int) 8
#define CLOSED (int) 0
#define EJ_LARM (int) 0
#define ENTREPRENAD (int) 3
#define EXTRA (int) 5
#define FALSE (int) 0
#define HYRES (int) 2
#define Kg32 (int) 3
#define Kg34 (int) 4
#define Kg36 (int) 5
#define Kg38 (int) 6
#define LARM (int) 1
#define MAX (double) 1
#define MIN (double) 0
#define Mg39 (int) 2
#define Nat_Modul (int) 1
#define OPEN (int) 1
#define POST (int) 4
#define SERVICE (int) 1
#define START (int) 1
#define STOP (int) 0
#define Sv28 (int) 1
#define TRUE (int) 1
#define NO_OF_CAL_ENTRIES 10
typedef struct {
  unsigned short day[NO_OF_CAL_ENTRIES];
  unsigned short stopday[NO_OF_CAL_ENTRIES];
  unsigned char  color[NO_OF_CAL_ENTRIES];
  unsigned short start[NO_OF_CAL_ENTRIES];
  unsigned short stop[NO_OF_CAL_ENTRIES];
} CALENDAR;
struct _remote {
  long timeStamp;
};
struct _datamodule {
    int    Access;
    int    Ag31_Aktiv;
    int    Ag31_Larm_Kod;
    int    Ag31_auto;
    int    Ag31_open;
    int    Ag31_open_old;
    int    Ag33_Aktiv;
    int    Ag33_Larm_Kod;
    int    Ag33_auto;
    int    Ag33_open;
    int    Ag33_open_old;
    CALENDAR Cal_EntreKod_Ag31;
    CALENDAR Cal_EntreKod_Ag33;
    CALENDAR Cal_EntreKod_Kg32;
    CALENDAR Cal_EntreKod_Kg34;
    CALENDAR Cal_EntreKod_Kg36;
    CALENDAR Cal_EntreKod_Kg38;
    CALENDAR Cal_EntreKod_Mg39;
    CALENDAR Cal_EntreKod_Sv28;
    CALENDAR Cal_ExtraKod_Ag31;
    CALENDAR Cal_ExtraKod_Ag33;
    CALENDAR Cal_ExtraKod_Kg32;
    CALENDAR Cal_ExtraKod_Kg34;
    CALENDAR Cal_ExtraKod_Kg36;
    CALENDAR Cal_ExtraKod_Kg38;
    CALENDAR Cal_ExtraKod_Mg39;
    CALENDAR Cal_ExtraKod_Sv28;
    CALENDAR Cal_HyresKod_Ag31;
    CALENDAR Cal_HyresKod_Ag33;
    CALENDAR Cal_HyresKod_Kg32;
    CALENDAR Cal_HyresKod_Kg34;
    CALENDAR Cal_HyresKod_Kg36;
    CALENDAR Cal_HyresKod_Kg38;
    CALENDAR Cal_HyresKod_Mg39;
    CALENDAR Cal_HyresKod_Sv28;
    CALENDAR Cal_PostKod_Ag31;
    CALENDAR Cal_PostKod_Ag33;
    CALENDAR Cal_PostKod_Kg32;
    CALENDAR Cal_PostKod_Kg34;
    CALENDAR Cal_PostKod_Kg36;
    CALENDAR Cal_PostKod_Kg38;
    CALENDAR Cal_PostKod_Mg39;
    CALENDAR Cal_PostKod_Sv28;
    CALENDAR Cal_ServiceKod_Ag31;
    CALENDAR Cal_ServiceKod_Ag33;
    CALENDAR Cal_ServiceKod_Kg32;
    CALENDAR Cal_ServiceKod_Kg34;
    CALENDAR Cal_ServiceKod_Kg36;
    CALENDAR Cal_ServiceKod_Kg38;
    CALENDAR Cal_ServiceKod_Mg39;
    CALENDAR Cal_ServiceKod_Sv28;
    int    Day;
    int    Daycolor;
    int    Dorr;
    int    Duclarm;
    double Hog_e_KM1_MQ11;
    double Hog_e_KM1_MQ12;
    double Hog_energi_MQ21;
    double Hog_energi_MQ22;
    double Hog_energi_MQ23;
    int    Hoglast;
    int    Hoglast_Tim_fran;
    int    Hoglast_Tim_till;
    int    Hour;
    double KB2_Eff;
    struct _remote _remoterVar_001;
    double KB2_Max_W_SH;
    struct _remote _remoterVar_002;
    double KB2_Max_W_SL;
    struct _remote _remoterVar_003;
    double KB2_Max_W_VH;
    struct _remote _remoterVar_004;
    double KB2_Max_W_VL;
    int    KB2_Oka_sp;
    double KB2_Old_MQ21;
    struct _remote _remoterVar_005;
    int    KB2_Tid;
    double KB2_diff;
    double KB2_energi_MQ21;
    double KB2_realtid;
    int    KB2_tid1;
    int    KB2_tid2;
    int    KM1_MQ12;
    int    Kg32_Aktiv;
    int    Kg32_Larm_Kod;
    int    Kg32_auto;
    int    Kg32_open;
    int    Kg32_open_old;
    int    Kg34_Aktiv;
    int    Kg34_Larm_Kod;
    int    Kg34_auto;
    int    Kg34_open;
    int    Kg34_open_old;
    int    Kg36_Aktiv;
    int    Kg36_Larm_Kod;
    int    Kg36_auto;
    int    Kg36_open;
    int    Kg36_open_old;
    int    Kg38_Aktiv;
    int    Kg38_Larm_Kod;
    int    Kg38_auto;
    int    Kg38_open;
    int    Kg38_open_old;
    int    Kommlarm_enable;
    int    Kort_3;
    int    Kort_6;
    int    Last_Som_Hog_MQ11;
    int    Last_Som_Hog_MQ12;
    int    Last_Som_Hog_MQ21;
    int    Last_Som_Hog_MQ22;
    int    Last_Som_Hog_MQ23;
    int    Last_Som_Log_MQ11;
    int    Last_Som_Log_MQ12;
    int    Last_Som_Log_MQ21;
    int    Last_Som_Log_MQ22;
    int    Last_Som_Log_MQ23;
    int    Last_Vin_Hog_MQ11;
    int    Last_Vin_Hog_MQ12;
    int    Last_Vin_Hog_MQ21;
    int    Last_Vin_Hog_MQ22;
    int    Last_Vin_Hog_MQ23;
    int    Last_Vin_Log_MQ11;
    int    Last_Vin_Log_MQ12;
    int    Last_Vin_Log_MQ21;
    int    Last_Vin_Log_MQ22;
    int    Last_Vin_Log_MQ23;
    double Log_e_KM1_MQ11;
    double Log_e_KM1_MQ12;
    double Log_energi_MQ21;
    double Log_energi_MQ22;
    double Log_energi_MQ23;
    int    MQ22;
    int    MQ23;
    int    Man_Belysning;
    int    Mg39_Aktiv;
    int    Mg39_Larm_Kod;
    int    Mg39_auto;
    int    Mg39_open;
    int    Mg39_open_old;
    int    Minute;
    int    Monad_Dag;
    int    Month;
    int    Nu_Dag_EntreKod_Ag31;
    int    Nu_Dag_EntreKod_Ag33;
    int    Nu_Dag_EntreKod_Kg32;
    int    Nu_Dag_EntreKod_Kg34;
    int    Nu_Dag_EntreKod_Kg36;
    int    Nu_Dag_EntreKod_Kg38;
    int    Nu_Dag_EntreKod_Mg39;
    int    Nu_Dag_EntreKod_Sv28;
    int    Nu_Dag_ExtraKod_Ag31;
    int    Nu_Dag_ExtraKod_Ag33;
    int    Nu_Dag_ExtraKod_Kg32;
    int    Nu_Dag_ExtraKod_Kg34;
    int    Nu_Dag_ExtraKod_Kg36;
    int    Nu_Dag_ExtraKod_Kg38;
    int    Nu_Dag_ExtraKod_Mg39;
    int    Nu_Dag_ExtraKod_Sv28;
    int    Nu_Dag_HyresKod_Ag31;
    int    Nu_Dag_HyresKod_Ag33;
    int    Nu_Dag_HyresKod_Kg32;
    int    Nu_Dag_HyresKod_Kg34;
    int    Nu_Dag_HyresKod_Kg36;
    int    Nu_Dag_HyresKod_Kg38;
    int    Nu_Dag_HyresKod_Mg39;
    int    Nu_Dag_HyresKod_Sv28;
    int    Nu_Dag_PostKod_Ag31;
    int    Nu_Dag_PostKod_Ag33;
    int    Nu_Dag_PostKod_Kg32;
    int    Nu_Dag_PostKod_Kg34;
    int    Nu_Dag_PostKod_Kg36;
    int    Nu_Dag_PostKod_Kg38;
    int    Nu_Dag_PostKod_Mg39;
    int    Nu_Dag_PostKod_Sv28;
    int    Nu_Dag_ServiceKod_Ag31;
    int    Nu_Dag_ServiceKod_Ag33;
    int    Nu_Dag_ServiceKod_Kg32;
    int    Nu_Dag_ServiceKod_Kg34;
    int    Nu_Dag_ServiceKod_Kg36;
    int    Nu_Dag_ServiceKod_Kg38;
    int    Nu_Dag_ServiceKod_Mg39;
    int    Nu_Dag_ServiceKod_Sv28;
    int    Nu_EntreKod_Ag31;
    int    Nu_EntreKod_Ag33;
    int    Nu_EntreKod_Kg32;
    int    Nu_EntreKod_Kg34;
    int    Nu_EntreKod_Kg36;
    int    Nu_EntreKod_Kg38;
    int    Nu_EntreKod_Mg39;
    int    Nu_EntreKod_Sv28;
    int    Nu_ExtraKod_Ag31;
    int    Nu_ExtraKod_Ag33;
    int    Nu_ExtraKod_Kg32;
    int    Nu_ExtraKod_Kg34;
    int    Nu_ExtraKod_Kg36;
    int    Nu_ExtraKod_Kg38;
    int    Nu_ExtraKod_Mg39;
    int    Nu_ExtraKod_Sv28;
    int    Nu_HyresKod_Ag31;
    int    Nu_HyresKod_Ag33;
    int    Nu_HyresKod_Kg32;
    int    Nu_HyresKod_Kg34;
    int    Nu_HyresKod_Kg36;
    int    Nu_HyresKod_Kg38;
    int    Nu_HyresKod_Mg39;
    int    Nu_HyresKod_Sv28;
    int    Nu_PostKod_Ag31;
    int    Nu_PostKod_Ag33;
    int    Nu_PostKod_Kg32;
    int    Nu_PostKod_Kg34;
    int    Nu_PostKod_Kg36;
    int    Nu_PostKod_Kg38;
    int    Nu_PostKod_Mg39;
    int    Nu_PostKod_Sv28;
    int    Nu_ServiceKod_Ag31;
    int    Nu_ServiceKod_Ag33;
    int    Nu_ServiceKod_Kg32;
    int    Nu_ServiceKod_Kg34;
    int    Nu_ServiceKod_Kg36;
    int    Nu_ServiceKod_Kg38;
    int    Nu_ServiceKod_Mg39;
    int    Nu_ServiceKod_Sv28;
    int    Ny_Dag_EntreKod_Ag31;
    int    Ny_Dag_EntreKod_Ag33;
    int    Ny_Dag_EntreKod_Kg32;
    int    Ny_Dag_EntreKod_Kg34;
    int    Ny_Dag_EntreKod_Kg36;
    int    Ny_Dag_EntreKod_Kg38;
    int    Ny_Dag_EntreKod_Mg39;
    int    Ny_Dag_EntreKod_Sv28;
    int    Ny_Dag_ExtraKod_Ag31;
    int    Ny_Dag_ExtraKod_Ag33;
    int    Ny_Dag_ExtraKod_Kg32;
    int    Ny_Dag_ExtraKod_Kg34;
    int    Ny_Dag_ExtraKod_Kg36;
    int    Ny_Dag_ExtraKod_Kg38;
    int    Ny_Dag_ExtraKod_Mg39;
    int    Ny_Dag_ExtraKod_Sv28;
    int    Ny_Dag_HyresKod_Ag31;
    int    Ny_Dag_HyresKod_Ag33;
    int    Ny_Dag_HyresKod_Kg32;
    int    Ny_Dag_HyresKod_Kg34;
    int    Ny_Dag_HyresKod_Kg36;
    int    Ny_Dag_HyresKod_Kg38;
    int    Ny_Dag_HyresKod_Mg39;
    int    Ny_Dag_HyresKod_Sv28;
    int    Ny_Dag_PostKod_Ag31;
    int    Ny_Dag_PostKod_Ag33;
    int    Ny_Dag_PostKod_Kg32;
    int    Ny_Dag_PostKod_Kg34;
    int    Ny_Dag_PostKod_Kg36;
    int    Ny_Dag_PostKod_Kg38;
    int    Ny_Dag_PostKod_Mg39;
    int    Ny_Dag_PostKod_Sv28;
    int    Ny_Dag_ServiceKod_Ag31;
    int    Ny_Dag_ServiceKod_Ag33;
    int    Ny_Dag_ServiceKod_Kg32;
    int    Ny_Dag_ServiceKod_Kg34;
    int    Ny_Dag_ServiceKod_Kg36;
    int    Ny_Dag_ServiceKod_Kg38;
    int    Ny_Dag_ServiceKod_Mg39;
    int    Ny_Dag_ServiceKod_Sv28;
    int    Ny_EntreKod_Ag31;
    int    Ny_EntreKod_Ag33;
    int    Ny_EntreKod_Kg32;
    int    Ny_EntreKod_Kg34;
    int    Ny_EntreKod_Kg36;
    int    Ny_EntreKod_Kg38;
    int    Ny_EntreKod_Mg39;
    int    Ny_EntreKod_Sv28;
    int    Ny_ExtraKod_Ag31;
    int    Ny_ExtraKod_Ag33;
    int    Ny_ExtraKod_Kg32;
    int    Ny_ExtraKod_Kg34;
    int    Ny_ExtraKod_Kg36;
    int    Ny_ExtraKod_Kg38;
    int    Ny_ExtraKod_Mg39;
    int    Ny_ExtraKod_Sv28;
    int    Ny_HyresKod_Ag31;
    int    Ny_HyresKod_Ag33;
    int    Ny_HyresKod_Kg32;
    int    Ny_HyresKod_Kg34;
    int    Ny_HyresKod_Kg36;
    int    Ny_HyresKod_Kg38;
    int    Ny_HyresKod_Mg39;
    int    Ny_HyresKod_Sv28;
    int    Ny_PostKod_Ag31;
    int    Ny_PostKod_Ag33;
    int    Ny_PostKod_Kg32;
    int    Ny_PostKod_Kg34;
    int    Ny_PostKod_Kg36;
    int    Ny_PostKod_Kg38;
    int    Ny_PostKod_Mg39;
    int    Ny_PostKod_Sv28;
    int    Ny_ServiceKod_Ag31;
    int    Ny_ServiceKod_Ag33;
    int    Ny_ServiceKod_Kg32;
    int    Ny_ServiceKod_Kg34;
    int    Ny_ServiceKod_Kg36;
    int    Ny_ServiceKod_Kg38;
    int    Ny_ServiceKod_Mg39;
    int    Ny_ServiceKod_Sv28;
    int    Oldmin;
    int    Port_Larm_min;
    int    Port_kod_ok;
    int    Port_kods_kod;
    int    Prog_Dag_EntreKod_Ag31;
    int    Prog_Dag_EntreKod_Ag33;
    int    Prog_Dag_EntreKod_Kg32;
    int    Prog_Dag_EntreKod_Kg34;
    int    Prog_Dag_EntreKod_Kg36;
    int    Prog_Dag_EntreKod_Kg38;
    int    Prog_Dag_EntreKod_Mg39;
    int    Prog_Dag_EntreKod_Sv28;
    int    Prog_Dag_ExtraKod_Ag31;
    int    Prog_Dag_ExtraKod_Ag33;
    int    Prog_Dag_ExtraKod_Kg32;
    int    Prog_Dag_ExtraKod_Kg34;
    int    Prog_Dag_ExtraKod_Kg36;
    int    Prog_Dag_ExtraKod_Kg38;
    int    Prog_Dag_ExtraKod_Mg39;
    int    Prog_Dag_ExtraKod_Sv28;
    int    Prog_Dag_HyresKod_Ag31;
    int    Prog_Dag_HyresKod_Ag33;
    int    Prog_Dag_HyresKod_Kg32;
    int    Prog_Dag_HyresKod_Kg34;
    int    Prog_Dag_HyresKod_Kg36;
    int    Prog_Dag_HyresKod_Kg38;
    int    Prog_Dag_HyresKod_Mg39;
    int    Prog_Dag_HyresKod_Sv28;
    int    Prog_Dag_PostKod_Ag31;
    int    Prog_Dag_PostKod_Ag33;
    int    Prog_Dag_PostKod_Kg32;
    int    Prog_Dag_PostKod_Kg34;
    int    Prog_Dag_PostKod_Kg36;
    int    Prog_Dag_PostKod_Kg38;
    int    Prog_Dag_PostKod_Mg39;
    int    Prog_Dag_PostKod_Sv28;
    int    Prog_Dag_ServiceKod_Ag31;
    int    Prog_Dag_ServiceKod_Ag33;
    int    Prog_Dag_ServiceKod_Kg32;
    int    Prog_Dag_ServiceKod_Kg34;
    int    Prog_Dag_ServiceKod_Kg36;
    int    Prog_Dag_ServiceKod_Kg38;
    int    Prog_Dag_ServiceKod_Mg39;
    int    Prog_Dag_ServiceKod_Sv28;
    int    Prog_EntreKod_Ag31;
    int    Prog_EntreKod_Ag33;
    int    Prog_EntreKod_Kg32;
    int    Prog_EntreKod_Kg34;
    int    Prog_EntreKod_Kg36;
    int    Prog_EntreKod_Kg38;
    int    Prog_EntreKod_Mg39;
    int    Prog_EntreKod_Sv28;
    int    Prog_ExtraKod_Ag31;
    int    Prog_ExtraKod_Ag33;
    int    Prog_ExtraKod_Kg32;
    int    Prog_ExtraKod_Kg34;
    int    Prog_ExtraKod_Kg36;
    int    Prog_ExtraKod_Kg38;
    int    Prog_ExtraKod_Mg39;
    int    Prog_ExtraKod_Sv28;
    int    Prog_HyresKod_Ag31;
    int    Prog_HyresKod_Ag33;
    int    Prog_HyresKod_Kg32;
    int    Prog_HyresKod_Kg34;
    int    Prog_HyresKod_Kg36;
    int    Prog_HyresKod_Kg38;
    int    Prog_HyresKod_Mg39;
    int    Prog_HyresKod_Sv28;
    int    Prog_PostKod_Ag31;
    int    Prog_PostKod_Ag33;
    int    Prog_PostKod_Kg32;
    int    Prog_PostKod_Kg34;
    int    Prog_PostKod_Kg36;
    int    Prog_PostKod_Kg38;
    int    Prog_PostKod_Mg39;
    int    Prog_PostKod_Sv28;
    int    Prog_ServiceKod_Ag31;
    int    Prog_ServiceKod_Ag33;
    int    Prog_ServiceKod_Kg32;
    int    Prog_ServiceKod_Kg34;
    int    Prog_ServiceKod_Kg36;
    int    Prog_ServiceKod_Kg38;
    int    Prog_ServiceKod_Mg39;
    int    Prog_ServiceKod_Sv28;
    int    Pulskort_4_enable;
    int    Relay;
    int    Second;
    double Som_Hog_e_KM1_MQ11;
    double Som_Hog_e_KM1_MQ12;
    double Som_Hog_energi_MQ21;
    double Som_Hog_energi_MQ22;
    double Som_Hog_energi_MQ23;
    double Som_Log_e_KM1_MQ11;
    double Som_Log_e_KM1_MQ12;
    double Som_Log_energi_MQ21;
    double Som_Log_energi_MQ22;
    double Som_Log_energi_MQ23;
    int    Sommar;
    int    Stat_Hour;
    int    Stat_Som_Hog_MQ11;
    int    Stat_Som_Hog_MQ12;
    int    Stat_Som_Hog_MQ21;
    int    Stat_Som_Hog_MQ22;
    int    Stat_Som_Hog_MQ23;
    int    Stat_Som_Log_MQ11;
    int    Stat_Som_Log_MQ12;
    int    Stat_Som_Log_MQ21;
    int    Stat_Som_Log_MQ22;
    int    Stat_Som_Log_MQ23;
    int    Stat_Vin_Hog_MQ11;
    int    Stat_Vin_Hog_MQ12;
    int    Stat_Vin_Hog_MQ21;
    int    Stat_Vin_Hog_MQ22;
    int    Stat_Vin_Hog_MQ23;
    int    Stat_Vin_Log_MQ11;
    int    Stat_Vin_Log_MQ12;
    int    Stat_Vin_Log_MQ21;
    int    Stat_Vin_Log_MQ22;
    int    Stat_Vin_Log_MQ23;
    int    Sv28_Aktiv;
    int    Sv28_Larm_Kod;
    int    Sv28_auto;
    int    Sv28_open;
    int    Sv28_open_old;
    int    Tid1;
    CALENDAR Tid1_Kalender;
    int    Tid1_hand;
    int    Tid2;
    CALENDAR Tid2_Kalender;
    int    Tid2_hand;
    int    Tid3;
    CALENDAR Tid3_Kalender;
    int    Tid3_hand;
    int    Tid4;
    CALENDAR Tid4_Kalender;
    int    Tid4_hand;
    int    Today;
    struct _remote _remoterVar_006;
    double Utetemp;
    int    VI_hiss1;
    int    VI_hiss2;
    int    VI_hiss3;
    int    VI_hiss4;
    int    VI_hiss5;
    int    VI_hiss6;
    int    VI_hiss7;
    int    VI_hiss8;
    int    Vi_Set_Day;
    int    Vi_Set_Hour;
    int    Vi_Set_Minute;
    int    Vi_Set_Month;
    int    Vi_Set_Year;
    int    Vin_Dag_fran;
    int    Vin_Dag_till;
    double Vin_Hog_e_KM1_MQ11;
    double Vin_Hog_e_KM1_MQ12;
    double Vin_Hog_energi_MQ21;
    double Vin_Hog_energi_MQ22;
    double Vin_Hog_energi_MQ23;
    double Vin_Log_e_KM1_MQ11;
    double Vin_Log_e_KM1_MQ12;
    double Vin_Log_energi_MQ21;
    double Vin_Log_energi_MQ22;
    double Vin_Log_energi_MQ23;
    int    Vin_Mon_Dag_fran;
    int    Vin_Mon_Dag_till;
    int    Vin_Mon_fran;
    int    Vin_Mon_till;
    int    Vinlast;
    int    Weekday;
    int    Weekno;
    int    Weekyear;
    int    Year;
    int    (*account)();
    int    (*alarm_active)();
    int    (*battLow)();
    int    (*blockSNPKkeyboard)();
    int    (*bypassSNPKrelay)();
    int    (*calActiveIn)();
    int    (*checkCalendarLevel)();
    int    (*clearCode)();
    int    (*display)();
    double energi_KM1_MQ11;
    double energi_KM1_MQ12;
    double energi_MQ21;
    double energi_MQ22;
    double energi_MQ23;
    int    energim_KM1_MQ11;
    int    energim_KM1_MQ12;
    int    energim_MQ21;
    int    energim_MQ22;
    int    energim_MQ23;
    double energiskal_KM1_MQ11;
    double energiskal_KM1_MQ12;
    double energiskal_MQ21;
    double energiskal_MQ22;
    double energiskal_MQ23;
    double    (*enter)();
    int    (*enter_calendar)();
    int    (*enter_kurva)();
    double    (*exp)();
    double    (*fabs)();
    int    (*getAlarmSNPK)();
    int    (*getRelTime)();
    int    (*getTime)();
    int    globalAlarmMask_A;
    int    globalAlarmMask_B;
    int    globalAlarmMask_C;
    int    globalAlarmMask_D;
    int    (*isTimerInit)();
    CALENDAR kalender_Belysning;
    int    (*key)();
    double    (*kurva)();
    int    larmmin1;
    int    larmmin2;
    int    larmmin3;
    int    larmmin4;
    int    larmmin5;
    int    larmmin6;
    int    larmmin7;
    int    larmmin8;
    int    level;
    int    level1;
    int    level2;
    int    level3;
    int    level4;
    int    level5;
    int    masterNo;
    int    noOfAck_A;
    int    noOfAck_B;
    int    noOfAck_C;
    int    noOfAck_D;
    int    noOfNak_A;
    int    noOfNak_B;
    int    noOfNak_C;
    int    noOfNak_D;
    int    nodeEnable[50];
    int    nodeUp[50];
    int    (*optoPower)();
    int    overflow;
    int    (*password)();
    double    (*pid)();
    double    (*pow)();
    int    powerup;
    int    service;
    int    serviceLed;
    int    (*setAlarmSNPK)();
    int    (*setCode)();
    int    (*setSafeCode)();
    int    (*setTime)();
    int    (*set_time)();
    int    (*sleep)();
    double    (*sqrt)();
    int    summalarmA_LA1;
    int    summalarmB_LA1;
    int    summalarm_hiss1;
    int    summalarm_hiss2;
    int    summalarm_hiss3;
    int    summalarm_hiss4;
    int    summalarm_hiss5;
    int    summalarm_hiss6;
    int    summalarm_hiss7;
    int    summalarm_hiss8;
    int    summerStart;
    int    telephonePC[8];
    int    telephonePC_area[8];
    int    tidkanal_Belysning;
    int    (*timerCancel)();
    int    (*timerInit)();
    int    (*timerReady)();
    int    (*tsleep)();
    int    (*tvpump)();
    int    winterStart;
    int    (*xxxswdctime)();
    char  Access_lock;
    char  Ag31_Aktiv_lock;
    char  Ag31_Larm_Kod_lock;
    char  Ag31_auto_lock;
    char  Ag31_open_lock;
    char  Ag31_open_old_lock;
    char  Ag33_Aktiv_lock;
    char  Ag33_Larm_Kod_lock;
    char  Ag33_auto_lock;
    char  Ag33_open_lock;
    char  Ag33_open_old_lock;
    char  Cal_EntreKod_Ag31_lock;
    char  Cal_EntreKod_Ag33_lock;
    char  Cal_EntreKod_Kg32_lock;
    char  Cal_EntreKod_Kg34_lock;
    char  Cal_EntreKod_Kg36_lock;
    char  Cal_EntreKod_Kg38_lock;
    char  Cal_EntreKod_Mg39_lock;
    char  Cal_EntreKod_Sv28_lock;
    char  Cal_ExtraKod_Ag31_lock;
    char  Cal_ExtraKod_Ag33_lock;
    char  Cal_ExtraKod_Kg32_lock;
    char  Cal_ExtraKod_Kg34_lock;
    char  Cal_ExtraKod_Kg36_lock;
    char  Cal_ExtraKod_Kg38_lock;
    char  Cal_ExtraKod_Mg39_lock;
    char  Cal_ExtraKod_Sv28_lock;
    char  Cal_HyresKod_Ag31_lock;
    char  Cal_HyresKod_Ag33_lock;
    char  Cal_HyresKod_Kg32_lock;
    char  Cal_HyresKod_Kg34_lock;
    char  Cal_HyresKod_Kg36_lock;
    char  Cal_HyresKod_Kg38_lock;
    char  Cal_HyresKod_Mg39_lock;
    char  Cal_HyresKod_Sv28_lock;
    char  Cal_PostKod_Ag31_lock;
    char  Cal_PostKod_Ag33_lock;
    char  Cal_PostKod_Kg32_lock;
    char  Cal_PostKod_Kg34_lock;
    char  Cal_PostKod_Kg36_lock;
    char  Cal_PostKod_Kg38_lock;
    char  Cal_PostKod_Mg39_lock;
    char  Cal_PostKod_Sv28_lock;
    char  Cal_ServiceKod_Ag31_lock;
    char  Cal_ServiceKod_Ag33_lock;
    char  Cal_ServiceKod_Kg32_lock;
    char  Cal_ServiceKod_Kg34_lock;
    char  Cal_ServiceKod_Kg36_lock;
    char  Cal_ServiceKod_Kg38_lock;
    char  Cal_ServiceKod_Mg39_lock;
    char  Cal_ServiceKod_Sv28_lock;
    char  Day_lock;
    char  Daycolor_lock;
    char  Dorr_lock;
    char  Duclarm_lock;
    char  Hog_e_KM1_MQ11_lock;
    char  Hog_e_KM1_MQ12_lock;
    char  Hog_energi_MQ21_lock;
    char  Hog_energi_MQ22_lock;
    char  Hog_energi_MQ23_lock;
    char  Hoglast_lock;
    char  Hoglast_Tim_fran_lock;
    char  Hoglast_Tim_till_lock;
    char  Hour_lock;
    char  KB2_Eff_lock;
    char  KB2_Max_W_SH_lock;
    char  KB2_Max_W_SL_lock;
    char  KB2_Max_W_VH_lock;
    char  KB2_Max_W_VL_lock;
    char  KB2_Oka_sp_lock;
    char  KB2_Old_MQ21_lock;
    char  KB2_Tid_lock;
    char  KB2_diff_lock;
    char  KB2_energi_MQ21_lock;
    char  KB2_realtid_lock;
    char  KB2_tid1_lock;
    char  KB2_tid2_lock;
    char  KM1_MQ12_lock;
    char  Kg32_Aktiv_lock;
    char  Kg32_Larm_Kod_lock;
    char  Kg32_auto_lock;
    char  Kg32_open_lock;
    char  Kg32_open_old_lock;
    char  Kg34_Aktiv_lock;
    char  Kg34_Larm_Kod_lock;
    char  Kg34_auto_lock;
    char  Kg34_open_lock;
    char  Kg34_open_old_lock;
    char  Kg36_Aktiv_lock;
    char  Kg36_Larm_Kod_lock;
    char  Kg36_auto_lock;
    char  Kg36_open_lock;
    char  Kg36_open_old_lock;
    char  Kg38_Aktiv_lock;
    char  Kg38_Larm_Kod_lock;
    char  Kg38_auto_lock;
    char  Kg38_open_lock;
    char  Kg38_open_old_lock;
    char  Kommlarm_enable_lock;
    char  Kort_3_lock;
    char  Kort_6_lock;
    char  Last_Som_Hog_MQ11_lock;
    char  Last_Som_Hog_MQ12_lock;
    char  Last_Som_Hog_MQ21_lock;
    char  Last_Som_Hog_MQ22_lock;
    char  Last_Som_Hog_MQ23_lock;
    char  Last_Som_Log_MQ11_lock;
    char  Last_Som_Log_MQ12_lock;
    char  Last_Som_Log_MQ21_lock;
    char  Last_Som_Log_MQ22_lock;
    char  Last_Som_Log_MQ23_lock;
    char  Last_Vin_Hog_MQ11_lock;
    char  Last_Vin_Hog_MQ12_lock;
    char  Last_Vin_Hog_MQ21_lock;
    char  Last_Vin_Hog_MQ22_lock;
    char  Last_Vin_Hog_MQ23_lock;
    char  Last_Vin_Log_MQ11_lock;
    char  Last_Vin_Log_MQ12_lock;
    char  Last_Vin_Log_MQ21_lock;
    char  Last_Vin_Log_MQ22_lock;
    char  Last_Vin_Log_MQ23_lock;
    char  Log_e_KM1_MQ11_lock;
    char  Log_e_KM1_MQ12_lock;
    char  Log_energi_MQ21_lock;
    char  Log_energi_MQ22_lock;
    char  Log_energi_MQ23_lock;
    char  MQ22_lock;
    char  MQ23_lock;
    char  Man_Belysning_lock;
    char  Mg39_Aktiv_lock;
    char  Mg39_Larm_Kod_lock;
    char  Mg39_auto_lock;
    char  Mg39_open_lock;
    char  Mg39_open_old_lock;
    char  Minute_lock;
    char  Monad_Dag_lock;
    char  Month_lock;
    char  Nu_Dag_EntreKod_Ag31_lock;
    char  Nu_Dag_EntreKod_Ag33_lock;
    char  Nu_Dag_EntreKod_Kg32_lock;
    char  Nu_Dag_EntreKod_Kg34_lock;
    char  Nu_Dag_EntreKod_Kg36_lock;
    char  Nu_Dag_EntreKod_Kg38_lock;
    char  Nu_Dag_EntreKod_Mg39_lock;
    char  Nu_Dag_EntreKod_Sv28_lock;
    char  Nu_Dag_ExtraKod_Ag31_lock;
    char  Nu_Dag_ExtraKod_Ag33_lock;
    char  Nu_Dag_ExtraKod_Kg32_lock;
    char  Nu_Dag_ExtraKod_Kg34_lock;
    char  Nu_Dag_ExtraKod_Kg36_lock;
    char  Nu_Dag_ExtraKod_Kg38_lock;
    char  Nu_Dag_ExtraKod_Mg39_lock;
    char  Nu_Dag_ExtraKod_Sv28_lock;
    char  Nu_Dag_HyresKod_Ag31_lock;
    char  Nu_Dag_HyresKod_Ag33_lock;
    char  Nu_Dag_HyresKod_Kg32_lock;
    char  Nu_Dag_HyresKod_Kg34_lock;
    char  Nu_Dag_HyresKod_Kg36_lock;
    char  Nu_Dag_HyresKod_Kg38_lock;
    char  Nu_Dag_HyresKod_Mg39_lock;
    char  Nu_Dag_HyresKod_Sv28_lock;
    char  Nu_Dag_PostKod_Ag31_lock;
    char  Nu_Dag_PostKod_Ag33_lock;
    char  Nu_Dag_PostKod_Kg32_lock;
    char  Nu_Dag_PostKod_Kg34_lock;
    char  Nu_Dag_PostKod_Kg36_lock;
    char  Nu_Dag_PostKod_Kg38_lock;
    char  Nu_Dag_PostKod_Mg39_lock;
    char  Nu_Dag_PostKod_Sv28_lock;
    char  Nu_Dag_ServiceKod_Ag31_lock;
    char  Nu_Dag_ServiceKod_Ag33_lock;
    char  Nu_Dag_ServiceKod_Kg32_lock;
    char  Nu_Dag_ServiceKod_Kg34_lock;
    char  Nu_Dag_ServiceKod_Kg36_lock;
    char  Nu_Dag_ServiceKod_Kg38_lock;
    char  Nu_Dag_ServiceKod_Mg39_lock;
    char  Nu_Dag_ServiceKod_Sv28_lock;
    char  Nu_EntreKod_Ag31_lock;
    char  Nu_EntreKod_Ag33_lock;
    char  Nu_EntreKod_Kg32_lock;
    char  Nu_EntreKod_Kg34_lock;
    char  Nu_EntreKod_Kg36_lock;
    char  Nu_EntreKod_Kg38_lock;
    char  Nu_EntreKod_Mg39_lock;
    char  Nu_EntreKod_Sv28_lock;
    char  Nu_ExtraKod_Ag31_lock;
    char  Nu_ExtraKod_Ag33_lock;
    char  Nu_ExtraKod_Kg32_lock;
    char  Nu_ExtraKod_Kg34_lock;
    char  Nu_ExtraKod_Kg36_lock;
    char  Nu_ExtraKod_Kg38_lock;
    char  Nu_ExtraKod_Mg39_lock;
    char  Nu_ExtraKod_Sv28_lock;
    char  Nu_HyresKod_Ag31_lock;
    char  Nu_HyresKod_Ag33_lock;
    char  Nu_HyresKod_Kg32_lock;
    char  Nu_HyresKod_Kg34_lock;
    char  Nu_HyresKod_Kg36_lock;
    char  Nu_HyresKod_Kg38_lock;
    char  Nu_HyresKod_Mg39_lock;
    char  Nu_HyresKod_Sv28_lock;
    char  Nu_PostKod_Ag31_lock;
    char  Nu_PostKod_Ag33_lock;
    char  Nu_PostKod_Kg32_lock;
    char  Nu_PostKod_Kg34_lock;
    char  Nu_PostKod_Kg36_lock;
    char  Nu_PostKod_Kg38_lock;
    char  Nu_PostKod_Mg39_lock;
    char  Nu_PostKod_Sv28_lock;
    char  Nu_ServiceKod_Ag31_lock;
    char  Nu_ServiceKod_Ag33_lock;
    char  Nu_ServiceKod_Kg32_lock;
    char  Nu_ServiceKod_Kg34_lock;
    char  Nu_ServiceKod_Kg36_lock;
    char  Nu_ServiceKod_Kg38_lock;
    char  Nu_ServiceKod_Mg39_lock;
    char  Nu_ServiceKod_Sv28_lock;
    char  Ny_Dag_EntreKod_Ag31_lock;
    char  Ny_Dag_EntreKod_Ag33_lock;
    char  Ny_Dag_EntreKod_Kg32_lock;
    char  Ny_Dag_EntreKod_Kg34_lock;
    char  Ny_Dag_EntreKod_Kg36_lock;
    char  Ny_Dag_EntreKod_Kg38_lock;
    char  Ny_Dag_EntreKod_Mg39_lock;
    char  Ny_Dag_EntreKod_Sv28_lock;
    char  Ny_Dag_ExtraKod_Ag31_lock;
    char  Ny_Dag_ExtraKod_Ag33_lock;
    char  Ny_Dag_ExtraKod_Kg32_lock;
    char  Ny_Dag_ExtraKod_Kg34_lock;
    char  Ny_Dag_ExtraKod_Kg36_lock;
    char  Ny_Dag_ExtraKod_Kg38_lock;
    char  Ny_Dag_ExtraKod_Mg39_lock;
    char  Ny_Dag_ExtraKod_Sv28_lock;
    char  Ny_Dag_HyresKod_Ag31_lock;
    char  Ny_Dag_HyresKod_Ag33_lock;
    char  Ny_Dag_HyresKod_Kg32_lock;
    char  Ny_Dag_HyresKod_Kg34_lock;
    char  Ny_Dag_HyresKod_Kg36_lock;
    char  Ny_Dag_HyresKod_Kg38_lock;
    char  Ny_Dag_HyresKod_Mg39_lock;
    char  Ny_Dag_HyresKod_Sv28_lock;
    char  Ny_Dag_PostKod_Ag31_lock;
    char  Ny_Dag_PostKod_Ag33_lock;
    char  Ny_Dag_PostKod_Kg32_lock;
    char  Ny_Dag_PostKod_Kg34_lock;
    char  Ny_Dag_PostKod_Kg36_lock;
    char  Ny_Dag_PostKod_Kg38_lock;
    char  Ny_Dag_PostKod_Mg39_lock;
    char  Ny_Dag_PostKod_Sv28_lock;
    char  Ny_Dag_ServiceKod_Ag31_lock;
    char  Ny_Dag_ServiceKod_Ag33_lock;
    char  Ny_Dag_ServiceKod_Kg32_lock;
    char  Ny_Dag_ServiceKod_Kg34_lock;
    char  Ny_Dag_ServiceKod_Kg36_lock;
    char  Ny_Dag_ServiceKod_Kg38_lock;
    char  Ny_Dag_ServiceKod_Mg39_lock;
    char  Ny_Dag_ServiceKod_Sv28_lock;
    char  Ny_EntreKod_Ag31_lock;
    char  Ny_EntreKod_Ag33_lock;
    char  Ny_EntreKod_Kg32_lock;
    char  Ny_EntreKod_Kg34_lock;
    char  Ny_EntreKod_Kg36_lock;
    char  Ny_EntreKod_Kg38_lock;
    char  Ny_EntreKod_Mg39_lock;
    char  Ny_EntreKod_Sv28_lock;
    char  Ny_ExtraKod_Ag31_lock;
    char  Ny_ExtraKod_Ag33_lock;
    char  Ny_ExtraKod_Kg32_lock;
    char  Ny_ExtraKod_Kg34_lock;
    char  Ny_ExtraKod_Kg36_lock;
    char  Ny_ExtraKod_Kg38_lock;
    char  Ny_ExtraKod_Mg39_lock;
    char  Ny_ExtraKod_Sv28_lock;
    char  Ny_HyresKod_Ag31_lock;
    char  Ny_HyresKod_Ag33_lock;
    char  Ny_HyresKod_Kg32_lock;
    char  Ny_HyresKod_Kg34_lock;
    char  Ny_HyresKod_Kg36_lock;
    char  Ny_HyresKod_Kg38_lock;
    char  Ny_HyresKod_Mg39_lock;
    char  Ny_HyresKod_Sv28_lock;
    char  Ny_PostKod_Ag31_lock;
    char  Ny_PostKod_Ag33_lock;
    char  Ny_PostKod_Kg32_lock;
    char  Ny_PostKod_Kg34_lock;
    char  Ny_PostKod_Kg36_lock;
    char  Ny_PostKod_Kg38_lock;
    char  Ny_PostKod_Mg39_lock;
    char  Ny_PostKod_Sv28_lock;
    char  Ny_ServiceKod_Ag31_lock;
    char  Ny_ServiceKod_Ag33_lock;
    char  Ny_ServiceKod_Kg32_lock;
    char  Ny_ServiceKod_Kg34_lock;
    char  Ny_ServiceKod_Kg36_lock;
    char  Ny_ServiceKod_Kg38_lock;
    char  Ny_ServiceKod_Mg39_lock;
    char  Ny_ServiceKod_Sv28_lock;
    char  Oldmin_lock;
    char  Port_Larm_min_lock;
    char  Port_kod_ok_lock;
    char  Port_kods_kod_lock;
    char  Prog_Dag_EntreKod_Ag31_lock;
    char  Prog_Dag_EntreKod_Ag33_lock;
    char  Prog_Dag_EntreKod_Kg32_lock;
    char  Prog_Dag_EntreKod_Kg34_lock;
    char  Prog_Dag_EntreKod_Kg36_lock;
    char  Prog_Dag_EntreKod_Kg38_lock;
    char  Prog_Dag_EntreKod_Mg39_lock;
    char  Prog_Dag_EntreKod_Sv28_lock;
    char  Prog_Dag_ExtraKod_Ag31_lock;
    char  Prog_Dag_ExtraKod_Ag33_lock;
    char  Prog_Dag_ExtraKod_Kg32_lock;
    char  Prog_Dag_ExtraKod_Kg34_lock;
    char  Prog_Dag_ExtraKod_Kg36_lock;
    char  Prog_Dag_ExtraKod_Kg38_lock;
    char  Prog_Dag_ExtraKod_Mg39_lock;
    char  Prog_Dag_ExtraKod_Sv28_lock;
    char  Prog_Dag_HyresKod_Ag31_lock;
    char  Prog_Dag_HyresKod_Ag33_lock;
    char  Prog_Dag_HyresKod_Kg32_lock;
    char  Prog_Dag_HyresKod_Kg34_lock;
    char  Prog_Dag_HyresKod_Kg36_lock;
    char  Prog_Dag_HyresKod_Kg38_lock;
    char  Prog_Dag_HyresKod_Mg39_lock;
    char  Prog_Dag_HyresKod_Sv28_lock;
    char  Prog_Dag_PostKod_Ag31_lock;
    char  Prog_Dag_PostKod_Ag33_lock;
    char  Prog_Dag_PostKod_Kg32_lock;
    char  Prog_Dag_PostKod_Kg34_lock;
    char  Prog_Dag_PostKod_Kg36_lock;
    char  Prog_Dag_PostKod_Kg38_lock;
    char  Prog_Dag_PostKod_Mg39_lock;
    char  Prog_Dag_PostKod_Sv28_lock;
    char  Prog_Dag_ServiceKod_Ag31_lock;
    char  Prog_Dag_ServiceKod_Ag33_lock;
    char  Prog_Dag_ServiceKod_Kg32_lock;
    char  Prog_Dag_ServiceKod_Kg34_lock;
    char  Prog_Dag_ServiceKod_Kg36_lock;
    char  Prog_Dag_ServiceKod_Kg38_lock;
    char  Prog_Dag_ServiceKod_Mg39_lock;
    char  Prog_Dag_ServiceKod_Sv28_lock;
    char  Prog_EntreKod_Ag31_lock;
    char  Prog_EntreKod_Ag33_lock;
    char  Prog_EntreKod_Kg32_lock;
    char  Prog_EntreKod_Kg34_lock;
    char  Prog_EntreKod_Kg36_lock;
    char  Prog_EntreKod_Kg38_lock;
    char  Prog_EntreKod_Mg39_lock;
    char  Prog_EntreKod_Sv28_lock;
    char  Prog_ExtraKod_Ag31_lock;
    char  Prog_ExtraKod_Ag33_lock;
    char  Prog_ExtraKod_Kg32_lock;
    char  Prog_ExtraKod_Kg34_lock;
    char  Prog_ExtraKod_Kg36_lock;
    char  Prog_ExtraKod_Kg38_lock;
    char  Prog_ExtraKod_Mg39_lock;
    char  Prog_ExtraKod_Sv28_lock;
    char  Prog_HyresKod_Ag31_lock;
    char  Prog_HyresKod_Ag33_lock;
    char  Prog_HyresKod_Kg32_lock;
    char  Prog_HyresKod_Kg34_lock;
    char  Prog_HyresKod_Kg36_lock;
    char  Prog_HyresKod_Kg38_lock;
    char  Prog_HyresKod_Mg39_lock;
    char  Prog_HyresKod_Sv28_lock;
    char  Prog_PostKod_Ag31_lock;
    char  Prog_PostKod_Ag33_lock;
    char  Prog_PostKod_Kg32_lock;
    char  Prog_PostKod_Kg34_lock;
    char  Prog_PostKod_Kg36_lock;
    char  Prog_PostKod_Kg38_lock;
    char  Prog_PostKod_Mg39_lock;
    char  Prog_PostKod_Sv28_lock;
    char  Prog_ServiceKod_Ag31_lock;
    char  Prog_ServiceKod_Ag33_lock;
    char  Prog_ServiceKod_Kg32_lock;
    char  Prog_ServiceKod_Kg34_lock;
    char  Prog_ServiceKod_Kg36_lock;
    char  Prog_ServiceKod_Kg38_lock;
    char  Prog_ServiceKod_Mg39_lock;
    char  Prog_ServiceKod_Sv28_lock;
    char  Pulskort_4_enable_lock;
    char  Relay_lock;
    char  Second_lock;
    char  Som_Hog_e_KM1_MQ11_lock;
    char  Som_Hog_e_KM1_MQ12_lock;
    char  Som_Hog_energi_MQ21_lock;
    char  Som_Hog_energi_MQ22_lock;
    char  Som_Hog_energi_MQ23_lock;
    char  Som_Log_e_KM1_MQ11_lock;
    char  Som_Log_e_KM1_MQ12_lock;
    char  Som_Log_energi_MQ21_lock;
    char  Som_Log_energi_MQ22_lock;
    char  Som_Log_energi_MQ23_lock;
    char  Sommar_lock;
    char  Stat_Hour_lock;
    char  Stat_Som_Hog_MQ11_lock;
    char  Stat_Som_Hog_MQ12_lock;
    char  Stat_Som_Hog_MQ21_lock;
    char  Stat_Som_Hog_MQ22_lock;
    char  Stat_Som_Hog_MQ23_lock;
    char  Stat_Som_Log_MQ11_lock;
    char  Stat_Som_Log_MQ12_lock;
    char  Stat_Som_Log_MQ21_lock;
    char  Stat_Som_Log_MQ22_lock;
    char  Stat_Som_Log_MQ23_lock;
    char  Stat_Vin_Hog_MQ11_lock;
    char  Stat_Vin_Hog_MQ12_lock;
    char  Stat_Vin_Hog_MQ21_lock;
    char  Stat_Vin_Hog_MQ22_lock;
    char  Stat_Vin_Hog_MQ23_lock;
    char  Stat_Vin_Log_MQ11_lock;
    char  Stat_Vin_Log_MQ12_lock;
    char  Stat_Vin_Log_MQ21_lock;
    char  Stat_Vin_Log_MQ22_lock;
    char  Stat_Vin_Log_MQ23_lock;
    char  Sv28_Aktiv_lock;
    char  Sv28_Larm_Kod_lock;
    char  Sv28_auto_lock;
    char  Sv28_open_lock;
    char  Sv28_open_old_lock;
    char  Tid1_lock;
    char  Tid1_Kalender_lock;
    char  Tid1_hand_lock;
    char  Tid2_lock;
    char  Tid2_Kalender_lock;
    char  Tid2_hand_lock;
    char  Tid3_lock;
    char  Tid3_Kalender_lock;
    char  Tid3_hand_lock;
    char  Tid4_lock;
    char  Tid4_Kalender_lock;
    char  Tid4_hand_lock;
    char  Today_lock;
    char  Utetemp_lock;
    char  VI_hiss1_lock;
    char  VI_hiss2_lock;
    char  VI_hiss3_lock;
    char  VI_hiss4_lock;
    char  VI_hiss5_lock;
    char  VI_hiss6_lock;
    char  VI_hiss7_lock;
    char  VI_hiss8_lock;
    char  Vi_Set_Day_lock;
    char  Vi_Set_Hour_lock;
    char  Vi_Set_Minute_lock;
    char  Vi_Set_Month_lock;
    char  Vi_Set_Year_lock;
    char  Vin_Dag_fran_lock;
    char  Vin_Dag_till_lock;
    char  Vin_Hog_e_KM1_MQ11_lock;
    char  Vin_Hog_e_KM1_MQ12_lock;
    char  Vin_Hog_energi_MQ21_lock;
    char  Vin_Hog_energi_MQ22_lock;
    char  Vin_Hog_energi_MQ23_lock;
    char  Vin_Log_e_KM1_MQ11_lock;
    char  Vin_Log_e_KM1_MQ12_lock;
    char  Vin_Log_energi_MQ21_lock;
    char  Vin_Log_energi_MQ22_lock;
    char  Vin_Log_energi_MQ23_lock;
    char  Vin_Mon_Dag_fran_lock;
    char  Vin_Mon_Dag_till_lock;
    char  Vin_Mon_fran_lock;
    char  Vin_Mon_till_lock;
    char  Vinlast_lock;
    char  Weekday_lock;
    char  Weekno_lock;
    char  Weekyear_lock;
    char  Year_lock;
    char  account_lock;
    char  alarm_active_lock;
    char  battLow_lock;
    char  blockSNPKkeyboard_lock;
    char  bypassSNPKrelay_lock;
    char  calActiveIn_lock;
    char  checkCalendarLevel_lock;
    char  clearCode_lock;
    char  display_lock;
    char  energi_KM1_MQ11_lock;
    char  energi_KM1_MQ12_lock;
    char  energi_MQ21_lock;
    char  energi_MQ22_lock;
    char  energi_MQ23_lock;
    char  energim_KM1_MQ11_lock;
    char  energim_KM1_MQ12_lock;
    char  energim_MQ21_lock;
    char  energim_MQ22_lock;
    char  energim_MQ23_lock;
    char  energiskal_KM1_MQ11_lock;
    char  energiskal_KM1_MQ12_lock;
    char  energiskal_MQ21_lock;
    char  energiskal_MQ22_lock;
    char  energiskal_MQ23_lock;
    char  enter_lock;
    char  enter_calendar_lock;
    char  enter_kurva_lock;
    char  exp_lock;
    char  fabs_lock;
    char  getAlarmSNPK_lock;
    char  getRelTime_lock;
    char  getTime_lock;
    char  globalAlarmMask_A_lock;
    char  globalAlarmMask_B_lock;
    char  globalAlarmMask_C_lock;
    char  globalAlarmMask_D_lock;
    char  isTimerInit_lock;
    char  kalender_Belysning_lock;
    char  key_lock;
    char  kurva_lock;
    char  larmmin1_lock;
    char  larmmin2_lock;
    char  larmmin3_lock;
    char  larmmin4_lock;
    char  larmmin5_lock;
    char  larmmin6_lock;
    char  larmmin7_lock;
    char  larmmin8_lock;
    char  level_lock;
    char  level1_lock;
    char  level2_lock;
    char  level3_lock;
    char  level4_lock;
    char  level5_lock;
    char  masterNo_lock;
    char  noOfAck_A_lock;
    char  noOfAck_B_lock;
    char  noOfAck_C_lock;
    char  noOfAck_D_lock;
    char  noOfNak_A_lock;
    char  noOfNak_B_lock;
    char  noOfNak_C_lock;
    char  noOfNak_D_lock;
    char  nodeEnable_lock;
    char  nodeUp_lock;
    char  optoPower_lock;
    char  overflow_lock;
    char  password_lock;
    char  pid_lock;
    char  pow_lock;
    char  powerup_lock;
    char  service_lock;
    char  serviceLed_lock;
    char  setAlarmSNPK_lock;
    char  setCode_lock;
    char  setSafeCode_lock;
    char  setTime_lock;
    char  set_time_lock;
    char  sleep_lock;
    char  sqrt_lock;
    char  summalarmA_LA1_lock;
    char  summalarmB_LA1_lock;
    char  summalarm_hiss1_lock;
    char  summalarm_hiss2_lock;
    char  summalarm_hiss3_lock;
    char  summalarm_hiss4_lock;
    char  summalarm_hiss5_lock;
    char  summalarm_hiss6_lock;
    char  summalarm_hiss7_lock;
    char  summalarm_hiss8_lock;
    char  summerStart_lock;
    char  telephonePC_lock;
    char  telephonePC_area_lock;
    char  tidkanal_Belysning_lock;
    char  timerCancel_lock;
    char  timerInit_lock;
    char  timerReady_lock;
    char  tsleep_lock;
    char  tvpump_lock;
    char  winterStart_lock;
    char  xxxswdctime_lock;
} *dm;    /* total size of struct = 7392 */

CALENDAR _tmp_Cal_EntreKod_Ag31 = {
2175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
2400, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
CALENDAR _tmp_Cal_EntreKod_Ag33 = {
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
CALENDAR _tmp_Cal_EntreKod_Kg32 = {
2175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
2400, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
CALENDAR _tmp_Cal_EntreKod_Kg34 = {
2175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
2400, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
CALENDAR _tmp_Cal_EntreKod_Kg36 = {
2175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
2400, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
CALENDAR _tmp_Cal_EntreKod_Kg38 = {
2175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
2400, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
CALENDAR _tmp_Cal_EntreKod_Mg39 = {
2175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
2400, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
CALENDAR _tmp_Cal_EntreKod_Sv28 = {
2175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
2400, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
CALENDAR _tmp_Cal_ExtraKod_Ag31 = {
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
CALENDAR _tmp_Cal_ExtraKod_Ag33 = {
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
CALENDAR _tmp_Cal_ExtraKod_Kg32 = {
2175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
2100, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
CALENDAR _tmp_Cal_ExtraKod_Kg34 = {
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
CALENDAR _tmp_Cal_ExtraKod_Kg36 = {
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
CALENDAR _tmp_Cal_ExtraKod_Kg38 = {
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
CALENDAR _tmp_Cal_ExtraKod_Mg39 = {
2175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
2100, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
CALENDAR _tmp_Cal_ExtraKod_Sv28 = {
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
CALENDAR _tmp_Cal_HyresKod_Ag31 = {
2079, 2079, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 
600, 600, 0, 0, 0, 0, 0, 0, 0, 0, 
1800, 1800, 0, 0, 0, 0, 0, 0, 0, 0
};
CALENDAR _tmp_Cal_HyresKod_Ag33 = {
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
CALENDAR _tmp_Cal_HyresKod_Kg32 = {
2079, 2079, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 
600, 600, 0, 0, 0, 0, 0, 0, 0, 0, 
1800, 1800, 0, 0, 0, 0, 0, 0, 0, 0
};
CALENDAR _tmp_Cal_HyresKod_Kg34 = {
2079, 2079, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 
600, 600, 0, 0, 0, 0, 0, 0, 0, 0, 
1800, 1800, 0, 0, 0, 0, 0, 0, 0, 0
};
CALENDAR _tmp_Cal_HyresKod_Kg36 = {
2079, 2079, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 
600, 600, 0, 0, 0, 0, 0, 0, 0, 0, 
1800, 1800, 0, 0, 0, 0, 0, 0, 0, 0
};
CALENDAR _tmp_Cal_HyresKod_Kg38 = {
2079, 2079, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 
600, 600, 0, 0, 0, 0, 0, 0, 0, 0, 
1800, 1800, 0, 0, 0, 0, 0, 0, 0, 0
};
CALENDAR _tmp_Cal_HyresKod_Mg39 = {
2079, 2079, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 
600, 600, 0, 0, 0, 0, 0, 0, 0, 0, 
1800, 1800, 0, 0, 0, 0, 0, 0, 0, 0
};
CALENDAR _tmp_Cal_HyresKod_Sv28 = {
2079, 2079, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 
600, 600, 0, 0, 0, 0, 0, 0, 0, 0, 
1800, 1800, 0, 0, 0, 0, 0, 0, 0, 0
};
CALENDAR _tmp_Cal_PostKod_Ag31 = {
2079, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
600, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
1800, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
CALENDAR _tmp_Cal_PostKod_Ag33 = {
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
CALENDAR _tmp_Cal_PostKod_Kg32 = {
2079, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
600, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
1800, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
CALENDAR _tmp_Cal_PostKod_Kg34 = {
2079, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
600, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
1800, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
CALENDAR _tmp_Cal_PostKod_Kg36 = {
2079, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
600, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
1800, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
CALENDAR _tmp_Cal_PostKod_Kg38 = {
2079, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
600, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
1800, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
CALENDAR _tmp_Cal_PostKod_Mg39 = {
2175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
2400, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
CALENDAR _tmp_Cal_PostKod_Sv28 = {
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
CALENDAR _tmp_Cal_ServiceKod_Ag31 = {
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
CALENDAR _tmp_Cal_ServiceKod_Ag33 = {
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
CALENDAR _tmp_Cal_ServiceKod_Kg32 = {
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
CALENDAR _tmp_Cal_ServiceKod_Kg34 = {
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
CALENDAR _tmp_Cal_ServiceKod_Kg36 = {
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
CALENDAR _tmp_Cal_ServiceKod_Kg38 = {
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
CALENDAR _tmp_Cal_ServiceKod_Mg39 = {
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
CALENDAR _tmp_Cal_ServiceKod_Sv28 = {
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
CALENDAR _tmp_Tid1_Kalender = {
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
CALENDAR _tmp_Tid2_Kalender = {
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
CALENDAR _tmp_Tid3_Kalender = {
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
CALENDAR _tmp_Tid4_Kalender = {
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
CALENDAR _tmp_kalender_Belysning = {
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
#define KB2_Max_W_SH_OFFSET 66
#define KB2_Max_W_SL_OFFSET 67
#define KB2_Max_W_VH_OFFSET 68
#define KB2_Max_W_VL_OFFSET 69
#define KB2_Tid_OFFSET 72
#define Utetemp_OFFSET 435
#define NAMEOFDATAMODULE "VARS"
#define NAMEOFDATAMODULE2 "VAR2"
#define DATAMODULE_ADDRESS 0x20000
extern int account(); 
extern int alarm_active(); 
extern int battLow(); 
extern int blockSNPKkeyboard(); 
extern int bypassSNPKrelay(); 
extern int calActiveIn(); 
extern int checkCalendarLevel(); 
extern int clearCode(); 
extern int display(); 
extern double enter(); 
extern int enter_calendar(); 
extern int enter_kurva(); 
extern double exp(); 
extern double fabs(); 
extern int getAlarmSNPK(); 
extern int getRelTime(); 
extern int getTime(); 
extern int isTimerInit(); 
extern int key(); 
extern double kurva(); 
extern int optoPower(); 
extern int password(); 
extern double pid(); 
extern double pow(); 
extern int setAlarmSNPK(); 
extern int setCode(); 
extern int setSafeCode(); 
extern int setTime(); 
extern int set_time(); 
extern int sleep(); 
extern double sqrt(); 
extern int timerCancel(); 
extern int timerInit(); 
extern int timerReady(); 
extern int tsleep(); 
extern int tvpump(); 
extern int xxxswdctime(); 
extern int account(); 
extern int alarm_active(); 
extern int battLow(); 
extern int blockSNPKkeyboard(); 
extern int bypassSNPKrelay(); 
extern int calActiveIn(); 
extern int checkCalendarLevel(); 
extern int clearCode(); 
extern int display(); 
extern double enter(); 
extern int enter_calendar(); 
extern int enter_kurva(); 
extern double exp(); 
extern double fabs(); 
extern int getAlarmSNPK(); 
extern int getRelTime(); 
extern int getTime(); 
extern int isTimerInit(); 
extern int key(); 
extern double kurva(); 
extern int optoPower(); 
extern int password(); 
extern double pid(); 
extern double pow(); 
extern int setAlarmSNPK(); 
extern int setCode(); 
extern int setSafeCode(); 
extern int setTime(); 
extern int set_time(); 
extern int sleep(); 
extern double sqrt(); 
extern int timerCancel(); 
extern int timerInit(); 
extern int timerReady(); 
extern int tsleep(); 
extern int tvpump(); 
extern int xxxswdctime(); 
#define NO_OF_ALARMS 63
#define NO_OF_TIMERS 7
struct _lockModule {
  int noOfAlarms;
  int alarmLock[NO_OF_ALARMS];
  int noOfTimers;
  int timerLock[NO_OF_TIMERS];
} *lock; /* total size of struct = 288 */
