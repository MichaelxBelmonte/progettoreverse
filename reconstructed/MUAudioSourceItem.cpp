// Reconstructed implementation of MUAudioSourceItem
// From MikeCore binary — reverse-engineered pseudocode

#include "MUAudioSourceItem.h"

// ============================================================
// @014ea7b0 — 4578 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x014eb1a9) */
/* WARNING: Removing unreachable block (ram,0x014eb1b5) */
/* WARNING: Removing unreachable block (ram,0x014eb789) */
/* WARNING: Removing unreachable block (ram,0x014eb796) */
/* WARNING: Removing unreachable block (ram,0x014eb35f) */
/* WARNING: Removing unreachable block (ram,0x014eb36b) */
/* WARNING: Removing unreachable block (ram,0x014ead21) */
/* WARNING: Removing unreachable block (ram,0x014ead2a) */
/* WARNING: Removing unreachable block (ram,0x014ea999) */
/* WARNING: Removing unreachable block (ram,0x014ea9a2) */
/* WARNING: Removing unreachable block (ram,0x014ea800) */
/* WARNING: Removing unreachable block (ram,0x014ea809) */
/* WARNING: Removing unreachable block (ram,0x014ea910) */
/* WARNING: Removing unreachable block (ram,0x014ea919) */
/* WARNING: Removing unreachable block (ram,0x014eabe5) */
/* WARNING: Removing unreachable block (ram,0x014eabee) */
/* WARNING: Removing unreachable block (ram,0x014eb459) */
/* WARNING: Removing unreachable block (ram,0x014eb469) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_014ea7b0(float param_1)

{
  float *pfVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  double dVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  code *pcVar11;
  bool bVar12;
  char cVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  void *pvVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  longlong lVar20;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  pthread_key_t in_ECX;
  pthread_key_t pVar25;
  longlong *plVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  longlong lVar29;
  undefined1 unaff_SIL;
  ulonglong uVar30;
  longlong *unaff_RDI;
  longlong *plVar31;
  longlong lVar32;
  int iVar33;
  int iVar34;
  undefined4 uVar35;
  float fVar36;
  float fVar37;
  double dVar38;
  double dVar40;
  longlong local_168;
  char local_160;
  undefined8 *local_58;
  longlong *local_50;
  longlong *local_48;
  char local_40;
  ulonglong uVar21;
  double dVar39;
  
  (**(code **)(*unaff_RDI + 0x378))();
  if ((local_40 == '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  pvVar17 = _pthread_getspecific(in_ECX);
  if (pvVar17 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar14 = FUN_01326de0();
  if (iVar14 == 3) {
    bVar6 = false;
    local_50 = (longlong *)0x0;
    goto LAB_014eb84e;
  }
  puVar18 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar25 = 0x25f0d98;
  *puVar18 = &DAT_025f0d98;
  puVar18[2] = 0;
  puVar18[3] = 0;
  puVar18[4] = 0;
  puVar18[5] = 0;
  puVar18[6] = 0;
  puVar18[7] = 0;
  (*DAT_025f0db0)();
  pvVar17 = _pthread_getspecific(pVar25);
  if (pvVar17 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0132d790();
  if ((local_40 == '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  lVar8 = local_48[6];
  pvVar17 = _pthread_getspecific(pVar25);
  if (pvVar17 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01320d00();
  local_50 = local_48;
  plVar26 = local_48;
  if (local_48 == (longlong *)0x0) {
    local_50 = (longlong *)0x0;
    bVar6 = false;
  }
  else {
    bVar6 = true;
    if (local_40 == '\0') {
      FUN_00d50b00();
    }
  }
  pvVar17 = _pthread_getspecific((pthread_key_t)plVar26);
  if (pvVar17 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar38 = (double)FUN_01327990();
  pvVar17 = _pthread_getspecific((pthread_key_t)plVar26);
  if (pvVar17 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar39 = (double)FUN_0132dc40();
  uVar35 = SUB84(dVar39,0);
  FUN_014bc090();
  pvVar17 = _pthread_getspecific((pthread_key_t)plVar26);
  if (pvVar17 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013eb920();
  iVar34 = (int)local_48[3];
  iVar33 = iVar34 + 3;
  if (-1 < iVar34) {
    iVar33 = iVar34;
  }
  if (local_40 != '\0') {
    FUN_00d50b20();
  }
  if ((local_160 != '\0') && (local_168 != 0)) {
    FUN_00d50b20();
  }
  plVar19 = (longlong *)FUN_00e8fc40();
  FUN_00d4ff40();
  *(undefined1 *)(plVar19 + 7) = 0;
  *(undefined4 *)((longlong)plVar19 + 0x3c) = 0;
  *(undefined2 *)(plVar19 + 8) = 0;
  *plVar19 = (longlong)&DAT_025dc9e8;
  plVar19[9] = 0;
  plVar19[10] = 0;
  pcVar11 = DAT_025dca00;
  (*DAT_025dca00)();
  pvVar17 = _pthread_getspecific((pthread_key_t)plVar26);
  if ((pvVar17 != (void *)0x0) && (lVar20 = FUN_00e8b990(), lVar20 != 0)) {
    plVar26 = plVar19;
  }
  FUN_013eb950(uVar35);
  pvVar17 = _pthread_getspecific((pthread_key_t)plVar26);
  if ((pvVar17 != (void *)0x0) && (lVar20 = FUN_00e8b990(), lVar20 != 0)) {
    plVar26 = plVar19;
  }
  uVar15 = iVar33 >> 2;
  uVar21 = (ulonglong)uVar15;
  FUN_00c8e690();
  if ((local_40 == '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  FUN_013eb890();
  if (local_48 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  puVar22 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *(undefined1 *)(puVar22 + 7) = 0;
  *(undefined4 *)((longlong)puVar22 + 0x3c) = 0;
  *(undefined2 *)(puVar22 + 8) = 0;
  *puVar22 = &DAT_025dc9e8;
  puVar22[9] = 0;
  puVar22[10] = 0;
  (*pcVar11)();
  pvVar17 = _pthread_getspecific((pthread_key_t)plVar26);
  if (pvVar17 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013eb950(uVar35);
  pvVar17 = _pthread_getspecific((pthread_key_t)plVar26);
  if (pvVar17 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00c8e690();
  if ((local_40 == '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  FUN_013eb890();
  if (local_48 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  pvVar17 = _pthread_getspecific((pthread_key_t)plVar26);
  if ((pvVar17 != (void *)0x0) && (lVar20 = FUN_00e8b990(), lVar20 != 0)) {
    plVar26 = plVar19;
  }
  FUN_013eb920();
  uVar2 = local_48[2];
  if (local_40 != '\0') {
    FUN_00d50b20();
  }
  pvVar17 = _pthread_getspecific((pthread_key_t)plVar26);
  if (pvVar17 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013eb920();
  uVar3 = local_48[2];
  if (local_40 != '\0') {
    FUN_00d50b20();
  }
  pvVar17 = _pthread_getspecific((pthread_key_t)plVar26);
  if (pvVar17 != (void *)0x0) {
    FUN_00e8b990();
  }
  (**(code **)(*unaff_RDI + 0x380))();
  FUN_0132dca0();
  FUN_014bb3e0();
  dVar5 = (double)FUN_014bb4b0();
  pvVar17 = _pthread_getspecific((pthread_key_t)plVar26);
  plVar31 = local_50;
  if ((pvVar17 != (void *)0x0) && (lVar20 = FUN_00e8b990(), lVar20 != 0)) {
    plVar26 = local_50;
    plVar31 = (longlong *)local_50[(ulonglong)(*(uint *)(lVar20 + 0x154) & 1) + 4];
  }
  dVar40 = (double)(**(code **)(*plVar31 + 0x398))();
  pVar25 = (pthread_key_t)plVar26;
  if (dVar40 < dVar5 + DAT_023934c8) {
    pvVar17 = _pthread_getspecific(pVar25);
    plVar31 = local_50;
    if ((pvVar17 != (void *)0x0) && (lVar20 = FUN_00e8b990(), lVar20 != 0)) {
      plVar26 = local_50;
      plVar31 = (longlong *)local_50[(ulonglong)(*(uint *)(lVar20 + 0x154) & 1) + 4];
    }
    pVar25 = (pthread_key_t)plVar26;
    (**(code **)(*plVar31 + 0x398))();
  }
  fVar36 = (float)_exp2f(param_1 * DAT_023941f4);
  fVar36 = fVar36 * DAT_023941f8;
  FUN_014e9f00();
  pvVar17 = _pthread_getspecific(pVar25);
  if (pvVar17 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar13 = FUN_0132dd90();
  uVar10 = _UNK_02411e18;
  uVar9 = _DAT_02411e10;
  if (cVar13 == '\0') {
    pvVar17 = _pthread_getspecific(pVar25);
    plVar26 = local_50;
    if ((pvVar17 != (void *)0x0) && (lVar20 = FUN_00e8b990(), lVar20 != 0)) {
      plVar26 = (longlong *)local_50[(ulonglong)(*(uint *)(lVar20 + 0x154) & 1) + 4];
    }
    (**(code **)(*plVar26 + 0x378))();
    FUN_014b5bc0(SUB84(dVar38,0),uVar35,DAT_023908d8,DAT_023942a8,unaff_SIL);
    lVar20 = FUN_00e83010();
    lVar32 = FUN_00e83010();
    if (3 < iVar34) {
      fVar36 = DAT_02390124 / (float)(int)lVar8;
      lVar29 = unaff_RDI[0x21];
      lVar4 = *(longlong *)(lVar29 + 0x10);
      uVar27 = 0;
      do {
        iVar16 = (int)((double)(longlong)((double)(int)uVar27 * (dVar38 / dVar39)) * (double)fVar36
                      + DAT_023942d0);
        iVar34 = *(int *)(lVar29 + 0xc);
        iVar33 = iVar34 + -1;
        if (iVar16 < iVar34) {
          iVar33 = iVar16;
        }
        fVar37 = (float)_logf(((float)dVar38 / *(float *)(uVar2 + uVar27 * 4)) * DAT_02394204);
        *(float *)(lVar20 + uVar27 * 4) = fVar37 * DAT_02394208;
        *(uint *)(lVar32 + uVar27 * 4) =
             *(byte *)(*(longlong *)(lVar4 + (longlong)iVar33 * 8) + 0x2c) ^ 1;
        uVar27 = uVar27 + 1;
      } while (uVar21 != uVar27);
    }
    FUN_014abf60(uVar35,DAT_023942a8,0,uVar21);
    FUN_00e83070();
    FUN_00e83070();
  }
  else if (3 < iVar34) {
    fVar36 = (float)dVar38 / fVar36;
    if ((uVar15 < 8) || ((uVar2 < uVar3 + uVar21 * 4 && (uVar3 < uVar2 + uVar21 * 4)))) {
      uVar27 = 0;
    }
    else {
      uVar27 = (ulonglong)(uVar15 & 0xfffffff8);
      uVar28 = (uVar27 - 8 >> 3) + 1;
      uVar30 = (ulonglong)((uint)uVar28 & 3);
      if (uVar27 - 8 < 0x18) {
        lVar32 = 0;
      }
      else {
        lVar20 = -(uVar28 & 0xfffffffffffffffc);
        lVar32 = 0;
        do {
          pfVar1 = (float *)(uVar2 + lVar32 * 4);
          *pfVar1 = fVar36;
          pfVar1[1] = fVar36;
          pfVar1[2] = fVar36;
          pfVar1[3] = fVar36;
          pfVar1 = (float *)(uVar2 + 0x10 + lVar32 * 4);
          *pfVar1 = fVar36;
          pfVar1[1] = fVar36;
          pfVar1[2] = fVar36;
          pfVar1[3] = fVar36;
          puVar23 = (undefined8 *)(uVar3 + lVar32 * 4);
          *puVar23 = uVar9;
          puVar23[1] = uVar10;
          puVar23 = (undefined8 *)(uVar3 + 0x10 + lVar32 * 4);
          *puVar23 = uVar9;
          puVar23[1] = uVar10;
          pfVar1 = (float *)(uVar2 + 0x20 + lVar32 * 4);
          *pfVar1 = fVar36;
          pfVar1[1] = fVar36;
          pfVar1[2] = fVar36;
          pfVar1[3] = fVar36;
          pfVar1 = (float *)(uVar2 + 0x30 + lVar32 * 4);
          *pfVar1 = fVar36;
          pfVar1[1] = fVar36;
          pfVar1[2] = fVar36;
          pfVar1[3] = fVar36;
          puVar23 = (undefined8 *)(uVar3 + 0x20 + lVar32 * 4);
          *puVar23 = uVar9;
          puVar23[1] = uVar10;
          puVar23 = (undefined8 *)(uVar3 + 0x30 + lVar32 * 4);
          *puVar23 = uVar9;
          puVar23[1] = uVar10;
          pfVar1 = (float *)(uVar2 + 0x40 + lVar32 * 4);
          *pfVar1 = fVar36;
          pfVar1[1] = fVar36;
          pfVar1[2] = fVar36;
          pfVar1[3] = fVar36;
          pfVar1 = (float *)(uVar2 + 0x50 + lVar32 * 4);
          *pfVar1 = fVar36;
          pfVar1[1] = fVar36;
          pfVar1[2] = fVar36;
          pfVar1[3] = fVar36;
          puVar23 = (undefined8 *)(uVar3 + 0x40 + lVar32 * 4);
          *puVar23 = uVar9;
          puVar23[1] = uVar10;
          puVar23 = (undefined8 *)(uVar3 + 0x50 + lVar32 * 4);
          *puVar23 = uVar9;
          puVar23[1] = uVar10;
          pfVar1 = (float *)(uVar2 + 0x60 + lVar32 * 4);
          *pfVar1 = fVar36;
          pfVar1[1] = fVar36;
          pfVar1[2] = fVar36;
          pfVar1[3] = fVar36;
          pfVar1 = (float *)(uVar2 + 0x70 + lVar32 * 4);
          *pfVar1 = fVar36;
          pfVar1[1] = fVar36;
          pfVar1[2] = fVar36;
          pfVar1[3] = fVar36;
          puVar23 = (undefined8 *)(uVar3 + 0x60 + lVar32 * 4);
          *puVar23 = uVar9;
          puVar23[1] = uVar10;
          puVar23 = (undefined8 *)(uVar3 + 0x70 + lVar32 * 4);
          *puVar23 = uVar9;
          puVar23[1] = uVar10;
          lVar32 = lVar32 + 0x20;
          lVar20 = lVar20 + 4;
        } while (lVar20 != 0);
      }
      uVar10 = _UNK_02411e18;
      uVar9 = _DAT_02411e10;
      if (uVar30 != 0) {
        lVar20 = uVar3 + lVar32 * 4;
        lVar32 = uVar2 + lVar32 * 4;
        lVar29 = 0;
        do {
          pfVar1 = (float *)(lVar32 + lVar29);
          *pfVar1 = fVar36;
          pfVar1[1] = fVar36;
          pfVar1[2] = fVar36;
          pfVar1[3] = fVar36;
          pfVar1 = (float *)(lVar32 + 0x10 + lVar29);
          *pfVar1 = fVar36;
          pfVar1[1] = fVar36;
          pfVar1[2] = fVar36;
          pfVar1[3] = fVar36;
          puVar23 = (undefined8 *)(lVar20 + lVar29);
          *puVar23 = uVar9;
          puVar23[1] = uVar10;
          puVar23 = (undefined8 *)(lVar20 + 0x10 + lVar29);
          *puVar23 = uVar9;
          puVar23[1] = uVar10;
          lVar29 = lVar29 + 0x20;
        } while (uVar30 << 5 != lVar29);
      }
      if (uVar27 == uVar21) goto LAB_014eb384;
    }
    uVar28 = ~uVar27;
    uVar30 = uVar21 & 3;
    if ((uVar15 & 3) != 0) {
      do {
        *(float *)(uVar2 + uVar27 * 4) = fVar36;
        *(undefined4 *)(uVar3 + uVar27 * 4) = 0x3f000000;
        uVar27 = uVar27 + 1;
        uVar30 = uVar30 - 1;
      } while (uVar30 != 0);
    }
    if (2 < uVar28 + uVar21) {
      do {
        *(float *)(uVar2 + uVar27 * 4) = fVar36;
        *(undefined4 *)(uVar3 + uVar27 * 4) = 0x3f000000;
        *(float *)(uVar2 + 4 + uVar27 * 4) = fVar36;
        *(undefined4 *)(uVar3 + 4 + uVar27 * 4) = 0x3f000000;
        *(float *)(uVar2 + 8 + uVar27 * 4) = fVar36;
        *(undefined4 *)(uVar3 + 8 + uVar27 * 4) = 0x3f000000;
        *(float *)(uVar2 + 0xc + uVar27 * 4) = fVar36;
        *(undefined4 *)(uVar3 + 0xc + uVar27 * 4) = 0x3f000000;
        uVar27 = uVar27 + 4;
      } while (uVar21 != uVar27);
    }
  }
LAB_014eb384:
  FUN_015c1480((float)(dVar39 / DAT_0240f0f0) * DAT_023908d8,uVar21);
  plVar26 = unaff_RDI + 0x11;
  if (cVar13 == '\0') {
    if ((longlong *)unaff_RDI[0x11] != plVar19) {
      FUN_00d64850();
      plVar31 = (longlong *)*plVar26;
      if (plVar31 != plVar19) {
        if (plVar19 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        *plVar26 = (longlong)plVar19;
        if (plVar31 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      FUN_00d64910();
    }
    if ((undefined8 *)unaff_RDI[9] != puVar22) {
      FUN_00d64850();
      puVar23 = (undefined8 *)unaff_RDI[9];
      if (puVar23 != puVar22) {
        if (puVar22 != (undefined8 *)0x0) {
          FUN_00d50b00();
        }
        unaff_RDI[9] = (longlong)puVar22;
        if (puVar23 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
      }
      FUN_00d64910();
    }
    puVar23 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar23 = &DAT_02572358;
    (*DAT_02572370)();
    pcVar11 = DAT_025e74b8;
    iVar34 = 0;
    if (*(int *)(unaff_RDI[0x21] + 0xc) < 1) {
      local_58 = (undefined8 *)0x0;
      bVar7 = false;
    }
    else {
      lVar20 = 0;
      bVar7 = false;
      local_58 = (undefined8 *)0x0;
      do {
        iVar33 = (int)((double)iVar34 * (dVar39 / dVar38) + DAT_023942d0);
        if ((int)uVar15 <= iVar33) {
          iVar33 = uVar15 - 1;
        }
        puVar24 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar24 = &DAT_025e74a0;
        *(undefined8 *)((longlong)puVar24 + 0xc) = 0;
        *(undefined8 *)((longlong)puVar24 + 0x14) = 0;
        *(undefined8 *)((longlong)puVar24 + 0x1c) = 0;
        *(undefined8 *)((longlong)puVar24 + 0x24) = 0;
        *(undefined1 *)((longlong)puVar24 + 0x2c) = 0;
        puVar24[6] = 0;
        puVar24[7] = 0;
        puVar24[8] = 0;
        puVar24[9] = 0;
        puVar24[10] = 0;
        puVar24[0xb] = 0;
        *(undefined4 *)(puVar24 + 0xc) = 0;
        (*pcVar11)();
        if (puVar24 == local_58) {
          puVar24 = local_58;
          if (bVar7) {
            FUN_00d50b20();
            bVar12 = bVar7;
          }
          else {
            bVar12 = true;
          }
        }
        else {
          bVar12 = true;
          if ((bVar7) && (local_58 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
        }
        bVar7 = bVar12;
        local_58 = puVar24;
        lVar32 = *(longlong *)(*(longlong *)(unaff_RDI[0x21] + 0x10) + lVar20 * 8);
        if (lVar32 != 0) {
          FUN_00d50b00();
        }
        FUN_014ee580();
        if (lVar32 != 0) {
          FUN_00d50b20();
        }
        lVar32 = (longlong)iVar33;
        *(uint *)(local_58 + 2) = *(uint *)(uVar3 + lVar32 * 4) & _DAT_02390140;
        fVar36 = (float)_logf(((float)dVar38 / *(float *)(uVar2 + lVar32 * 4)) * DAT_02394204);
        fVar36 = fVar36 * DAT_02394208;
        *(float *)((longlong)local_58 + 0x14) = fVar36;
        *(float *)(local_58 + 3) = fVar36;
        *(uint *)((longlong)local_58 + 0x1c) = *(uint *)(uVar3 + lVar32 * 4) & _DAT_02390140;
        FUN_00d21140();
        lVar20 = lVar20 + 1;
        iVar34 = iVar34 + (int)lVar8;
      } while (lVar20 < *(int *)(unaff_RDI[0x21] + 0xc));
    }
    FUN_014c2990();
    FUN_014bd640(SUB84(dVar38,0));
    if (puVar23 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if ((bVar7) && (local_58 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if ((longlong *)unaff_RDI[0x11] != plVar19) {
      FUN_00d64850();
      plVar31 = (longlong *)*plVar26;
      if (plVar31 != plVar19) {
        if (plVar19 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        *plVar26 = (longlong)plVar19;
        if (plVar31 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      FUN_00d64910();
    }
    FUN_014d9720(0,0);
  }
  if (puVar22 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (plVar19 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (local_48 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (puVar18 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
LAB_014eb84e:
  if (local_48 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((bVar6) && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return iVar14 != 3;
}




// ============================================================
// @014e8b20 — 4006 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x014e9844) */
/* WARNING: Removing unreachable block (ram,0x014e9851) */
/* WARNING: Removing unreachable block (ram,0x014e9a6f) */
/* WARNING: Removing unreachable block (ram,0x014e9a7b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_014e8b20(undefined8 param_1,longlong *param_2)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  code *pcVar9;
  undefined8 *puVar10;
  void *pvVar11;
  pthread_key_t pVar12;
  code *pcVar13;
  code *pcVar14;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar15;
  undefined8 *puVar16;
  longlong lVar17;
  longlong lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  int local_c0;
  float local_bc;
  float local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  undefined8 *local_90;
  float local_74;
  float local_64;
  longlong local_58;
  char local_50;
  
  (**(code **)(*unaff_RSI + 0x378))();
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (local_58 == 0) goto LAB_014e8c44;
  (**(code **)(*unaff_RSI + 0x378))();
  lVar15 = *param_2;
  if (lVar15 == local_58) {
    if (((char)param_2[1] != '\0') || (local_58 == 0)) goto LAB_014e8c30;
    if (local_50 == '\0') {
      FUN_00d50b00();
      goto LAB_014e8c21;
    }
  }
  else {
    lVar17 = param_2[1];
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
      *param_2 = local_58;
      if (((char)lVar17 != '\0') && (lVar15 != 0)) {
        FUN_00d50b20();
      }
LAB_014e8c21:
      *(undefined1 *)(param_2 + 1) = 1;
LAB_014e8c30:
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_014e8c44;
    }
    *param_2 = local_58;
    if (((char)lVar17 != '\0') && (lVar15 != 0)) {
      FUN_00d50b20();
    }
  }
  *(undefined1 *)(param_2 + 1) = 1;
LAB_014e8c44:
  cVar5 = FUN_014bc070();
  if ((cVar5 == '\0') && (cVar5 = (**(code **)(*unaff_RSI + 1000))(), cVar5 != '\0')) {
    local_98 = FUN_00e83020();
    puVar8 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar8 = &DAT_025f0d98;
    puVar8[2] = 0;
    puVar8[3] = 0;
    puVar8[4] = 0;
    puVar8[5] = 0;
    puVar8[6] = 0;
    puVar8[7] = 0;
    local_90 = puVar8;
    (*DAT_025f0db0)();
    lVar15 = unaff_RSI[0x21];
    if (*(int *)(lVar15 + 0xc) < 1) {
      bVar4 = false;
      lVar17 = 0;
      bVar3 = false;
      puVar8 = (undefined8 *)0x0;
    }
    else {
      lVar18 = 0;
      puVar8 = (undefined8 *)0x0;
      bVar3 = false;
      lVar17 = 0;
      bVar4 = false;
      do {
        puVar10 = *(undefined8 **)(*(longlong *)(lVar15 + 0x10) + lVar18 * 8);
        if (puVar8 == puVar10) {
          if ((!bVar3) && (puVar8 != (undefined8 *)0x0)) {
            bVar3 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (puVar10 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
          if ((bVar3) && (puVar8 != (undefined8 *)0x0)) {
            FUN_00d50b20();
            bVar3 = true;
            puVar8 = puVar10;
          }
          else {
            bVar3 = true;
            puVar8 = puVar10;
          }
        }
        FUN_014eec80();
        if (local_58 == lVar17) {
          lVar15 = lVar17;
          bVar2 = bVar4;
          if ((!bVar4) && (local_58 != 0)) {
            if (local_50 != '\0') goto LAB_014e8de0;
            FUN_00d50b00();
            bVar2 = true;
          }
joined_r0x014e9060:
          if (lVar15 == 0) goto LAB_014e8dec;
LAB_014e8e45:
          fVar23 = *(float *)(lVar15 + 0xc);
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          if ((((!NAN(fVar23)) &&
               (fVar23 = *(float *)(lVar15 + 0xc) - *(float *)((longlong)puVar8 + 0x14),
               DAT_02390d38 < (float)((uint)fVar23 & _DAT_02390140))) &&
              (uVar6 = (uint)(fVar23 * DAT_02391090 + _DAT_0241e850 + DAT_0239011c), uVar6 < 0x438))
             && (!NAN(*(float *)(puVar8 + 2)))) {
            *(float *)(local_98 + (ulonglong)uVar6 * 4) =
                 *(float *)(puVar8 + 2) * *(float *)(lVar15 + 0x14) +
                 *(float *)(local_98 + (ulonglong)uVar6 * 4);
          }
        }
        else {
          lVar15 = local_58;
          if (local_50 == '\0') {
            if (local_58 != 0) {
              FUN_00d50b00();
            }
            bVar2 = true;
            if ((bVar4) && (lVar17 != 0)) {
              FUN_00d50b20();
            }
            goto joined_r0x014e9060;
          }
          if ((bVar4) && (lVar17 != 0)) {
            FUN_00d50b20();
          }
LAB_014e8de0:
          local_50 = '\0';
          bVar2 = true;
          if (lVar15 != 0) goto LAB_014e8e45;
LAB_014e8dec:
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
        }
        FUN_014eec80();
        if (local_58 == lVar15) {
          lVar17 = lVar15;
          bVar4 = bVar2;
          if ((!bVar2) && (local_58 != 0)) {
            if (local_50 != '\0') goto LAB_014e8f2f;
            FUN_00d50b00();
            bVar4 = true;
          }
joined_r0x014e907f:
          if (lVar17 == 0) goto LAB_014e8f3e;
LAB_014e8f95:
          fVar23 = *(float *)(lVar17 + 0x10);
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          if ((((!NAN(fVar23)) &&
               (fVar23 = *(float *)(lVar17 + 0x10) - *(float *)((longlong)puVar8 + 0x14),
               DAT_02390d38 < (float)((uint)fVar23 & _DAT_02390140))) &&
              (uVar6 = (uint)((double)fVar23 * DAT_023934c8 + _DAT_0240e4d0 + DAT_023942d0),
              uVar6 < 0x438)) && (!NAN(*(float *)(puVar8 + 2)))) {
            *(float *)(local_98 + (ulonglong)uVar6 * 4) =
                 *(float *)(puVar8 + 2) * *(float *)(lVar17 + 0x18) +
                 *(float *)(local_98 + (ulonglong)uVar6 * 4);
          }
        }
        else {
          if (local_50 == '\0') {
            if (local_58 != 0) {
              FUN_00d50b00();
            }
            bVar4 = true;
            lVar17 = local_58;
            if ((bVar2) && (lVar15 != 0)) {
              FUN_00d50b20();
            }
            goto joined_r0x014e907f;
          }
          lVar17 = local_58;
          if ((bVar2) && (lVar15 != 0)) {
            FUN_00d50b20();
          }
LAB_014e8f2f:
          local_50 = '\0';
          bVar4 = true;
          if (lVar17 != 0) goto LAB_014e8f95;
LAB_014e8f3e:
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
        }
        lVar18 = lVar18 + 1;
        lVar15 = unaff_RSI[0x21];
      } while (lVar18 < *(int *)(lVar15 + 0xc));
    }
    FUN_015c1480(DAT_023908e0,0x438);
    FUN_015b32a0(DAT_02391074,&local_c0);
    lVar15 = unaff_RSI[0x21];
    if (*(int *)(lVar15 + 0xc) < 1) {
      bVar2 = false;
      pcVar9 = (code *)0x0;
    }
    else {
      fVar19 = (float)(local_c0 + -0x168) * DAT_023908ec;
      lVar18 = 0;
      fVar21 = 0.0;
      fVar23 = 0.0;
      local_64 = 0.0;
      local_74 = 0.0;
      do {
        puVar10 = *(undefined8 **)(*(longlong *)(lVar15 + 0x10) + lVar18 * 8);
        if (puVar8 == puVar10) {
          if ((!bVar3) && (puVar8 != (undefined8 *)0x0)) {
            bVar3 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (puVar10 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
          if ((bVar3) && (puVar8 != (undefined8 *)0x0)) {
            FUN_00d50b20();
            bVar3 = true;
            puVar8 = puVar10;
          }
          else {
            bVar3 = true;
            puVar8 = puVar10;
          }
        }
        fVar20 = *(float *)(puVar8 + 2) + DAT_02390118;
        if ((!NAN(*(float *)(puVar8 + 2))) && (DAT_0239424c < fVar20)) {
          fVar1 = *(float *)((longlong)puVar8 + 0x14);
          local_b8 = fVar20;
          FUN_014eec80();
          if (local_58 == lVar17) {
            lVar15 = lVar17;
            bVar2 = bVar4;
            if ((!bVar4) && (local_58 != 0)) {
              if (local_50 != '\0') goto LAB_014e9294;
              FUN_00d50b00();
              bVar2 = true;
            }
          }
          else {
            lVar15 = local_58;
            if (local_50 == '\0') {
              if (local_58 != 0) {
                FUN_00d50b00();
              }
              bVar2 = true;
              if ((bVar4) && (lVar17 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              if ((bVar4) && (lVar17 != 0)) {
                FUN_00d50b20();
              }
LAB_014e9294:
              local_50 = '\0';
              bVar2 = true;
            }
          }
          if (lVar15 == 0) {
            if ((local_50 != '\0') && (local_58 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            fVar20 = *(float *)(lVar15 + 0xc);
            if ((local_50 != '\0') && (local_58 != 0)) {
              FUN_00d50b20();
            }
            if (!NAN(fVar20)) {
              fVar20 = (float)((uint)(*(float *)(lVar15 + 0xc) - fVar1) & _DAT_02390140);
              if (fVar20 < DAT_023908e0) {
                local_74 = local_74 +
                           (DAT_023908e0 - fVar20) * DAT_02394254 * *(float *)(lVar15 + 0x14) *
                           local_b8;
                fVar23 = fVar23 + local_b8;
              }
              fVar20 = (float)((uint)(*(float *)(lVar15 + 0xc) - (fVar19 + fVar1)) & _DAT_02390140);
              if (fVar20 < DAT_023908e0) {
                local_64 = local_64 +
                           (DAT_023908e0 - fVar20) * DAT_02394254 * *(float *)(lVar15 + 0x14) *
                           local_b8;
                fVar21 = fVar21 + local_b8;
              }
            }
          }
          FUN_014eec80();
          if (local_58 == lVar15) {
            lVar17 = lVar15;
            bVar4 = bVar2;
            if ((!bVar2) && (local_58 != 0)) {
              if (local_50 != '\0') goto LAB_014e943c;
              FUN_00d50b00();
              bVar4 = true;
            }
          }
          else {
            if (local_50 == '\0') {
              if (local_58 != 0) {
                FUN_00d50b00();
              }
              lVar17 = local_58;
              if ((bVar2) && (lVar15 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              lVar17 = local_58;
              if ((bVar2) && (lVar15 != 0)) {
                FUN_00d50b20();
              }
LAB_014e943c:
              local_50 = '\0';
            }
            bVar4 = true;
          }
          if (lVar17 == 0) {
            if ((local_50 != '\0') && (local_58 != 0)) {
              FUN_00d50b20();
            }
            lVar17 = 0;
          }
          else {
            local_bc = *(float *)(lVar17 + 0x10);
            if ((local_50 != '\0') && (local_58 != 0)) {
              FUN_00d50b20();
            }
            if (!NAN(local_bc)) {
              fVar20 = (float)((uint)(*(float *)(lVar17 + 0x10) - fVar1) & _DAT_02390140);
              if (fVar20 < DAT_023908e0) {
                local_74 = local_74 +
                           (DAT_023908e0 - fVar20) * DAT_02394254 * *(float *)(lVar17 + 0x18) *
                           local_b8;
                fVar23 = fVar23 + local_b8;
              }
              fVar20 = (float)((uint)(*(float *)(lVar17 + 0x10) - (fVar19 + fVar1)) & _DAT_02390140)
              ;
              if (fVar20 < DAT_023908e0) {
                local_64 = local_64 +
                           (DAT_023908e0 - fVar20) * DAT_02394254 * *(float *)(lVar17 + 0x18) *
                           local_b8;
                fVar21 = fVar21 + local_b8;
              }
            }
          }
        }
        lVar18 = lVar18 + 1;
        lVar15 = unaff_RSI[0x21];
      } while (lVar18 < *(int *)(lVar15 + 0xc));
      pcVar9 = (code *)0x0;
      bVar2 = false;
      if ((0.0 < fVar23) && (0.0 < fVar21)) {
        uVar22 = _powf((local_64 / fVar21) / (local_74 / fVar23),DAT_023908d8);
        pcVar9 = (code *)FUN_00e8fc40();
        FUN_010fe5f0();
        (**(code **)(*(longlong *)pcVar9 + 0x18))();
        puVar10 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar10 = &DAT_02572358;
        (*DAT_02572370)();
        pcVar14 = DAT_025e74b8;
        iVar7 = (int)((float)(_DAT_02390140 & (uint)fVar19) + DAT_02394240);
        pcVar13 = (code *)((ulonglong)(longlong)iVar7 >> 0x3f);
        fVar23 = (float)((iVar7 / 100) * 100);
        local_b8 = (float)(~-(uint)(0.0 <= fVar19) & (_DAT_023945e0 ^ (uint)fVar23) |
                          (uint)fVar23 & -(uint)(0.0 <= fVar19));
        uStack_b4 = _UNK_023945e4;
        uStack_b0 = _UNK_023945e8;
        uStack_ac = _UNK_023945ec;
        if (0 < *(int *)(unaff_RSI[0x21] + 0xc)) {
          lVar15 = 0;
          pcVar13 = DAT_025e74b8;
          puVar16 = puVar8;
          do {
            puVar8 = (undefined8 *)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar8 = &DAT_025e74a0;
            *(undefined8 *)((longlong)puVar8 + 0xc) = 0;
            *(undefined8 *)((longlong)puVar8 + 0x14) = 0;
            *(undefined8 *)((longlong)puVar8 + 0x1c) = 0;
            *(undefined8 *)((longlong)puVar8 + 0x24) = 0;
            *(undefined1 *)((longlong)puVar8 + 0x2c) = 0;
            puVar8[6] = 0;
            puVar8[7] = 0;
            puVar8[8] = 0;
            puVar8[9] = 0;
            puVar8[10] = 0;
            puVar8[0xb] = 0;
            *(undefined4 *)(puVar8 + 0xc) = 0;
            (*pcVar14)();
            if (puVar8 == puVar16) {
              puVar8 = puVar16;
              if (bVar3) {
                FUN_00d50b20();
                bVar2 = bVar3;
              }
              else {
                bVar2 = true;
              }
            }
            else {
              bVar2 = true;
              if (bVar3) {
                FUN_00d50b20();
              }
            }
            bVar3 = bVar2;
            lVar18 = *(longlong *)(*(longlong *)(unaff_RSI[0x21] + 0x10) + lVar15 * 8);
            local_a0 = 0;
            if (lVar18 != 0) {
              FUN_00d50b00();
            }
            local_a0 = '\x01';
            local_a8 = lVar18;
            FUN_014ee580();
            if ((local_a0 != '\0') && (local_a8 != 0)) {
              FUN_00d50b20();
            }
            *(float *)((longlong)puVar8 + 0x14) = *(float *)((longlong)puVar8 + 0x14) + local_b8;
            *(float *)(puVar8 + 3) = *(float *)(puVar8 + 3) + local_b8;
            FUN_00d21140();
            lVar15 = lVar15 + 1;
            puVar16 = puVar8;
          } while (lVar15 < *(int *)(unaff_RSI[0x21] + 0xc));
        }
        pvVar11 = _pthread_getspecific((pthread_key_t)pcVar13);
        if ((pvVar11 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
          pcVar13 = pcVar9;
        }
        FUN_014c2990();
        pvVar11 = _pthread_getspecific((pthread_key_t)pcVar13);
        if ((pvVar11 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
          pcVar13 = pcVar9;
        }
        (**(code **)(*unaff_RSI + 0x380))();
        FUN_014bb250();
        pvVar11 = _pthread_getspecific((pthread_key_t)pcVar13);
        if ((pvVar11 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
          pcVar13 = pcVar9;
        }
        (**(code **)(*unaff_RSI + 0x388))();
        FUN_014bb2b0();
        pvVar11 = _pthread_getspecific((pthread_key_t)pcVar13);
        pcVar14 = pcVar9;
        if ((pvVar11 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
          pcVar13 = pcVar9;
          pcVar14 = *(code **)(pcVar9 + (ulonglong)(*(uint *)(lVar15 + 0x154) & 1) * 8 + 0x20);
        }
        pVar12 = (pthread_key_t)pcVar13;
        fVar23 = (float)(**(code **)(*unaff_RSI + 0x3e0))();
        FUN_00d64850();
        *(float *)(pcVar14 + 0x80) = local_b8 + fVar23;
        FUN_00d64910();
        pvVar11 = _pthread_getspecific(pVar12);
        if ((pvVar11 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
          pVar12 = (pthread_key_t)pcVar9;
        }
        FUN_014bc170(uVar22);
        pvVar11 = _pthread_getspecific(pVar12);
        if (pvVar11 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014cfcc0();
        if (puVar10 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
        bVar2 = true;
      }
    }
    FUN_00e83070();
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (!bVar2 && pcVar9 != (code *)0x0) {
      FUN_00d50b00();
    }
    *unaff_RDI = pcVar9;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    if (local_90 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if ((bVar4) && (lVar17 != 0)) {
      FUN_00d50b20();
    }
    if ((bVar3) && (puVar8 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  return unaff_RDI;
}




// ============================================================
// @014ea210 — 1110 bytes
// str: ""MUAudioSourcePrincipalItem::redetectMonophonicPitchAtSuggestedPitchAndUpdatePotentialItem(): _prope"
// ============================================================

/* WARNING: Removing unreachable block (ram,0x014ea53e) */
/* WARNING: Removing unreachable block (ram,0x014ea54b) */

