// Function: FUN_01906d80
// Address: 01906d80
// Size: 1341 bytes
// Class: Unknown


void FUN_01906d80(undefined8 param_1)

{
  bool bVar1;
  longlong *plVar2;
  void *pvVar3;
  undefined8 *puVar4;
  pthread_key_t pVar5;
  longlong lVar6;
  int iVar7;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar8;
  longlong lVar9;
  double dVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  longlong local_c8;
  undefined1 local_c0;
  undefined1 local_b8 [8];
  undefined1 local_b0;
  longlong local_a8;
  undefined1 local_a0;
  longlong local_90;
  char local_88;
  longlong local_48;
  longlong local_40;
  char local_38 [8];
  
  if (*unaff_RSI == 0) {
    lVar6 = *(longlong *)(unaff_RDI + 0x38);
    if (lVar6 != 0) {
      FUN_00d50b00();
    }
    FUN_016ebac0();
    lVar8 = local_40;
    if (local_40 == 0) {
      lVar8 = 0;
      bVar1 = false;
    }
    else if (local_38[0] == '\0') {
      FUN_00d50b00();
      bVar1 = true;
      if ((local_38[0] != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38[0] = '\0';
      bVar1 = true;
    }
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    local_c0 = 0;
    local_c8 = *unaff_RSI;
    FUN_01901690(param_1,&local_c8);
    lVar8 = local_40;
    if (local_40 == 0) {
      lVar8 = 0;
      bVar1 = false;
    }
    else {
      bVar1 = true;
      if (local_38[0] == '\0') {
        FUN_00d50b00();
      }
    }
  }
  FUN_00d23340();
  lVar6 = local_40;
  local_48 = CONCAT71(local_48._1_7_,local_38[0]);
  plVar2 = (longlong *)local_38;
  if (local_38[0] == '\0') {
    plVar2 = &local_48;
  }
  *(char *)plVar2 = '\0';
  if ((local_38[0] != '\0') && (lVar6 != 0)) {
    FUN_00d50b20();
  }
  if (((char)local_48 == '\0') && (lVar6 != 0)) {
    FUN_00d50b00();
  }
  local_a8 = lVar6;
  local_a0 = 1;
  pVar5 = 0;
  FUN_01900ec0(0,&local_a8);
  if ((local_88 == '\0') && (local_90 != 0)) {
    FUN_00d50b00();
  }
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(pVar5);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar10 = (double)FUN_01907950();
  pvVar3 = _pthread_getspecific(pVar5);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar11 = FUN_019079b0();
  dVar12 = (double)FUN_018fd630(uVar11,0);
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar5 = 0x25683c0;
  *puVar4 = &DAT_025683c0;
  (*DAT_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  pvVar3 = _pthread_getspecific(pVar5);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar11 = FUN_01907950();
  iVar7 = *(int *)(puVar4 + 3);
  FUN_00c8e340(uVar11,1);
  lVar6 = puVar4[2];
  *(undefined8 *)(lVar6 + iVar7) = uVar11;
  iVar7 = *(int *)(lVar8 + 0xc);
  if (1 < iVar7) {
    dVar12 = DAT_023b4df8 / dVar12;
    lVar9 = 1;
    do {
      pvVar3 = _pthread_getspecific((pthread_key_t)lVar6);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_40 = FUN_019079b0();
      FUN_00e7b970();
      local_48 = local_40;
      dVar13 = (double)FUN_00e7c860();
      iVar7 = *(int *)(puVar4 + 3);
      FUN_00c8e340(dVar13,1);
      lVar6 = puVar4[2];
      *(double *)(lVar6 + iVar7) = dVar13 * dVar12 + dVar10;
      lVar9 = lVar9 + 1;
      iVar7 = *(int *)(lVar8 + 0xc);
    } while (lVar9 < iVar7);
  }
  if (local_90 != 0) {
    dVar10 = *(double *)((longlong)*(int *)(puVar4 + 3) + -8 + lVar6);
    FUN_00d23340();
    lVar6 = local_40;
    plVar2 = (longlong *)local_38;
    if (local_38[0] == '\0') {
      plVar2 = &local_48;
    }
    local_48 = CONCAT71(local_48._1_7_,local_38[0]);
    *(char *)plVar2 = '\0';
    if ((local_38[0] != '\0') && (lVar6 != 0)) {
      FUN_00d50b20();
    }
    pvVar3 = _pthread_getspecific((pthread_key_t)plVar2);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar12 = (double)FUN_01907950();
    if (((char)local_48 != '\0') && (lVar6 != 0)) {
      FUN_00d50b20();
    }
    FUN_00e7bdb0();
    local_b0 = 0;
    lVar6 = 0;
    FUN_01902aa0(dVar10 - dVar12,local_b8);
    iVar7 = *(int *)(lVar8 + 0xc);
  }
  if (1 < iVar7) {
    lVar9 = 1;
    do {
      pvVar3 = _pthread_getspecific((pthread_key_t)lVar6);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01907cc0(*(undefined8 *)(puVar4[2] + lVar9 * 8));
      lVar9 = lVar9 + 1;
    } while (lVar9 < *(int *)(lVar8 + 0xc));
  }
  FUN_00d50b20();
  if (local_90 != 0) {
    FUN_00d50b20();
  }
  if (bVar1) {
    FUN_00d50b20();
  }
  return;
}


