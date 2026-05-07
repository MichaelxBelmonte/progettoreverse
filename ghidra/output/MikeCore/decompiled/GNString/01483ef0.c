// Function: FUN_01483ef0
// Address: 01483ef0
// Size: 1163 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x014840c7) */
/* WARNING: Removing unreachable block (ram,0x014840d0) */

void FUN_01483ef0(pthread_key_t param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int iVar8;
  pthread_key_t pVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong unaff_RDI;
  double dVar13;
  longlong local_58;
  char local_50;
  longlong local_38;
  char local_30;
  
  cVar2 = FUN_00e34a50();
  if (cVar2 != '\0') {
    FUN_00e34a60();
    return;
  }
  plVar12 = *(longlong **)(unaff_RDI + 0x68);
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    plVar12 = *(longlong **)(unaff_RDI + 0x68);
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      plVar12 = (longlong *)plVar12[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
  }
  uVar6 = (**(code **)(*plVar12 + 0x370))();
  *(undefined8 *)(unaff_RDI + 0xa8) = uVar6;
  plVar12 = *(longlong **)(unaff_RDI + 0x68);
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    plVar12 = *(longlong **)(unaff_RDI + 0x68);
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      plVar12 = (longlong *)plVar12[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
  }
  uVar6 = (**(code **)(*plVar12 + 0x378))();
  *(undefined8 *)(unaff_RDI + 0x98) = uVar6;
  plVar12 = *(longlong **)(unaff_RDI + 0x68);
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    plVar12 = *(longlong **)(unaff_RDI + 0x68);
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      plVar12 = (longlong *)plVar12[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
  }
  dVar13 = (double)(**(code **)(*plVar12 + 0x398))();
  *(double *)(unaff_RDI + 0xb0) = dVar13;
  *(undefined8 *)(unaff_RDI + 0xb8) = 0x407b900000000000;
  pVar9 = 1;
  if (0 < (int)(dVar13 * DAT_0240f0f0)) {
    pVar9 = (int)(dVar13 * DAT_0240f0f0);
  }
  *(pthread_key_t *)(unaff_RDI + 0xc0) = pVar9;
  FUN_013fb420();
  pvVar4 = _pthread_getspecific(pVar9);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0132d790();
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  uVar1 = *(uint *)(local_38 + 0x30);
  uVar10 = (ulonglong)(int)uVar1;
  uVar11 = *(ulonglong *)(unaff_RDI + 0x98);
  if ((uVar11 | uVar10) >> 0x20 == 0) {
    iVar3 = (int)((uVar11 & 0xffffffff) / (ulonglong)uVar1);
    uVar11 = (uVar11 & 0xffffffff) % (ulonglong)uVar1;
  }
  else {
    iVar3 = (int)((longlong)uVar11 / (longlong)uVar10);
    uVar11 = (longlong)uVar11 % (longlong)uVar10;
  }
  iVar8 = 2;
  if (2 < iVar3 + 1) {
    iVar8 = iVar3 + 1;
  }
  *(int *)(unaff_RDI + 0x19c) = iVar8;
  puVar7 = (undefined8 *)FUN_00e8fc40(iVar8,uVar11);
  FUN_00d4ff40();
  pVar9 = 0x25f1800;
  *puVar7 = &DAT_025f1800;
  puVar7[7] = 0;
  *(undefined4 *)(puVar7 + 8) = 0;
  *(undefined4 *)(puVar7 + 0xc) = 0;
  puVar7[2] = 0;
  puVar7[3] = 0;
  puVar7[4] = 0;
  puVar7[5] = 0;
  *(undefined4 *)(puVar7 + 6) = 0;
  puVar7[9] = 0;
  puVar7[10] = 0;
  *(undefined8 *)((longlong)puVar7 + 0x55) = 0;
  puVar7[0xd] = 0;
  puVar7[0xe] = 0;
  puVar7[0xf] = 0;
  puVar7[0x10] = 0;
  (*DAT_025f1818)();
  lVar5 = *(longlong *)(unaff_RDI + 0x1d0);
  *(undefined8 **)(unaff_RDI + 0x1d0) = puVar7;
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  FUN_015c6ee0((int)*(undefined8 *)(local_38 + 0x10),*(undefined4 *)(local_38 + 0x28));
  *(undefined4 *)(unaff_RDI + 0x1d8) = *(undefined4 *)(unaff_RDI + 0x19c);
  FUN_01484480();
  lVar5 = *(longlong *)(unaff_RDI + 0x70);
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
  pvVar4 = _pthread_getspecific(pVar9);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar3 = FUN_0141bab0();
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if (iVar3 == 3) {
    *(undefined1 *)(unaff_RDI + 0xe1) = 1;
    if (*(char *)(unaff_RDI + 0x198) == '\0') {
      FUN_014902f0();
    }
    else {
      FUN_018acae0();
      lVar5 = DAT_027db978;
      if (DAT_027db978 != 0) {
        FUN_00d50b00();
      }
      dVar13 = (double)FUN_018ade30();
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if (DAT_023942d0 < dVar13) {
        FUN_01484850();
        FUN_01484bc0();
      }
      *(undefined8 *)(unaff_RDI + 0x22c) = 0xc00000028;
      FUN_0148ced0(0,DAT_02390124,DAT_02390124,DAT_02390124,0xc,0);
    }
    if (*(char *)(unaff_RDI + 0x3c) != '\0') {
      FUN_00e34a60();
      goto LAB_01484363;
    }
  }
  else {
    FUN_01484850();
    FUN_01484bc0();
    if (*(char *)(unaff_RDI + 0x3c) != '\0') {
      FUN_00e34a60();
      goto LAB_01484363;
    }
  }
  FUN_01483d60();
LAB_01484363:
  FUN_00d50b20();
  return;
}


