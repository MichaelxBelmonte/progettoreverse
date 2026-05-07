// Function: FUN_000efd20
// Address: 000efd20
// Size: 905 bytes
// Class: MDMetaWindowController
// String references:
//   "MDMetaWindowController"


/* WARNING: Removing unreachable block (ram,0x000f0049) */
/* WARNING: Removing unreachable block (ram,0x000f0052) */
/* WARNING: Removing unreachable block (ram,0x000f000e) */
/* WARNING: Removing unreachable block (ram,0x000f0017) */
/* WARNING: Removing unreachable block (ram,0x000f0085) */
/* WARNING: Removing unreachable block (ram,0x000f0091) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_000efd20(undefined8 param_1,int param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  longlong *plVar5;
  longlong *unaff_RDI;
  longlong *plVar6;
  undefined8 unaff_R14;
  ulonglong uVar7;
  undefined4 uVar8;
  undefined4 extraout_XMM0_Da;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  uVar7 = CONCAT71((int7)((ulonglong)unaff_R14 >> 8),1);
  if (param_2 != 0) {
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_38[0] = '\0';
    plVar6 = unaff_RDI;
    do {
      (**(code **)(*plVar6 + 0x370))();
      if (local_48 == plVar6) {
        if (((local_38[0] == '\0') && (local_48 != (longlong *)0x0)) && (local_40[0] != '\0')) {
          local_38[0] = '\x01';
          goto LAB_000efdc7;
        }
      }
      else {
        plVar6 = local_48;
        if (local_40[0] == '\0') {
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
LAB_000efdc7:
          local_38[0] = '\x01';
          pcVar4 = local_40;
        }
        *pcVar4 = '\0';
      }
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
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
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x360))();
        cVar2 = FUN_00e85ea0();
        plVar5 = (longlong *)&stack0xffffffffffffffa8;
        if (cVar2 == '\0') {
          plVar5 = &DAT_02802688;
        }
      }
      if (*plVar5 != 0) {
        if ((local_38[0] == '\0') && (plVar6 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        if (unaff_RDI == (longlong *)0x0) goto LAB_000eff52;
        goto LAB_000eff4d;
      }
    } while (plVar6 != (longlong *)0x0);
    plVar6 = (longlong *)0x0;
    if (unaff_RDI != (longlong *)0x0) {
LAB_000eff4d:
      FUN_00d50b20();
    }
LAB_000eff52:
    if (plVar6 == (longlong *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar8 = FUN_00d6f370();
      lVar1 = DAT_026df108;
      if (DAT_026df108 != 0) {
        uVar8 = FUN_00d50b00();
      }
      iVar3 = FUN_00d708a0(uVar8,0);
      uVar7 = CONCAT71((int7)((ulonglong)local_48 >> 8),1);
      uVar8 = extraout_XMM0_Da;
      if (lVar1 != 0) {
        uVar8 = FUN_00d50b20();
      }
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        uVar8 = FUN_00d50b20();
      }
      if (iVar3 == 0) {
        FUN_0061d5f0(uVar8,1);
      }
      else if (iVar3 == 1) {
        FUN_0061d890(uVar8,1);
      }
      else if (iVar3 == 2) {
        FUN_0061d740(uVar8,1);
      }
      FUN_00d50b20();
    }
  }
  return uVar7 & 0xffffffff;
}


