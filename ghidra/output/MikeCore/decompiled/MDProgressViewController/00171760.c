// Function: FUN_00171760
// Address: 00171760
// Size: 596 bytes
// Class: MDProgressViewController
// String references:
//   "MDProgressViewController"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00171760(undefined4 param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong *in_RDX;
  longlong **pplVar6;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  lVar2 = DAT_026e4040;
  if (DAT_026e4040 != 0) {
    param_1 = FUN_00d50b00();
  }
  local_60 = 0;
  local_58 = '\0';
  pplVar6 = &local_40;
  FUN_01e51a60(param_1,&local_60);
  plVar1 = local_40;
  if ((DAT_02710940 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    _DAT_026e4068 = FUN_00015ff0();
    _DAT_026e4050 = "MDProgressViewController";
    _DAT_026e4058 = 0xa8;
    _DAT_026e4060 = FUN_001734a0;
    _DAT_026e4070 = 0;
    uRam00000000026e4078 = 0;
    _DAT_026e4080 = 0;
    _DAT_026e40f8 = 0;
    uRam00000000026e4100 = 0;
    _DAT_026e4108 = 0;
    DAT_026e410a = 3;
    _DAT_026e4088 = 0;
    uRam00000000026e4090 = 0;
    _DAT_026e4098 = 0;
    uRam00000000026e40a0 = 0;
    _DAT_026e40a8 = 0;
    uRam00000000026e40b0 = 0;
    _DAT_026e40b8 = 0;
    uRam00000000026e40c0 = 0;
    _DAT_026e40c8 = 0;
    uRam00000000026e40d0 = 0;
    _DAT_026e40d8 = 0;
    uRam00000000026e40e0 = 0;
    _DAT_026e40e8 = 0;
    uRam00000000026e40f0 = 0;
    DAT_026e4113 = 0;
    _DAT_026e410b = 0;
    ___cxa_guard_release();
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 != '\0') goto LAB_001717f4;
  }
  pplVar6 = (longlong **)&DAT_02802688;
LAB_001717f4:
  plVar1 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar6 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_01e53c20();
  plVar3 = local_40;
  (**(code **)(*(longlong *)*unaff_RSI + 0x4d8))();
  (**(code **)(*plVar3 + 0x4e8))(param_2);
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar1[0x14] = *in_RDX;
  (**(code **)(*plVar1 + 0x5f0))();
  local_50 = *unaff_RSI;
  local_48 = '\0';
  (**(code **)(*plVar1 + 0x578))();
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  *unaff_RDI = (longlong)plVar1;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


