// Function: FUN_01d15bc0
// Address: 01d15bc0
// Size: 771 bytes
// Class: GNControl
// String references:
//   "GNControl"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01d15bc0(void)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong **pplVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  longlong *local_30;
  char local_28;
  
  FUN_01d15ab0();
  FUN_01cc9cf0();
  pplVar6 = &local_30;
  uVar8 = FUN_01ccad60();
  plVar1 = local_30;
  if (DAT_026e43b0 == '\0') {
    iVar4 = ___cxa_guard_acquire();
    uVar8 = extraout_XMM0_Da_00;
    if (iVar4 != 0) {
      _DAT_026df898 = FUN_0006d940();
      _DAT_026df880 = "GNControl";
      _DAT_026df888 = 0x1c8;
      _DAT_026df890 = FUN_000858d0;
      _DAT_026df8a0 = 0;
      uRam00000000026df8a8 = 0;
      _DAT_026df8b0 = 0;
      uRam00000000026df8b8 = 0;
      _DAT_026df8c0 = 0;
      uRam00000000026df8c8 = 0;
      _DAT_026df8d0 = 0;
      uRam00000000026df8d8 = 0;
      _DAT_026df8e0 = 0;
      uRam00000000026df8e8 = 0;
      _DAT_026df8f0 = 0;
      uRam00000000026df8f8 = 0;
      _DAT_026df900 = 0;
      uRam00000000026df908 = 0;
      _DAT_026df910 = 0;
      uRam00000000026df918 = 0;
      _DAT_026df920 = 0;
      uRam00000000026df928 = 0;
      _DAT_026df930 = 0;
      uRam00000000026df938 = 0;
      _DAT_026df940 = 0;
      uVar8 = ___cxa_guard_release();
    }
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    uVar8 = extraout_XMM0_Da;
    if (cVar3 != '\0') goto LAB_01d15c29;
  }
  pplVar6 = &DAT_02802688;
LAB_01d15c29:
  plVar1 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      uVar8 = FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar6 + 1) = 0;
  }
  if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
    uVar8 = FUN_00d50b20();
  }
  lVar2 = DAT_027e7c20;
  if (plVar1 != (longlong *)0x0) {
    if (DAT_027e7c20 != 0) {
      uVar8 = FUN_00d50b00();
    }
    local_80 = lVar2;
    local_78 = '\x01';
    uVar8 = FUN_01ccaae0(uVar8,&local_80);
    lVar2 = DAT_027edfc8;
    bVar7 = true;
    if (local_30 == (longlong *)0x0) {
      if (DAT_027edfc8 != 0) {
        uVar8 = FUN_00d50b00();
      }
      local_70 = lVar2;
      local_68 = '\x01';
      FUN_01ccaae0(uVar8,&local_70);
      bVar7 = local_90 != 0;
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if (bVar7) {
      local_58 = '\0';
      local_60 = 0;
      (**(code **)(*plVar1 + 0xa20))();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      local_48 = '\0';
      local_50 = 0;
      (**(code **)(*plVar1 + 0xa10))();
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      FUN_001f8a30();
      (**(code **)(*plVar1 + 0x360))();
      cVar3 = FUN_00e85ea0();
      plVar5 = plVar1;
      if (cVar3 == '\0') {
        plVar5 = DAT_02802688;
      }
      if (plVar5 != (longlong *)0x0) {
        local_38 = '\0';
        local_40 = (longlong *)0x0;
        (**(code **)(*plVar1 + 0xae0))();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          (**(code **)(*local_40 + 0x10))();
          FUN_00d50b20();
        }
      }
    }
    FUN_00d50b20();
  }
  return;
}


