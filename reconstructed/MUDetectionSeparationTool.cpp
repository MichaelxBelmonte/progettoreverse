// Reconstructed implementation of MUDetectionSeparationTool
// From MikeCore binary — reverse-engineered pseudocode

#include "MUDetectionSeparationTool.h"

// ============================================================
// @00350830 — 6238 bytes
// str: ""%@/%@ Diff.%@""
// ============================================================

void FUN_00350830(pthread_key_t param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  code *pcVar22;
  int iVar23;
  void *pvVar24;
  longlong lVar25;
  undefined8 *puVar26;
  ulonglong uVar27;
  pthread_key_t pVar28;
  longlong *plVar29;
  undefined *puVar30;
  undefined *puVar31;
  longlong lVar32;
  ulonglong uVar33;
  longlong *plVar34;
  longlong *plVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  longlong lVar38;
  longlong *plVar39;
  uint uVar40;
  bool bVar41;
  undefined4 uVar42;
  double dVar43;
  longlong *local_1a8;
  longlong local_1a0;
  longlong *local_198;
  char local_190;
  longlong *local_188;
  char local_180;
  double local_178;
  longlong local_170;
  char local_168;
  longlong local_160;
  char local_158;
  longlong local_150;
  char local_148;
  longlong local_140;
  longlong *local_138;
  ulonglong local_130;
  longlong local_128;
  longlong *local_120;
  longlong *local_118;
  undefined8 *local_110;
  undefined8 *local_108;
  longlong *local_100;
  undefined *local_f8;
  longlong *local_f0;
  longlong *local_e8;
  code *local_e0;
  ulonglong local_d8;
  longlong *local_d0;
  longlong *local_c8;
  undefined4 local_bc;
  longlong *local_b8;
  char local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  char local_90;
  longlong *local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  
  FUN_0021a630();
  (**(code **)(*local_b8 + 0xa00))();
  pvVar24 = _pthread_getspecific(param_1);
  if (pvVar24 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  plVar35 = local_88;
  if (local_80 == '\0') {
    if (((local_88 != (longlong *)0x0) && (FUN_00d50b00(), local_80 != '\0')) &&
       (local_88 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_80 = '\0';
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar35 == (longlong *)0x0) {
    return;
  }
  pvVar24 = _pthread_getspecific(param_1);
  if (pvVar24 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  if (local_88 == (longlong *)0x0) {
    bVar41 = false;
  }
  else {
    pvVar24 = _pthread_getspecific(param_1);
    if (pvVar24 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    bVar41 = 1 < *(int *)(local_98 + 0xc);
    if (local_90 != '\0') {
      FUN_00d50b20();
    }
  }
  if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (!bVar41) goto LAB_00351c0b;
  pvVar24 = _pthread_getspecific(param_1);
  if (pvVar24 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  local_118 = local_88;
  if ((((local_80 == '\0') && (local_88 != (longlong *)0x0)) && (FUN_00d50b00(), local_80 != '\0'))
     && (local_88 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pvVar24 = _pthread_getspecific(param_1);
  if (pvVar24 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  local_a8 = *(longlong *)local_88[2];
  if (local_a8 != 0) {
    FUN_00d50b00();
  }
  if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pvVar24 = _pthread_getspecific(param_1);
  if (pvVar24 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  local_a0 = *(longlong *)(local_88[2] + 8);
  if (local_a0 != 0) {
    FUN_00d50b00();
  }
  if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pvVar24 = _pthread_getspecific(param_1);
  if ((pvVar24 != (void *)0x0) && (lVar25 = FUN_00e8b990(), lVar25 != 0)) {
    param_1 = (pthread_key_t)local_a8;
  }
  FUN_012e5ae0();
  if (*(int *)((longlong)local_88 + 0xc) == 0) {
    bVar41 = false;
  }
  else {
    pvVar24 = _pthread_getspecific(param_1);
    if ((pvVar24 != (void *)0x0) && (lVar25 = FUN_00e8b990(), lVar25 != 0)) {
      param_1 = (pthread_key_t)local_a0;
    }
    FUN_012e5ae0();
    bVar41 = *(int *)(local_98 + 0xc) != 0;
    if (local_90 != '\0') {
      FUN_00d50b20();
    }
  }
  if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar41) {
    pvVar24 = _pthread_getspecific(param_1);
    if ((pvVar24 != (void *)0x0) && (lVar25 = FUN_00e8b990(), lVar25 != 0)) {
      param_1 = (pthread_key_t)local_a8;
    }
    FUN_012e5ae0();
    pvVar24 = _pthread_getspecific(param_1);
    if (pvVar24 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125e7c0();
    pvVar24 = _pthread_getspecific(param_1);
    if (pvVar24 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013df480();
    local_f0 = local_88;
    if (local_80 == '\0') {
      if (((local_88 != (longlong *)0x0) && (FUN_00d50b00(), local_80 != '\0')) &&
         (local_88 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_80 = '\0';
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pvVar24 = _pthread_getspecific(param_1);
    if ((pvVar24 != (void *)0x0) && (lVar25 = FUN_00e8b990(), lVar25 != 0)) {
      param_1 = (pthread_key_t)local_a0;
    }
    FUN_012e5ae0();
    pvVar24 = _pthread_getspecific(param_1);
    if (pvVar24 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125e7c0();
    pvVar24 = _pthread_getspecific(param_1);
    if (pvVar24 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013df480();
    local_e8 = local_88;
    if (local_80 == '\0') {
      if (((local_88 != (longlong *)0x0) && (FUN_00d50b00(), local_80 != '\0')) &&
         (local_88 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_80 = '\0';
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pvVar24 = _pthread_getspecific(param_1);
    if ((pvVar24 != (void *)0x0) && (lVar25 = FUN_00e8b990(), lVar25 != 0)) {
      param_1 = (pthread_key_t)local_f0;
    }
    FUN_01320d00();
    local_40 = local_88;
    if ((((local_80 == '\0') && (local_88 != (longlong *)0x0)) && (FUN_00d50b00(), local_80 != '\0')
        ) && (local_88 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pvVar24 = _pthread_getspecific(param_1);
    if ((pvVar24 != (void *)0x0) && (lVar25 = FUN_00e8b990(), lVar25 != 0)) {
      param_1 = (pthread_key_t)local_e8;
    }
    FUN_01320d00();
    local_48 = local_88;
    if (((local_80 == '\0') && (local_88 != (longlong *)0x0)) &&
       ((FUN_00d50b00(), local_80 != '\0' && (local_88 != (longlong *)0x0)))) {
      FUN_00d50b20();
    }
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      pvVar24 = _pthread_getspecific(param_1);
      if (pvVar24 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0123abe0();
      local_100 = local_88;
      plVar29 = local_88;
      if (local_88 == (longlong *)0x0) {
        local_bc = 1;
        local_100 = (longlong *)0x0;
      }
      else {
        if (local_80 == '\0') {
          FUN_00d50b00();
          local_bc = 0;
          if ((local_80 == '\0') || (local_88 == (longlong *)0x0)) goto LAB_0035105d;
          FUN_00d50b20();
        }
        local_bc = 0;
      }
LAB_0035105d:
      pvVar24 = _pthread_getspecific((pthread_key_t)plVar29);
      plVar34 = local_40;
      if ((pvVar24 != (void *)0x0) && (lVar25 = FUN_00e8b990(), plVar34 = local_40, lVar25 != 0)) {
        plVar29 = local_40;
        plVar34 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar25 + 0x154) & 1) + 4];
      }
      local_178 = (double)(**(code **)(*plVar34 + 0x370))();
      pvVar24 = _pthread_getspecific((pthread_key_t)plVar29);
      plVar34 = local_40;
      if ((pvVar24 != (void *)0x0) && (lVar25 = FUN_00e8b990(), plVar34 = local_40, lVar25 != 0)) {
        plVar29 = local_40;
        plVar34 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar25 + 0x154) & 1) + 4];
      }
      local_d8 = (**(code **)(*plVar34 + 0x3a0))();
      pvVar24 = _pthread_getspecific((pthread_key_t)plVar29);
      plVar34 = local_48;
      if ((pvVar24 != (void *)0x0) && (lVar25 = FUN_00e8b990(), plVar34 = local_48, lVar25 != 0)) {
        plVar29 = local_48;
        plVar34 = (longlong *)local_48[(ulonglong)(*(uint *)(lVar25 + 0x154) & 1) + 4];
      }
      dVar43 = (double)(**(code **)(*plVar34 + 0x370))();
      if ((dVar43 == local_178) && (!NAN(dVar43) && !NAN(local_178))) {
        pvVar24 = _pthread_getspecific((pthread_key_t)plVar29);
        plVar34 = local_48;
        if ((pvVar24 != (void *)0x0) && (lVar25 = FUN_00e8b990(), plVar34 = local_48, lVar25 != 0))
        {
          plVar29 = local_48;
          plVar34 = (longlong *)local_48[(ulonglong)(*(uint *)(lVar25 + 0x154) & 1) + 4];
        }
        iVar23 = (**(code **)(*plVar34 + 0x3a0))();
        if (iVar23 == (uint)local_d8) {
          local_38 = plVar35;
          pvVar24 = _pthread_getspecific((pthread_key_t)plVar29);
          plVar35 = local_40;
          if ((pvVar24 != (void *)0x0) && (lVar25 = FUN_00e8b990(), plVar35 = local_40, lVar25 != 0)
             ) {
            plVar29 = local_40;
            plVar35 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar25 + 0x154) & 1) + 4];
          }
          pVar28 = (pthread_key_t)plVar29;
          local_120 = (longlong *)(**(code **)(*plVar35 + 0x378))();
          pvVar24 = _pthread_getspecific(pVar28);
          plVar35 = local_48;
          if ((pvVar24 != (void *)0x0) && (lVar25 = FUN_00e8b990(), plVar35 = local_48, lVar25 != 0)
             ) {
            plVar35 = (longlong *)local_48[(ulonglong)(*(uint *)(lVar25 + 0x154) & 1) + 4];
          }
          local_c8 = (longlong *)(**(code **)(*plVar35 + 0x378))();
          plVar35 = local_120;
          if ((longlong)local_c8 < (longlong)local_120) {
            plVar35 = local_c8;
          }
          puVar26 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          puVar30 = &DAT_02572358;
          local_f8 = &DAT_02572358;
          *puVar26 = &DAT_02572358;
          local_e0 = DAT_02572370;
          (*DAT_02572370)();
          local_108 = puVar26;
          if (0 < (int)(uint)local_d8) {
            uVar33 = local_d8 & 0xffffffff;
            do {
              FUN_00c8e690();
              plVar29 = local_88;
              if ((((local_80 == '\0') && (local_88 != (longlong *)0x0)) &&
                  (FUN_00d50b00(), local_80 != '\0')) && (local_88 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              FUN_00c92170();
              FUN_00c92160();
              ___bzero();
              local_80 = '\0';
              local_88 = plVar29;
              FUN_00d21140();
              if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              FUN_00d50b20();
              uVar40 = (int)uVar33 - 1;
              uVar33 = (ulonglong)uVar40;
            } while (uVar40 != 0);
          }
          puVar26 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar26 = local_f8;
          (*local_e0)();
          local_110 = puVar26;
          if (0 < (int)(uint)local_d8) {
            puVar31 = (undefined *)0x0;
            do {
              pVar28 = (pthread_key_t)puVar30;
              FUN_00c8e690();
              plVar29 = local_88;
              if (((local_80 == '\0') && (local_88 != (longlong *)0x0)) &&
                 ((FUN_00d50b00(), local_80 != '\0' && (local_88 != (longlong *)0x0)))) {
                FUN_00d50b20();
              }
              FUN_00c92170();
              FUN_00c92160();
              ___bzero();
              local_80 = '\0';
              local_88 = plVar29;
              FUN_00d21140();
              if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              local_88 = (longlong *)plVar29[2];
              pvVar24 = _pthread_getspecific(pVar28);
              plVar29 = local_40;
              if ((pvVar24 != (void *)0x0) &&
                 (lVar25 = FUN_00e8b990(), plVar29 = local_40, lVar25 != 0)) {
                plVar29 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar25 + 0x154) & 1) + 4];
              }
              iVar23 = (int)puVar31;
              (**(code **)(*plVar29 + 0x388))((int)DAT_0238fee8,(int)DAT_0238fee8,1,0);
              FUN_00d50b20();
              uVar40 = iVar23 + 1;
              puVar30 = puVar31;
              puVar31 = (undefined *)(ulonglong)uVar40;
            } while ((uint)local_d8 != uVar40);
          }
          puVar26 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar26 = local_f8;
          (*local_e0)();
          local_f8 = (undefined *)(local_d8 & 0xffffffff);
          local_e0 = (code *)puVar26;
          if ((int)local_d8 < 1) {
            plVar29 = local_108 + 2;
          }
          else {
            uVar33 = (ulonglong)local_f8;
            uVar27 = 0;
            do {
              pVar28 = (pthread_key_t)uVar33;
              FUN_00c8e690();
              plVar29 = local_88;
              if ((((local_80 == '\0') && (local_88 != (longlong *)0x0)) &&
                  (FUN_00d50b00(), local_80 != '\0')) && (local_88 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              FUN_00c92170();
              FUN_00c92160();
              ___bzero();
              local_80 = '\0';
              local_88 = plVar29;
              FUN_00d21140();
              if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              local_88 = (longlong *)plVar29[2];
              pvVar24 = _pthread_getspecific(pVar28);
              plVar29 = local_48;
              if ((pvVar24 != (void *)0x0) &&
                 (lVar25 = FUN_00e8b990(), plVar29 = local_48, lVar25 != 0)) {
                plVar29 = (longlong *)local_48[(ulonglong)(*(uint *)(lVar25 + 0x154) & 1) + 4];
              }
              iVar23 = (int)uVar27;
              (**(code **)(*plVar29 + 0x388))((int)DAT_0238fee8,(int)DAT_0238fee8,1,0);
              FUN_00d50b20();
              uVar40 = iVar23 + 1;
              uVar33 = uVar27;
              uVar27 = (ulonglong)uVar40;
            } while ((uint)local_d8 != uVar40);
            plVar29 = local_108 + 2;
            if (0 < (longlong)plVar35) {
              lVar25 = local_110[2];
              plVar34 = *(longlong **)((longlong)local_e0 + 0x10);
              lVar4 = *plVar29;
              uVar40 = (uint)plVar35;
              if ((longlong *)((longlong)&MACH_HEADER.cputype + 3) < plVar35) {
                local_d0 = (longlong *)((ulonglong)plVar35 & 0xfffffffffffffff8);
                local_c8 = plVar34;
                if (plVar35 == local_d0) {
                  local_d0 = local_d0 + -1;
                  local_138 = (longlong *)(((ulonglong)local_d0 >> 3) + 1);
                  local_130 = (longlong)plVar35 - 1;
                  local_128 = -((ulonglong)local_138 & 0xfffffffffffffffe);
                  uVar33 = 0;
                  do {
                    uVar36 = *(ulonglong *)(*(longlong *)(lVar25 + uVar33 * 8) + 0x10);
                    uVar6 = *(ulonglong *)(plVar34[uVar33] + 0x10);
                    uVar7 = *(ulonglong *)(*(longlong *)(lVar4 + uVar33 * 8) + 0x10);
                    uVar27 = uVar7 + (longlong)plVar35 * 4;
                    if ((uVar7 < uVar36 + (longlong)plVar35 * 4 && uVar36 < uVar27) ||
                       (uVar7 < uVar6 + (longlong)plVar35 * 4 && uVar6 < uVar27)) {
                      if (local_130 < 3) {
                        uVar27 = 0;
                      }
                      else {
                        uVar27 = 0;
                        do {
                          *(float *)(uVar7 + uVar27 * 4) =
                               *(float *)(uVar36 + uVar27 * 4) - *(float *)(uVar6 + uVar27 * 4);
                          *(float *)(uVar7 + 4 + uVar27 * 4) =
                               *(float *)(uVar36 + 4 + uVar27 * 4) -
                               *(float *)(uVar6 + 4 + uVar27 * 4);
                          *(float *)(uVar7 + 8 + uVar27 * 4) =
                               *(float *)(uVar36 + 8 + uVar27 * 4) -
                               *(float *)(uVar6 + 8 + uVar27 * 4);
                          *(float *)(uVar7 + 0xc + uVar27 * 4) =
                               *(float *)(uVar36 + 0xc + uVar27 * 4) -
                               *(float *)(uVar6 + 0xc + uVar27 * 4);
                          uVar27 = uVar27 + 4;
                        } while (((ulonglong)plVar35 & 0xfffffffffffffffc) != uVar27);
                      }
                      if ((ulonglong)(uVar40 & 3) != 0) {
                        uVar37 = 0;
                        do {
                          *(float *)(uVar7 + uVar27 * 4 + uVar37 * 4) =
                               *(float *)(uVar36 + uVar27 * 4 + uVar37 * 4) -
                               *(float *)(uVar6 + uVar27 * 4 + uVar37 * 4);
                          uVar37 = uVar37 + 1;
                        } while ((uVar40 & 3) != uVar37);
                      }
                    }
                    else {
                      if (local_d0 == (longlong *)0x0) {
                        lVar38 = 0;
                      }
                      else {
                        lVar38 = 0;
                        lVar32 = local_128;
                        do {
                          pfVar1 = (float *)(uVar36 + lVar38 * 4);
                          fVar8 = pfVar1[1];
                          fVar9 = pfVar1[2];
                          fVar10 = pfVar1[3];
                          pfVar2 = (float *)(uVar36 + 0x10 + lVar38 * 4);
                          fVar11 = *pfVar2;
                          fVar12 = pfVar2[1];
                          fVar13 = pfVar2[2];
                          fVar14 = pfVar2[3];
                          pfVar2 = (float *)(uVar6 + lVar38 * 4);
                          fVar15 = pfVar2[1];
                          fVar16 = pfVar2[2];
                          fVar17 = pfVar2[3];
                          pfVar3 = (float *)(uVar6 + 0x10 + lVar38 * 4);
                          fVar18 = *pfVar3;
                          fVar19 = pfVar3[1];
                          fVar20 = pfVar3[2];
                          fVar21 = pfVar3[3];
                          pfVar3 = (float *)(uVar7 + lVar38 * 4);
                          *pfVar3 = *pfVar1 - *pfVar2;
                          pfVar3[1] = fVar8 - fVar15;
                          pfVar3[2] = fVar9 - fVar16;
                          pfVar3[3] = fVar10 - fVar17;
                          pfVar1 = (float *)(uVar7 + 0x10 + lVar38 * 4);
                          *pfVar1 = fVar11 - fVar18;
                          pfVar1[1] = fVar12 - fVar19;
                          pfVar1[2] = fVar13 - fVar20;
                          pfVar1[3] = fVar14 - fVar21;
                          pfVar1 = (float *)(uVar36 + 0x20 + lVar38 * 4);
                          fVar8 = pfVar1[1];
                          fVar9 = pfVar1[2];
                          fVar10 = pfVar1[3];
                          pfVar2 = (float *)(uVar36 + 0x30 + lVar38 * 4);
                          fVar11 = *pfVar2;
                          fVar12 = pfVar2[1];
                          fVar13 = pfVar2[2];
                          fVar14 = pfVar2[3];
                          pfVar2 = (float *)(uVar6 + 0x20 + lVar38 * 4);
                          fVar15 = pfVar2[1];
                          fVar16 = pfVar2[2];
                          fVar17 = pfVar2[3];
                          pfVar3 = (float *)(uVar6 + 0x30 + lVar38 * 4);
                          fVar18 = *pfVar3;
                          fVar19 = pfVar3[1];
                          fVar20 = pfVar3[2];
                          fVar21 = pfVar3[3];
                          pfVar3 = (float *)(uVar7 + 0x20 + lVar38 * 4);
                          *pfVar3 = *pfVar1 - *pfVar2;
                          pfVar3[1] = fVar8 - fVar15;
                          pfVar3[2] = fVar9 - fVar16;
                          pfVar3[3] = fVar10 - fVar17;
                          pfVar1 = (float *)(uVar7 + 0x30 + lVar38 * 4);
                          *pfVar1 = fVar11 - fVar18;
                          pfVar1[1] = fVar12 - fVar19;
                          pfVar1[2] = fVar13 - fVar20;
                          pfVar1[3] = fVar14 - fVar21;
                          lVar38 = lVar38 + 0x10;
                          lVar32 = lVar32 + 2;
                        } while (lVar32 != 0);
                      }
                      if (((ulonglong)local_138 & 1) != 0) {
                        pfVar1 = (float *)(uVar36 + lVar38 * 4);
                        fVar8 = pfVar1[1];
                        fVar9 = pfVar1[2];
                        fVar10 = pfVar1[3];
                        pfVar2 = (float *)(uVar36 + 0x10 + lVar38 * 4);
                        fVar11 = *pfVar2;
                        fVar12 = pfVar2[1];
                        fVar13 = pfVar2[2];
                        fVar14 = pfVar2[3];
                        pfVar2 = (float *)(uVar6 + lVar38 * 4);
                        fVar15 = pfVar2[1];
                        fVar16 = pfVar2[2];
                        fVar17 = pfVar2[3];
                        pfVar3 = (float *)(uVar6 + 0x10 + lVar38 * 4);
                        fVar18 = *pfVar3;
                        fVar19 = pfVar3[1];
                        fVar20 = pfVar3[2];
                        fVar21 = pfVar3[3];
                        pfVar3 = (float *)(uVar7 + lVar38 * 4);
                        *pfVar3 = *pfVar1 - *pfVar2;
                        pfVar3[1] = fVar8 - fVar15;
                        pfVar3[2] = fVar9 - fVar16;
                        pfVar3[3] = fVar10 - fVar17;
                        pfVar1 = (float *)(uVar7 + 0x10 + lVar38 * 4);
                        *pfVar1 = fVar11 - fVar18;
                        pfVar1[1] = fVar12 - fVar19;
                        pfVar1[2] = fVar13 - fVar20;
                        pfVar1[3] = fVar14 - fVar21;
                      }
                    }
                    uVar33 = uVar33 + 1;
                    local_140 = lVar4;
                  } while ((undefined *)uVar33 != local_f8);
                }
                else {
                  local_138 = local_d0 + -1;
                  local_130 = ((ulonglong)local_138 >> 3) + 1;
                  local_128 = -(local_130 & 0xfffffffffffffffe);
                  uVar33 = 0;
                  do {
                    uVar36 = *(ulonglong *)(*(longlong *)(lVar25 + uVar33 * 8) + 0x10);
                    uVar6 = *(ulonglong *)(plVar34[uVar33] + 0x10);
                    uVar7 = *(ulonglong *)(*(longlong *)(lVar4 + uVar33 * 8) + 0x10);
                    uVar27 = uVar7 + (longlong)plVar35 * 4;
                    if (uVar7 < uVar36 + (longlong)plVar35 * 4 && uVar36 < uVar27) {
                      plVar39 = (longlong *)0x0;
                    }
                    else {
                      plVar39 = (longlong *)0x0;
                      if (uVar6 + (longlong)plVar35 * 4 <= uVar7 || uVar27 <= uVar6) {
                        if (local_138 == (longlong *)0x0) {
                          lVar38 = 0;
                        }
                        else {
                          lVar38 = 0;
                          lVar32 = local_128;
                          do {
                            pfVar1 = (float *)(uVar36 + lVar38 * 4);
                            fVar8 = pfVar1[1];
                            fVar9 = pfVar1[2];
                            fVar10 = pfVar1[3];
                            pfVar2 = (float *)(uVar36 + 0x10 + lVar38 * 4);
                            fVar11 = *pfVar2;
                            fVar12 = pfVar2[1];
                            fVar13 = pfVar2[2];
                            fVar14 = pfVar2[3];
                            pfVar2 = (float *)(uVar6 + lVar38 * 4);
                            fVar15 = pfVar2[1];
                            fVar16 = pfVar2[2];
                            fVar17 = pfVar2[3];
                            pfVar3 = (float *)(uVar6 + 0x10 + lVar38 * 4);
                            fVar18 = *pfVar3;
                            fVar19 = pfVar3[1];
                            fVar20 = pfVar3[2];
                            fVar21 = pfVar3[3];
                            pfVar3 = (float *)(uVar7 + lVar38 * 4);
                            *pfVar3 = *pfVar1 - *pfVar2;
                            pfVar3[1] = fVar8 - fVar15;
                            pfVar3[2] = fVar9 - fVar16;
                            pfVar3[3] = fVar10 - fVar17;
                            pfVar1 = (float *)(uVar7 + 0x10 + lVar38 * 4);
                            *pfVar1 = fVar11 - fVar18;
                            pfVar1[1] = fVar12 - fVar19;
                            pfVar1[2] = fVar13 - fVar20;
                            pfVar1[3] = fVar14 - fVar21;
                            pfVar1 = (float *)(uVar36 + 0x20 + lVar38 * 4);
                            fVar8 = pfVar1[1];
                            fVar9 = pfVar1[2];
                            fVar10 = pfVar1[3];
                            pfVar2 = (float *)(uVar36 + 0x30 + lVar38 * 4);
                            fVar11 = *pfVar2;
                            fVar12 = pfVar2[1];
                            fVar13 = pfVar2[2];
                            fVar14 = pfVar2[3];
                            pfVar2 = (float *)(uVar6 + 0x20 + lVar38 * 4);
                            fVar15 = pfVar2[1];
                            fVar16 = pfVar2[2];
                            fVar17 = pfVar2[3];
                            pfVar3 = (float *)(uVar6 + 0x30 + lVar38 * 4);
                            fVar18 = *pfVar3;
                            fVar19 = pfVar3[1];
                            fVar20 = pfVar3[2];
                            fVar21 = pfVar3[3];
                            pfVar3 = (float *)(uVar7 + 0x20 + lVar38 * 4);
                            *pfVar3 = *pfVar1 - *pfVar2;
                            pfVar3[1] = fVar8 - fVar15;
                            pfVar3[2] = fVar9 - fVar16;
                            pfVar3[3] = fVar10 - fVar17;
                            pfVar1 = (float *)(uVar7 + 0x30 + lVar38 * 4);
                            *pfVar1 = fVar11 - fVar18;
                            pfVar1[1] = fVar12 - fVar19;
                            pfVar1[2] = fVar13 - fVar20;
                            pfVar1[3] = fVar14 - fVar21;
                            lVar38 = lVar38 + 0x10;
                            lVar32 = lVar32 + 2;
                          } while (lVar32 != 0);
                        }
                        plVar39 = local_d0;
                        if ((local_130 & 1) != 0) {
                          pfVar1 = (float *)(uVar36 + lVar38 * 4);
                          fVar8 = pfVar1[1];
                          fVar9 = pfVar1[2];
                          fVar10 = pfVar1[3];
                          pfVar2 = (float *)(uVar36 + 0x10 + lVar38 * 4);
                          fVar11 = *pfVar2;
                          fVar12 = pfVar2[1];
                          fVar13 = pfVar2[2];
                          fVar14 = pfVar2[3];
                          pfVar2 = (float *)(uVar6 + lVar38 * 4);
                          fVar15 = pfVar2[1];
                          fVar16 = pfVar2[2];
                          fVar17 = pfVar2[3];
                          pfVar3 = (float *)(uVar6 + 0x10 + lVar38 * 4);
                          fVar18 = *pfVar3;
                          fVar19 = pfVar3[1];
                          fVar20 = pfVar3[2];
                          fVar21 = pfVar3[3];
                          pfVar3 = (float *)(uVar7 + lVar38 * 4);
                          *pfVar3 = *pfVar1 - *pfVar2;
                          pfVar3[1] = fVar8 - fVar15;
                          pfVar3[2] = fVar9 - fVar16;
                          pfVar3[3] = fVar10 - fVar17;
                          pfVar1 = (float *)(uVar7 + 0x10 + lVar38 * 4);
                          *pfVar1 = fVar11 - fVar18;
                          pfVar1[1] = fVar12 - fVar19;
                          pfVar1[2] = fVar13 - fVar20;
                          pfVar1[3] = fVar14 - fVar21;
                        }
                      }
                    }
                    uVar37 = ~(ulonglong)plVar39;
                    for (uVar27 = (ulonglong)(uVar40 & 3); uVar27 != 0; uVar27 = uVar27 - 1) {
                      *(float *)(uVar7 + (longlong)plVar39 * 4) =
                           *(float *)(uVar36 + (longlong)plVar39 * 4) -
                           *(float *)(uVar6 + (longlong)plVar39 * 4);
                      plVar39 = (longlong *)((longlong)plVar39 + 1);
                    }
                    if (2 < uVar37 + (longlong)plVar35) {
                      do {
                        *(float *)(uVar7 + (longlong)plVar39 * 4) =
                             *(float *)(uVar36 + (longlong)plVar39 * 4) -
                             *(float *)(uVar6 + (longlong)plVar39 * 4);
                        *(float *)(uVar7 + 4 + (longlong)plVar39 * 4) =
                             *(float *)(uVar36 + 4 + (longlong)plVar39 * 4) -
                             *(float *)(uVar6 + 4 + (longlong)plVar39 * 4);
                        *(float *)(uVar7 + 8 + (longlong)plVar39 * 4) =
                             *(float *)(uVar36 + 8 + (longlong)plVar39 * 4) -
                             *(float *)(uVar6 + 8 + (longlong)plVar39 * 4);
                        *(float *)(uVar7 + 0xc + (longlong)plVar39 * 4) =
                             *(float *)(uVar36 + 0xc + (longlong)plVar39 * 4) -
                             *(float *)(uVar6 + 0xc + (longlong)plVar39 * 4);
                        plVar39 = (longlong *)((longlong)plVar39 + 4);
                      } while (plVar35 != plVar39);
                    }
                    uVar33 = uVar33 + 1;
                    local_140 = lVar25;
                  } while ((undefined *)uVar33 != local_f8);
                }
              }
              else {
                uVar33 = 0;
                do {
                  lVar38 = *(longlong *)(*(longlong *)(lVar25 + uVar33 * 8) + 0x10);
                  lVar32 = *(longlong *)(plVar34[uVar33] + 0x10);
                  lVar5 = *(longlong *)(*(longlong *)(lVar4 + uVar33 * 8) + 0x10);
                  uVar27 = 0;
                  if (2 < (longlong)plVar35 - 1U) {
                    do {
                      *(float *)(lVar5 + uVar27 * 4) =
                           *(float *)(lVar38 + uVar27 * 4) - *(float *)(lVar32 + uVar27 * 4);
                      *(float *)(lVar5 + 4 + uVar27 * 4) =
                           *(float *)(lVar38 + 4 + uVar27 * 4) - *(float *)(lVar32 + 4 + uVar27 * 4)
                      ;
                      *(float *)(lVar5 + 8 + uVar27 * 4) =
                           *(float *)(lVar38 + 8 + uVar27 * 4) - *(float *)(lVar32 + 8 + uVar27 * 4)
                      ;
                      *(float *)(lVar5 + 0xc + uVar27 * 4) =
                           *(float *)(lVar38 + 0xc + uVar27 * 4) -
                           *(float *)(lVar32 + 0xc + uVar27 * 4);
                      uVar27 = uVar27 + 4;
                    } while (((ulonglong)plVar35 & 0xfffffffffffffffc) != uVar27);
                  }
                  if ((ulonglong)(uVar40 & 3) != 0) {
                    uVar36 = 0;
                    do {
                      *(float *)(lVar5 + uVar27 * 4 + uVar36 * 4) =
                           *(float *)(lVar38 + uVar27 * 4 + uVar36 * 4) -
                           *(float *)(lVar32 + uVar27 * 4 + uVar36 * 4);
                      uVar36 = uVar36 + 1;
                    } while ((uVar40 & 3) != uVar36);
                  }
                  uVar33 = uVar33 + 1;
                } while ((undefined *)uVar33 != local_f8);
              }
            }
          }
          lVar25 = DAT_02703198;
          if (DAT_02703198 != 0) {
            FUN_00d50b00();
          }
          local_c8 = (longlong *)lVar25;
          (**(code **)(*local_100 + 0x390))();
          plVar35 = local_88;
          if ((((local_80 == '\0') && (local_88 != (longlong *)0x0)) &&
              (FUN_00d50b00(), local_80 != '\0')) && (local_88 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          local_d0 = plVar35;
          uVar42 = FUN_00ce71c0();
          plVar35 = local_188;
          local_170 = DAT_027031a0;
          if (DAT_027031a0 != 0) {
            uVar42 = FUN_00d50b00();
          }
          local_168 = '\x01';
          (**(code **)(*plVar35 + 0x400))(uVar42,&local_170);
          plVar35 = local_d0;
          (**(code **)(*local_198 + 0x368))();
          local_1a8 = plVar35;
          local_1a0 = (longlong)local_c8;
          uVar42 = FUN_002bd7b0(&local_1a0,&local_1a8,3);
          FUN_00d8cb40(uVar42,&local_88);
          lVar25 = local_98;
          if (local_90 == '\0') {
            if (((local_98 != 0) && (FUN_00d50b00(), local_90 != '\0')) && (local_98 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_90 = '\0';
          }
          local_88 = (longlong *)&DAT_025df260;
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          local_88 = (longlong *)&DAT_0253d630;
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
          local_88 = &DAT_024c5048;
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
          if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_190 != '\0') && (local_198 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_168 != '\0') && (local_170 != 0)) {
            FUN_00d50b20();
          }
          if ((local_180 != '\0') && (local_188 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          iVar23 = (int)local_d8;
          FUN_00c8e690();
          plVar35 = local_88;
          if ((((local_80 == '\0') && (local_88 != (longlong *)0x0)) &&
              (FUN_00d50b00(), local_80 != '\0')) && (local_88 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00c92170();
          lVar4 = plVar35[2];
          if (0 < (int)(uint)local_d8) {
            uVar33 = (ulonglong)((uint)local_f8 & 3);
            if ((longlong)local_f8 - 1U < 3) {
              uVar27 = 0;
            }
            else {
              uVar27 = 0;
              do {
                *(undefined8 *)(lVar4 + uVar27 * 8) =
                     *(undefined8 *)(*(longlong *)(*plVar29 + uVar27 * 8) + 0x10);
                *(undefined8 *)(lVar4 + 8 + uVar27 * 8) =
                     *(undefined8 *)(*(longlong *)(*plVar29 + 8 + uVar27 * 8) + 0x10);
                *(undefined8 *)(lVar4 + 0x10 + uVar27 * 8) =
                     *(undefined8 *)(*(longlong *)(*plVar29 + 0x10 + uVar27 * 8) + 0x10);
                *(undefined8 *)(lVar4 + 0x18 + uVar27 * 8) =
                     *(undefined8 *)(*(longlong *)(*plVar29 + 0x18 + uVar27 * 8) + 0x10);
                uVar27 = uVar27 + 4;
              } while (((uint)local_f8 & 0xfffffffc) != uVar27);
            }
            for (; uVar33 != 0; uVar33 = uVar33 - 1) {
              *(undefined8 *)(lVar4 + uVar27 * 8) =
                   *(undefined8 *)(*(longlong *)(*plVar29 + uVar27 * 8) + 0x10);
              uVar27 = uVar27 + 1;
            }
          }
          local_160 = lVar25;
          local_158 = '\0';
          local_150 = 0;
          local_148 = '\0';
          FUN_015b6740(SUB84(local_178,0),local_120,2 - (uint)(iVar23 == 1));
          plVar29 = local_c8;
          pcVar22 = local_e0;
          if ((local_148 != '\0') && (local_150 != 0)) {
            FUN_00d50b20();
          }
          if ((local_158 != '\0') && (local_160 != 0)) {
            FUN_00d50b20();
          }
          if (plVar35 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if (lVar25 != 0) {
            FUN_00d50b20();
          }
          if (local_d0 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if (plVar29 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if (pcVar22 != (code *)0x0) {
            FUN_00d50b20();
          }
          if (local_110 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
          if (local_108 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
        }
      }
      if ((char)local_bc == '\0' && local_100 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (local_e8 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (local_f0 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  if (local_a0 != 0) {
    FUN_00d50b20();
  }
  if (local_a8 != 0) {
    FUN_00d50b20();
  }
  if (local_118 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_00351c0b:
  FUN_00d50b20();
  return;
}




// ============================================================
// @0034ed60 — 3775 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0034eea7) */
/* WARNING: Removing unreachable block (ram,0x0034eeb3) */

void FUN_0034ed60(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  char *pcVar4;
  longlong local_258;
  char local_250;
  longlong local_248;
  char local_240;
  undefined8 *local_238;
  char local_230;
  longlong local_228;
  char local_220;
  longlong local_218;
  char local_210;
  longlong local_208;
  char local_200;
  undefined8 *local_1f8;
  char local_1f0;
  longlong local_1e8;
  char local_1e0;
  longlong local_1d8;
  char local_1d0;
  longlong local_1c8;
  char local_1c0;
  undefined8 *local_1b8;
  char local_1b0;
  longlong local_1a8;
  char local_1a0;
  longlong local_198;
  char local_190;
  longlong local_188;
  char local_180;
  undefined8 *local_178;
  char local_170;
  longlong local_168;
  char local_160;
  longlong local_158;
  char local_150;
  longlong local_148;
  char local_140;
  undefined8 *local_138;
  char local_130;
  longlong local_128;
  char local_120;
  longlong local_118;
  char local_110;
  longlong local_108;
  char local_100;
  undefined8 *local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  undefined8 *local_58;
  char local_50;
  undefined7 uStack_4f;
  char local_48;
  longlong local_40;
  char local_38 [8];
  
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_02576110;
  *(undefined8 *)((longlong)puVar3 + 0xc) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x14) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x1a) = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  (*DAT_02576128)();
  local_58 = puVar3;
  FUN_00d48ac0();
  lVar2 = DAT_02703118;
  if (DAT_02703118 != 0) {
    FUN_00d50b00();
  }
  FUN_018b4880((int)DAT_0238fee8,0,DAT_023b2c70);
  lVar1 = CONCAT71(uStack_4f,local_50);
  if (local_48 == '\0') {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_38[0] = '\0';
  local_40 = lVar1;
  FUN_00d21140();
  if ((local_38[0] != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = DAT_02703120;
  if (DAT_02703120 != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_02703128;
  if (DAT_02703128 != 0) {
    FUN_00d50b00();
  }
  local_258 = lVar1;
  local_250 = '\x01';
  FUN_00d23340();
  pcVar4 = &local_50;
  if (local_38[0] != '\0') {
    pcVar4 = local_38;
  }
  local_50 = local_38[0];
  *pcVar4 = '\0';
  if ((local_38[0] != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  local_c0 = 0;
  if ((local_50 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  local_c8 = local_40;
  local_c0 = '\x01';
  FUN_018ac3f0(&local_c8,&local_258);
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_250 != '\0') && (local_258 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = DAT_02703130;
  if (DAT_02703130 != 0) {
    FUN_00d50b00();
  }
  local_248 = lVar2;
  local_240 = '\x01';
  local_238 = local_58;
  local_230 = '\0';
  FUN_018b4880((int)DAT_0238fee8,0,DAT_023b2c70);
  lVar2 = CONCAT71(uStack_4f,local_50);
  if (local_48 == '\0') {
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_38[0] = '\0';
  local_40 = lVar2;
  FUN_00d21140();
  if ((local_38[0] != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
    FUN_00d50b20();
  }
  if ((local_230 != '\0') && (local_238 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_240 != '\0') && (local_248 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_02703120;
  if (DAT_02703120 != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_02703138;
  local_228 = lVar2;
  local_220 = '\x01';
  if (DAT_02703138 != 0) {
    FUN_00d50b00();
  }
  local_218 = lVar1;
  local_210 = '\x01';
  FUN_00d23340();
  lVar2 = local_40;
  pcVar4 = &local_50;
  if (local_38[0] != '\0') {
    pcVar4 = local_38;
  }
  local_50 = local_38[0];
  *pcVar4 = '\0';
  if ((local_38[0] != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  local_b0 = 0;
  if ((local_50 == '\0') && (lVar2 != 0)) {
    FUN_00d50b00();
  }
  local_b8 = lVar2;
  local_b0 = '\x01';
  FUN_018ac3f0(&local_b8,&local_218);
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_210 != '\0') && (local_218 != 0)) {
    FUN_00d50b20();
  }
  if ((local_220 != '\0') && (local_228 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_02703140;
  if (DAT_02703140 != 0) {
    FUN_00d50b00();
  }
  local_208 = lVar2;
  local_200 = '\x01';
  local_1f8 = local_58;
  local_1f0 = '\0';
  FUN_018b4880((int)DAT_0238fee8,0,DAT_023b2c70);
  lVar2 = CONCAT71(uStack_4f,local_50);
  if (local_48 == '\0') {
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_38[0] = '\0';
  local_40 = lVar2;
  FUN_00d21140();
  if ((local_38[0] != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
    FUN_00d50b20();
  }
  if ((local_1f0 != '\0') && (local_1f8 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_200 != '\0') && (local_208 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_02703120;
  if (DAT_02703120 != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_02703148;
  local_1e8 = lVar2;
  local_1e0 = '\x01';
  if (DAT_02703148 != 0) {
    FUN_00d50b00();
  }
  local_1d8 = lVar1;
  local_1d0 = '\x01';
  FUN_00d23340();
  lVar2 = local_40;
  pcVar4 = &local_50;
  if (local_38[0] != '\0') {
    pcVar4 = local_38;
  }
  local_50 = local_38[0];
  *pcVar4 = '\0';
  if ((local_38[0] != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  local_a0 = 0;
  if ((local_50 == '\0') && (lVar2 != 0)) {
    FUN_00d50b00();
  }
  local_a8 = lVar2;
  local_a0 = '\x01';
  FUN_018ac3f0(&local_a8,&local_1d8);
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1d0 != '\0') && (local_1d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1e0 != '\0') && (local_1e8 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_02703150;
  if (DAT_02703150 != 0) {
    FUN_00d50b00();
  }
  local_1c8 = lVar2;
  local_1c0 = '\x01';
  local_1b8 = local_58;
  local_1b0 = '\0';
  FUN_018b4880((int)DAT_0238fee8,0,DAT_023b2c70);
  lVar2 = CONCAT71(uStack_4f,local_50);
  if (local_48 == '\0') {
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_38[0] = '\0';
  local_40 = lVar2;
  FUN_00d21140();
  if ((local_38[0] != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
    FUN_00d50b20();
  }
  if ((local_1b0 != '\0') && (local_1b8 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_1c0 != '\0') && (local_1c8 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_02703120;
  if (DAT_02703120 != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_02703158;
  local_1a8 = lVar2;
  local_1a0 = '\x01';
  if (DAT_02703158 != 0) {
    FUN_00d50b00();
  }
  local_198 = lVar1;
  local_190 = '\x01';
  FUN_00d23340();
  lVar2 = local_40;
  pcVar4 = &local_50;
  if (local_38[0] != '\0') {
    pcVar4 = local_38;
  }
  local_50 = local_38[0];
  *pcVar4 = '\0';
  if ((local_38[0] != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  local_90 = 0;
  if ((local_50 == '\0') && (lVar2 != 0)) {
    FUN_00d50b00();
  }
  local_98 = lVar2;
  local_90 = '\x01';
  FUN_018ac3f0(&local_98,&local_198);
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_190 != '\0') && (local_198 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1a0 != '\0') && (local_1a8 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_02703160;
  if (DAT_02703160 != 0) {
    FUN_00d50b00();
  }
  local_188 = lVar2;
  local_180 = '\x01';
  local_178 = local_58;
  local_170 = '\0';
  FUN_018b4880((int)DAT_0238fee8,0,DAT_023b2c70);
  lVar2 = CONCAT71(uStack_4f,local_50);
  if (local_48 == '\0') {
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_38[0] = '\0';
  local_40 = lVar2;
  FUN_00d21140();
  if ((local_38[0] != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
    FUN_00d50b20();
  }
  if ((local_170 != '\0') && (local_178 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_180 != '\0') && (local_188 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_02703120;
  if (DAT_02703120 != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_02703168;
  local_168 = lVar2;
  local_160 = '\x01';
  if (DAT_02703168 != 0) {
    FUN_00d50b00();
  }
  local_158 = lVar1;
  local_150 = '\x01';
  FUN_00d23340();
  lVar2 = local_40;
  pcVar4 = &local_50;
  if (local_38[0] != '\0') {
    pcVar4 = local_38;
  }
  local_50 = local_38[0];
  *pcVar4 = '\0';
  if ((local_38[0] != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  local_80 = 0;
  if ((local_50 == '\0') && (lVar2 != 0)) {
    FUN_00d50b00();
  }
  local_88 = lVar2;
  local_80 = '\x01';
  FUN_018ac3f0(&local_88,&local_158);
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_150 != '\0') && (local_158 != 0)) {
    FUN_00d50b20();
  }
  if ((local_160 != '\0') && (local_168 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_02703170;
  if (DAT_02703170 != 0) {
    FUN_00d50b00();
  }
  local_148 = lVar2;
  local_140 = '\x01';
  local_138 = local_58;
  local_130 = '\0';
  FUN_018b4880((int)DAT_0238fee8,0,DAT_023b2c70);
  lVar2 = CONCAT71(uStack_4f,local_50);
  if (local_48 == '\0') {
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_38[0] = '\0';
  local_40 = lVar2;
  FUN_00d21140();
  if ((local_38[0] != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
    FUN_00d50b20();
  }
  if ((local_130 != '\0') && (local_138 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_140 != '\0') && (local_148 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_02703120;
  if (DAT_02703120 != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_02703178;
  local_128 = lVar2;
  local_120 = '\x01';
  if (DAT_02703178 != 0) {
    FUN_00d50b00();
  }
  local_118 = lVar1;
  local_110 = '\x01';
  FUN_00d23340();
  lVar2 = local_40;
  pcVar4 = &local_50;
  if (local_38[0] != '\0') {
    pcVar4 = local_38;
  }
  local_50 = local_38[0];
  *pcVar4 = '\0';
  if ((local_38[0] != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  local_70 = 0;
  if ((local_50 == '\0') && (lVar2 != 0)) {
    FUN_00d50b00();
  }
  local_78 = lVar2;
  local_70 = '\x01';
  FUN_018ac3f0(&local_78,&local_118);
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_02703180;
  if (DAT_02703180 != 0) {
    FUN_00d50b00();
  }
  local_108 = lVar2;
  local_100 = '\x01';
  local_f8 = local_58;
  local_f0 = '\0';
  FUN_018b4740(0,&local_f8);
  lVar2 = CONCAT71(uStack_4f,local_50);
  if (local_48 == '\0') {
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_38[0] = '\0';
  local_40 = lVar2;
  FUN_00d21140();
  if ((local_38[0] != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
    FUN_00d50b20();
  }
  if ((local_f0 != '\0') && (local_f8 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_02703188;
  if (DAT_02703188 != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_02703190;
  local_e8 = lVar2;
  local_e0 = '\x01';
  if (DAT_02703190 != 0) {
    FUN_00d50b00();
  }
  local_d8 = lVar1;
  local_d0 = '\x01';
  FUN_00d23340();
  lVar2 = local_40;
  pcVar4 = local_38;
  if (local_38[0] == '\0') {
    pcVar4 = &local_50;
  }
  local_50 = local_38[0];
  *pcVar4 = '\0';
  if ((local_38[0] != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  local_60 = 0;
  if ((local_50 == '\0') && (lVar2 != 0)) {
    FUN_00d50b00();
  }
  local_68 = lVar2;
  local_60 = '\x01';
  FUN_018ac3f0(&local_68,&local_d8);
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}




// ============================================================
// @00253c20 — 3576 bytes
// str: ""MUDetectionSeparationTool""
// ============================================================

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00253c20(void)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  longlong **pplVar6;
  longlong *plVar7;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong *plVar8;
  longlong *plVar9;
  undefined4 uVar10;
  longlong local_98;
  char local_90;
  longlong *local_78;
  longlong *local_70;
  byte local_61;
  longlong *local_60;
  char local_58;
  byte local_4a;
  byte local_49;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (*(longlong **)(unaff_RDI + 0x90) != (longlong *)0x0) {
    (**(code **)(&UNK_00001550 + **(longlong **)(unaff_RDI + 0x90)))();
    plVar8 = local_48;
    local_60 = (longlong *)CONCAT71(local_60._1_7_,local_40[0]);
    pplVar6 = (longlong **)local_40;
    if (local_40[0] == '\0') {
      pplVar6 = &local_60;
    }
    *(undefined1 *)pplVar6 = 0;
    if ((local_40[0] != '\0') && (plVar8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar9 = (longlong *)(unaff_RDI + 0x90);
    local_70 = plVar9;
    if (plVar8 == (longlong *)0x0) {
      plVar8 = (longlong *)0x0;
      if (*plVar9 != 0) goto LAB_00253cb5;
    }
    else {
      if ((char)local_60 == '\0') {
LAB_00253cb5:
        FUN_00d50b00();
      }
      FUN_00d50b20();
      plVar8 = (longlong *)*plVar9;
      (**(code **)(&UNK_00001550 + *plVar8))();
      plVar7 = local_48;
      local_38[0] = local_40[0];
      pplVar6 = (longlong **)local_38;
      if (local_40[0] != '\0') {
        pplVar6 = (longlong **)local_40;
      }
      *(char *)pplVar6 = '\0';
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar7 == (longlong *)0x0) {
        plVar7 = (longlong *)*plVar9;
LAB_00253d19:
        FUN_00d50b00();
      }
      else if (local_38[0] == '\0') goto LAB_00253d19;
      (**(code **)(*plVar7 + 0xed0))();
      plVar9 = local_60;
      local_78 = local_60;
      if (local_58 == '\0') {
        if (local_60 == (longlong *)0x0) {
          local_78 = (longlong *)0x0;
          plVar9 = (longlong *)0x0;
        }
        else {
          FUN_00d50b00();
          if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        local_58 = '\0';
      }
      if (plVar8 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      FUN_002760e0();
      plVar8 = DAT_02802688;
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x360))();
        cVar2 = FUN_00e85ea0();
        plVar8 = DAT_02802688;
        if (cVar2 != '\0') {
          plVar8 = local_78;
        }
      }
      if (plVar8 == (longlong *)0x0) {
        FUN_00276300();
        plVar8 = DAT_02802688;
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 0x360))();
          cVar2 = FUN_00e85ea0();
          plVar8 = DAT_02802688;
          if (cVar2 != '\0') {
            plVar8 = local_78;
          }
        }
        if (plVar8 == (longlong *)0x0) {
          if ((DAT_026f9dc8 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
            _DAT_026f9d18 = FUN_00276570();
            _DAT_026f9d00 = "MUDetectionSeparationTool";
            _DAT_026f9d08 = 0x40;
            _DAT_026f9d10 = FUN_00276520;
            _DAT_026f9d20 = 0;
            uRam00000000026f9d28 = 0;
            _DAT_026f9d30 = 0;
            _DAT_026f9da8 = 0;
            uRam00000000026f9db0 = 0;
            _DAT_026f9db8 = 0;
            DAT_026f9dba = 1;
            _DAT_026f9d38 = 0;
            uRam00000000026f9d40 = 0;
            _DAT_026f9d48 = 0;
            uRam00000000026f9d50 = 0;
            _DAT_026f9d58 = 0;
            uRam00000000026f9d60 = 0;
            _DAT_026f9d68 = 0;
            uRam00000000026f9d70 = 0;
            _DAT_026f9d78 = 0;
            uRam00000000026f9d80 = 0;
            _DAT_026f9d88 = 0;
            uRam00000000026f9d90 = 0;
            _DAT_026f9d98 = 0;
            uRam00000000026f9da0 = 0;
            DAT_026f9dc3 = 0;
            _DAT_026f9dbb = 0;
            ___cxa_guard_release();
          }
          lVar1 = DAT_026f6e18;
          plVar8 = DAT_02802688;
          if (plVar9 != (longlong *)0x0) {
            (**(code **)(*plVar9 + 0x360))();
            cVar2 = FUN_00e85ea0();
            lVar1 = DAT_026f6e18;
            plVar8 = DAT_02802688;
            if (cVar2 != '\0') {
              plVar8 = local_78;
            }
          }
          DAT_026f6e18 = lVar1;
          if (plVar8 == (longlong *)0x0) {
            if (lVar1 != 0) {
              FUN_00d50b00();
            }
            FUN_00234140();
            if (lVar1 != 0) {
              FUN_00d50b20();
            }
          }
        }
      }
      plVar8 = (longlong *)*local_70;
      if (plVar8 == (longlong *)0x0) {
LAB_00253e6f:
        plVar7 = (longlong *)0x0;
      }
      else {
        (**(code **)(&UNK_00001550 + *plVar8))();
        plVar7 = local_48;
        pplVar6 = &local_60;
        if (local_40[0] != '\0') {
          pplVar6 = (longlong **)local_40;
        }
        local_60 = (longlong *)CONCAT71(local_60._1_7_,local_40[0]);
        *(undefined1 *)pplVar6 = 0;
        if ((local_40[0] != '\0') && (plVar7 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar7 == (longlong *)0x0) {
          plVar7 = (longlong *)*local_70;
          if (plVar7 == (longlong *)0x0) goto LAB_00253e6f;
        }
        else if ((char)local_60 != '\0') goto LAB_00253e71;
        FUN_00d50b00();
      }
LAB_00253e71:
      FUN_019f77f0();
      plVar9 = local_70;
      if ((plVar8 != (longlong *)0x0) && (plVar7 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_78 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      plVar8 = (longlong *)*plVar9;
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(&UNK_00001550 + *plVar8))();
      plVar8 = local_48;
      pplVar6 = &local_60;
      if (local_40[0] != '\0') {
        pplVar6 = (longlong **)local_40;
      }
      local_60 = (longlong *)CONCAT71(local_60._1_7_,local_40[0]);
      *(undefined1 *)pplVar6 = 0;
      if ((local_40[0] != '\0') && (plVar8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar8 == (longlong *)0x0) {
        if (*plVar9 != 0) goto LAB_00253f07;
      }
      else {
        if ((char)local_60 == '\0') {
LAB_00253f07:
          FUN_00d50b00();
        }
        FUN_00d50b20();
        lVar1 = DAT_026f6e28;
        if (DAT_026f6e28 != 0) {
          FUN_00d50b00();
        }
        FUN_00234140();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        lVar1 = DAT_026f6e00;
        if (DAT_026f6e00 != 0) {
          FUN_00d50b00();
        }
        bVar3 = FUN_00234140();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        lVar1 = DAT_026f6e08;
        if (DAT_026f6e08 != 0) {
          FUN_00d50b00();
        }
        bVar4 = FUN_00234140();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        plVar9 = (longlong *)*plVar9;
        (**(code **)(&UNK_00001550 + *plVar9))();
        plVar8 = local_48;
        local_38[0] = local_40[0];
        pplVar6 = (longlong **)local_38;
        if (local_40[0] != '\0') {
          pplVar6 = (longlong **)local_40;
        }
        *(char *)pplVar6 = '\0';
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar8 == (longlong *)0x0) {
          plVar8 = (longlong *)*local_70;
LAB_00254031:
          FUN_00d50b00();
        }
        else if (local_38[0] == '\0') goto LAB_00254031;
        local_61 = bVar3;
        (**(code **)(*plVar8 + 0xed0))();
        plVar8 = local_60;
        if (local_58 == '\0') {
          if (local_60 == (longlong *)0x0) {
            local_78 = (longlong *)0x0;
            plVar8 = (longlong *)0x0;
          }
          else {
            FUN_00d50b00();
            local_78 = plVar8;
            if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        else {
          local_78 = local_60;
          local_58 = '\0';
        }
        local_49 = bVar4;
        if (plVar9 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        FUN_00276790();
        if (plVar8 == (longlong *)0x0) {
          local_4a = local_61;
          if (DAT_02802688 == (longlong *)0x0) goto LAB_002541e0;
LAB_002540f5:
          plVar9 = (longlong *)*local_70;
joined_r0x002542ed:
          if (plVar9 == (longlong *)0x0) goto LAB_002542f3;
LAB_00254105:
          (**(code **)(&UNK_00001550 + *plVar9))();
          plVar7 = local_48;
          local_60 = (longlong *)CONCAT71(local_60._1_7_,local_40[0]);
          pplVar6 = (longlong **)local_40;
          if (local_40[0] == '\0') {
            pplVar6 = &local_60;
          }
          *(undefined1 *)pplVar6 = 0;
          if ((local_40[0] != '\0') && (plVar7 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar7 == (longlong *)0x0) {
            plVar7 = (longlong *)*local_70;
            if (plVar7 == (longlong *)0x0) goto LAB_002542f3;
LAB_00254252:
            FUN_00d50b00();
          }
          else if ((char)local_60 == '\0') goto LAB_00254252;
        }
        else {
          (**(code **)(*plVar8 + 0x360))();
          cVar2 = FUN_00e85ea0();
          if (cVar2 == '\0') {
            pplVar6 = &DAT_02802688;
          }
          else {
            pplVar6 = &local_78;
          }
          plVar9 = *pplVar6;
          (**(code **)(*plVar8 + 0x3d0))();
          (**(code **)(*plVar8 + 0x3b8))();
          local_4a = (**(code **)(*plVar8 + 0x3c8))();
          bVar3 = (**(code **)(*plVar8 + 0x3b0))();
          bVar4 = (**(code **)(*plVar8 + 0x3a8))();
          local_4a = local_4a | local_61;
          local_49 = bVar4 | ~bVar3 & local_49;
          if (plVar9 != (longlong *)0x0) goto LAB_002540f5;
LAB_002541e0:
          lVar1 = DAT_026f6e20;
          if (DAT_026f6e20 != 0) {
            FUN_00d50b00();
          }
          FUN_00234140();
          if (lVar1 == 0) {
            plVar9 = (longlong *)*local_70;
            goto joined_r0x002542ed;
          }
          FUN_00d50b20();
          plVar9 = (longlong *)*local_70;
          if (plVar9 != (longlong *)0x0) goto LAB_00254105;
LAB_002542f3:
          plVar7 = (longlong *)0x0;
        }
        FUN_019f7820();
        if ((plVar9 != (longlong *)0x0) && (plVar7 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        plVar9 = (longlong *)*local_70;
        if (plVar9 == (longlong *)0x0) {
LAB_00254381:
          plVar7 = (longlong *)0x0;
        }
        else {
          (**(code **)(&UNK_00001550 + *plVar9))();
          plVar7 = local_48;
          local_60 = (longlong *)CONCAT71(local_60._1_7_,local_40[0]);
          pplVar6 = (longlong **)local_40;
          if (local_40[0] == '\0') {
            pplVar6 = &local_60;
          }
          *(undefined1 *)pplVar6 = 0;
          if ((local_40[0] != '\0') && (plVar7 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar7 == (longlong *)0x0) {
            plVar7 = (longlong *)*local_70;
            if (plVar7 == (longlong *)0x0) goto LAB_00254381;
          }
          else if ((char)local_60 != '\0') goto LAB_00254383;
          FUN_00d50b00();
        }
LAB_00254383:
        FUN_019f7850();
        if ((plVar9 != (longlong *)0x0) && (plVar7 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        plVar9 = (longlong *)*local_70;
        (**(code **)(&UNK_00001550 + *plVar9))();
        plVar7 = local_48;
        local_60 = (longlong *)CONCAT71(local_60._1_7_,local_40[0]);
        pplVar6 = (longlong **)local_40;
        if (local_40[0] == '\0') {
          pplVar6 = &local_60;
        }
        *(undefined1 *)pplVar6 = 0;
        if ((local_40[0] != '\0') && (plVar7 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar7 == (longlong *)0x0) {
          plVar7 = (longlong *)*local_70;
LAB_002543fb:
          FUN_00d50b00();
        }
        else if ((char)local_60 == '\0') goto LAB_002543fb;
        (**(code **)((longlong)&dylib_command_00001288.dylib.name.offset + *plVar7))();
        plVar7 = local_70;
        if (plVar9 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        plVar7 = (longlong *)*plVar7;
        (**(code **)(&UNK_00001550 + *plVar7))();
        plVar9 = local_48;
        local_60 = (longlong *)CONCAT71(local_60._1_7_,local_40[0]);
        pplVar6 = (longlong **)local_40;
        if (local_40[0] == '\0') {
          pplVar6 = &local_60;
        }
        *(undefined1 *)pplVar6 = 0;
        if ((local_40[0] != '\0') && (plVar9 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar9 == (longlong *)0x0) {
          plVar9 = (longlong *)*local_70;
LAB_00254482:
          FUN_00d50b00();
        }
        else if ((char)local_60 == '\0') goto LAB_00254482;
        (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                    *plVar9))();
        if (plVar7 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        plVar9 = (longlong *)*local_70;
        (**(code **)(&UNK_00001550 + *plVar9))();
        plVar7 = local_48;
        pplVar6 = (longlong **)local_40;
        if (local_40[0] == '\0') {
          pplVar6 = &local_60;
        }
        local_60 = (longlong *)CONCAT71(local_60._1_7_,local_40[0]);
        *(undefined1 *)pplVar6 = 0;
        if ((local_40[0] != '\0') && (plVar7 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar7 == (longlong *)0x0) {
          plVar7 = (longlong *)*local_70;
LAB_00254501:
          FUN_00d50b00();
        }
        else if ((char)local_60 == '\0') goto LAB_00254501;
        (**(code **)("/System/Library/Frameworks/CoreText.framework/Versions/A/CoreText" +
                    *plVar7 + 0x20))();
        if (plVar9 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if (plVar8 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
    }
  }
  (**(code **)(&UNK_00001550 + **(longlong **)(unaff_RDI + 0x90)))();
  plVar8 = local_48;
  if (local_40[0] == '\0') {
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00254580;
    }
  }
  else if (local_48 != (longlong *)0x0) {
LAB_00254580:
    (**(code **)(*plVar8 + 0xed0))();
    plVar9 = local_48;
    if (local_40[0] == '\0') {
      if (local_48 == (longlong *)0x0) {
        local_60 = (longlong *)0x0;
        plVar9 = (longlong *)0x0;
      }
      else {
        FUN_00d50b00();
        local_60 = plVar9;
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_60 = local_48;
    }
    FUN_002769b0();
    plVar7 = DAT_02802688;
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x360))();
      cVar2 = FUN_00e85ea0();
      plVar7 = DAT_02802688;
      if (cVar2 != '\0') {
        plVar7 = local_60;
      }
    }
    if ((plVar7 == (longlong *)0x0) && (FUN_00276bd0(), plVar9 != (longlong *)0x0)) {
      (**(code **)(*plVar9 + 0x360))();
      FUN_00e85ea0();
    }
    (**(code **)(&UNK_000017e0 + *plVar8))();
    if (plVar9 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    return;
  }
  if (*(longlong *)(unaff_RDI + 0xd8) == 0) {
    return;
  }
  FUN_0062abf0();
  plVar8 = local_48;
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar8 == (longlong *)0x0) {
    return;
  }
  FUN_0062abf0();
  if (local_48 == (longlong *)0x0) {
    return;
  }
  if (((local_40[0] == '\0') && (FUN_00d50b00(), local_40[0] != '\0')) &&
     (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  cVar2 = '\x01';
  if (*unaff_RSI != 0) {
    FUN_00d3ed20();
    plVar8 = local_48;
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar8 != (longlong *)0x0) {
      uVar10 = FUN_00d3ed20();
      local_98 = DAT_026f6f98;
      if (DAT_026f6f98 != 0) {
        uVar10 = FUN_00d50b00();
      }
      local_90 = '\x01';
      pplVar6 = &local_48;
      FUN_000175c0(uVar10,&local_98);
      plVar8 = local_48;
      FUN_00053ac0();
      if (plVar8 == (longlong *)0x0) {
LAB_00254717:
        pplVar6 = &DAT_02802688;
      }
      else {
        (**(code **)(*plVar8 + 0x360))();
        cVar2 = FUN_00e85ea0();
        if (cVar2 == '\0') goto LAB_00254717;
      }
      plVar8 = *pplVar6;
      if (*(char *)(pplVar6 + 1) == '\0') {
        if (plVar8 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(pplVar6 + 1) = 0;
      }
      cVar2 = '\x01';
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar8 != (longlong *)0x0) {
        cVar2 = FUN_00d45ad0();
        FUN_00d50b20();
      }
    }
  }
  FUN_00b34cb0();
  plVar8 = local_48;
  if (local_40[0] == '\0') {
    if (local_48 == (longlong *)0x0) goto LAB_00254941;
    (**(code **)(*local_48 + 0x10))();
    FUN_00d50b00();
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      (**(code **)(*local_48 + 0x10))();
      FUN_00d50b20();
    }
  }
  if ((plVar8 != (longlong *)0x0) && (cVar2 == '\x01')) {
    (**(code **)(*plVar8 + 0x50))();
  }
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x10))();
    FUN_00d50b20();
  }
LAB_00254941:
  FUN_00d50b20();
  return;
}




// ============================================================
// @0034d310 — 1091 bytes
// ============================================================

void FUN_0034d310(void)

{
  undefined8 *unaff_RDI;
  
  *unaff_RDI = &DAT_02626f88;
  unaff_RDI[2] = &DAT_02628600;
  unaff_RDI[0x28] = &DAT_02628640;
  unaff_RDI[0x29] = &DAT_02628690;
  unaff_RDI[0x2a] = &DAT_026286c0;
  if (unaff_RDI[0xa6] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0xa5] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x9e] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x9d] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x99] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x97] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x95] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x94] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x93] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x92] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x91] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x90] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x8f] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x8e] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x8d] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x8c] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x8b] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x89] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x87] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x86] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x84] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x83] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x82] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x81] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x80] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x7f] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x7e] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x7c] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x7a] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x77] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x76] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x75] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x73] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x71] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x70] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x6f] != 0) {
    FUN_00d50b20();
  }
  if ((longlong *)unaff_RDI[0x69] != (longlong *)0x0) {
    (**(code **)(*(longlong *)unaff_RDI[0x69] + 0x10))();
    FUN_00d50b20();
  }
  if (unaff_RDI[0x67] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x66] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[99] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x59] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x58] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x4f] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x4d] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x4c] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x4b] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x4a] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x49] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x48] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x47] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x46] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x45] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x42] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x41] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x3e] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x3d] != 0) {
    FUN_00d50b20();
  }
  *unaff_RDI = &DAT_0262d9a0;
  unaff_RDI[2] = &DAT_0262e310;
  if (unaff_RDI[0x27] != 0) {
    FUN_00d50b20();
  }
  FUN_0006d770();
  return;
}




// ============================================================
// @0034b970 — 1030 bytes
// str: ""MUDetectionSeparationTool""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0034bc6e) */
/* WARNING: Removing unreachable block (ram,0x0034bc77) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_0034b970(code *param_1,char param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  pthread_key_t pVar6;
  char *pcVar7;
  ulonglong uVar8;
  longlong *unaff_RDI;
  longlong **pplVar9;
  bool bVar10;
  longlong *local_58;
  char local_50 [8];
  longlong *local_48;
  char local_40;
  char local_38 [8];
  
  pplVar9 = &local_58;
  (**(code **)(*unaff_RDI + 0xed0))();
  plVar1 = local_58;
  FUN_00276bd0();
  if (plVar1 == (longlong *)0x0) {
LAB_0034b9c6:
    pplVar9 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_0034b9c6;
  }
  if (*pplVar9 == (longlong *)0x0) {
    pplVar9 = &local_48;
    (**(code **)(*unaff_RDI + 0xed0))();
    plVar1 = local_48;
    if ((DAT_026f9dc8 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
      _DAT_026f9d18 = FUN_00276570();
      _DAT_026f9d00 = "MUDetectionSeparationTool";
      _DAT_026f9d08 = 0x40;
      param_1 = FUN_00276520;
      _DAT_026f9d10 = FUN_00276520;
      _DAT_026f9d20 = 0;
      uRam00000000026f9d28 = 0;
      _DAT_026f9d30 = 0;
      _DAT_026f9da8 = 0;
      uRam00000000026f9db0 = 0;
      _DAT_026f9db8 = 0;
      DAT_026f9dba = 1;
      _DAT_026f9d38 = 0;
      uRam00000000026f9d40 = 0;
      _DAT_026f9d48 = 0;
      uRam00000000026f9d50 = 0;
      _DAT_026f9d58 = 0;
      uRam00000000026f9d60 = 0;
      _DAT_026f9d68 = 0;
      uRam00000000026f9d70 = 0;
      _DAT_026f9d78 = 0;
      uRam00000000026f9d80 = 0;
      _DAT_026f9d88 = 0;
      uRam00000000026f9d90 = 0;
      _DAT_026f9d98 = 0;
      uRam00000000026f9da0 = 0;
      DAT_026f9dc3 = 0;
      _DAT_026f9dbb = 0;
      ___cxa_guard_release();
    }
    if (plVar1 == (longlong *)0x0) {
LAB_0034ba88:
      pplVar9 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_0034ba88;
    }
    bVar10 = *pplVar9 == (longlong *)0x0;
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    bVar10 = false;
  }
  if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar10) || (unaff_RDI[0xa7] == 0)) {
    uVar8 = 0;
    goto LAB_0034bc9f;
  }
  FUN_00d50b00();
  (**(code **)(*unaff_RDI + 0xe20))();
  plVar1 = local_48;
  if (local_40 == '\0') {
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  FUN_00243390();
  plVar2 = local_58;
  if (local_50[0] == '\0') {
    if (((local_58 != (longlong *)0x0) && (FUN_00d50b00(), local_50[0] != '\0')) &&
       (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_50[0] = '\0';
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (*(int *)((longlong)plVar2 + 0xc) == 1) {
    FUN_00d23310();
    pVar6 = (pthread_key_t)CONCAT71((int7)((ulonglong)param_1 >> 8),local_50[0]);
    pcVar7 = local_38;
    if (local_50[0] != '\0') {
      pcVar7 = local_50;
    }
    local_38[0] = local_50[0];
    *pcVar7 = '\0';
    if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific(pVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125e7c0();
    plVar1 = local_48;
    if (local_40 == '\0') {
      if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40 != '\0')) &&
         (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40 = '\0';
    }
    if ((local_38[0] != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((plVar1 != (longlong *)0x0) && (param_2 != '\0')) {
      pvVar5 = _pthread_getspecific(pVar6);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01335090();
    }
    if (plVar1 == (longlong *)0x0) goto LAB_0034bc8d;
    uVar8 = CONCAT71((int7)((ulonglong)local_58 >> 8),1);
    FUN_00d50b20();
  }
  else {
LAB_0034bc8d:
    uVar8 = 0;
  }
  FUN_00d50b20();
  FUN_00d50b20();
LAB_0034bc9f:
  return uVar8 & 0xffffffff;
}




// ============================================================
// @0034b360 — 1030 bytes
// str: ""MUDetectionSeparationTool""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0034b65e) */
/* WARNING: Removing unreachable block (ram,0x0034b667) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_0034b360(code *param_1,char param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  pthread_key_t pVar6;
  char *pcVar7;
  ulonglong uVar8;
  longlong *unaff_RDI;
  longlong **pplVar9;
  bool bVar10;
  longlong *local_58;
  char local_50 [8];
  longlong *local_48;
  char local_40;
  char local_38 [8];
  
  pplVar9 = &local_58;
  (**(code **)(*unaff_RDI + 0xed0))();
  plVar1 = local_58;
  FUN_00276bd0();
  if (plVar1 == (longlong *)0x0) {
LAB_0034b3b6:
    pplVar9 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_0034b3b6;
  }
  if (*pplVar9 == (longlong *)0x0) {
    pplVar9 = &local_48;
    (**(code **)(*unaff_RDI + 0xed0))();
    plVar1 = local_48;
    if ((DAT_026f9dc8 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
      _DAT_026f9d18 = FUN_00276570();
      _DAT_026f9d00 = "MUDetectionSeparationTool";
      _DAT_026f9d08 = 0x40;
      param_1 = FUN_00276520;
      _DAT_026f9d10 = FUN_00276520;
      _DAT_026f9d20 = 0;
      uRam00000000026f9d28 = 0;
      _DAT_026f9d30 = 0;
      _DAT_026f9da8 = 0;
      uRam00000000026f9db0 = 0;
      _DAT_026f9db8 = 0;
      DAT_026f9dba = 1;
      _DAT_026f9d38 = 0;
      uRam00000000026f9d40 = 0;
      _DAT_026f9d48 = 0;
      uRam00000000026f9d50 = 0;
      _DAT_026f9d58 = 0;
      uRam00000000026f9d60 = 0;
      _DAT_026f9d68 = 0;
      uRam00000000026f9d70 = 0;
      _DAT_026f9d78 = 0;
      uRam00000000026f9d80 = 0;
      _DAT_026f9d88 = 0;
      uRam00000000026f9d90 = 0;
      _DAT_026f9d98 = 0;
      uRam00000000026f9da0 = 0;
      DAT_026f9dc3 = 0;
      _DAT_026f9dbb = 0;
      ___cxa_guard_release();
    }
    if (plVar1 == (longlong *)0x0) {
LAB_0034b478:
      pplVar9 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_0034b478;
    }
    bVar10 = *pplVar9 == (longlong *)0x0;
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    bVar10 = false;
  }
  if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar10) || (unaff_RDI[0xa7] == 0)) {
    uVar8 = 0;
    goto LAB_0034b68f;
  }
  FUN_00d50b00();
  (**(code **)(*unaff_RDI + 0xe20))();
  plVar1 = local_48;
  if (local_40 == '\0') {
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  FUN_00243390();
  plVar2 = local_58;
  if (local_50[0] == '\0') {
    if (((local_58 != (longlong *)0x0) && (FUN_00d50b00(), local_50[0] != '\0')) &&
       (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_50[0] = '\0';
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (*(int *)((longlong)plVar2 + 0xc) == 1) {
    FUN_00d23310();
    pVar6 = (pthread_key_t)CONCAT71((int7)((ulonglong)param_1 >> 8),local_50[0]);
    pcVar7 = local_38;
    if (local_50[0] != '\0') {
      pcVar7 = local_50;
    }
    local_38[0] = local_50[0];
    *pcVar7 = '\0';
    if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific(pVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125e7c0();
    plVar1 = local_48;
    if (local_40 == '\0') {
      if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40 != '\0')) &&
         (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40 = '\0';
    }
    if ((local_38[0] != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((plVar1 != (longlong *)0x0) && (param_2 != '\0')) {
      pvVar5 = _pthread_getspecific(pVar6);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01335090();
    }
    if (plVar1 == (longlong *)0x0) goto LAB_0034b67d;
    uVar8 = CONCAT71((int7)((ulonglong)local_58 >> 8),1);
    FUN_00d50b20();
  }
  else {
LAB_0034b67d:
    uVar8 = 0;
  }
  FUN_00d50b20();
  FUN_00d50b20();
LAB_0034b68f:
  return uVar8 & 0xffffffff;
}




// ============================================================
// @002533b0 — 923 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0025365a) */
/* WARNING: Removing unreachable block (ram,0x00253666) */
/* WARNING: Removing unreachable block (ram,0x0025371a) */
/* WARNING: Removing unreachable block (ram,0x00253726) */
/* WARNING: Removing unreachable block (ram,0x0025348e) */
/* WARNING: Removing unreachable block (ram,0x00253497) */
/* WARNING: Removing unreachable block (ram,0x0025351f) */
/* WARNING: Removing unreachable block (ram,0x00253528) */
/* WARNING: Removing unreachable block (ram,0x00253577) */
/* WARNING: Removing unreachable block (ram,0x002535a0) */
/* WARNING: Removing unreachable block (ram,0x00253579) */
/* WARNING: Removing unreachable block (ram,0x002535a2) */

void FUN_002533b0(void)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  char *pcVar7;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong local_90;
  char local_88;
  longlong *local_78;
  char local_70;
  int local_60;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  plVar1 = local_78;
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_78 + 0x450))();
  if (cVar2 == '\0') {
    if (*(longlong *)(unaff_RSI + 0x1c0) == 0) {
      local_40[0] = '\0';
      local_48 = 0;
    }
    else {
      FUN_006f3f00();
    }
    bVar3 = FUN_00751ba0();
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    bVar3 = bVar3 ^ 1;
  }
  else {
    bVar3 = 0;
  }
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar3 == 0) || (*(longlong *)(unaff_RSI + 0xb8) == 0)) {
LAB_002534e5:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return;
  }
  FUN_004405c0();
  if (local_70 == '\0') {
    if (local_78 == (longlong *)0x0) goto LAB_002534e5;
    FUN_00d50b00();
  }
  else if (local_78 == (longlong *)0x0) goto LAB_002534e5;
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_02572358;
  (*DAT_02572370)();
  FUN_004b5af0();
  if (local_70 == '\0') {
    if (local_78 == (longlong *)0x0) goto LAB_002536e7;
    FUN_00d50b00();
  }
  else if (local_78 == (longlong *)0x0) goto LAB_002536e7;
  local_70 = '\0';
  local_78 = (longlong *)0x0;
  local_60 = -1;
  while( true ) {
    lVar6 = (longlong)local_60;
    local_60 = local_60 + 1;
    if (*(int *)((longlong)plVar1 + 0xc) <= local_60) break;
    local_78 = *(longlong **)(plVar1[2] + 8 + lVar6 * 8);
    iVar4 = FUN_003b7980();
    if (iVar4 == 2) {
      if (*(longlong *)(unaff_RSI + 0x1c0) == 0) {
        local_88 = '\0';
        local_90 = 0;
      }
      else {
        FUN_006f3f00();
      }
      FUN_0078bc40();
      local_38[0] = local_40[0];
      pcVar7 = local_40;
      if (local_40[0] == '\0') {
        pcVar7 = local_38;
      }
      *pcVar7 = '\0';
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 != 0) {
        local_40[0] = '\0';
        FUN_00d21140();
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
      }
    }
  }
  FUN_00274d30();
  FUN_00d50b20();
LAB_002536e7:
  FUN_01f27fe0();
  FUN_000c3e50();
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (puVar5 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}




// ============================================================
// @00252f80 — 725 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x002531e2) */
/* WARNING: Removing unreachable block (ram,0x002531eb) */

ulonglong FUN_00252f80(undefined8 param_1,char param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  void *pvVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong unaff_RDI;
  char *pcVar7;
  longlong lVar8;
  bool bVar9;
  char local_78;
  undefined7 uStack_77;
  char local_70;
  longlong *local_68;
  char local_60 [8];
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_3c;
  char local_38 [8];
  
  if (*(longlong **)(unaff_RDI + 0x90) != (longlong *)0x0) {
    (**(code **)(&UNK_00001550 + **(longlong **)(unaff_RDI + 0x90)))();
    plVar6 = local_68;
    local_78 = local_60[0];
    pcVar1 = &local_78;
    if (local_60[0] != '\0') {
      pcVar1 = local_60;
    }
    *pcVar1 = '\0';
    if ((local_60[0] != '\0') && (plVar6 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar6 == (longlong *)0x0) {
      if (*(longlong *)(unaff_RDI + 0x90) != 0) goto LAB_00253000;
    }
    else {
      if (local_78 == '\0') {
LAB_00253000:
        FUN_00d50b00();
      }
      FUN_00d50b20();
      plVar6 = *(longlong **)(unaff_RDI + 0x90);
      (**(code **)(&UNK_00001550 + *plVar6))();
      plVar5 = local_68;
      pcVar1 = local_38;
      pcVar7 = local_60;
      if (local_60[0] == '\0') {
        pcVar7 = pcVar1;
      }
      local_38[0] = local_60[0];
      *pcVar7 = '\0';
      if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar5 == (longlong *)0x0) {
        plVar5 = *(longlong **)(unaff_RDI + 0x90);
LAB_00253069:
        FUN_00d50b00();
      }
      else if (local_38[0] == '\0') goto LAB_00253069;
      uVar2 = (**(code **)(*plVar5 + 0x9b0))();
      lVar8 = CONCAT71(uStack_77,local_78);
      if (lVar8 == 0) {
        local_3c = (undefined4)CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
        lVar8 = 0;
      }
      else {
        if (local_70 == '\0') {
          FUN_00d50b00();
          local_3c = 0;
          if ((local_70 == '\0') || (CONCAT71(uStack_77,local_78) == 0)) goto LAB_002530d3;
          FUN_00d50b20();
        }
        else {
          local_70 = '\0';
        }
        local_3c = 0;
      }
LAB_002530d3:
      if (plVar6 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (lVar8 != 0) {
        bVar9 = *(int *)(lVar8 + 0xc) != 0;
        plVar6 = (longlong *)CONCAT71((int7)((ulonglong)plVar5 >> 8),bVar9);
        if ((bVar9) && (param_2 != '\0')) {
          FUN_002533b0();
          plVar5 = local_68;
          if (local_60[0] == '\0') {
            if (local_68 != (longlong *)0x0) {
              FUN_00d50b00();
              if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_0025314d;
            }
          }
          else if (local_68 != (longlong *)0x0) {
LAB_0025314d:
            local_60[0] = '\0';
            local_68 = (longlong *)0x0;
            local_58 = plVar5;
            local_48 = 0;
            local_50 = 0;
            if (0 < *(int *)((longlong)plVar5 + 0xc)) {
              lVar8 = 0;
              do {
                plVar6 = *(longlong **)(plVar5[2] + lVar8 * 8);
                local_68 = plVar6;
                pvVar3 = _pthread_getspecific((pthread_key_t)pcVar1);
                if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
                  plVar6 = (longlong *)plVar6[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
                }
                FUN_0054f740();
                lVar8 = lVar8 + 1;
                local_50 = CONCAT44(local_50._4_4_,(int)lVar8);
              } while ((int)lVar8 < *(int *)((longlong)plVar5 + 0xc));
            }
            FUN_00275ca0();
            FUN_00d50b20();
          }
          FUN_01e53c20();
          (**(code **)(*local_68 + 0x620))();
          if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          plVar6 = (longlong *)CONCAT71((int7)((ulonglong)plVar6 >> 8),1);
        }
        if ((char)local_3c == '\0') {
          FUN_00d50b20();
        }
        goto LAB_00253244;
      }
    }
  }
  plVar6 = (longlong *)0x0;
LAB_00253244:
  return (ulonglong)plVar6 & 0xffffffff;
}