ulonglong FUN_014ea210(undefined4 param_1,undefined1 param_2,longlong *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  bool bVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  void *pvVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  pthread_key_t in_ECX;
  pthread_key_t pVar11;
  undefined *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong unaff_RDI;
  longlong lVar16;
  undefined8 *puVar17;
  
  lVar13 = *param_3;
  pvVar7 = _pthread_getspecific(in_ECX);
  if (pvVar7 != (void *)0x0) {
    lVar13 = *param_3;
    lVar8 = FUN_00e8b990();
    if (lVar8 != 0) {
      lVar13 = *(longlong *)(lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
    }
  }
  lVar13 = *(longlong *)(lVar13 + 0x108);
  if ((lVar13 == 0) ||
     (FUN_00d50b00(), *(int *)(*(longlong *)(unaff_RDI + 0x108) + 0xc) != *(int *)(lVar13 + 0xc))) {
    FUN_00e828a0();
  }
  uVar1 = *(undefined4 *)(unaff_RDI + 0x80);
  lVar8 = FUN_00e83010();
  uVar6 = *(uint *)(*(longlong *)(unaff_RDI + 0x108) + 0xc);
  if (0 < (int)uVar6) {
    lVar16 = *(longlong *)(*(longlong *)(unaff_RDI + 0x108) + 0x10);
    if ((ulonglong)uVar6 - 1 < 3) {
      uVar14 = 0;
    }
    else {
      uVar14 = 0;
      do {
        *(undefined4 *)(lVar8 + uVar14 * 4) =
             *(undefined4 *)(*(longlong *)(lVar16 + uVar14 * 8) + 0x14);
        *(undefined4 *)(lVar8 + 4 + uVar14 * 4) =
             *(undefined4 *)(*(longlong *)(lVar16 + 8 + uVar14 * 8) + 0x14);
        *(undefined4 *)(lVar8 + 8 + uVar14 * 4) =
             *(undefined4 *)(*(longlong *)(lVar16 + 0x10 + uVar14 * 8) + 0x14);
        *(undefined4 *)(lVar8 + 0xc + uVar14 * 4) =
             *(undefined4 *)(*(longlong *)(lVar16 + 0x18 + uVar14 * 8) + 0x14);
        uVar14 = uVar14 + 4;
      } while ((uVar6 & 0xfffffffc) != uVar14);
    }
    if ((ulonglong)(uVar6 & 3) != 0) {
      uVar15 = 0;
      do {
        *(undefined4 *)(uVar14 * 4 + lVar8 + uVar15 * 4) =
             *(undefined4 *)(*(longlong *)(lVar16 + uVar14 * 8 + uVar15 * 8) + 0x14);
        uVar15 = uVar15 + 1;
      } while ((uVar6 & 3) != uVar15);
    }
  }
  uVar6 = FUN_014ea7b0(param_1,param_2);
  uVar14 = (ulonglong)uVar6;
  if ((char)uVar6 != '\0') {
    puVar9 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    puVar12 = &DAT_02572358;
    *puVar9 = &DAT_02572358;
    (*DAT_02572370)();
    pcVar4 = DAT_025e74b8;
    pVar11 = (pthread_key_t)puVar12;
    if (*(int *)(lVar13 + 0xc) < 1) {
      bVar3 = false;
      puVar10 = (undefined8 *)0x0;
    }
    else {
      lVar16 = 0;
      bVar3 = false;
      puVar17 = (undefined8 *)0x0;
      do {
        puVar10 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar10 = &DAT_025e74a0;
        *(undefined8 *)((longlong)puVar10 + 0xc) = 0;
        *(undefined8 *)((longlong)puVar10 + 0x14) = 0;
        *(undefined8 *)((longlong)puVar10 + 0x1c) = 0;
        *(undefined8 *)((longlong)puVar10 + 0x24) = 0;
        *(undefined1 *)((longlong)puVar10 + 0x2c) = 0;
        puVar10[6] = 0;
        puVar10[7] = 0;
        puVar10[8] = 0;
        puVar10[9] = 0;
        puVar10[10] = 0;
        puVar10[0xb] = 0;
        *(undefined4 *)(puVar10 + 0xc) = 0;
        (*pcVar4)();
        if (puVar10 == puVar17) {
          puVar10 = puVar17;
          if (bVar3) {
            FUN_00d50b20();
            bVar5 = bVar3;
          }
          else {
            bVar5 = true;
          }
        }
        else {
          bVar5 = true;
          if ((bVar3) && (puVar17 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
        }
        bVar3 = bVar5;
        lVar2 = *(longlong *)(*(longlong *)(lVar13 + 0x10) + lVar16 * 8);
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        FUN_014ee580();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        *(undefined4 *)((longlong)puVar10 + 0x14) = *(undefined4 *)(lVar8 + lVar16 * 4);
        *(undefined4 *)(puVar10 + 3) = *(undefined4 *)(lVar8 + lVar16 * 4);
        FUN_00d21140();
        pVar11 = (pthread_key_t)puVar12;
        lVar16 = lVar16 + 1;
        puVar17 = puVar10;
      } while (lVar16 < *(int *)(lVar13 + 0xc));
    }
    pvVar7 = _pthread_getspecific(pVar11);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_014c2990();
    lVar8 = *param_3;
    pvVar7 = _pthread_getspecific(pVar11);
    if (pvVar7 != (void *)0x0) {
      lVar8 = *param_3;
      lVar16 = FUN_00e8b990();
      if (lVar16 != 0) {
        lVar8 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar16 + 0x154) & 1) * 8);
      }
    }
    FUN_00d64850();
    *(undefined4 *)(lVar8 + 0x80) = uVar1;
    FUN_00d64910();
    if (puVar9 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    uVar14 = CONCAT71((int7)((ulonglong)(lVar8 + 0x80) >> 8),(char)uVar6);
    if ((bVar3) && (puVar10 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00e83070();
  if (lVar13 != 0) {
    FUN_00d50b20();
  }
  return uVar14 & 0xffffffff;
}




// ============================================================
// @014eccd0 — 862 bytes
// ============================================================

float FUN_014eccd0(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  int unaff_ESI;
  longlong *unaff_RDI;
  bool bVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float local_38;
  float local_34;
  
  cVar3 = (**(code **)(*unaff_RDI + 1000))();
  local_34 = -NAN;
  iVar10 = -1;
  if (cVar3 != '\0') {
    lVar5 = **(longlong **)(unaff_RDI[0x21] + 0x10);
    iVar10 = -1;
    if (lVar5 != 0) {
      FUN_00d50b00();
      iVar10 = *(int *)(lVar5 + 0xc);
      FUN_00d50b20();
    }
  }
  cVar3 = (**(code **)(*unaff_RDI + 1000))();
  if ((cVar3 != '\0') && (lVar5 = **(longlong **)(unaff_RDI[0x21] + 0x10), lVar5 != 0)) {
    FUN_00d50b00();
    local_34 = *(float *)(lVar5 + 0xc);
    FUN_00d50b20();
  }
  uVar8 = param_2 - iVar10;
  lVar5 = unaff_RDI[0x21];
  iVar10 = *(int *)(lVar5 + 0xc);
  if (((int)uVar8 < iVar10) && (param_1 = param_1 - (int)local_34, -1 < param_1)) {
    uVar4 = 0;
    if (-1 < (int)uVar8) {
      uVar4 = uVar8;
    }
    iVar2 = iVar10 + -1;
    if (param_1 < iVar10) {
      iVar2 = param_1;
    }
    if (unaff_ESI == 1) {
      if ((int)uVar4 <= iVar2) {
        uVar9 = (ulonglong)uVar4;
        local_38 = 0.0;
        lVar6 = 0;
        local_34 = 0.0;
        bVar7 = false;
        lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + uVar9 * 8);
        if (lVar5 == 0) goto LAB_014eceb8;
LAB_014ece10:
        if (lVar5 != 0) {
          FUN_00d50b00();
        }
        if ((bVar7) && (lVar6 != 0)) {
          FUN_00d50b20();
        }
LAB_014ece35:
        bVar7 = true;
        fVar12 = *(float *)(lVar5 + 0x20);
        lVar6 = lVar5;
        do {
          fVar11 = 0.0;
          if (!NAN(fVar12)) {
            fVar11 = 0.0;
            fVar1 = *(float *)(lVar6 + 0x10);
            if (!NAN(fVar1)) {
              fVar11 = SQRT(fVar12 * *(float *)(lVar6 + 0x58)) * fVar1 * fVar1;
            }
          }
          local_34 = fVar11 * DAT_02394288 + local_34 * DAT_02390128;
          fVar12 = local_34;
          if (local_34 <= local_38) {
            fVar12 = local_38;
          }
          if ((ulonglong)(iVar2 + 1) - 1 == uVar9) {
LAB_014ed01c:
            if (!bVar7) {
              return fVar12;
            }
            FUN_00d50b20();
            return fVar12;
          }
          uVar9 = uVar9 + 1;
          lVar5 = *(longlong *)(*(longlong *)(unaff_RDI[0x21] + 0x10) + uVar9 * 8);
          local_38 = fVar12;
          if (lVar6 != lVar5) goto LAB_014ece10;
LAB_014eceb8:
          lVar5 = lVar6;
          if ((!bVar7) && (lVar5 != 0)) goto code_r0x014ecec2;
          fVar12 = *(float *)(lVar5 + 0x20);
          lVar6 = lVar5;
        } while( true );
      }
    }
    else if ((int)uVar4 <= iVar2) {
      uVar9 = (ulonglong)uVar4;
      local_38 = 0.0;
      lVar6 = 0;
      local_34 = 0.0;
      bVar7 = false;
      lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + uVar9 * 8);
      if (lVar5 == 0) goto LAB_014ecfd4;
LAB_014ecf40:
      if (lVar5 != 0) {
        FUN_00d50b00();
      }
      if ((bVar7) && (lVar6 != 0)) {
        FUN_00d50b20();
      }
LAB_014ecf65:
      bVar7 = true;
      fVar12 = *(float *)(lVar5 + 0x10);
      if (NAN(fVar12)) goto LAB_014ed014;
      do {
        fVar12 = *(float *)(lVar5 + 0x58) * fVar12 * fVar12;
        lVar6 = lVar5;
        while( true ) {
          local_34 = fVar12 * DAT_02394288 + local_34 * DAT_02390128;
          fVar12 = local_34;
          if (local_34 <= local_38) {
            fVar12 = local_38;
          }
          if ((ulonglong)(iVar2 + 1) - 1 == uVar9) goto LAB_014ed01c;
          uVar9 = uVar9 + 1;
          lVar5 = *(longlong *)(*(longlong *)(unaff_RDI[0x21] + 0x10) + uVar9 * 8);
          local_38 = fVar12;
          if (lVar6 != lVar5) goto LAB_014ecf40;
LAB_014ecfd4:
          lVar5 = lVar6;
          if ((!bVar7) && (lVar5 != 0)) {
            FUN_00d50b00();
            goto LAB_014ecf65;
          }
          fVar12 = *(float *)(lVar5 + 0x10);
          if (!NAN(fVar12)) break;
LAB_014ed014:
          fVar12 = 0.0;
          lVar6 = lVar5;
        }
      } while( true );
    }
  }
  return 0.0;
code_r0x014ecec2:
  FUN_00d50b00();
  goto LAB_014ece35;
}




// ============================================================
// @014ec330 — 844 bytes
// ============================================================

undefined8 FUN_014ec330(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  void *pvVar5;
  longlong lVar6;
  pthread_key_t pVar7;
  longlong *plVar8;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  
  pVar7 = (pthread_key_t)param_1;
  plVar8 = (longlong *)*unaff_RSI;
  pvVar5 = _pthread_getspecific(pVar7);
  if (pvVar5 != (void *)0x0) {
    plVar8 = (longlong *)*unaff_RSI;
    lVar6 = FUN_00e8b990();
    if (lVar6 != 0) {
      plVar8 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
  }
  cVar1 = (**(code **)(*plVar8 + 1000))();
  iVar3 = -1;
  if ((cVar1 != '\0') && (lVar6 = **(longlong **)(plVar8[0x21] + 0x10), lVar6 != 0)) {
    FUN_00d50b00();
    iVar3 = *(int *)(lVar6 + 0xc);
    FUN_00d50b20();
  }
  iVar2 = FUN_014c2f80();
  if (iVar3 <= iVar2) {
    pvVar5 = _pthread_getspecific(pVar7);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar2 = FUN_014c2f80();
    cVar1 = (**(code **)(*unaff_RDI + 1000))();
    iVar3 = -1;
    if ((cVar1 != '\0') && (lVar6 = **(longlong **)(unaff_RDI[0x21] + 0x10), lVar6 != 0)) {
      FUN_00d50b00();
      iVar3 = *(int *)(lVar6 + 0xc);
      FUN_00d50b20();
    }
    if (iVar3 <= iVar2) {
      plVar8 = (longlong *)*unaff_RSI;
      pvVar5 = _pthread_getspecific(pVar7);
      if (pvVar5 != (void *)0x0) {
        plVar8 = (longlong *)*unaff_RSI;
        lVar6 = FUN_00e8b990();
        if (lVar6 != 0) {
          plVar8 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
      }
      cVar1 = (**(code **)(*plVar8 + 1000))();
      iVar2 = -1;
      iVar3 = -1;
      if (cVar1 != '\0') {
        lVar6 = **(longlong **)(plVar8[0x21] + 0x10);
        iVar3 = -1;
        if (lVar6 != 0) {
          FUN_00d50b00();
          iVar3 = *(int *)(lVar6 + 0xc);
          FUN_00d50b20();
        }
      }
      cVar1 = (**(code **)(*unaff_RDI + 1000))();
      if ((cVar1 != '\0') && (lVar6 = **(longlong **)(unaff_RDI[0x21] + 0x10), lVar6 != 0)) {
        FUN_00d50b00();
        iVar2 = *(int *)(lVar6 + 0xc);
        FUN_00d50b20();
      }
      if (iVar2 < iVar3) {
        plVar8 = (longlong *)*unaff_RSI;
        pvVar5 = _pthread_getspecific(pVar7);
        if (pvVar5 != (void *)0x0) {
          plVar8 = (longlong *)*unaff_RSI;
          lVar6 = FUN_00e8b990();
          if (lVar6 != 0) {
            plVar8 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
          }
        }
        cVar1 = (**(code **)(*plVar8 + 1000))();
        uVar4 = 0xffffffff;
        if ((cVar1 != '\0') && (lVar6 = **(longlong **)(plVar8[0x21] + 0x10), lVar6 != 0)) {
          FUN_00d50b00();
          uVar4 = *(undefined4 *)(lVar6 + 0xc);
          FUN_00d50b20();
        }
      }
      else {
        cVar1 = (**(code **)(*unaff_RDI + 1000))();
        uVar4 = 0xffffffff;
        if ((cVar1 != '\0') && (lVar6 = **(longlong **)(unaff_RDI[0x21] + 0x10), lVar6 != 0)) {
          FUN_00d50b00();
          uVar4 = *(undefined4 *)(lVar6 + 0xc);
          FUN_00d50b20();
        }
      }
      *param_2 = uVar4;
      pvVar5 = _pthread_getspecific(pVar7);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar3 = FUN_014c2f80();
      iVar2 = FUN_014c2f80();
      if ((iVar3 < iVar2) && (pvVar5 = _pthread_getspecific(pVar7), pvVar5 != (void *)0x0)) {
        FUN_00e8b990();
      }
      uVar4 = FUN_014c2f80();
      *param_1 = uVar4;
      return 1;
    }
  }
  return 0;
}




// ============================================================
// @014ed8e0 — 711 bytes
// ============================================================

void FUN_014ed8e0(double param_1,double param_2)

{
  pthread_key_t pVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  ulonglong uVar6;
  pthread_key_t in_ECX;
  pthread_key_t *in_RDX;
  ulonglong uVar7;
  float *unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  longlong local_58;
  char local_50;
  
  if (*(longlong *)(unaff_RDI + 0x88) != 0) {
    pvVar4 = _pthread_getspecific(in_ECX);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013eb920();
    iVar2 = *(int *)(local_58 + 0x18);
    iVar10 = iVar2 + 3;
    if (-1 < iVar2) {
      iVar10 = iVar2;
    }
    if (local_50 != '\0') {
      FUN_00d50b20();
    }
    lVar9 = *(longlong *)(unaff_RDI + 0x88);
    pvVar4 = _pthread_getspecific(in_ECX);
    if (pvVar4 != (void *)0x0) {
      lVar9 = *(longlong *)(unaff_RDI + 0x88);
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        lVar9 = *(longlong *)(lVar9 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
      }
    }
    dVar13 = *(double *)(lVar9 + 0x50);
    pvVar4 = _pthread_getspecific(in_ECX);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013eb920();
    lVar9 = *(longlong *)(local_58 + 0x10);
    if (local_50 != '\0') {
      FUN_00d50b20();
    }
    dVar12 = (double)FUN_014bb3e0();
    iVar2 = 0;
    if (dVar12 < param_1) {
      dVar12 = (double)FUN_014bb3e0();
      iVar2 = FUN_00e7d850((param_1 - dVar12) * dVar13);
    }
    iVar10 = iVar10 >> 2;
    dVar12 = (double)FUN_014bb4b0();
    iVar3 = iVar10;
    if (param_2 < dVar12) {
      dVar12 = (double)FUN_014bb3e0();
      iVar3 = FUN_00e7d850(dVar13 * (param_2 - dVar12));
    }
    if (iVar10 < iVar3) {
      iVar3 = iVar10;
    }
    if (iVar2 < iVar3) {
      uVar7 = (ulonglong)iVar2;
      pVar1 = *in_RDX;
      fVar11 = *unaff_RSI;
      uVar8 = ~uVar7;
      uVar6 = (ulonglong)(uint)(iVar3 - iVar2) & 3;
      if ((iVar3 - iVar2 & 3U) != 0) {
        do {
          fVar11 = fVar11 + *(float *)(lVar9 + uVar7 * 4);
          *unaff_RSI = fVar11;
          uVar7 = uVar7 + 1;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      if (2 < uVar8 + (longlong)iVar3) {
        do {
          fVar11 = fVar11 + *(float *)(lVar9 + uVar7 * 4);
          *unaff_RSI = fVar11;
          fVar11 = fVar11 + *(float *)(lVar9 + 4 + uVar7 * 4);
          *unaff_RSI = fVar11;
          fVar11 = fVar11 + *(float *)(lVar9 + 8 + uVar7 * 4);
          *unaff_RSI = fVar11;
          fVar11 = fVar11 + *(float *)(lVar9 + 0xc + uVar7 * 4);
          *unaff_RSI = fVar11;
          uVar7 = uVar7 + 4;
        } while ((longlong)iVar3 != uVar7);
      }
      in_ECX = (pVar1 + iVar3) - iVar2;
      *in_RDX = in_ECX;
    }
    dVar13 = (double)FUN_014bb4b0();
    if ((dVar13 < param_2) && (*(longlong *)(unaff_RDI + 0x118) != 0)) {
      pvVar4 = _pthread_getspecific(in_ECX);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014ed8e0(param_1,param_2);
    }
  }
  return;
}




// ============================================================
// @014e9f00 — 690 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x014e9f3f) */
/* WARNING: Removing unreachable block (ram,0x014e9f48) */

longlong FUN_014e9f00(ulonglong param_1)

{
  float fVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  void *pvVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong *unaff_RDI;
  ulonglong uVar12;
  ulonglong uVar13;
  float fVar14;
  float fVar15;
  longlong local_38;
  char local_30;
  
  (**(code **)(*unaff_RDI + 0x378))();
  if ((local_30 == '\0') && (local_38 != 0)) {
    FUN_00d50b00();
  }
  cVar4 = (**(code **)(*unaff_RDI + 1000))();
  if (cVar4 == '\0') {
    lVar7 = (**(code **)(*unaff_RDI + 0x380))();
    lVar5 = (**(code **)(*unaff_RDI + 0x388))();
    lVar7 = lVar5 / 2 + lVar7;
  }
  else {
    lVar7 = unaff_RDI[0x21];
    iVar2 = *(int *)(lVar7 + 0xc);
    uVar13 = (ulonglong)iVar2;
    uVar11 = iVar2 / 2;
    uVar9 = (ulonglong)uVar11;
    fVar14 = 0.0;
    fVar15 = 0.0;
    if (1 < (longlong)uVar13) {
      lVar5 = *(longlong *)(lVar7 + 0x10);
      if (uVar9 - 1 < 3) {
        fVar15 = 0.0;
        uVar10 = 0;
      }
      else {
        fVar15 = 0.0;
        uVar10 = 0;
        do {
          param_1 = *(ulonglong *)(lVar5 + 0x18 + uVar10 * 8);
          fVar15 = fVar15 + *(float *)(*(longlong *)(lVar5 + uVar10 * 8) + 0x28) +
                   *(float *)(*(longlong *)(lVar5 + 8 + uVar10 * 8) + 0x28) +
                   *(float *)(*(longlong *)(lVar5 + 0x10 + uVar10 * 8) + 0x28) +
                   *(float *)(param_1 + 0x28);
          uVar10 = uVar10 + 4;
        } while ((uVar11 & 0xfffffffc) != uVar10);
      }
      if ((ulonglong)(uVar11 & 3) != 0) {
        param_1 = 0;
        do {
          fVar15 = fVar15 + *(float *)(*(longlong *)(lVar5 + uVar10 * 8 + param_1 * 8) + 0x28);
          param_1 = param_1 + 1;
        } while ((uVar11 & 3) != param_1);
      }
    }
    uVar10 = (ulonglong)(int)uVar11;
    if ((int)uVar11 < iVar2) {
      lVar5 = *(longlong *)(lVar7 + 0x10);
      fVar14 = 0.0;
      param_1 = (ulonglong)(iVar2 - uVar11) & 3;
      uVar8 = param_1;
      uVar12 = uVar10;
      if ((iVar2 - uVar11 & 3) != 0) {
        do {
          fVar14 = fVar14 + *(float *)(*(longlong *)(lVar5 + uVar12 * 8) + 0x28);
          uVar12 = uVar12 + 1;
          uVar8 = uVar8 - 1;
          param_1 = 0;
        } while (uVar8 != 0);
      }
      if (2 < ~uVar10 + uVar13) {
        do {
          param_1 = *(ulonglong *)(lVar5 + 8 + uVar12 * 8);
          fVar14 = fVar14 + *(float *)(*(longlong *)(lVar5 + uVar12 * 8) + 0x28) +
                   *(float *)(param_1 + 0x28) +
                   *(float *)(*(longlong *)(lVar5 + 0x10 + uVar12 * 8) + 0x28) +
                   *(float *)(*(longlong *)(lVar5 + 0x18 + uVar12 * 8) + 0x28);
          uVar12 = uVar12 + 4;
        } while (uVar13 != uVar12);
      }
    }
    if ((fVar15 < fVar14) && ((int)uVar11 < (int)(uVar13 - 1))) {
      uVar10 = uVar10 + 1;
      do {
        param_1 = *(ulonglong *)(*(longlong *)(lVar7 + 0x10) + -8 + uVar10 * 8);
        fVar14 = fVar14 - *(float *)(param_1 + 0x28);
        fVar15 = fVar15 + *(float *)(param_1 + 0x28);
        uVar9 = (ulonglong)((int)uVar9 + 1);
        if (fVar14 <= fVar15) break;
        param_1 = uVar10 + 1;
        bVar3 = (longlong)uVar10 < (longlong)(uVar13 - 1);
        uVar10 = param_1;
      } while (bVar3);
    }
    if ((fVar14 < fVar15) && (0 < (int)uVar9)) {
      do {
        fVar1 = *(float *)(*(longlong *)(*(longlong *)(lVar7 + 0x10) + uVar9 * 8) + 0x28);
        fVar14 = fVar14 + fVar1;
        fVar15 = fVar15 - fVar1;
        param_1 = uVar9;
        if (fVar15 <= fVar14) break;
        bVar3 = 1 < (longlong)uVar9;
        param_1 = uVar9 - 1;
        uVar9 = uVar9 - 1;
      } while (bVar3);
    }
    pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    lVar7 = FUN_0134c2c0();
  }
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  return lVar7;
}




// ============================================================
// @014ec6b0 — 540 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x014ec8ba) */
/* WARNING: Removing unreachable block (ram,0x014ec8c7) */
/* WARNING: Removing unreachable block (ram,0x014ec7fc) */
/* WARNING: Removing unreachable block (ram,0x014ec809) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_014ec6b0(double param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  void *pvVar4;
  ulonglong uVar5;
  undefined *puVar6;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar7;
  double dVar8;
  double dVar9;
  
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar6 = &DAT_02572358;
  *puVar3 = &DAT_02572358;
  (*DAT_02572370)();
  lVar1 = *param_2;
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar7 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar1 + 0x10) + lVar7 * 8) != unaff_RSI) {
          pvVar4 = _pthread_getspecific((pthread_key_t)puVar6);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar5 = FUN_014bb920();
          if (((*(int *)(unaff_RSI + 0x98) == 0) || (uVar5 >> 0x20 == 0)) ||
             (cVar2 = FUN_00e7c000(), cVar2 == '\0')) {
            dVar8 = (double)FUN_014bb3e0();
            pvVar4 = _pthread_getspecific((pthread_key_t)puVar6);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar9 = (double)FUN_014bb3e0();
            if ((double)((ulonglong)(dVar8 - dVar9) & _DAT_023908f0) < param_1) {
              FUN_00d21140();
            }
          }
          else {
            FUN_00d21140();
          }
        }
        lVar7 = lVar7 + 1;
      } while ((int)lVar7 < *(int *)(lVar1 + 0xc));
    }
    FUN_0131c810();
  }
  *unaff_RDI = puVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}




// ============================================================
// @014ed100 — 528 bytes
// ============================================================

void FUN_014ed100(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong *unaff_RDI;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  int local_34;
  
  cVar1 = (**(code **)(*unaff_RDI + 1000))();
  local_34 = -1;
  iVar7 = -1;
  if (cVar1 != '\0') {
    lVar6 = **(longlong **)(unaff_RDI[0x21] + 0x10);
    iVar7 = -1;
    if (lVar6 != 0) {
      FUN_00d50b00();
      iVar7 = *(int *)(lVar6 + 0xc);
      FUN_00d50b20();
    }
  }
  cVar1 = (**(code **)(*unaff_RDI + 1000))();
  if ((cVar1 != '\0') && (lVar6 = **(longlong **)(unaff_RDI[0x21] + 0x10), lVar6 != 0)) {
    FUN_00d50b00();
    local_34 = *(int *)(lVar6 + 0xc);
    FUN_00d50b20();
  }
  uVar8 = param_2 - iVar7;
  iVar7 = *(int *)(unaff_RDI[0x21] + 0xc);
  if (((int)uVar8 < iVar7) && (param_1 = param_1 - local_34, -1 < param_1)) {
    uVar5 = 0;
    if (-1 < (int)uVar8) {
      uVar5 = uVar8;
    }
    iVar2 = iVar7 + -1;
    if (param_1 < iVar7) {
      iVar2 = param_1;
    }
    if ((int)uVar5 <= iVar2) {
      uVar3 = (ulonglong)(iVar2 + 1U);
      uVar4 = (ulonglong)uVar5 + 1;
      if (uVar4 != uVar3) {
        uVar8 = iVar2 + 1U + ~uVar5;
        if ((uVar8 & 3) != 0) {
          lVar6 = -((ulonglong)uVar8 & 3);
          do {
            uVar4 = uVar4 + 1;
            lVar6 = lVar6 + 1;
          } while (lVar6 != 0);
        }
        if (2 < (uVar3 - uVar5) - 2) {
          do {
            uVar4 = uVar4 + 4;
          } while (uVar3 != uVar4);
        }
      }
    }
  }
  return;
}




// ============================================================
// @014ec110 — 513 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_014ec110(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  int unaff_ESI;
  longlong *unaff_RDI;
  uint uVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int local_34;
  
  cVar3 = (**(code **)(*unaff_RDI + 1000))();
  local_34 = -1;
  iVar8 = -1;
  if (cVar3 != '\0') {
    lVar4 = **(longlong **)(unaff_RDI[0x21] + 0x10);
    iVar8 = -1;
    if (lVar4 != 0) {
      FUN_00d50b00();
      iVar8 = *(int *)(lVar4 + 0xc);
      FUN_00d50b20();
    }
  }
  cVar3 = (**(code **)(*unaff_RDI + 1000))();
  if ((cVar3 != '\0') && (lVar4 = **(longlong **)(unaff_RDI[0x21] + 0x10), lVar4 != 0)) {
    FUN_00d50b00();
    local_34 = *(int *)(lVar4 + 0xc);
    FUN_00d50b20();
  }
  uVar7 = param_2 - iVar8;
  lVar4 = unaff_RDI[0x21];
  iVar8 = *(int *)(lVar4 + 0xc);
  fVar9 = 0.0;
  if (((int)uVar7 < iVar8) && (param_1 = param_1 - local_34, -1 < param_1)) {
    uVar5 = 0;
    if (-1 < (int)uVar7) {
      uVar5 = uVar7;
    }
    iVar2 = iVar8 + -1;
    if (param_1 < iVar8) {
      iVar2 = param_1;
    }
    if (unaff_ESI == 1) {
      if ((int)uVar5 <= iVar2) {
        uVar6 = (ulonglong)uVar5;
        fVar9 = 0.0;
        while( true ) {
          lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + uVar6 * 8);
          fVar11 = *(float *)(lVar4 + 0x10);
          if (!NAN(fVar11)) {
            fVar1 = *(float *)(lVar4 + 0x20);
            if (!NAN(fVar1)) {
              fVar11 = fVar11 + DAT_0240e328;
              fVar10 = DAT_0239425c;
              if (DAT_0239425c <= fVar11) {
                fVar10 = fVar11;
              }
              fVar9 = fVar9 + (float)(~-(uint)(fVar1 <= DAT_02394270) &
                                      (uint)SQRT(fVar1) & _DAT_02390140 |
                                     -(uint)(fVar1 <= DAT_02394270) & DAT_023b3e04) *
                              fVar10 * fVar10;
            }
          }
          if ((ulonglong)(iVar2 + 1) - 1 == uVar6) break;
          lVar4 = unaff_RDI[0x21];
          uVar6 = uVar6 + 1;
        }
      }
    }
    else if ((int)uVar5 <= iVar2) {
      uVar6 = (ulonglong)uVar5;
      fVar9 = 0.0;
      while( true ) {
        lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + uVar6 * 8);
        fVar11 = *(float *)(lVar4 + 0x10);
        if ((!NAN(fVar11)) && (fVar1 = *(float *)(lVar4 + 0x20), !NAN(fVar1))) {
          fVar11 = fVar11 + DAT_0240e328;
          fVar10 = DAT_0239425c;
          if (DAT_0239425c <= fVar11) {
            fVar10 = fVar11;
          }
          fVar9 = fVar9 + fVar10 * fVar1;
        }
        if ((ulonglong)(iVar2 + 1) - 1 == uVar6) break;
        lVar4 = unaff_RDI[0x21];
        uVar6 = uVar6 + 1;
      }
    }
  }
  return fVar9;
}




// ============================================================
// @011039c0 — 504 bytes
// str: ""bool""
// str: ""MUAudioComponent""
// str: ""MUAudioSourceItem""
// str: ""MUAudioSourceElement""
// str: ""_audioSourceComponent""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_011039c0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  char *pcVar10;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  *unaff_RDI = &DAT_02590538;
  uVar1 = *(undefined4 *)(unaff_RSI + 0x14);
  uVar2 = *(undefined4 *)(unaff_RSI + 0x18);
  uVar3 = *(undefined4 *)(unaff_RSI + 0x1c);
  uVar4 = *(undefined4 *)(unaff_RSI + 0x20);
  uVar5 = *(undefined4 *)(unaff_RSI + 0x24);
  uVar6 = *(undefined4 *)(unaff_RSI + 0x28);
  uVar7 = *(undefined4 *)(unaff_RSI + 0x2c);
  *(undefined4 *)(unaff_RDI + 2) = *(undefined4 *)(unaff_RSI + 0x10);
  *(undefined4 *)((longlong)unaff_RDI + 0x14) = uVar1;
  *(undefined4 *)(unaff_RDI + 3) = uVar2;
  *(undefined4 *)((longlong)unaff_RDI + 0x1c) = uVar3;
  *(undefined4 *)(unaff_RDI + 4) = uVar4;
  *(undefined4 *)((longlong)unaff_RDI + 0x24) = uVar5;
  *(undefined4 *)(unaff_RDI + 5) = uVar6;
  *(undefined4 *)((longlong)unaff_RDI + 0x2c) = uVar7;
  unaff_RDI[6] = *(undefined8 *)(unaff_RSI + 0x30);
  *unaff_RDI = &DAT_025d9310;
  unaff_RDI[7] = 0;
  lVar9 = FUN_001156b0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01103c10();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_audioSourceComponent";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioComponent");
  }
  unaff_RDI[8] = 0;
  lVar9 = FUN_001156b0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01103d00();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_audioSourceComponents";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceElement");
  }
  unaff_RDI[9] = 0;
  lVar9 = FUN_001156b0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01103df0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_audioSourceComponents";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceItem");
  }
  *(undefined1 *)(unaff_RDI + 10) = 0;
  lVar9 = FUN_001156b0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_02791348 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02791310 = FUN_001156b0();
        _DAT_02791308 = "_suggestsSeparateComponentRenderers";
        _DAT_02791318 = 0;
        _DAT_02791320 = 0x6200;
        _DAT_02791328 = "bool";
        _DAT_02791330 = 0;
        uRam0000000002791338 = 0;
        _DAT_02791340 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}



