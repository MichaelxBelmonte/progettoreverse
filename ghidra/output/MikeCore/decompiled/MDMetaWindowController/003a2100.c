// Function: FUN_003a2100
// Address: 003a2100
// Size: 881 bytes
// Class: MDMetaWindowController
// String references:
//   "MDMetaWindowController"


/* WARNING: Removing unreachable block (ram,0x003a218a) */
/* WARNING: Removing unreachable block (ram,0x003a2193) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_003a2100(undefined8 param_1,byte param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  longlong *plVar5;
  longlong *unaff_RDI;
  undefined7 uVar7;
  ulonglong uVar6;
  longlong *plVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar9;
  longlong *local_50;
  char local_48 [15];
  byte local_39;
  char local_38 [8];
  
  FUN_01f27fe0();
  cVar1 = (**(code **)(*local_50 + 0x450))();
  uVar9 = extraout_XMM0_Da;
  if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
    uVar9 = FUN_00d50b20();
  }
  if (cVar1 == '\0') {
    FUN_00392f00();
    uVar9 = FUN_01c93080();
  }
  uVar2 = FUN_019c2380(uVar9,param_2);
  uVar6 = (ulonglong)uVar2;
  local_39 = (byte)uVar2;
  if ((param_2 & local_39) == 1) {
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_38[0] = '\0';
    plVar8 = unaff_RDI;
    do {
      (**(code **)(*plVar8 + 0x370))();
      plVar5 = local_50;
      if (local_50 == plVar8) {
        if (((local_38[0] == '\0') && (local_50 != (longlong *)0x0)) && (local_48[0] != '\0')) {
          local_38[0] = '\x01';
          goto LAB_003a2227;
        }
      }
      else {
        if (local_48[0] == '\0') {
          if (local_38[0] == '\0') {
            pcVar4 = local_38;
          }
          else {
            FUN_00d50b20();
            pcVar4 = local_38;
          }
        }
        else {
          if (local_38[0] != '\0') {
            FUN_00d50b20();
          }
          local_38[0] = '\x01';
          plVar8 = plVar5;
LAB_003a2227:
          local_38[0] = '\x01';
          pcVar4 = local_48;
          plVar5 = plVar8;
        }
        *pcVar4 = '\0';
        plVar8 = plVar5;
      }
      if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((DAT_026fddb0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        _DAT_026e0ab8 = FUN_00015ff0();
        _DAT_026e0aa0 = "MDMetaWindowController";
        _DAT_026e0aa8 = 0x198;
        _DAT_026e0ab0 = FUN_0006dea0;
        _DAT_026e0ac0 = 0;
        uRam00000000026e0ac8 = 0;
        _DAT_026e0ad0 = 0;
        _DAT_026e0b48 = 0;
        uRam00000000026e0b50 = 0;
        _DAT_026e0b58 = 0;
        DAT_026e0b5a = 1;
        _DAT_026e0ad8 = 0;
        uRam00000000026e0ae0 = 0;
        _DAT_026e0ae8 = 0;
        uRam00000000026e0af0 = 0;
        _DAT_026e0af8 = 0;
        uRam00000000026e0b00 = 0;
        _DAT_026e0b08 = 0;
        uRam00000000026e0b10 = 0;
        _DAT_026e0b18 = 0;
        uRam00000000026e0b20 = 0;
        _DAT_026e0b28 = 0;
        uRam00000000026e0b30 = 0;
        _DAT_026e0b38 = 0;
        uRam00000000026e0b40 = 0;
        DAT_026e0b63 = 0;
        _DAT_026e0b5b = 0;
        ___cxa_guard_release();
      }
      plVar5 = &DAT_02802688;
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x360))();
        cVar1 = FUN_00e85ea0();
        plVar5 = (longlong *)&stack0xffffffffffffff98;
        if (cVar1 == '\0') {
          plVar5 = &DAT_02802688;
        }
      }
      uVar7 = (undefined7)((ulonglong)&local_50 >> 8);
      if (*plVar5 != 0) {
        if ((local_38[0] == '\0') && (plVar8 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        uVar6 = CONCAT71(uVar7,local_39);
        if (unaff_RDI == (longlong *)0x0) goto LAB_003a23b5;
        goto LAB_003a23ad;
      }
    } while (plVar8 != (longlong *)0x0);
    plVar8 = (longlong *)0x0;
    uVar6 = CONCAT71(uVar7,local_39);
    if (unaff_RDI != (longlong *)0x0) {
LAB_003a23ad:
      FUN_00d50b20();
    }
LAB_003a23b5:
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x5e0))();
      plVar5 = local_50;
      if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x5e0))();
        plVar8 = local_50;
        if (local_48[0] == '\0') {
          if (local_50 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48[0] = '\0';
        }
        FUN_0064dbb0();
        if (plVar8 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
    }
  }
  return uVar6 & 0xffffffff;
}


