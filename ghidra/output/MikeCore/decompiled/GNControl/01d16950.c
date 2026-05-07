// Function: FUN_01d16950
// Address: 01d16950
// Size: 1741 bytes
// Class: GNControl


/* WARNING: Removing unreachable block (ram,0x01d16dc3) */
/* WARNING: Removing unreachable block (ram,0x01d16dcf) */
/* WARNING: Removing unreachable block (ram,0x01d16d26) */
/* WARNING: Removing unreachable block (ram,0x01d16d32) */
/* WARNING: Removing unreachable block (ram,0x01d16b88) */
/* WARNING: Removing unreachable block (ram,0x01d16b94) */
/* WARNING: Removing unreachable block (ram,0x01d16c1e) */
/* WARNING: Removing unreachable block (ram,0x01d16c2a) */
/* WARNING: Removing unreachable block (ram,0x01d16c7a) */
/* WARNING: Removing unreachable block (ram,0x01d16c87) */
/* WARNING: Removing unreachable block (ram,0x01d16e94) */
/* WARNING: Removing unreachable block (ram,0x01d16e9d) */
/* WARNING: Removing unreachable block (ram,0x01d16cac) */
/* WARNING: Removing unreachable block (ram,0x01d16cb9) */
/* WARNING: Removing unreachable block (ram,0x01d16997) */
/* WARNING: Removing unreachable block (ram,0x01d169a0) */
/* WARNING: Removing unreachable block (ram,0x01d16abe) */
/* WARNING: Removing unreachable block (ram,0x01d16ac7) */
/* WARNING: Removing unreachable block (ram,0x01d16cda) */
/* WARNING: Removing unreachable block (ram,0x01d16ce7) */
/* WARNING: Removing unreachable block (ram,0x01d16e71) */
/* WARNING: Removing unreachable block (ram,0x01d16e7a) */

ulonglong FUN_01d16950(undefined8 param_1,char param_2)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  longlong *unaff_RDI;
  longlong *plVar7;
  ulonglong uVar8;
  bool bVar9;
  bool bVar10;
  longlong *local_108;
  char local_100;
  longlong *local_40;
  char local_38;
  
  FUN_01ccad60();
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  uVar4 = (**(code **)(*local_40 + 0x9a0))();
  FUN_001f8a30();
  (**(code **)(*local_40 + 0x360))();
  cVar2 = FUN_00e85ea0();
  plVar7 = local_40;
  if (cVar2 == '\0') {
    plVar7 = DAT_02802688;
  }
  if (plVar7 != (longlong *)0x0) {
    uVar4 = FUN_01e05890();
  }
  FUN_01cae990();
  lVar1 = DAT_027ef7e8;
  if (DAT_027ef7e8 != 0) {
    FUN_00d50b00();
  }
  bVar3 = (**(code **)(*local_40 + 0x50))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar3 & (byte)uVar4) == 0) {
    uVar5 = FUN_01d827c0();
    uVar8 = (ulonglong)uVar5;
    goto LAB_01d17000;
  }
  uVar8 = CONCAT71((uint7)(uint3)((uint)uVar4 >> 8),1);
  if (param_2 == '\0') goto LAB_01d17000;
  *(undefined1 *)(unaff_RDI + 6) = 0;
  (**(code **)(*local_40 + 0x980))();
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  FUN_001f8a30();
  (**(code **)(*local_40 + 0x360))();
  cVar2 = FUN_00e85ea0();
  plVar7 = local_40;
  if (cVar2 == '\0') {
    plVar7 = DAT_02802688;
  }
  if (plVar7 != (longlong *)0x0) {
    FUN_01e05950();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40 != (longlong *)0x0) {
      FUN_01e05950();
      (**(code **)(*local_108 + 0x388))();
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_100 != '\0') && (local_108 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*local_40 + 0x970))();
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
          goto LAB_01d16bd1;
        }
        bVar10 = true;
        bVar9 = true;
LAB_01d16cfc:
        (**(code **)(*local_40 + 0x968))();
      }
      else {
LAB_01d16bd1:
        bVar9 = local_40 == (longlong *)0x0;
        bVar10 = local_40 == (longlong *)0x0;
        if ((bVar10) || (local_40 == (longlong *)0x0)) goto LAB_01d16cfc;
        cVar2 = (**(code **)(*local_40 + 0x50))();
        bVar9 = false;
        bVar10 = false;
        if (cVar2 == '\0') goto LAB_01d16cfc;
      }
      if (!bVar9) {
        FUN_00d50b20();
      }
      if (!bVar10) {
        FUN_00d50b20();
      }
    }
  }
  lVar1 = DAT_027e7c20;
  if (DAT_027e7c20 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*unaff_RDI + 0x4d0))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027e7c20;
  if (*(char *)((longlong)unaff_RDI + 0x5c) != '\0') {
    if (DAT_027e7c20 != 0) {
      FUN_00d50b00();
    }
    FUN_01ccaae0();
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (local_40 == (longlong *)0x0) {
      plVar7 = (longlong *)0x0;
      bVar10 = false;
    }
    else {
      FUN_01d28610();
      if (local_40 == (longlong *)0x0) {
        bVar10 = false;
        plVar7 = (longlong *)0x0;
      }
      else {
        bVar10 = true;
        plVar7 = local_40;
        if (local_38 == '\0') {
          FUN_00d50b00();
        }
      }
    }
    iVar6 = FUN_01caecd0();
    if (iVar6 == 3) {
      if (plVar7 != (longlong *)0x0) {
        FUN_00cb1f10();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (local_40 != (longlong *)0x0) {
          FUN_00cb1f10();
          FUN_00db3270();
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        goto LAB_01d16f92;
      }
    }
    else {
      if (iVar6 == 1) {
        if (plVar7 == (longlong *)0x0) goto LAB_01d16fa4;
        FUN_00cb1f10();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (local_40 != (longlong *)0x0) {
          FUN_00cb1f10();
          FUN_00db3260();
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
LAB_01d16f92:
      if ((bVar10) && (plVar7 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
LAB_01d16fa4:
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  lVar1 = DAT_027edfc8;
  if (DAT_027edfc8 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*unaff_RDI + 0x500))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_01d17000:
  FUN_00d50b20();
  return uVar8;
}


