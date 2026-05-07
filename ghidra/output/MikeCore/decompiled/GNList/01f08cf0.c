// Function: FUN_01f08cf0
// Address: 01f08cf0
// Size: 1491 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x01f08e80) */
/* WARNING: Removing unreachable block (ram,0x01f08e8c) */
/* WARNING: Removing unreachable block (ram,0x01f09234) */
/* WARNING: Removing unreachable block (ram,0x01f09240) */
/* WARNING: Removing unreachable block (ram,0x01f091b7) */
/* WARNING: Removing unreachable block (ram,0x01f091c3) */
/* WARNING: Removing unreachable block (ram,0x01f08f48) */
/* WARNING: Removing unreachable block (ram,0x01f0902e) */
/* WARNING: Removing unreachable block (ram,0x01f09162) */
/* WARNING: Removing unreachable block (ram,0x01f0916e) */
/* WARNING: Removing unreachable block (ram,0x01f091d1) */
/* WARNING: Removing unreachable block (ram,0x01f091dd) */
/* WARNING: Removing unreachable block (ram,0x01f09220) */
/* WARNING: Removing unreachable block (ram,0x01f09229) */
/* WARNING: Removing unreachable block (ram,0x01f08e9e) */
/* WARNING: Removing unreachable block (ram,0x01f08eae) */
/* WARNING: Removing unreachable block (ram,0x01f0914b) */
/* WARNING: Removing unreachable block (ram,0x01f09154) */
/* WARNING: Removing unreachable block (ram,0x01f08df2) */
/* WARNING: Removing unreachable block (ram,0x01f08dfb) */
/* WARNING: Removing unreachable block (ram,0x01f08d56) */
/* WARNING: Removing unreachable block (ram,0x01f08d5f) */
/* WARNING: Removing unreachable block (ram,0x01f09040) */
/* WARNING: Removing unreachable block (ram,0x01f09049) */
/* WARNING: Removing unreachable block (ram,0x01f09118) */
/* WARNING: Removing unreachable block (ram,0x01f09125) */

void FUN_01f08cf0(void)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong unaff_RDI;
  longlong *plVar7;
  longlong *plVar8;
  byte bVar9;
  bool bVar10;
  longlong local_60;
  longlong *local_40;
  char local_38;
  
  lVar1 = *(longlong *)(unaff_RDI + 0x48);
  if (lVar1 == 0) {
    local_60 = 0;
  }
  else {
    FUN_00d50b00();
    local_60 = lVar1;
  }
  FUN_01ccad60();
  if (local_40 == (longlong *)0x0) {
    bVar3 = true;
    bVar4 = true;
    plVar5 = (longlong *)0x0;
    lVar6 = DAT_02800140;
  }
  else {
    if (local_38 == '\0') {
      FUN_00d50b00();
    }
    bVar3 = false;
    bVar4 = false;
    plVar5 = local_40;
    lVar6 = DAT_02800140;
  }
  DAT_02800140 = lVar6;
  if (lVar6 != 0) {
    FUN_00d50b00();
    bVar4 = bVar3;
  }
  FUN_01ccaae0();
  plVar8 = local_40;
  if (local_40 == (longlong *)0x0) {
    bVar9 = 1;
    plVar8 = (longlong *)0x0;
    bVar3 = false;
  }
  else if (local_38 == '\0') {
    FUN_00d50b00();
    bVar9 = 0;
    bVar3 = true;
  }
  else {
    local_38 = '\0';
    bVar3 = true;
    bVar9 = 0;
  }
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  lVar6 = DAT_027e7c20;
  if (((plVar8 != (longlong *)0x0) && (local_60 != 0)) && (plVar5 != (longlong *)0x0)) {
    (**(code **)(*plVar5 + 0x80))();
    goto LAB_01f09274;
  }
  if (DAT_027e7c20 != 0) {
    FUN_00d50b00();
  }
  FUN_01ccaae0();
  if (local_40 == plVar8) {
    if ((bool)(bVar9 & local_40 != (longlong *)0x0)) {
      if (local_38 != '\0') goto LAB_01f08f32;
      bVar3 = true;
      FUN_00d50b00();
    }
LAB_01f08f94:
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      bVar10 = (bool)(bVar3 & plVar8 != (longlong *)0x0);
      bVar3 = true;
      plVar8 = local_40;
      if (bVar10) {
        FUN_00d50b20();
      }
      goto LAB_01f08f94;
    }
    bVar10 = plVar8 != (longlong *)0x0;
    plVar8 = local_40;
    if ((bool)(bVar3 & bVar10)) {
      FUN_00d50b20();
    }
LAB_01f08f32:
    local_38 = '\0';
    bVar3 = true;
  }
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  lVar6 = DAT_027e7c20;
  if (DAT_027e7c20 != 0) {
    FUN_00d50b00();
  }
  FUN_01ccab60();
  if (local_40 == (longlong *)0x0) {
    bVar10 = true;
    plVar7 = (longlong *)0x0;
  }
  else {
    plVar7 = local_40;
    if (local_38 == '\0') {
      FUN_00d50b00();
      bVar10 = false;
    }
    else {
      local_38 = '\0';
      bVar10 = false;
    }
  }
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  if ((local_60 != 0) && (plVar5 != (longlong *)0x0)) {
    if ((plVar8 == (longlong *)0x0) || (plVar7 == (longlong *)0x0)) {
      if ((plVar8 == (longlong *)0x0) || (plVar7 != (longlong *)0x0)) goto LAB_01f09258;
      FUN_01d836c0();
      if (local_40 == (longlong *)0x0) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
        if (local_38 == '\0') {
          FUN_00d50b00();
        }
      }
      (**(code **)(*plVar5 + 0x80))();
    }
    else {
      FUN_01d26620();
      if (local_40 == (longlong *)0x0) {
        bVar2 = false;
      }
      else if (local_38 == '\0') {
        FUN_00d50b00();
        bVar2 = true;
      }
      else {
        bVar2 = true;
      }
      (**(code **)(*plVar5 + 0x80))();
    }
    if ((bVar2) && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
LAB_01f09258:
  if (!bVar10 && plVar7 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_01f09274:
  if ((bVar3) && (plVar8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (!bVar4 && plVar5 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((lVar1 != 0) && (local_60 != 0)) {
    FUN_00d50b20();
  }
  return;
}


