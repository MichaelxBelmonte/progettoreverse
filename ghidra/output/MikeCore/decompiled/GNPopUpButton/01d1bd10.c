// Function: FUN_01d1bd10
// Address: 01d1bd10
// Size: 1630 bytes
// Class: GNPopUpButton


/* WARNING: Removing unreachable block (ram,0x01d1c06c) */
/* WARNING: Removing unreachable block (ram,0x01d1c05c) */
/* WARNING: Removing unreachable block (ram,0x01d1c1fb) */
/* WARNING: Removing unreachable block (ram,0x01d1c207) */

void FUN_01d1bd10(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  longlong *unaff_RDI;
  char cVar8;
  longlong **pplVar9;
  longlong *plVar10;
  bool bVar11;
  longlong *local_58;
  char local_50;
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
  lVar1 = DAT_027057d0;
  cVar5 = (char)unaff_RDI[10];
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
    pplVar9 = &local_40;
    (**(code **)(*unaff_RDI + 0x4c8))();
    plVar10 = local_40;
    FUN_00053ac0();
    if (plVar10 == (longlong *)0x0) {
LAB_01d1be47:
      pplVar9 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar5 = FUN_00e85ea0();
      if (cVar5 == '\0') goto LAB_01d1be47;
    }
    plVar10 = *pplVar9;
    if (*(char *)(pplVar9 + 1) == '\0') {
      if (plVar10 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar9 + 1) = 0;
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (plVar10 == (longlong *)0x0) {
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
  plVar10 = local_40;
  if (plVar4 == local_40) {
LAB_01d1bf76:
    plVar10 = plVar4;
    if (local_38 != '\0') {
LAB_01d1bf7c:
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
        plVar4 = plVar10;
        goto LAB_01d1bf76;
      }
      if (local_38 == '\0') goto LAB_01d1bf8a;
      goto LAB_01d1bf7c;
    }
    if (plVar4 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    local_38 = '\0';
  }
LAB_01d1bf8a:
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (plVar10 == (longlong *)0x0) goto LAB_01d1c277;
  cVar6 = FUN_01ccd010();
  cVar8 = cVar5;
  if (cVar6 == '\0') {
    cVar6 = FUN_01d26970();
    cVar8 = '\0';
    if (cVar6 == '\0') {
      cVar8 = cVar5;
    }
  }
  (**(code **)(*plVar10 + 0x3f8))();
  if (local_40 == (longlong *)0x0) {
    bVar11 = true;
  }
  else {
    (**(code **)(*plVar10 + 0x3f8))();
    bVar11 = *(int *)((longlong)local_58 + 0xc) == 0;
    if (local_50 != '\0') {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027e7c20;
  if (bVar11) {
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
    if ((char)unaff_RDI[6] == '\0') {
      if (plVar4 == (longlong *)0x0) {
LAB_01d1c1d4:
        FUN_01e10690();
        FUN_00e7b4e0();
        FUN_01e148d0();
        goto LAB_01d1c221;
      }
      FUN_01e128f0();
      if (local_40 == (longlong *)0x0) {
        bVar7 = 1;
      }
      else {
        FUN_01e128f0();
        if (local_50 == '\0') {
          if (local_58 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        bVar7 = (**(code **)(*plVar4 + 0x50))();
        if (local_58 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        bVar7 = bVar7 ^ 1;
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (bVar7 != 0) goto LAB_01d1c1d4;
LAB_01d1c226:
      FUN_00d50b20();
    }
    else {
LAB_01d1c221:
      if (plVar4 != (longlong *)0x0) goto LAB_01d1c226;
    }
    lVar1 = DAT_027e7c20;
    if (cVar8 != '\0') {
      if (DAT_027e7c20 != 0) {
        FUN_00d50b00();
      }
      cVar5 = FUN_01ccca20();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      goto LAB_01d1c277;
    }
  }
  cVar5 = '\0';
LAB_01d1c277:
  FUN_01e10580();
  (**(code **)(*plVar3 + 0x640))();
  (**(code **)(*local_58 + 0x480))(cVar5,0x11,0);
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
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x520))();
  (**(code **)(*plVar3 + 0x620))();
  if (plVar10 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}


