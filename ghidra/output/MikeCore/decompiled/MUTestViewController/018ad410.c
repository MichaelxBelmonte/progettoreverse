// Function: FUN_018ad410
// Address: 018ad410
// Size: 694 bytes
// Class: MUTestViewController
// String references:
//   "MUTestViewController"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_018ad410(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong **pplVar5;
  longlong *unaff_RDI;
  longlong lVar6;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  lVar2 = DAT_027dbf18;
  if (*param_2 == 0) {
    lVar6 = 0;
    if (DAT_027dbf18 != 0) {
      FUN_00d50b00();
      lVar6 = *param_2;
    }
    if (lVar6 == lVar2) {
      if (((char)param_2[1] != '\0') || (lVar2 == 0)) {
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        goto LAB_018ad47f;
      }
    }
    else {
      *param_2 = lVar2;
      if (((char)param_2[1] != '\0') && (lVar6 != 0)) {
        FUN_00d50b20();
      }
    }
    *(undefined1 *)(param_2 + 1) = 1;
  }
LAB_018ad47f:
  lVar2 = DAT_027dbf20;
  if (DAT_027dbf20 != 0) {
    FUN_00d50b00();
  }
  local_70 = 0;
  local_68 = '\0';
  local_60 = 0;
  local_58 = '\0';
  pplVar5 = &local_40;
  FUN_01e4fcf0(&local_60,&local_70);
  plVar1 = local_40;
  if ((DAT_02723108 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_02723058 = FUN_00015ff0();
    _DAT_02723040 = "MUTestViewController";
    _DAT_02723048 = 0x78;
    _DAT_02723050 = FUN_005fe3c0;
    _DAT_02723060 = 0;
    uRam0000000002723068 = 0;
    _DAT_02723070 = 0;
    uRam0000000002723078 = 0;
    _DAT_02723080 = 0;
    uRam0000000002723088 = 0;
    _DAT_02723090 = 0;
    uRam0000000002723098 = 0;
    _DAT_027230a0 = 0;
    uRam00000000027230a8 = 0;
    _DAT_027230b0 = 0;
    uRam00000000027230b8 = 0;
    _DAT_027230c0 = 0;
    uRam00000000027230c8 = 0;
    _DAT_027230d0 = 0;
    uRam00000000027230d8 = 0;
    _DAT_027230e0 = 0;
    uRam00000000027230e8 = 0;
    _DAT_027230f0 = 0;
    uRam00000000027230f8 = 0;
    _DAT_02723100 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_018ad509;
  }
  pplVar5 = (longlong **)&DAT_02802688;
LAB_018ad509:
  plVar1 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar5 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_01e56750();
  local_50 = *param_2;
  local_48 = '\0';
  FUN_01e5a050();
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_018ae240();
  (**(code **)(*plVar1 + 0x460))();
  *unaff_RDI = (longlong)plVar1;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


