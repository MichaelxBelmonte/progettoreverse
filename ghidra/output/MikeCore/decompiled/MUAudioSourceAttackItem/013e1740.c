// Function: FUN_013e1740
// Address: 013e1740
// Size: 3873 bytes
// Class: MUAudioSourceAttackItem


void FUN_013e1740(longlong *param_1)

{
  float fVar1;
  bool bVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  void *pvVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined7 uVar17;
  longlong lVar16;
  pthread_key_t pVar18;
  longlong *plVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong unaff_RDI;
  longlong *plVar23;
  int iVar24;
  float fVar25;
  float fVar26;
  double dVar27;
  undefined4 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  longlong *local_190;
  char local_188;
  undefined8 *local_180;
  char local_178;
  longlong local_170;
  char local_168;
  longlong local_160;
  char local_158;
  longlong local_150;
  char local_148;
  longlong *local_140;
  char local_138;
  undefined8 *local_130;
  char local_128;
  undefined8 *local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  int local_ec;
  int local_e8;
  int local_e4;
  ulonglong local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  ulonglong local_b0;
  longlong local_a8;
  undefined8 *local_a0;
  ulonglong local_98;
  longlong local_90;
  longlong *local_88;
  longlong local_80;
  longlong *local_78;
  ulonglong local_70;
  int local_68;
  undefined4 uStack_64;
  char local_60;
  longlong *local_58;
  ulonglong local_50;
  ulonglong local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  
  lVar11 = *(longlong *)(unaff_RDI + 0x60);
  if (lVar11 == 0) {
    return;
  }
  FUN_00d50b00();
  pvVar9 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01320d00();
  local_88 = (longlong *)CONCAT44(uStack_64,local_68);
  if (local_60 == '\0') {
    if (local_88 == (longlong *)0x0) goto LAB_013e266c;
    FUN_00d50b00();
    if ((local_60 != '\0') && (CONCAT44(uStack_64,local_68) != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_88 == (longlong *)0x0) goto LAB_013e266c;
  FUN_013de560();
  local_58 = (longlong *)CONCAT44(uStack_64,local_68);
  if ((local_60 == '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  pvVar9 = _pthread_getspecific((pthread_key_t)param_1);
  if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    param_1 = local_58;
  }
  cVar5 = FUN_014bc070();
  if ((cVar5 == '\0') && (*(longlong *)(unaff_RDI + 0x50) != 0)) {
    FUN_00d50b00();
    FUN_00d50b20();
    FUN_013e5500();
    local_78 = (longlong *)CONCAT44(uStack_64,local_68);
    if (local_78 != (longlong *)0x0) {
      local_80 = lVar11;
      if (local_60 == '\0') {
        FUN_00d50b00();
      }
      pvVar9 = _pthread_getspecific((pthread_key_t)param_1);
      plVar19 = local_88;
      if ((pvVar9 != (void *)0x0) && (lVar11 = FUN_00e8b990(), plVar19 = local_88, lVar11 != 0)) {
        param_1 = local_88;
        plVar19 = (longlong *)local_88[(ulonglong)(*(uint *)(lVar11 + 0x154) & 1) + 4];
      }
      pVar18 = (pthread_key_t)param_1;
      local_38 = (undefined8 *)(**(code **)(*plVar19 + 0x370))();
      local_40 = (undefined8 *)(DAT_023934c8 * (double)local_38);
      local_ec = FUN_00e7d850();
      local_e8 = FUN_00e7d850(SUB84(DAT_0240f0f8 * (double)local_38,0));
      local_e4 = FUN_00e7d850(SUB84(DAT_0240f100 * (double)local_38,0));
      lVar11 = FUN_013de790();
      if (*(longlong *)(unaff_RDI + 0x60) == 0) {
        dVar27 = 0.0;
      }
      else {
        pvVar9 = _pthread_getspecific(pVar18);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar27 = (double)FUN_013279f0();
      }
      uVar28 = SUB84(local_40,0);
      if ((double)lVar11 * dVar27 * DAT_023942d0 < DAT_023934c8) {
        lVar11 = FUN_013de790();
        if (*(longlong *)(unaff_RDI + 0x60) == 0) {
          dVar27 = 0.0;
        }
        else {
          pvVar9 = _pthread_getspecific(pVar18);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar27 = (double)FUN_013279f0();
        }
        uVar28 = SUB84((double)lVar11 * dVar27 * DAT_023942d0 * (double)local_38,0);
      }
      uVar6 = FUN_00e7d850(uVar28);
      puVar12 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar12 = &DAT_025f1800;
      puVar12[7] = 0;
      *(undefined4 *)(puVar12 + 8) = 0;
      *(undefined4 *)(puVar12 + 0xc) = 0;
      puVar12[2] = 0;
      puVar12[3] = 0;
      puVar12[4] = 0;
      puVar12[5] = 0;
      *(undefined4 *)(puVar12 + 6) = 0;
      puVar12[9] = 0;
      puVar12[10] = 0;
      *(undefined8 *)((longlong)puVar12 + 0x55) = 0;
      puVar12[0xd] = 0;
      puVar12[0xe] = 0;
      puVar12[0xf] = 0;
      puVar12[0x10] = 0;
      (*DAT_025f1818)();
      local_a0 = puVar12;
      FUN_015c6ee0((int)local_38);
      uVar7 = *(uint *)(puVar12 + 6);
      local_d8 = (longlong)(int)uVar7;
      plVar19 = (longlong *)((ulonglong)(longlong)(int)(uVar6 | uVar7) >> 0x20);
      if (plVar19 == (longlong *)0x0) {
        uVar13 = (ulonglong)uVar6 / (ulonglong)uVar7;
        uVar21 = (ulonglong)uVar6 % (ulonglong)uVar7;
      }
      else {
        uVar13 = (longlong)(int)uVar6 / local_d8;
        uVar21 = (longlong)(int)uVar6 % local_d8;
      }
      uVar7 = *(uint *)((longlong)puVar12 + 0x24);
      FUN_00e83120(plVar19,uVar21);
      lVar11 = CONCAT44(uStack_64,local_68);
      if ((((local_60 == '\0') && (lVar11 != 0)) && (FUN_00d50b00(), local_60 != '\0')) &&
         (CONCAT44(uStack_64,local_68) != 0)) {
        FUN_00d50b20();
      }
      local_a8 = lVar11;
      local_c8 = FUN_00e83da0();
      local_c0 = FUN_00e83010();
      local_e0 = (ulonglong)uVar7;
      local_b8 = FUN_00e83010();
      local_b0 = uVar13;
      FUN_00c8e690();
      local_90 = CONCAT44(uStack_64,local_68);
      if (((local_60 == '\0') && (local_90 != 0)) &&
         ((FUN_00d50b00(), local_60 != '\0' && (CONCAT44(uStack_64,local_68) != 0)))) {
        FUN_00d50b20();
      }
      FUN_00c92170();
      FUN_00c92160();
      FUN_00c8e690();
      uVar13 = CONCAT44(uStack_64,local_68);
      if (((local_60 == '\0') && (uVar13 != 0)) &&
         ((FUN_00d50b00(), local_60 != '\0' && (CONCAT44(uStack_64,local_68) != 0)))) {
        FUN_00d50b20();
      }
      FUN_00c92170();
      FUN_00c92160();
      local_98 = uVar13;
      pvVar9 = _pthread_getspecific((pthread_key_t)plVar19);
      plVar23 = local_58;
      if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), plVar23 = local_58, lVar10 != 0)) {
        plVar19 = local_58;
        plVar23 = (longlong *)local_58[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
      }
      pVar18 = (pthread_key_t)plVar19;
      local_d0 = (**(code **)(*plVar23 + 0x380))();
      pvVar9 = _pthread_getspecific(pVar18);
      plVar19 = local_58;
      if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), plVar19 = local_58, lVar10 != 0)) {
        plVar19 = (longlong *)local_58[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
      }
      lVar10 = (**(code **)(*plVar19 + 0x388))();
      puVar14 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar14 = &DAT_025f1488;
      *(undefined8 *)((longlong)puVar14 + 0xc) = 0;
      *(undefined8 *)((longlong)puVar14 + 0x14) = 0;
      *(undefined8 *)((longlong)puVar14 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar14 + 0x24) = 0;
      *(undefined8 *)((longlong)puVar14 + 0x2c) = 0;
      *(undefined8 *)((longlong)puVar14 + 0x34) = 0;
      *(undefined8 *)((longlong)puVar14 + 0x3c) = 0;
      *(undefined8 *)((longlong)puVar14 + 0x44) = 0;
      puVar14[9] = 0;
      puVar14[10] = 0;
      pcVar3 = DAT_025f14a0;
      (*DAT_025f14a0)();
      local_190 = local_88;
      local_188 = '\0';
      local_178 = '\0';
      local_170 = 0;
      local_168 = '\0';
      local_158 = '\0';
      local_150 = 0;
      local_148 = '\0';
      local_180 = puVar12;
      local_160 = lVar11;
      local_40 = puVar14;
      FUN_015c4d90(0,local_b8,&local_190,&local_180,&local_160,local_c8,0,6,&local_150);
      uVar13 = local_e0;
      if ((local_148 != '\0') && (local_150 != 0)) {
        FUN_00d50b20();
      }
      if ((local_158 != '\0') && (local_160 != 0)) {
        FUN_00d50b20();
      }
      if ((local_168 != '\0') && (local_170 != 0)) {
        FUN_00d50b20();
      }
      if ((local_178 != '\0') && (local_180 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_188 != '\0') && (local_190 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((int)local_b0 < -3) {
        uVar21 = CONCAT71((int7)(uVar13 >> 8),1);
        local_70 = 0;
        local_38 = (undefined8 *)0x0;
      }
      else {
        uVar7 = (int)local_b0 + 4;
        uVar20 = 1;
        if (1 < (int)uVar7) {
          uVar20 = (ulonglong)uVar7;
        }
        local_50 = CONCAT71((uint7)(uint3)(uVar7 >> 8),1);
        uVar22 = 0;
        local_38 = (undefined8 *)0x0;
        local_70 = 0;
        do {
          local_48 = local_70;
          puVar12 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar12 = &DAT_025f1488;
          *(undefined8 *)((longlong)puVar12 + 0xc) = 0;
          *(undefined8 *)((longlong)puVar12 + 0x14) = 0;
          *(undefined8 *)((longlong)puVar12 + 0x1c) = 0;
          *(undefined8 *)((longlong)puVar12 + 0x24) = 0;
          *(undefined8 *)((longlong)puVar12 + 0x2c) = 0;
          *(undefined8 *)((longlong)puVar12 + 0x34) = 0;
          *(undefined8 *)((longlong)puVar12 + 0x3c) = 0;
          *(undefined8 *)((longlong)puVar12 + 0x44) = 0;
          puVar12[9] = 0;
          puVar12[10] = 0;
          uVar15 = (*pcVar3)();
          uVar21 = local_48;
          uVar17 = (undefined7)((ulonglong)uVar15 >> 8);
          if (puVar12 == local_38) {
            if ((char)local_48 == '\0') {
              local_70 = CONCAT71(uVar17,1);
              puVar12 = local_38;
            }
            else {
              FUN_00d50b20();
              local_70 = uVar21;
              puVar12 = local_38;
            }
          }
          else {
            local_70 = CONCAT71(uVar17,1);
            if (((char)local_48 != '\0') && (local_38 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
          }
          local_140 = local_88;
          local_138 = '\0';
          local_130 = local_a0;
          local_128 = '\0';
          local_120 = local_40;
          local_118 = '\0';
          local_110 = local_a8;
          local_108 = '\0';
          local_100 = 0;
          local_f8 = '\0';
          local_38 = puVar12;
          FUN_015c4d90(0,local_b8,&local_140,&local_130,&local_110,local_c8,0,0x1e,&local_100);
          if ((local_f8 != '\0') && (local_100 != 0)) {
            FUN_00d50b20();
          }
          puVar12 = local_40;
          if ((local_108 != '\0') && (local_110 != 0)) {
            FUN_00d50b20();
          }
          if ((local_118 != '\0') && (local_120 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_128 != '\0') && (local_130 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_138 != '\0') && (local_140 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          puVar14 = local_38;
          lVar11 = FUN_015c6b60();
          lVar16 = FUN_015c6ba0();
          puVar4 = local_38;
          if ((int)local_e0 < 1) {
            fVar29 = 0.0;
            fVar25 = 0.0;
          }
          else {
            fVar25 = 0.0;
            uVar21 = 0;
            fVar29 = 0.0;
            if ((int)local_e0 != 1) {
              do {
                fVar26 = *(float *)(lVar16 + uVar21 * 4);
                fVar30 = DAT_02390124;
                if (fVar26 <= DAT_02390124) {
                  fVar30 = fVar26;
                }
                fVar26 = *(float *)(lVar11 + uVar21 * 4);
                fVar32 = *(float *)(lVar11 + 4 + uVar21 * 4);
                fVar1 = *(float *)(lVar16 + 4 + uVar21 * 4);
                fVar31 = DAT_02390124;
                if (fVar1 <= DAT_02390124) {
                  fVar31 = fVar1;
                }
                fVar29 = fVar29 + fVar26 + fVar32;
                fVar25 = (DAT_02390124 - fVar31) * fVar32 +
                         (DAT_02390124 - fVar30) * fVar26 + fVar25;
                uVar21 = uVar21 + 2;
              } while (((uint)uVar13 & 0xfffffffe) != uVar21);
            }
            if ((local_e0 & 1) != 0) {
              fVar26 = *(float *)(lVar11 + uVar21 * 4);
              fVar30 = *(float *)(lVar16 + uVar21 * 4);
              fVar32 = DAT_02390124;
              if (fVar30 <= DAT_02390124) {
                fVar32 = fVar30;
              }
              fVar25 = fVar25 + (DAT_02390124 - fVar32) * fVar26;
              fVar29 = fVar29 + fVar26;
            }
          }
          *(float *)(*(longlong *)(local_98 + 0x10) + uVar22 * 4) = fVar29;
          *(float *)(*(longlong *)(local_90 + 0x10) + uVar22 * 4) = fVar25;
          if (puVar12 == local_38) {
            if (((char)local_50 == '\0') && (puVar12 != (undefined8 *)0x0)) {
              uVar21 = CONCAT71((int7)((ulonglong)puVar14 >> 8),1);
              local_50 = 0;
              FUN_00d50b00();
            }
            else {
              uVar21 = local_50 & 0xffffffff;
            }
          }
          else {
            if (local_38 != (undefined8 *)0x0) {
              FUN_00d50b00();
            }
            uVar21 = local_70 & 0xffffffff;
            puVar12 = puVar4;
            if (((char)local_50 != '\0') &&
               (uVar21 = local_70 & 0xffffffff, local_40 != (undefined8 *)0x0)) {
              local_40 = puVar4;
              FUN_00d50b20();
              uVar21 = local_70 & 0xffffffff;
            }
          }
          uVar22 = uVar22 + 1;
          local_50 = uVar21 & 0xffffffff;
          local_40 = puVar12;
        } while (uVar22 != uVar20);
      }
      local_48 = local_70;
      local_50 = uVar21 & 0xffffffff;
      iVar24 = (int)local_b0;
      FUN_015b32a0(DAT_02391074,&local_68);
      fVar25 = (float)FUN_00e83930(DAT_02391090,local_68);
      iVar8 = FUN_00e7d780(fVar25 * (float)(int)local_d8);
      fVar25 = (float)(local_68 + 4);
      lVar11 = *(longlong *)(local_98 + 0x10);
      uVar7 = (uint)(DAT_02390d00 + fVar25);
      if ((int)uVar7 < 1) {
        fVar29 = 0.0;
        uVar13 = local_98;
      }
      else {
        if ((ulonglong)uVar7 - 1 < 7) {
          fVar29 = 0.0;
          uVar13 = 0;
        }
        else {
          fVar29 = 0.0;
          uVar13 = 0;
          do {
            fVar29 = fVar29 + *(float *)(lVar11 + uVar13 * 4) + *(float *)(lVar11 + 4 + uVar13 * 4)
                     + *(float *)(lVar11 + 8 + uVar13 * 4) + *(float *)(lVar11 + 0xc + uVar13 * 4) +
                     *(float *)(lVar11 + 0x10 + uVar13 * 4) + *(float *)(lVar11 + 0x14 + uVar13 * 4)
                     + *(float *)(lVar11 + 0x18 + uVar13 * 4) +
                     *(float *)(lVar11 + 0x1c + uVar13 * 4);
            uVar13 = uVar13 + 8;
          } while ((uVar7 & 0xfffffff8) != uVar13);
        }
        if ((ulonglong)(uVar7 & 7) != 0) {
          lVar16 = uVar13 * 4;
          uVar13 = 0;
          do {
            fVar29 = fVar29 + *(float *)(lVar11 + lVar16 + uVar13 * 4);
            uVar13 = uVar13 + 1;
          } while ((uVar7 & 7) != uVar13);
        }
        fVar29 = fVar29 / (float)(int)uVar7;
        iVar24 = (int)local_b0;
      }
      bVar2 = iVar8 <= local_ec;
      fVar26 = *(float *)(lVar11 + (longlong)fVar25 * 4) * DAT_0239011c;
      pvVar9 = _pthread_getspecific((pthread_key_t)uVar13);
      if ((pvVar9 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
        local_78 = (longlong *)local_78[(ulonglong)(*(uint *)(lVar11 + 0x154) & 1) + 4];
      }
      lVar11 = (**(code **)(*local_78 + 0x3a0))();
      lVar16 = (longlong)iVar8;
      if ((lVar16 <= lVar10 / 2) &&
         (lVar11 <= local_d0 + lVar16 &&
          (fVar29 <= fVar26 && (bVar2 && fVar25 < (float)(iVar24 + 3))))) {
        iVar24 = local_e8;
        if (iVar8 < local_e8) {
          iVar24 = iVar8;
        }
        uVar13 = lVar16 - iVar24;
        lVar11 = uVar13 + (longlong)local_e4;
        lVar16 = ~uVar13 + lVar10;
        if (lVar11 < lVar10) {
          lVar16 = (longlong)local_e4;
        }
        pvVar9 = _pthread_getspecific((pthread_key_t)lVar11);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bad20(lVar16,(longlong)iVar24);
        pvVar9 = _pthread_getspecific((pthread_key_t)lVar16);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bcf30();
      }
      puVar12 = local_38;
      uVar13 = local_48;
      FUN_00e83070();
      FUN_00e83070();
      FUN_00e83070();
      if (local_98 != 0) {
        FUN_00d50b20();
      }
      if (local_90 != 0) {
        FUN_00d50b20();
      }
      if (local_a8 != 0) {
        FUN_00d50b20();
      }
      if (((char)local_50 != '\0') && (local_40 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if (((char)uVar13 != '\0') && (puVar12 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if (local_a0 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  if (local_58 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_013e266c:
  FUN_00d50b20();
  return;
}


