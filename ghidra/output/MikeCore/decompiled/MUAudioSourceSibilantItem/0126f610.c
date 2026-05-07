// Function: FUN_0126f610
// Address: 0126f610
// Size: 2249 bytes
// Class: MUAudioSourceSibilantItem


/* WARNING: Removing unreachable block (ram,0x0126f993) */
/* WARNING: Removing unreachable block (ram,0x0126f99c) */
/* WARNING: Removing unreachable block (ram,0x0126f732) */
/* WARNING: Removing unreachable block (ram,0x0126f73b) */
/* WARNING: Removing unreachable block (ram,0x0126f660) */
/* WARNING: Removing unreachable block (ram,0x0126f669) */
/* WARNING: Removing unreachable block (ram,0x0126f941) */
/* WARNING: Removing unreachable block (ram,0x0126fa0a) */
/* WARNING: Removing unreachable block (ram,0x0126fa16) */
/* WARNING: Removing unreachable block (ram,0x0126fa8f) */
/* WARNING: Removing unreachable block (ram,0x0126fa9f) */

void FUN_0126f610(void)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  void *pvVar9;
  longlong lVar10;
  longlong lVar11;
  pthread_key_t pVar12;
  longlong lVar13;
  uint uVar14;
  longlong unaff_RDI;
  longlong lVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  longlong local_80;
  longlong local_78;
  longlong local_58;
  char local_50;
  longlong local_48;
  longlong local_38;
  
  FUN_0125e7c0();
  lVar11 = local_58;
  if (local_58 == 0) {
    bVar7 = true;
    local_48 = 0;
    lVar2 = *(longlong *)(unaff_RDI + 0xe0);
  }
  else {
    if (local_50 == '\0') {
      FUN_00d50b00();
    }
    bVar7 = false;
    lVar2 = *(longlong *)(unaff_RDI + 0xe0);
    local_48 = local_58;
  }
  pVar12 = (pthread_key_t)lVar11;
  if (lVar2 == 0) {
    local_78 = 0;
  }
  else {
    FUN_00d50b00();
    local_78 = lVar2;
  }
  pvVar9 = _pthread_getspecific(pVar12);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013df790();
  local_80 = local_58;
  lVar11 = local_58;
  if (local_58 == 0) {
    bVar3 = true;
    local_80 = 0;
  }
  else if (local_50 == '\0') {
    FUN_00d50b00();
    bVar3 = false;
  }
  else {
    bVar3 = false;
  }
  uVar14 = *(uint *)(local_78 + 0xc);
  if ((int)uVar14 < 1) {
    bVar6 = false;
    lVar13 = 0;
    bVar4 = false;
    local_38 = 0;
  }
  else {
    lVar15 = (ulonglong)uVar14 + 1;
    local_38 = 0;
    bVar4 = false;
    bVar6 = false;
    lVar10 = 0;
    do {
      uVar14 = uVar14 - 1;
      lVar11 = *(longlong *)(*(longlong *)(local_78 + 0x10) + (ulonglong)uVar14 * 8);
      pVar12 = uVar14;
      if (local_38 == lVar11) {
        if ((!bVar4) && (local_38 != 0)) {
          bVar4 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar11 != 0) {
          FUN_00d50b00();
        }
        if ((bVar4) && (local_38 != 0)) {
          FUN_00d50b20();
          bVar4 = true;
          local_38 = lVar11;
        }
        else {
          bVar4 = true;
          local_38 = lVar11;
        }
      }
      pvVar9 = _pthread_getspecific(pVar12);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_011ef460();
      if (local_58 == lVar10) {
        if ((bVar6) || (local_58 == 0)) {
joined_r0x0126f929:
          lVar13 = lVar10;
          bVar5 = bVar6;
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          lVar13 = lVar10;
          bVar5 = true;
          if (local_50 == '\0') {
            FUN_00d50b00();
            goto LAB_0126f915;
          }
        }
      }
      else {
        lVar13 = local_58;
        if (local_50 == '\0') {
          if (local_58 != 0) {
            FUN_00d50b00();
          }
          bVar5 = true;
          if ((bVar6) && (lVar10 != 0)) {
            FUN_00d50b20();
            lVar10 = local_58;
LAB_0126f915:
            bVar6 = true;
            goto joined_r0x0126f929;
          }
        }
        else {
          bVar5 = true;
          if ((bVar6) && (lVar10 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      bVar6 = bVar5;
      local_50 = '\0';
      lVar11 = lVar13;
      cVar8 = FUN_00d24090();
      if (cVar8 == '\0') {
        pvVar9 = _pthread_getspecific((pthread_key_t)lVar11);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013ddad0();
        pvVar9 = _pthread_getspecific((pthread_key_t)lVar11);
        if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
          lVar11 = local_38;
        }
        FUN_011ef3f0();
        FUN_0126e8b0();
      }
      lVar15 = lVar15 + -1;
      lVar10 = lVar13;
      local_58 = lVar13;
    } while (1 < lVar15);
  }
  if (0 < *(int *)(local_80 + 0xc)) {
    lVar10 = 0;
    do {
      lVar11 = *(longlong *)(*(longlong *)(local_80 + 0x10) + lVar10 * 8);
      if (lVar13 == lVar11) {
        if (bVar6) {
          iVar1 = *(int *)(local_78 + 0xc);
        }
        else {
          if (lVar13 != 0) {
            FUN_00d50b00();
            goto LAB_0126fb33;
          }
          iVar1 = *(int *)(local_78 + 0xc);
        }
      }
      else {
        if (lVar11 != 0) {
          FUN_00d50b00();
        }
        if ((bVar6) && (lVar13 != 0)) {
          FUN_00d50b20();
          lVar13 = lVar11;
LAB_0126fb33:
          bVar6 = true;
          iVar1 = *(int *)(local_78 + 0xc);
        }
        else {
          bVar6 = true;
          iVar1 = *(int *)(local_78 + 0xc);
          lVar13 = lVar11;
        }
      }
      if (0 < iVar1) {
        lVar11 = 0;
        do {
          pvVar9 = _pthread_getspecific((pthread_key_t)local_78);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_011ef460();
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          if (local_58 == lVar13) goto LAB_0126fae0;
          lVar11 = lVar11 + 1;
        } while (lVar11 < *(int *)(local_78 + 0xc));
      }
      pvVar9 = _pthread_getspecific((pthread_key_t)local_78);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013ddd70();
      if (local_58 == local_38) {
        lVar11 = local_38;
        bVar5 = bVar4;
        if ((!bVar4) && (local_58 != 0)) {
          bVar5 = true;
          if (local_50 != '\0') goto LAB_0126fd34;
          FUN_00d50b00();
          bVar5 = true;
        }
LAB_0126fd20:
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        lVar11 = local_58;
        if (local_50 == '\0') {
          if (local_58 != 0) {
            FUN_00d50b00();
          }
          bVar5 = true;
          if ((bVar4) && (local_38 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_0126fd20;
        }
        bVar5 = true;
        if ((bVar4) && (local_38 != 0)) {
          FUN_00d50b20();
        }
      }
LAB_0126fd34:
      FUN_01265db0();
      local_38 = lVar11;
      bVar4 = bVar5;
LAB_0126fae0:
      lVar10 = lVar10 + 1;
      lVar11 = local_80;
    } while (lVar10 < *(int *)(local_80 + 0xc));
  }
  pVar12 = (pthread_key_t)lVar11;
  pvVar9 = _pthread_getspecific(pVar12);
  if ((pvVar9 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
    pVar12 = (pthread_key_t)local_48;
  }
  dVar16 = (double)FUN_013def20();
  if ((*(double *)(unaff_RDI + 0xb8) != dVar16) ||
     (NAN(*(double *)(unaff_RDI + 0xb8)) || NAN(dVar16))) {
    FUN_00d64850();
    *(double *)(unaff_RDI + 0xb8) = dVar16;
    FUN_00d64910();
  }
  pvVar9 = _pthread_getspecific(pVar12);
  if ((pvVar9 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
    pVar12 = (pthread_key_t)local_48;
  }
  dVar17 = (double)FUN_013defa0();
  dVar16 = *(double *)(unaff_RDI + 0xf0);
  pvVar9 = _pthread_getspecific(pVar12);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar18 = (double)FUN_013de9b0();
  dVar18 = (dVar17 + dVar16) - dVar18;
  if ((*(double *)(unaff_RDI + 0xc0) != dVar18) ||
     (NAN(*(double *)(unaff_RDI + 0xc0)) || NAN(dVar18))) {
    FUN_00d64850();
    *(double *)(unaff_RDI + 0xc0) = dVar18;
    FUN_00d64910();
  }
  if (!bVar3) {
    FUN_00d50b20();
  }
  if ((bVar6) && (lVar13 != 0)) {
    FUN_00d50b20();
  }
  if (!bVar7 && local_48 != 0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((bVar4) && (local_38 != 0)) {
    FUN_00d50b20();
  }
  return;
}


