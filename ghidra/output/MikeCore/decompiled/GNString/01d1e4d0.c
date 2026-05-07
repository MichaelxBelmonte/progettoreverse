// Function: FUN_01d1e4d0
// Address: 01d1e4d0
// Size: 1481 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01d1e821) */
/* WARNING: Removing unreachable block (ram,0x01d1e831) */

void FUN_01d1e4d0(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  char cVar6;
  longlong *unaff_RDI;
  char cVar7;
  longlong **pplVar8;
  longlong *plVar9;
  bool bVar10;
  longlong *local_78;
  char local_70;
  longlong *local_40;
  char local_38;
  
  FUN_01ccad60();
  plVar3 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) {
      return;
    }
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_40 == (longlong *)0x0) {
    return;
  }
  cVar5 = (char)unaff_RDI[10];
  *(undefined1 *)(unaff_RDI + 6) = 0;
  lVar1 = DAT_027057d0;
  if (DAT_027057d0 != 0) {
    FUN_00d50b00();
  }
  FUN_01ccaae0();
  plVar4 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar2 = DAT_027057d0;
  lVar1 = DAT_027e7c20;
  if (plVar4 != (longlong *)0x0) {
    if (DAT_027057d0 != 0) {
      FUN_00d50b00();
    }
    pplVar8 = &local_40;
    (**(code **)(*unaff_RDI + 0x4c8))();
    plVar9 = local_40;
    FUN_00053ac0();
    if (plVar9 == (longlong *)0x0) {
LAB_01d1e60c:
      pplVar8 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar9 + 0x360))();
      cVar5 = FUN_00e85ea0();
      if (cVar5 == '\0') goto LAB_01d1e60c;
    }
    plVar9 = *pplVar8;
    if (*(char *)(pplVar8 + 1) == '\0') {
      if (plVar9 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar8 + 1) = 0;
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (plVar9 == (longlong *)0x0) {
      cVar5 = '\0';
      lVar1 = DAT_027e7c20;
    }
    else {
      cVar5 = FUN_00d45ad0();
      FUN_00d50b20();
      lVar1 = DAT_027e7c20;
    }
  }
  DAT_027e7c20 = lVar1;
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_01ccaae0();
  plVar9 = local_40;
  if (plVar4 == local_40) {
LAB_01d1e73b:
    plVar9 = plVar4;
    if (local_38 != '\0') {
LAB_01d1e741:
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  else {
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      if (plVar4 != (longlong *)0x0) {
        FUN_00d50b20();
        plVar4 = plVar9;
        goto LAB_01d1e73b;
      }
      if (local_38 == '\0') goto LAB_01d1e74f;
      goto LAB_01d1e741;
    }
    if (plVar4 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    local_38 = '\0';
  }
LAB_01d1e74f:
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (plVar9 != (longlong *)0x0) {
    cVar6 = FUN_01ccd010();
    cVar7 = cVar5;
    if (cVar6 == '\0') {
      cVar6 = FUN_01d26970();
      cVar7 = '\0';
      if (cVar6 == '\0') {
        cVar7 = cVar5;
      }
    }
    (**(code **)(*plVar9 + 0x3f8))();
    if (local_40 == (longlong *)0x0) {
      bVar10 = true;
    }
    else {
      (**(code **)(*plVar9 + 0x3f8))();
      bVar10 = *(int *)((longlong)local_78 + 0xc) == 0;
      if (local_70 != '\0') {
        FUN_00d50b20();
      }
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_027e7c20;
    if (bVar10) {
      FUN_01e10690();
    }
    else {
      if (DAT_027e7c20 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*unaff_RDI + 0x4c8))();
      plVar4 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
           (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 400))();
        plVar4 = local_40;
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_01e10690();
        if (plVar4 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      lVar1 = DAT_027e7c20;
      if (cVar7 != '\0') {
        if (DAT_027e7c20 != 0) {
          FUN_00d50b00();
        }
        cVar5 = FUN_01ccca20();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        goto LAB_01d1e9a2;
      }
    }
    cVar5 = '\0';
  }
LAB_01d1e9a2:
  FUN_01e10580();
  (**(code **)(*plVar3 + 0x640))();
  (**(code **)(*local_78 + 0x480))(cVar5,0x11,0);
  plVar4 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01e11fd0();
  if (plVar4 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x520))();
  (**(code **)(*plVar3 + 0x620))();
  if (plVar9 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}


