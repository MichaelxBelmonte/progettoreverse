// Function: FUN_00350830
// Address: 00350830
// Size: 6238 bytes
// Class: MUDetectionSeparationTool
// String references:
//   "%@/%@ Diff.%@"


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


