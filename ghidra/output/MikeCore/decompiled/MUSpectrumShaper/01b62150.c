// Function: FUN_01b62150
// Address: 01b62150
// Size: 1309 bytes
// Class: MUSpectrumShaper


/* WARNING: Removing unreachable block (ram,0x01b625c8) */
/* WARNING: Removing unreachable block (ram,0x01b625d1) */

undefined4 FUN_01b62150(pthread_key_t param_1,byte param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  longlong **pplVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  longlong local_b8;
  char local_b0;
  longlong *local_40;
  char local_38;
  
  FUN_01b5e510();
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) {
      return 0;
    }
    FUN_00d50b00();
    plVar8 = DAT_027e4cc8;
  }
  else {
    plVar8 = DAT_027e4cc8;
    if (local_40 == (longlong *)0x0) {
      return 0;
    }
  }
  DAT_027e4cc8 = plVar8;
  if (plVar8 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar4 = FUN_015b7ba0();
  plVar2 = DAT_027e4cc0;
  if (iVar4 == 3) {
    if (DAT_027e4cc0 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    if (plVar8 == plVar2) {
      if (plVar8 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    else {
      bVar10 = plVar8 != (longlong *)0x0;
      plVar8 = plVar2;
      if (bVar10) {
        FUN_00d50b20();
      }
    }
  }
  FUN_01ca6970();
  plVar2 = local_40;
  if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01ca8220();
  local_38 = '\0';
  local_40 = plVar8;
  uVar5 = FUN_00d23d70();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  plVar1 = DAT_027e4cc0;
  if (((byte)uVar5 & param_2) == 0) goto LAB_01b62636;
  if (DAT_027e4cc0 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*plVar8 + 0x50))();
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  plVar9 = DAT_027e4cc8;
  plVar1 = DAT_027e4cc0;
  if (cVar3 == '\0') {
    if (DAT_027e4cc8 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    pplVar7 = &local_40;
    FUN_01cacbe0();
    plVar1 = local_40;
    FUN_011b2c10();
    if (plVar1 == (longlong *)0x0) {
LAB_01b6241d:
      pplVar7 = &DAT_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_01b6241d;
    }
    plVar1 = *pplVar7;
    if (*(char *)(pplVar7 + 1) == '\0') {
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar7 + 1) = 0;
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar9 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (plVar1 != (longlong *)0x0) {
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_015bea90();
      FUN_00d50b20();
    }
    goto LAB_01b62636;
  }
  if (DAT_027e4cc0 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  pplVar7 = &local_40;
  FUN_01cacbe0();
  plVar9 = local_40;
  FUN_006ddb00();
  if (plVar9 == (longlong *)0x0) {
    pplVar7 = &DAT_02802688;
    plVar9 = DAT_02802688;
    if (DAT_02802690 == '\0') goto LAB_01b6245c;
LAB_01b623b4:
    *(undefined1 *)(pplVar7 + 1) = 0;
  }
  else {
    (**(code **)(*plVar9 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') {
      pplVar7 = &DAT_02802688;
    }
    plVar9 = *pplVar7;
    if (*(char *)(pplVar7 + 1) != '\0') goto LAB_01b623b4;
LAB_01b6245c:
    if (plVar9 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar9 != (longlong *)0x0) {
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_017eca70();
    plVar1 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_015bea90();
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
LAB_01b62636:
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return uVar5;
}


