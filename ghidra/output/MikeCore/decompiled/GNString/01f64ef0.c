// Function: FUN_01f64ef0
// Address: 01f64ef0
// Size: 1420 bytes
// Class: GNString
// String references:
//   "GNString"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_01f64ef0(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  longlong **pplVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong *local_c0;
  char local_b8;
  undefined4 local_ac;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  longlong local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  longlong *local_38;
  
  cVar3 = FUN_01e53c80();
  if (cVar3 != '\0') {
    uVar9 = FUN_01ca6970();
    local_40 = local_80;
    if ((((local_78 == '\0') && (local_80 != (longlong *)0x0)) &&
        (uVar9 = FUN_00d50b00(), local_78 != '\0')) && (local_80 != (longlong *)0x0)) {
      uVar9 = FUN_00d50b20();
    }
    lVar7 = DAT_026fceb8;
    if (DAT_026fceb8 != 0) {
      uVar9 = FUN_00d50b00();
    }
    local_f0 = lVar7;
    local_e8 = '\x01';
    pplVar6 = &local_80;
    FUN_01cacbe0(uVar9,&local_f0);
    plVar1 = local_80;
    if ((DAT_026fd0c0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
      _DAT_026d5e58 = FUN_00d4fe50();
      DAT_026d5e40 = "GNString";
      _DAT_026d5e48 = 0x40;
      _DAT_026d5e50 = FUN_0005d920;
      _DAT_026d5e60 = 0;
      uRam00000000026d5e68 = 0;
      _DAT_026d5e70 = 0;
      uRam00000000026d5e78 = 0;
      _DAT_026d5e80 = 0;
      uRam00000000026d5e88 = 0;
      _DAT_026d5e90 = 0;
      uRam00000000026d5e98 = 0;
      _DAT_026d5ea0 = 0;
      uRam00000000026d5ea8 = 0;
      _DAT_026d5eb0 = 0;
      uRam00000000026d5eb8 = 0;
      _DAT_026d5ec0 = 0;
      uRam00000000026d5ec8 = 0;
      _DAT_026d5ed0 = 0;
      uRam00000000026d5ed8 = 0;
      _DAT_026d5ee0 = 0;
      uRam00000000026d5ee8 = 0;
      _DAT_026d5ef0 = 0;
      uRam00000000026d5ef8 = 0;
      _DAT_026d5f00 = 0;
      ___cxa_guard_release();
    }
    local_ac = param_2;
    if (plVar1 == (longlong *)0x0) {
LAB_01f64fc8:
      pplVar6 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_01f64fc8;
    }
    plVar1 = *pplVar6;
    if (*(char *)(pplVar6 + 1) == '\0') {
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar6 + 1) = 0;
    }
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      FUN_00d50b20();
    }
    lVar7 = DAT_028007e0;
    if (plVar1 != (longlong *)0x0) {
      if (DAT_028007e0 != 0) {
        FUN_00d50b00();
      }
      local_e0 = lVar7;
      local_d8 = '\x01';
      cVar3 = FUN_00d90eb0();
      lVar7 = DAT_028007e8;
      cVar4 = '\x01';
      if (cVar3 == '\0') {
        if (DAT_028007e8 != 0) {
          FUN_00d50b00();
        }
        local_d0 = lVar7;
        local_c8 = '\x01';
        cVar4 = FUN_00d90eb0();
        if ((local_c8 != '\0') && (local_d0 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        FUN_00d50b20();
      }
      if (cVar4 != '\0') {
        local_88 = '\0';
        local_90 = 0;
        local_b8 = '\0';
        local_c0 = plVar1;
        FUN_00ddb860();
        local_38 = local_80;
        if (local_78 == '\0') {
          if (((local_80 != (longlong *)0x0) && (FUN_00d50b00(), local_78 != '\0')) &&
             (local_80 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_78 = '\0';
        }
        if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        lVar7 = DAT_028007e0;
        if (DAT_028007e0 != 0) {
          FUN_00d50b00();
        }
        lVar2 = DAT_028007e8;
        local_98 = lVar7;
        if (DAT_028007e8 != 0) {
          FUN_00d50b00();
        }
        local_100 = lVar2;
        FUN_00083ea0(2,&local_100);
        uVar9 = FUN_000b6830();
        local_50 = local_a8;
        local_48 = 0;
        if (local_a0 == '\0') {
          if (local_a8 != 0) {
            uVar9 = FUN_00d50b00();
          }
        }
        else {
          local_a0 = '\0';
        }
        lVar7 = local_98;
        local_48 = '\x01';
        cVar3 = (**(code **)(*local_38 + 0x3c0))(uVar9,&local_90);
        if ((cVar3 == '\0') ||
           (cVar3 = (**(code **)(*local_38 + 0x3d0))(extraout_XMM0_Da,&local_90), cVar3 == '\0')) {
          cVar3 = '\0';
        }
        else {
          cVar3 = (**(code **)(*local_38 + 0x420))(extraout_XMM0_Da_00,0x20);
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          FUN_00d50b20();
        }
        local_80 = (longlong *)&DAT_0253d630;
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        local_80 = &DAT_024c5048;
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if (lVar7 != 0) {
          FUN_00d50b20();
        }
        if (cVar3 != '\0') {
          if ((char)local_ac != '\0') {
            if (local_f8 != 0) {
              FUN_00d50b00();
            }
            cVar3 = FUN_00d50c10();
            if (cVar3 != '\0') {
              FUN_01f5b440();
            }
            lVar7 = local_f8;
            if (local_f8 != 0) {
              FUN_00d50b20();
            }
          }
          FUN_00d50b20();
          plVar1 = local_40;
          if ((local_88 != '\0') && (local_90 != 0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          uVar8 = CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
          if (plVar1 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          goto LAB_01f653be;
        }
        FUN_00d50b20();
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
    }
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  uVar8 = 0;
LAB_01f653be:
  return uVar8 & 0xffffffff;
}


