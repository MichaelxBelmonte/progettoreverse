// Function: FUN_01dec210
// Address: 01dec210
// Size: 836 bytes
// Class: GNTableColumnAssoc


/* WARNING: Removing unreachable block (ram,0x01dec413) */
/* WARNING: Removing unreachable block (ram,0x01dec41c) */
/* WARNING: Removing unreachable block (ram,0x01dec2d7) */
/* WARNING: Removing unreachable block (ram,0x01dec2e0) */
/* WARNING: Removing unreachable block (ram,0x01dec2ad) */
/* WARNING: Removing unreachable block (ram,0x01dec2b6) */
/* WARNING: Removing unreachable block (ram,0x01dec367) */
/* WARNING: Removing unreachable block (ram,0x01dec370) */
/* WARNING: Removing unreachable block (ram,0x01dec31a) */
/* WARNING: Removing unreachable block (ram,0x01dec323) */

undefined8 FUN_01dec210(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  undefined8 uVar8;
  longlong *unaff_RDI;
  longlong *local_40;
  char local_38;
  
  lVar4 = DAT_02800140;
  if (DAT_02800140 != 0) {
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
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (local_40 == (longlong *)0x0) {
    return 0;
  }
  FUN_01d258f0();
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) goto LAB_01dec32c;
    FUN_00d50b00();
LAB_01dec2e5:
    (**(code **)(*local_40 + 0x538))();
    if (local_40 == (longlong *)0x0) {
      bVar5 = false;
      goto LAB_01dec332;
    }
    if (local_38 == '\0') {
      FUN_00d50b00();
    }
    bVar5 = false;
LAB_01dec375:
    (**(code **)(*unaff_RDI + 0x548))();
    FUN_01dcc2e0();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d28610();
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    cVar7 = FUN_01caa660();
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    bVar3 = bVar5;
    if (cVar7 != '\0') {
      if ((char)unaff_RDI[0xb] == '\0') {
        bVar3 = true;
        if (!bVar5) {
          cVar7 = (**(code **)(*local_40 + 0x540))();
          if (cVar7 != '\0') goto LAB_01dec45b;
          bVar3 = false;
        }
      }
      else {
LAB_01dec45b:
        (**(code **)(*unaff_RDI + 0x548))();
        FUN_01dcc2e0();
        bVar3 = bVar5;
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    (**(code **)(*unaff_RDI + 0x548))();
    FUN_01dcc2e0();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    bVar1 = true;
    uVar8 = 2;
    bVar2 = false;
    bVar5 = true;
    bVar6 = false;
    if (!bVar3) goto LAB_01dec51c;
  }
  else {
    if (local_40 != (longlong *)0x0) goto LAB_01dec2e5;
LAB_01dec32c:
    bVar5 = true;
LAB_01dec332:
    FUN_01d25f70();
    if (local_40 != (longlong *)0x0) {
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
      goto LAB_01dec375;
    }
    uVar8 = 0;
    if (bVar5) {
      uVar8 = 0;
      goto LAB_01dec53b;
    }
    bVar5 = false;
    bVar6 = true;
LAB_01dec51c:
    bVar2 = bVar6;
    bVar1 = bVar5;
    FUN_00d50b20();
  }
  if ((bVar1) && (!bVar2)) {
    FUN_00d50b20();
  }
LAB_01dec53b:
  FUN_00d50b20();
  return uVar8;
}


