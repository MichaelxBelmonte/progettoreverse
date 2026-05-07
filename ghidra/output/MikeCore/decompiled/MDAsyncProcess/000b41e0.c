// Function: FUN_000b41e0
// Address: 000b41e0
// Size: 609 bytes
// Class: MDAsyncProcess
// String references:
//   "MDAsyncProcess"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b41e0(undefined4 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong **pplVar5;
  longlong **pplVar6;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong *local_38;
  char local_30;
  char local_28 [8];
  
  lVar2 = DAT_026dc0d0;
  if (DAT_026dc0d0 != 0) {
    param_1 = FUN_00d50b00();
  }
  local_78 = lVar2;
  local_70 = '\x01';
  pplVar6 = &local_38;
  FUN_000175c0(param_1,&local_78);
  plVar1 = local_38;
  if (DAT_026dc1a8 == '\0') {
    iVar4 = ___cxa_guard_acquire();
    if (iVar4 != 0) {
      _DAT_026dc0f8 = FUN_00d4fe50();
      _DAT_026dc0e0 = "MDAsyncProcess";
      _DAT_026dc0e8 = 0x20;
      _DAT_026dc0f0 = FUN_000b4ff0;
      _DAT_026dc100 = 0;
      uRam00000000026dc108 = 0;
      _DAT_026dc110 = 0;
      _DAT_026dc188 = 0;
      uRam00000000026dc190 = 0;
      _DAT_026dc198 = 0;
      DAT_026dc19a = 1;
      _DAT_026dc118 = 0;
      uRam00000000026dc120 = 0;
      _DAT_026dc128 = 0;
      uRam00000000026dc130 = 0;
      _DAT_026dc138 = 0;
      uRam00000000026dc140 = 0;
      _DAT_026dc148 = 0;
      uRam00000000026dc150 = 0;
      _DAT_026dc158 = 0;
      uRam00000000026dc160 = 0;
      _DAT_026dc168 = 0;
      uRam00000000026dc170 = 0;
      _DAT_026dc178 = 0;
      uRam00000000026dc180 = 0;
      DAT_026dc1a3 = 0;
      _DAT_026dc19b = 0;
      ___cxa_guard_release();
    }
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_000b425f;
  }
  pplVar6 = (longlong **)&DAT_02802688;
LAB_000b425f:
  plVar1 = *pplVar6;
  local_28[0] = *(char *)(pplVar6 + 1);
  pplVar5 = (longlong **)local_28;
  if (local_28[0] != '\0') {
    pplVar5 = pplVar6 + 1;
  }
  *(undefined1 *)pplVar5 = 0;
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ca1340();
  (**(code **)(*plVar1 + 0x380))();
  FUN_00d403d0();
  local_68 = DAT_026dc0d8;
  if (DAT_026dc0d8 != 0) {
    FUN_00d50b00();
  }
  local_60 = '\x01';
  local_50 = '\0';
  local_48 = 0;
  local_40 = '\0';
  local_58 = plVar1;
  FUN_00d40470(&local_48,&local_58,1,3);
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_28[0] != '\0') {
    FUN_00d50b20();
  }
  return;
}


