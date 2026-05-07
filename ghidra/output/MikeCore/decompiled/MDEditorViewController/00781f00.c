// Function: FUN_00781f00
// Address: 00781f00
// Size: 1099 bytes
// Class: MDEditorViewController


/* WARNING: Removing unreachable block (ram,0x0078216e) */
/* WARNING: Removing unreachable block (ram,0x0078217b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_00781f00(undefined8 param_1,char param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  byte bVar4;
  undefined4 uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong *unaff_RDI;
  undefined8 extraout_XMM0_Qa;
  double dVar8;
  undefined8 uVar9;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  FUN_01cae990();
  plVar2 = local_40;
  lVar1 = DAT_02728af8;
  if (DAT_02728af8 != 0) {
    FUN_00d50b00();
  }
  uVar5 = (**(code **)(*plVar2 + 0x50))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_026f6fa0;
  if ((char)uVar5 == '\0') {
    FUN_01cae990();
    plVar2 = local_40;
    lVar1 = DAT_02729610;
    if (DAT_02729610 != 0) {
      FUN_00d50b00();
    }
    cVar3 = (**(code **)(*plVar2 + 0x50))();
    uVar9 = extraout_XMM0_Qa;
    if (lVar1 != 0) {
      uVar9 = FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      uVar9 = FUN_00d50b20();
    }
    lVar1 = DAT_026f6fa0;
    if (cVar3 != '\0') {
      if (*(int *)((longlong)unaff_RDI + 0x16c) != 0) goto LAB_00782027;
      if (param_2 == '\0') {
        if (DAT_026f6fa0 != 0) {
          FUN_00d50b00();
        }
        dVar8 = (double)FUN_00e7d6f0();
        uVar7 = (ulonglong)(dVar8 * DAT_023907c0);
        dVar8 = dVar8 * DAT_023907c0 - _DAT_023907c8;
        uVar9 = FUN_0071a120();
        if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
            (uVar9 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != (longlong *)0x0)) {
          uVar9 = FUN_00d50b20();
        }
        bVar4 = (byte)(((longlong)dVar8 & (longlong)uVar7 >> 0x3f | uVar7) / 3);
        local_50 = lVar1;
        local_48 = '\0';
        FUN_000175c0(uVar9,&local_50);
        plVar2 = local_40;
        if (local_38 == '\0') {
          if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
             (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if (plVar2 != (longlong *)0x0) {
          local_38 = '\0';
          local_40 = plVar2;
          bVar4 = FUN_00c70bc0();
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        FUN_00d50b20();
        uVar7 = CONCAT71((int7)((ulonglong)plVar2 >> 8),plVar2 != (longlong *)0x0 & bVar4);
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        goto LAB_0078233a;
      }
    }
    uVar6 = FUN_01d33980(uVar9,param_2);
    uVar7 = (ulonglong)uVar6;
  }
  else {
    if (*(int *)((longlong)unaff_RDI + 0x16c) == 0) {
      if (param_2 == '\0') {
        if (DAT_026f6fa0 != 0) {
          FUN_00d50b00();
        }
        dVar8 = (double)FUN_00e7d6f0();
        uVar7 = (ulonglong)(dVar8 * DAT_023907c0);
        dVar8 = dVar8 * DAT_023907c0 - _DAT_023907c8;
        uVar9 = FUN_0071a120();
        if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
            (uVar9 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != (longlong *)0x0)) {
          uVar9 = FUN_00d50b20();
        }
        bVar4 = (byte)(((longlong)dVar8 & (longlong)uVar7 >> 0x3f | uVar7) / 3);
        local_50 = lVar1;
        local_48 = '\0';
        FUN_000175c0(uVar9,&local_50);
        plVar2 = local_40;
        if (local_38 == '\0') {
          if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
             (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if (plVar2 != (longlong *)0x0) {
          local_38 = '\0';
          local_40 = plVar2;
          bVar4 = FUN_00c70bc0();
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        FUN_00d50b20();
        uVar7 = CONCAT71((int7)((ulonglong)plVar2 >> 8),plVar2 != (longlong *)0x0 & bVar4);
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
      }
      else {
        (**(code **)(*unaff_RDI + 0x4f8))();
        uVar7 = CONCAT71((uint7)(uint3)((uint)uVar5 >> 8),1);
      }
      goto LAB_0078233a;
    }
LAB_00782027:
    uVar7 = 0;
  }
LAB_0078233a:
  return uVar7 & 0xffffffff;
}


