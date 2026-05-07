// Function: FUN_014178f0
// Address: 014178f0
// Size: 1563 bytes
// Class: MUAmplitudeAnalyzer


/* WARNING: Removing unreachable block (ram,0x01417a1e) */
/* WARNING: Removing unreachable block (ram,0x01417a27) */
/* WARNING: Removing unreachable block (ram,0x01417ebf) */
/* WARNING: Removing unreachable block (ram,0x01417ecc) */

void FUN_014178f0(double param_1,double param_2)

{
  double dVar1;
  undefined8 *puVar2;
  double dVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  void *pvVar8;
  longlong lVar9;
  longlong lVar10;
  pthread_key_t pVar11;
  int iVar12;
  ulonglong uVar13;
  longlong *plVar14;
  longlong *unaff_RDI;
  undefined4 uVar15;
  undefined8 *local_e0;
  longlong local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  float local_ac;
  double local_a8;
  undefined8 *local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_48;
  char local_40;
  
  local_a8 = param_1;
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *(undefined1 *)(puVar7 + 7) = 0;
  *(undefined4 *)((longlong)puVar7 + 0x3c) = 0;
  *(undefined2 *)(puVar7 + 8) = 0;
  pVar11 = 0x25dc9e8;
  *puVar7 = &DAT_025dc9e8;
  puVar7[9] = 0;
  puVar7[10] = 0;
  (*DAT_025dca00)();
  pvVar8 = _pthread_getspecific(pVar11);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013eb950(SUB84(DAT_023934d0,0));
  lVar9 = unaff_RDI[0x10];
  iVar6 = *(int *)(lVar9 + 0x18);
  iVar12 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar12 = iVar6;
  }
  if (iVar12 >> 2 < (int)((local_a8 + param_2) * DAT_023934d0 + DAT_0238fee8)) {
    FUN_00d50b00();
    local_40 = '\0';
    FUN_00c8e4f0();
    puVar4 = local_a0;
    if (local_98 == '\0') {
      if (((local_a0 != (undefined8 *)0x0) && (FUN_00d50b00(), local_98 != '\0')) &&
         (local_a0 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_98 = '\0';
    }
    FUN_00c92170();
    FUN_00c92160();
    uVar15 = FUN_00d50b20();
    FUN_00c8e340(uVar15,0);
    puVar2 = (undefined8 *)unaff_RDI[0x10];
    if (puVar2 != puVar4) {
      if (puVar4 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
      unaff_RDI[0x10] = (longlong)puVar4;
      if (puVar2 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
    local_48 = lVar9;
    if (puVar4 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00c8e340(iVar12 >> 2,0);
  }
  uVar13 = unaff_RDI[0x10];
  local_d8 = (longlong)(int)(DAT_023934d0 * local_a8) * 4 + *(longlong *)(uVar13 + 0x10);
  pvVar8 = _pthread_getspecific((pthread_key_t)uVar13);
  if ((pvVar8 == (void *)0x0) || (lVar9 = FUN_00e8b990(), lVar9 == 0)) {
    lVar9 = unaff_RDI[0x10];
  }
  else {
    lVar9 = unaff_RDI[0x10];
  }
  if (lVar9 != 0) {
    local_68 = 0;
    FUN_00d50b00();
  }
  local_68 = '\x01';
  local_70 = lVar9;
  FUN_013eb890();
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  iVar6 = (int)(param_2 * DAT_023934d0);
  if (0 < iVar6) {
    local_ac = (float)iVar6;
    lVar9 = 0;
    do {
      dVar1 = (double)unaff_RDI[0x11];
      plVar14 = (longlong *)unaff_RDI[0xc];
      pvVar8 = _pthread_getspecific((pthread_key_t)uVar13);
      if (pvVar8 != (void *)0x0) {
        plVar14 = (longlong *)unaff_RDI[0xc];
        lVar10 = FUN_00e8b990();
        if (lVar10 != 0) {
          plVar14 = (longlong *)plVar14[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
        }
      }
      dVar3 = (double)(**(code **)(*plVar14 + 0x370))();
      uVar13 = (ulonglong)(uint)(int)(double)unaff_RDI[0x11];
      FUN_01418260(uVar13,(longlong)(int)((double)(int)lVar9 * dVar1 + dVar3 * local_a8));
      uVar15 = (**(code **)(DAT_02786500 + 0x10))();
      *(undefined4 *)(local_d8 + lVar9 * 4) = uVar15;
      cVar5 = FUN_00e34a50();
      if (cVar5 != '\0') {
        FUN_00e34a60();
        goto LAB_01417e85;
      }
      pvVar8 = _pthread_getspecific((pthread_key_t)uVar13);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar5 = FUN_0124c5d0();
      if (cVar5 == '\0') {
        (**(code **)(*unaff_RDI + 0x380))((float)(int)lVar9 / local_ac);
      }
      lVar9 = lVar9 + 1;
    } while (iVar6 != (int)lVar9);
  }
  lVar9 = DAT_027c0df8;
  if (DAT_027c0df8 != 0) {
    FUN_00d50b00();
  }
  local_e0 = puVar7;
  FUN_00083ea0(2,&local_e0);
  FUN_0036bfe0();
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  local_a0 = (undefined8 *)&DAT_0253d630;
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  local_a0 = &DAT_024c5048;
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if (lVar9 != 0) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  local_d0 = DAT_027c0df0;
  if (DAT_027c0df0 != 0) {
    FUN_00d50b00();
  }
  local_c8 = '\x01';
  FUN_00d50b00();
  local_c0 = local_48;
  local_b8 = '\0';
  FUN_00d40470(&local_c0,&stack0xffffffffffffffa0,1,3);
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (local_48 != 0) {
    FUN_00d50b20();
  }
LAB_01417e85:
  if (puVar7 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}


