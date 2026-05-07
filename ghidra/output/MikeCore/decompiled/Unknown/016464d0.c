// Function: FUN_016464d0
// Address: 016464d0
// Size: 3818 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x016469c3) */
/* WARNING: Removing unreachable block (ram,0x016469cf) */
/* WARNING: Removing unreachable block (ram,0x01646ec5) */
/* WARNING: Removing unreachable block (ram,0x01646ed1) */
/* WARNING: Removing unreachable block (ram,0x01646b95) */
/* WARNING: Removing unreachable block (ram,0x01646b9e) */
/* WARNING: Removing unreachable block (ram,0x01646903) */
/* WARNING: Removing unreachable block (ram,0x0164690c) */
/* WARNING: Removing unreachable block (ram,0x0164730c) */
/* WARNING: Removing unreachable block (ram,0x01647319) */

void FUN_016464d0(pthread_key_t param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  pthread_key_t pVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong *unaff_RDI;
  longlong lVar13;
  bool bVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  longlong *local_110;
  char local_108;
  longlong *local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong *local_c0;
  longlong *local_b8;
  longlong local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong *local_48;
  char local_40;
  
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01320d00();
  pvVar4 = _pthread_getspecific(param_1);
  plVar12 = local_48;
  if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
    plVar12 = (longlong *)local_48[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
  }
  dVar16 = (double)(**(code **)(*plVar12 + 0x370))();
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01320d00();
  pvVar4 = _pthread_getspecific(param_1);
  plVar12 = local_48;
  if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
    plVar12 = (longlong *)local_48[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
  }
  lVar5 = (**(code **)(*plVar12 + 0x378))();
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar6 = unaff_RDI[0x12];
  if (1 < *(int *)(lVar6 + 0xc)) {
    lVar13 = 1;
    do {
      pVar9 = (pthread_key_t)lVar6;
      pvVar4 = _pthread_getspecific(pVar9);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01320d00();
      pvVar4 = _pthread_getspecific(pVar9);
      plVar12 = local_48;
      if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        plVar12 = (longlong *)local_48[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
      }
      dVar17 = (double)(**(code **)(*plVar12 + 0x370))();
      bVar14 = true;
      if ((dVar17 == dVar16) && (!NAN(dVar17) && !NAN(dVar16))) {
        pvVar4 = _pthread_getspecific(pVar9);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01320d00();
        pvVar4 = _pthread_getspecific(pVar9);
        plVar12 = local_110;
        if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          plVar12 = (longlong *)local_110[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
        lVar6 = (**(code **)(*plVar12 + 0x378))();
        bVar14 = lVar6 != lVar5;
        if ((local_108 != '\0') && (local_110 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (bVar14) {
        return;
      }
      lVar13 = lVar13 + 1;
      lVar6 = unaff_RDI[0x12];
    } while (lVar13 < *(int *)(lVar6 + 0xc));
  }
  pVar9 = (pthread_key_t)lVar6;
  (**(code **)(*unaff_RDI + 0x380))(0);
  pvVar4 = _pthread_getspecific(pVar9);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0141ac90();
  pvVar4 = _pthread_getspecific(pVar9);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0141ab50();
  local_b0 = **(longlong **)(unaff_RDI[0x11] + 0x10);
  if (local_b0 != 0) {
    FUN_00d50b00();
  }
  pvVar4 = _pthread_getspecific(pVar9);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01320d00();
  if ((local_40 == '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  local_c0 = local_48;
  plVar7 = (longlong *)FUN_00e8fc40();
  FUN_002773c0();
  (**(code **)(*plVar7 + 0x18))();
  plVar12 = (longlong *)unaff_RDI[0xc];
  if (plVar12 == plVar7) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[0xc] = (longlong)plVar7;
    if (plVar12 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  pvVar4 = _pthread_getspecific(pVar9);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01327930();
  pvVar4 = _pthread_getspecific(pVar9);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_a0 = 0;
  lVar5 = unaff_RDI[0xe];
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
  local_a0 = '\x01';
  local_a8 = lVar5;
  FUN_0134a480();
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(pVar9);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0132dd40();
  pvVar4 = _pthread_getspecific(pVar9);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0132dbf0(DAT_0240f0f0);
  pvVar4 = _pthread_getspecific(pVar9);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0132d800();
  pvVar4 = _pthread_getspecific(pVar9);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0132d790();
  if ((local_40 == '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  uVar1 = *(uint *)(local_48 + 6);
  local_b8 = local_48;
  pvVar4 = _pthread_getspecific(pVar9);
  plVar12 = local_48;
  if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
    plVar12 = (longlong *)local_48[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
  }
  lVar5 = (**(code **)(*plVar12 + 0x398))();
  unaff_RDI[0x1f] = lVar5;
  pvVar4 = _pthread_getspecific(pVar9);
  plVar12 = local_48;
  if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
    plVar12 = (longlong *)local_48[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
  }
  uVar8 = (**(code **)(*plVar12 + 0x378))();
  uVar10 = uVar8 | (longlong)(int)uVar1;
  uVar11 = uVar10 >> 0x20;
  if (uVar11 == 0) {
    iVar3 = (int)((uVar8 & 0xffffffff) / (ulonglong)uVar1);
  }
  else {
    iVar3 = (int)((longlong)uVar8 / (longlong)(int)uVar1);
  }
  *(int *)(unaff_RDI + 0x20) = iVar3 + 1;
  pvVar4 = _pthread_getspecific((pthread_key_t)(uVar10 >> 0x20));
  plVar12 = local_48;
  if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
    plVar12 = (longlong *)local_48[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
  }
  dVar16 = (double)(**(code **)(*plVar12 + 0x398))();
  pvVar4 = _pthread_getspecific((pthread_key_t)uVar11);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0132dba0();
  pvVar4 = _pthread_getspecific((pthread_key_t)uVar11);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0132dc50(dVar16 * DAT_0240f0f0);
  pvVar4 = _pthread_getspecific((pthread_key_t)uVar11);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_90 = 0;
  lVar5 = unaff_RDI[0x12];
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
  local_90 = '\x01';
  local_98 = lVar5;
  FUN_0133b360();
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  pVar9 = (pthread_key_t)uVar11;
  lVar5 = unaff_RDI[0x12];
  if (*(int *)(lVar5 + 0xc) < 1) {
    fVar15 = 0.0;
  }
  else {
    fVar15 = 0.0;
    lVar6 = 0;
    do {
      pVar9 = (pthread_key_t)uVar11;
      lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + lVar6 * 8);
      if (lVar5 != 0) {
        FUN_00d50b00();
      }
      pvVar4 = _pthread_getspecific(pVar9);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar13 = *(longlong *)(*(longlong *)(unaff_RDI[0x13] + 0x10) + lVar6 * 8);
      local_80 = 0;
      if (lVar13 != 0) {
        FUN_00d50b00();
      }
      local_80 = '\x01';
      local_88 = lVar13;
      FUN_013764e0();
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      fVar15 = fVar15 + DAT_023b2c84;
      (**(code **)(*unaff_RDI + 0x380))();
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
      lVar6 = lVar6 + 1;
      lVar5 = unaff_RDI[0x12];
      pVar9 = *(pthread_key_t *)(lVar5 + 0xc);
      uVar11 = (ulonglong)(int)pVar9;
    } while (lVar6 < (longlong)uVar11);
  }
  pvVar4 = _pthread_getspecific(pVar9);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0137a290();
  pvVar4 = _pthread_getspecific(pVar9);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar2 = FUN_0141baf0();
  if (cVar2 == '\0') {
    pvVar4 = _pthread_getspecific(pVar9);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar3 = FUN_0141bab0();
    if (iVar3 != 2) {
      pvVar4 = _pthread_getspecific(pVar9);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar3 = FUN_0141bab0();
      if (iVar3 == 4) {
        pvVar4 = _pthread_getspecific(pVar9);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01390380();
      }
      goto LAB_01647032;
    }
  }
  pvVar4 = _pthread_getspecific(pVar9);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01390380();
LAB_01647032:
  pvVar4 = _pthread_getspecific(pVar9);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar4 = _pthread_getspecific(pVar9);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0141baf0();
  FUN_01390350();
  pvVar4 = _pthread_getspecific(pVar9);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01349bf0();
  local_70 = 0;
  (**(code **)(unaff_RDI[3] + 0x10))();
  FUN_00d50b00();
  local_70 = '\x01';
  local_78 = unaff_RDI + 3;
  FUN_00df4f00(fVar15,DAT_02390124 - fVar15);
  plVar12 = local_48 + 2;
  if (local_48 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  if ((local_40 == '\0') && (local_48 != (longlong *)0x0)) {
    (**(code **)(*plVar12 + 0x10))();
    FUN_00d50b00();
  }
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    (**(code **)(*local_78 + 0x10))();
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(pVar9);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_60 = 0;
  (**(code **)(unaff_RDI[2] + 0x10))();
  FUN_00d50b00();
  local_60 = '\x01';
  local_d8 = '\0';
  local_d0 = 0;
  local_c8 = '\0';
  local_e0 = plVar12;
  local_68 = unaff_RDI + 2;
  FUN_013a2780(&local_d0,&local_e0,0,0);
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
    (**(code **)(*local_e0 + 0x10))();
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    (**(code **)(*local_68 + 0x10))();
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x380))(DAT_02390124);
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*plVar12 + 0x10))();
    FUN_00d50b20();
  }
  if (local_b8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  lVar5 = local_b0;
  if (local_c0 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  return;
}


