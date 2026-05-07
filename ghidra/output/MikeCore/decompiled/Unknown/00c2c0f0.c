// Function: FUN_00c2c0f0
// Address: 00c2c0f0
// Size: 1304 bytes
// Class: Unknown


void FUN_00c2c0f0(void)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  longlong *plVar8;
  longlong **pplVar9;
  longlong *local_40;
  char local_38;
  
  pplVar9 = &local_40;
  FUN_01ccad60();
  plVar1 = local_40;
  FUN_001f8a30();
  if (plVar1 == (longlong *)0x0) {
LAB_00c2c13f:
    pplVar9 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar7 = FUN_00e85ea0();
    if (cVar7 == '\0') goto LAB_00c2c13f;
  }
  plVar1 = *pplVar9;
  if (*(char *)(pplVar9 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar9 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (longlong *)0x0) goto LAB_00c2c594;
  pplVar9 = &local_40;
  FUN_01e05950();
  plVar2 = local_40;
  FUN_00c41750();
  if (plVar2 == (longlong *)0x0) {
LAB_00c2c1bf:
    pplVar9 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar2 + 0x360))();
    cVar7 = FUN_00e85ea0();
    if (cVar7 == '\0') goto LAB_00c2c1bf;
  }
  plVar2 = *pplVar9;
  if (*(char *)(pplVar9 + 1) == '\0') {
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar9 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar5 = DAT_027e7c20;
  if (plVar2 == (longlong *)0x0) goto LAB_00c2c594;
  if (DAT_027e7c20 != 0) {
    FUN_00d50b00();
  }
  FUN_01ccab60();
  plVar6 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  lVar5 = DAT_027e7c20;
  if (DAT_027e7c20 != 0) {
    FUN_00d50b00();
  }
  FUN_01ccaae0();
  plVar8 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if (plVar8 == (longlong *)0x0) {
    if (plVar2[3] == 0) {
      bVar4 = false;
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar2[3] = 0;
      bVar4 = false;
      plVar8 = (longlong *)0x0;
LAB_00c2c52c:
      FUN_00d50b20();
    }
  }
  else {
    FUN_01d26010();
    if (local_40 == (longlong *)0x0) {
      FUN_00c40480();
      bVar4 = true;
    }
    else {
      plVar8 = (longlong *)(**(code **)(*local_40 + 0x10))();
      FUN_00c40480();
      bVar4 = true;
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x360))();
        cVar7 = FUN_00e85ea0();
        if (cVar7 != '\0') {
          FUN_00d50b00();
          bVar4 = false;
        }
      }
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      (**(code **)(*local_40 + 0x10))();
      FUN_00d50b20();
    }
    if (bVar4) {
      pplVar9 = &local_40;
      FUN_01d836c0();
      plVar8 = local_40;
      FUN_00b10020();
      if (plVar8 == (longlong *)0x0) {
LAB_00c2c42c:
        pplVar9 = (longlong **)&DAT_02802688;
      }
      else {
        (**(code **)(*plVar8 + 0x360))();
        cVar7 = FUN_00e85ea0();
        if (cVar7 == '\0') goto LAB_00c2c42c;
      }
      plVar8 = *pplVar9;
      if (plVar8 == (longlong *)0x0) {
        bVar4 = false;
      }
      else if (*(char *)(pplVar9 + 1) == '\0') {
        bVar4 = true;
        FUN_00d50b00();
      }
      else {
        *(undefined1 *)(pplVar9 + 1) = 0;
        bVar4 = true;
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      cVar7 = FUN_00b378e0();
      if (cVar7 == '\0') {
        FUN_00bfc770();
        plVar8 = local_40;
        if (local_40 == (longlong *)0x0) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
          if (local_38 == '\0') {
            FUN_00d50b00();
          }
        }
      }
      else {
        FUN_00b37610();
        plVar8 = local_40;
        if (local_40 == (longlong *)0x0) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
          if (local_38 != '\0') goto LAB_00c2c4f1;
          bVar4 = true;
          FUN_00d50b00();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
LAB_00c2c4f1:
      FUN_00d50b20();
    }
    FUN_00d50b20();
    plVar3 = (longlong *)plVar2[3];
    if (plVar3 != plVar8) {
      if (plVar8 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      plVar2[3] = (longlong)plVar8;
      if (plVar3 != (longlong *)0x0) goto LAB_00c2c52c;
    }
  }
  plVar3 = (longlong *)plVar2[2];
  if (plVar3 != plVar6) {
    if (plVar6 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    plVar2[2] = (longlong)plVar6;
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  if (plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((bVar4) && (plVar8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_00c2c594:
  FUN_01d17670();
  lVar5 = DAT_027e7c20;
  if (plVar1 != (longlong *)0x0) {
    if (DAT_027e7c20 != 0) {
      FUN_00d50b00();
    }
    cVar7 = FUN_01ccca20();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    if (cVar7 == '\0') {
      (**(code **)(*plVar1 + 0x998))();
    }
    FUN_00d50b20();
  }
  return;
}


