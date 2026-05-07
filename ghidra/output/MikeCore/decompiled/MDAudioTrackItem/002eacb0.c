// Function: FUN_002eacb0
// Address: 002eacb0
// Size: 709 bytes
// Class: MDAudioTrackItem
// String references:
//   "MDAudioTrackItem"


/* WARNING: Removing unreachable block (ram,0x002eae57) */
/* WARNING: Removing unreachable block (ram,0x002eae60) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_002eacb0(void)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong **pplVar6;
  undefined8 *unaff_RDI;
  undefined4 uVar7;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  longlong local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  int local_40;
  int iStack_3c;
  int local_38;
  
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_02572358;
  (*DAT_02572370)();
  uVar7 = FUN_01beea30();
  plVar1 = local_58;
  if (local_50 == '\0') {
    if (local_58 == (longlong *)0x0) goto LAB_002eaf6f;
    uVar7 = FUN_00d50b00();
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      uVar7 = FUN_00d50b20();
    }
  }
  else if (local_58 == (longlong *)0x0) goto LAB_002eaf6f;
  local_50 = 0;
  local_58 = (longlong *)0x0;
  local_48 = plVar1;
  local_40 = -1;
  iStack_3c = 0;
  local_38 = 0;
  while( true ) {
    iVar3 = iStack_3c;
    if (iStack_3c != 0) {
      if (iStack_3c < 1) {
        iStack_3c = -iStack_3c;
      }
      else {
        local_40 = local_40 - iStack_3c;
        uVar7 = FUN_00d23690(uVar7,iStack_3c);
        local_38 = local_38 + iVar3;
        iStack_3c = 0;
      }
    }
    lVar5 = (longlong)local_40;
    local_40 = local_40 + 1;
    if (*(int *)((longlong)local_48 + 0xc) <= local_40) break;
    plVar1 = *(longlong **)(local_48[2] + 8 + lVar5 * 8);
    local_58 = plVar1;
    if ((DAT_02700970 == '\0') &&
       (iVar3 = ___cxa_guard_acquire(), uVar7 = extraout_XMM0_Da_00, iVar3 != 0)) {
      _DAT_026d78f8 = FUN_0006e710();
      _DAT_026d78e0 = "MDAudioTrackItem";
      _DAT_026d78e8 = 0x70;
      _DAT_026d78f0 = FUN_0006e6c0;
      _DAT_026d7900 = 0;
      uRam00000000026d7908 = 0;
      _DAT_026d7910 = 0;
      _DAT_026d7988 = 0;
      uRam00000000026d7990 = 0;
      _DAT_026d7998 = 0;
      DAT_026d799a = 1;
      _DAT_026d7918 = 0;
      uRam00000000026d7920 = 0;
      _DAT_026d7928 = 0;
      uRam00000000026d7930 = 0;
      _DAT_026d7938 = 0;
      uRam00000000026d7940 = 0;
      _DAT_026d7948 = 0;
      uRam00000000026d7950 = 0;
      _DAT_026d7958 = 0;
      uRam00000000026d7960 = 0;
      _DAT_026d7968 = 0;
      uRam00000000026d7970 = 0;
      _DAT_026d7978 = 0;
      uRam00000000026d7980 = 0;
      DAT_026d79a3 = 0;
      _DAT_026d799b = 0;
      uVar7 = ___cxa_guard_release();
    }
    pplVar6 = (longlong **)&DAT_02802688;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x360))();
      cVar2 = FUN_00e85ea0();
      pplVar6 = &local_58;
      uVar7 = extraout_XMM0_Da;
      if (cVar2 == '\0') {
        pplVar6 = (longlong **)&DAT_02802688;
      }
    }
    if (*pplVar6 != (longlong *)0x0) {
      FUN_00075b90();
      if (local_60 == '\0') {
        if (local_68 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      uVar7 = FUN_00d21140();
      if (local_68 != 0) {
        uVar7 = FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        uVar7 = FUN_00d50b20();
      }
    }
  }
  FUN_002e0650();
  FUN_00d50b20();
LAB_002eaf6f:
  *unaff_RDI = puVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


