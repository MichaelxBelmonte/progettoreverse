// Function: FUN_0051e7f0
// Address: 0051e7f0
// Size: 2478 bytes
// Class: MDPluginDocument


/* WARNING: Removing unreachable block (ram,0x0051e834) */
/* WARNING: Removing unreachable block (ram,0x0051e83d) */
/* WARNING: Removing unreachable block (ram,0x0051eba0) */
/* WARNING: Removing unreachable block (ram,0x0051eb77) */

void FUN_0051e7f0(pthread_key_t param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong *unaff_RDI;
  bool bVar11;
  double dVar12;
  undefined8 uVar13;
  longlong local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  int local_40;
  
  plVar2 = local_58;
  FUN_00757c60();
  if ((local_50 == '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  if (unaff_RDI[0x61] == 0) {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar3 = FUN_012e57e0();
    iVar4 = FUN_00b33590();
    bVar11 = true;
    if (iVar3 == iVar4) {
      FUN_0051b4f0();
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar3 = FUN_012e57e0();
      iVar4 = FUN_00b33590();
      bVar11 = iVar3 != iVar4;
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar11) {
      (**(code **)(*(longlong *)unaff_RDI[0x21] + 0x498))();
      FUN_00cbb780();
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*(longlong *)unaff_RDI[0x21] + 0x498))();
      FUN_00cb1f10();
      FUN_00db3260();
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      FUN_0051b4f0();
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00b33590();
      FUN_012e57a0();
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*(longlong *)unaff_RDI[0x21] + 0x498))();
      FUN_00cb1f10();
      FUN_00db3270();
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*(longlong *)unaff_RDI[0x21] + 0x498))();
      (**(code **)(*local_58 + 0x3c8))();
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  lVar10 = unaff_RDI[0x5d];
  if (lVar10 != 0) {
    local_50 = '\0';
    local_58 = (longlong *)0x0;
    local_40 = -1;
    while( true ) {
      lVar6 = (longlong)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar10 + 0xc) <= local_40) break;
      local_58 = *(longlong **)(*(longlong *)(lVar10 + 0x10) + 8 + lVar6 * 8);
      FUN_00d50b00();
      (**(code **)(*local_58 + 0x3b8))();
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b20();
      }
      (**(code **)(*local_58 + 0x368))();
    }
    FUN_00540a20();
    param_1 = (pthread_key_t)lVar10;
  }
  if (*(char *)((longlong)unaff_RDI + 0x359) != '\0') {
    plVar7 = (longlong *)FUN_00e8fc40();
    FUN_0038cc50();
    (**(code **)(*plVar7 + 0x18))();
    plVar1 = (longlong *)unaff_RDI[0x4f];
    if (plVar1 == plVar7) {
      FUN_00d50b20();
    }
    else {
      unaff_RDI[0x4f] = (longlong)plVar7;
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    plVar1 = (longlong *)unaff_RDI[0x4f];
    FUN_00d50b00();
    (**(code **)(*plVar1 + 0x3b8))();
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    (**(code **)(*(longlong *)unaff_RDI[0x4f] + 0x418))();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_002dca80();
    if (local_50 == '\0') {
      if (local_58 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    FUN_012dddb0();
    if (local_58 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    puVar8 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar8 = &DAT_025e1318;
    puVar8[7] = 0;
    puVar8[8] = 0;
    puVar8[9] = 0;
    puVar8[10] = 0;
    (*DAT_025e1330)();
    FUN_012d8bb0();
    if (puVar8 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    FUN_012dc370();
    if (unaff_RDI[0x61] != 0) {
      FUN_012dbeb0();
      FUN_012dbec0();
    }
    (**(code **)(*(longlong *)unaff_RDI[0x4f] + 0x368))();
  }
  if ((char)unaff_RDI[0x6b] == '\0') goto LAB_0051f0c6;
  plVar7 = (longlong *)FUN_00e8fc40();
  FUN_0038cc50();
  (**(code **)(*plVar7 + 0x18))();
  plVar1 = (longlong *)unaff_RDI[0x1d];
  if (plVar1 == plVar7) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[0x1d] = (longlong)plVar7;
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  plVar1 = (longlong *)unaff_RDI[0x1d];
  FUN_00d50b00();
  (**(code **)(*plVar1 + 0x3b8))();
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_012dc370();
  if (unaff_RDI[0x61] == 0) {
    puVar9 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar9 = &DAT_025e1318;
    puVar9[7] = 0;
    puVar9[8] = 0;
    puVar9[9] = 0;
    puVar9[10] = 0;
    (*DAT_025e1330)();
    puVar8 = (undefined8 *)unaff_RDI[0x1e];
    if (puVar8 == puVar9) {
      FUN_00d50b20();
    }
    else {
      unaff_RDI[0x1e] = (longlong)puVar9;
      if (puVar8 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  else {
    puVar9 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar9 = &DAT_024c0af0;
    puVar9[7] = 0;
    puVar9[8] = 0;
    (*DAT_024c0b08)();
    puVar8 = (undefined8 *)unaff_RDI[0x1e];
    if (puVar8 == puVar9) {
      FUN_00d50b20();
    }
    else {
      unaff_RDI[0x1e] = (longlong)puVar9;
      if (puVar8 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  lVar10 = unaff_RDI[0x1e];
  if (lVar10 != 0) {
    FUN_00d50b00();
  }
  FUN_012d8bb0();
  if (lVar10 != 0) {
    FUN_00d50b20();
  }
  FUN_012dbeb0();
  FUN_012dbec0();
  FUN_0051da80();
  if (unaff_RDI[0x61] == 0) {
    if (unaff_RDI[0x20] == 0) {
      puVar9 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar9 = &DAT_025c8348;
      puVar9[2] = 0;
      puVar9[3] = 0;
      puVar9[4] = 0;
      puVar9[5] = 0;
      *(undefined1 *)(puVar9 + 6) = 0;
      (*DAT_025c8360)();
      puVar8 = (undefined8 *)unaff_RDI[0x20];
      if (puVar8 == puVar9) {
        FUN_00d50b20();
      }
      else {
        unaff_RDI[0x20] = (longlong)puVar9;
        if (puVar8 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
      }
    }
    FUN_00b33520();
    FUN_011edd90();
    dVar12 = (double)FUN_00b335d0();
    FUN_011edd50(dVar12 + dVar12);
    FUN_011edcc0();
    FUN_011edca0();
    lVar10 = unaff_RDI[0x20];
    if (lVar10 != 0) {
      FUN_00d50b00();
    }
    FUN_012ddb40();
    if (lVar10 != 0) {
      FUN_00d50b20();
    }
    if (unaff_RDI[0x61] != 0) goto LAB_0051f0a1;
  }
  else {
LAB_0051f0a1:
    *(undefined1 *)(unaff_RDI + 0x14) = 1;
    FUN_0051f6c0();
  }
  (**(code **)(*(longlong *)unaff_RDI[0x1d] + 0x368))();
LAB_0051f0c6:
  uVar13 = (**(code **)(*unaff_RDI + 0x3a8))();
  FUN_00516d30(uVar13,0x24);
  unaff_RDI[0x48] = 0;
  *(undefined2 *)(unaff_RDI + 0x49) = 0;
  if (unaff_RDI[0x61] == 0) {
    *(undefined1 *)((longlong)unaff_RDI + 0x371) = 0;
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x24f) = 0;
  *(undefined1 *)(unaff_RDI + 0x54) = 1;
  FUN_00b341c0();
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


