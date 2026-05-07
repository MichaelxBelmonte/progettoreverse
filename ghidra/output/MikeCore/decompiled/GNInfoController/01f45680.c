// Function: FUN_01f45680
// Address: 01f45680
// Size: 555 bytes
// Class: GNInfoController
// String references:
//   "GNInfoController"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f45680(void)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong **pplVar7;
  longlong *local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  lVar3 = DAT_02725a20;
  lVar6 = *(longlong *)(unaff_RSI + 0x58);
  if (lVar6 != 0) goto LAB_01f457d4;
  if (DAT_02725a20 != 0) {
    FUN_00d50b00();
  }
  local_60 = lVar3;
  local_58 = '\x01';
  local_50 = 0;
  local_48 = '\0';
  local_40 = 0;
  local_38 = '\0';
  pplVar7 = &local_70;
  FUN_01e4fcf0(&local_40,&local_50);
  plVar2 = local_70;
  if ((DAT_0270fbd0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    _DAT_026eddd8 = FUN_00015ff0();
    _DAT_026eddc0 = "GNInfoController";
    _DAT_026eddc8 = 0xa8;
    _DAT_026eddd0 = FUN_001d1e30;
    _DAT_026edde0 = 0;
    uRam00000000026edde8 = 0;
    _DAT_026eddf0 = 0;
    uRam00000000026eddf8 = 0;
    _DAT_026ede00 = 0;
    uRam00000000026ede08 = 0;
    _DAT_026ede10 = 0;
    uRam00000000026ede18 = 0;
    _DAT_026ede20 = 0;
    uRam00000000026ede28 = 0;
    _DAT_026ede30 = 0;
    uRam00000000026ede38 = 0;
    _DAT_026ede40 = 0;
    uRam00000000026ede48 = 0;
    _DAT_026ede50 = 0;
    uRam00000000026ede58 = 0;
    _DAT_026ede60 = 0;
    uRam00000000026ede68 = 0;
    _DAT_026ede70 = 0;
    uRam00000000026ede78 = 0;
    _DAT_026ede80 = 0;
    ___cxa_guard_release();
  }
  if (plVar2 == (longlong *)0x0) {
LAB_01f45727:
    pplVar7 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar2 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_01f45727;
  }
  plVar1 = *(longlong **)(unaff_RSI + 0x58);
  plVar2 = *pplVar7;
  if (plVar1 != plVar2) {
    if (*(char *)(pplVar7 + 1) == '\0') {
      if (plVar2 == (longlong *)0x0) {
        *(undefined8 *)(unaff_RSI + 0x58) = 0;
      }
      else {
        FUN_00d50b00();
        plVar1 = *(longlong **)(unaff_RSI + 0x58);
        *(longlong **)(unaff_RSI + 0x58) = *pplVar7;
      }
    }
    else {
      *(undefined1 *)(pplVar7 + 1) = 0;
      *(longlong **)(unaff_RSI + 0x58) = plVar2;
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  lVar6 = *(longlong *)(unaff_RSI + 0x58);
LAB_01f457d4:
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  *unaff_RDI = lVar6;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


