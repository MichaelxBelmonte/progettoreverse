// Function: FUN_014c03f0
// Address: 014c03f0
// Size: 7885 bytes
// Class: MUSampledFunction
// String references:
//   "MUSampledFunction"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_014c03f0(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  undefined1 auVar6 [16];
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 *puVar11;
  char cVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  undefined4 uVar16;
  void *pvVar17;
  longlong lVar18;
  undefined8 *puVar19;
  longlong lVar20;
  code *pcVar21;
  undefined8 uVar22;
  pthread_key_t pVar23;
  int iVar24;
  longlong *plVar25;
  longlong lVar26;
  ulonglong uVar27;
  double dVar28;
  code *pcVar29;
  bool bVar30;
  int iVar31;
  longlong *plVar32;
  int iVar33;
  longlong **pplVar34;
  longlong *plVar35;
  ulonglong uVar36;
  int iVar37;
  undefined8 *unaff_RSI;
  double dVar38;
  ulonglong uVar39;
  longlong *unaff_RDI;
  double dVar40;
  bool bVar41;
  double dVar42;
  ulonglong uVar43;
  bool bVar44;
  uint uVar45;
  double dVar46;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar47;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar58;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar59;
  float fVar60;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 local_1c8 [32];
  longlong *local_1a0;
  char local_198;
  undefined8 *local_190;
  char local_188;
  longlong local_180;
  char local_178;
  longlong *local_170;
  char local_168;
  longlong local_160;
  char local_158;
  longlong local_150;
  longlong *local_148;
  double local_140;
  undefined8 local_138;
  undefined8 local_130;
  code *local_128;
  longlong *local_120;
  double local_118;
  undefined8 uStack_110;
  int local_fc;
  undefined8 *local_f8;
  longlong *local_f0;
  ulonglong local_e8;
  double local_e0;
  longlong *local_d8;
  double local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  longlong *local_b8;
  ulonglong local_b0;
  uint local_a4;
  float local_a0;
  undefined4 local_9c;
  undefined8 *local_98;
  double local_90;
  undefined8 *local_88;
  float local_7c;
  code *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  char local_38;
  
  *unaff_RSI = 0;
  *param_2 = 0x7fffffffffffffff;
  plVar25 = param_1;
  local_148 = param_3;
  if (*param_3 != 0) {
    FUN_00c8e340(param_1,0);
  }
  pVar23 = (pthread_key_t)plVar25;
  cVar12 = FUN_014bc070();
  if (cVar12 != '\0') {
    return;
  }
  (**(code **)(*unaff_RDI + 0x378))();
  plVar25 = local_40;
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar25 != (longlong *)0x0) {
    (**(code **)(*unaff_RDI + 0x378))();
    plVar32 = local_40;
    plVar25 = (longlong *)*param_1;
    if (plVar25 == local_40) {
      if (((char)param_1[1] != '\0') || (local_40 == (longlong *)0x0)) goto LAB_014c0526;
      local_58 = param_1 + 1;
      if (local_38 == '\0') {
        FUN_00d50b00();
        goto LAB_014c051f;
      }
    }
    else {
      local_58 = param_1 + 1;
      lVar18 = param_1[1];
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        *param_1 = (longlong)plVar32;
        if (((char)lVar18 != '\0') && (plVar25 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_014c051f:
        *(undefined1 *)local_58 = 1;
LAB_014c0526:
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_014c053a;
      }
      *param_1 = (longlong)local_40;
      if (((char)lVar18 != '\0') && (plVar25 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    *(undefined1 *)local_58 = 1;
  }
LAB_014c053a:
  pvVar17 = _pthread_getspecific(pVar23);
  if (pvVar17 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01320d00();
  plVar25 = local_40;
  if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_d8 = plVar25;
  pvVar17 = _pthread_getspecific(pVar23);
  plVar32 = plVar25;
  if ((pvVar17 != (void *)0x0) && (lVar18 = FUN_00e8b990(), lVar18 != 0)) {
    plVar32 = (longlong *)plVar25[(ulonglong)(*(uint *)(lVar18 + 0x154) & 1) + 4];
  }
  local_d0 = (double)(**(code **)(*plVar32 + 0x370))();
  puVar19 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  pcVar29 = (code *)&DAT_025f1800;
  *puVar19 = &DAT_025f1800;
  puVar19[7] = 0;
  *(undefined4 *)(puVar19 + 8) = 0;
  *(undefined4 *)(puVar19 + 0xc) = 0;
  puVar19[2] = 0;
  puVar19[3] = 0;
  puVar19[4] = 0;
  puVar19[5] = 0;
  *(undefined4 *)(puVar19 + 6) = 0;
  puVar19[9] = 0;
  puVar19[10] = 0;
  *(undefined8 *)((longlong)puVar19 + 0x55) = 0;
  puVar19[0xd] = 0;
  puVar19[0xe] = 0;
  puVar19[0xf] = 0;
  puVar19[0x10] = 0;
  (*DAT_025f1818)();
  local_f8 = puVar19;
  FUN_015c6ee0(local_d0,8);
  local_58 = (longlong *)(ulonglong)*(uint *)((longlong)puVar19 + 0x24);
  local_e0 = (double)puVar19[10];
  local_90 = (double)puVar19[7];
  local_150 = (longlong)*(int *)(puVar19 + 6);
  lVar18 = (**(code **)(*unaff_RDI + 0x380))();
  lVar20 = (**(code **)(*unaff_RDI + 0x388))();
  local_140 = (double)lVar18 / local_d0;
  local_e8 = FUN_00e7d850(local_140 / local_90);
  dVar46 = (double)lVar20 / local_d0 + local_140;
  iVar13 = FUN_00e7d850(dVar46 / local_90);
  local_b0 = (ulonglong)(uint)(iVar13 - (int)local_e8);
  if (1 < iVar13 - (int)local_e8) {
    pplVar34 = &local_40;
    FUN_014bc0d0();
    plVar32 = local_40;
    if ((DAT_027c01a0 == '\0') && (iVar13 = ___cxa_guard_acquire(), iVar13 != 0)) {
      _DAT_027af248 = FUN_001016a0();
      _DAT_027af230 = "MUSampledFunction";
      _DAT_027af238 = 0x58;
      pcVar29 = FUN_00101650;
      _DAT_027af240 = FUN_00101650;
      _DAT_027af250 = 0;
      uRam00000000027af258 = 0;
      _DAT_027af260 = 0;
      uRam00000000027af268 = 0;
      _DAT_027af270 = 0;
      uRam00000000027af278 = 0;
      _DAT_027af280 = 0;
      uRam00000000027af288 = 0;
      _DAT_027af290 = 0;
      uRam00000000027af298 = 0;
      _DAT_027af2a0 = 0;
      uRam00000000027af2a8 = 0;
      _DAT_027af2b0 = 0;
      uRam00000000027af2b8 = 0;
      _DAT_027af2c0 = 0;
      uRam00000000027af2c8 = 0;
      _DAT_027af2d0 = 0;
      uRam00000000027af2d8 = 0;
      _DAT_027af2e0 = 0;
      uRam00000000027af2e8 = 0;
      _DAT_027af2f0 = 0;
      ___cxa_guard_release();
      plVar25 = local_d8;
    }
    if (plVar32 == (longlong *)0x0) {
LAB_014c077d:
      pplVar34 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar32 + 0x360))();
      cVar12 = FUN_00e85ea0();
      if (cVar12 == '\0') goto LAB_014c077d;
    }
    local_78 = (code *)*pplVar34;
    if (*(char *)(pplVar34 + 1) == '\0') {
      if (local_78 != (code *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar34 + 1) = 0;
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_78 != (code *)0x0) {
      pvVar17 = _pthread_getspecific((pthread_key_t)pcVar29);
      pcVar21 = local_78;
      if ((pvVar17 != (void *)0x0) && (lVar18 = FUN_00e8b990(), pcVar21 = local_78, lVar18 != 0)) {
        pcVar21 = *(code **)(local_78 + (ulonglong)(*(uint *)(lVar18 + 0x154) & 1) * 8 + 0x20);
        pcVar29 = local_78;
      }
      local_118 = *(double *)(pcVar21 + 0x50);
      uStack_110 = 0;
      pvVar17 = _pthread_getspecific((pthread_key_t)pcVar29);
      if ((pvVar17 == (void *)0x0) || (lVar18 = FUN_00e8b990(), lVar18 == 0)) {
        lVar18 = *(longlong *)(local_78 + 0x48);
        if (lVar18 == 0) goto LAB_014c083c;
LAB_014c0851:
        iVar13 = *(int *)(lVar18 + 0x18);
        iVar14 = iVar13 + 3;
        if (-1 < iVar13) {
          iVar14 = iVar13;
        }
        pVar23 = iVar14 >> 2;
        local_68 = (undefined8 *)(ulonglong)pVar23;
      }
      else {
        lVar18 = *(longlong *)
                  (*(longlong *)(local_78 + (ulonglong)(*(uint *)(lVar18 + 0x154) & 1) * 8 + 0x20) +
                  0x48);
        pcVar29 = local_78;
        if (lVar18 != 0) goto LAB_014c0851;
LAB_014c083c:
        pVar23 = (pthread_key_t)pcVar29;
        local_68 = (undefined8 *)0x0;
      }
      pvVar17 = _pthread_getspecific(pVar23);
      if (pvVar17 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013eb920();
      local_f0 = local_40;
      if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
          (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      puVar19 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar19 = &DAT_025683c0;
      pcVar29 = DAT_025683d8;
      (*DAT_025683d8)();
      FUN_00c92170();
      FUN_00c92160();
      local_88 = puVar19;
      if (-1 < (int)local_68) {
        plVar25 = (longlong *)((ulonglong)local_68 & 0xffffffff);
        plVar32 = (longlong *)(ulonglong)((int)local_68 + 1);
        iVar13 = -1;
        plVar35 = (longlong *)0x0;
        local_60 = plVar32;
        local_48 = plVar25;
        do {
          if ((plVar25 <= plVar35) ||
             (*(float *)(local_f0[2] + (longlong)plVar35 * 4) < DAT_023b4df0)) {
            iVar14 = -1;
            if (iVar13 != -1) {
              uVar22 = FUN_00e7b4e0();
              iVar13 = *(int *)(puVar19 + 3);
              FUN_00c8e340(extraout_XMM0_Qa,1);
              *(undefined8 *)(puVar19[2] + (longlong)iVar13) = uVar22;
              plVar25 = local_48;
              plVar32 = local_60;
            }
          }
          else {
            iVar14 = (int)plVar35;
            if (iVar13 != -1) {
              iVar14 = iVar13;
            }
          }
          iVar13 = iVar14;
          plVar35 = (longlong *)((longlong)plVar35 + 1);
        } while (plVar32 != plVar35);
      }
      local_48 = (longlong *)(_DAT_023944e0 * local_118);
      iVar13 = FUN_00e7d850();
      plVar25 = local_d8;
      iVar14 = FUN_00e7d850(local_48);
      puVar19 = local_88;
      uVar45 = *(uint *)(local_88 + 3);
      if (7 < (int)uVar45) {
        piVar5 = (int *)local_88[2];
        if ((*piVar5 == 0) && (iVar24 = piVar5[1], iVar24 < iVar14)) {
          iVar33 = (int)local_68;
          if (0xf < (int)uVar45) {
            iVar33 = piVar5[2];
          }
          if (iVar33 - iVar24 <= iVar24) goto LAB_014c0a70;
          FUN_00e7b4e0();
          FUN_00c921e0();
          uVar45 = *(uint *)(puVar19 + 3);
          uVar15 = uVar45 + 7;
          if (-1 < (int)uVar45) {
            uVar15 = uVar45;
          }
          if ((int)uVar45 < 8) goto LAB_014c0abf;
          uVar15 = (int)uVar15 >> 3;
        }
        else {
LAB_014c0a70:
          uVar15 = uVar45 >> 3;
        }
        puVar19 = local_88;
        lVar18 = local_88[2];
        iVar24 = *(int *)(lVar18 + (ulonglong)(uVar15 - 1) * 8);
        iVar33 = *(int *)(lVar18 + 4 + (ulonglong)(uVar15 - 1) * 8);
        if ((iVar33 + iVar24 == (int)local_68) && (iVar33 < iVar14)) {
          iVar14 = 0;
          if (0xf < (int)uVar45) {
            iVar14 = *(int *)(lVar18 + 4 + (ulonglong)(uVar15 - 2) * 8) +
                     *(int *)(lVar18 + (ulonglong)(uVar15 - 2) * 8);
          }
          iVar24 = iVar24 - iVar14;
          if (iVar33 < iVar24) {
            FUN_00c8e340(iVar24,0);
            uVar45 = *(uint *)(puVar19 + 3);
          }
        }
      }
LAB_014c0abf:
      local_a4 = uVar45 + 7;
      if (local_a4 < 0xf) {
        local_1c8._0_16_ = ZEXT816(0);
        local_9c = 0;
        local_a0 = 0.0;
LAB_014c0af1:
        FUN_00e83120();
        plVar32 = local_40;
        uVar39 = local_b0;
        if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
            (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_120 = plVar32;
        local_138 = FUN_00e83da0();
        local_70 = (undefined8 *)FUN_00e83010();
        local_130 = FUN_00e83010();
        uVar16 = FUN_00e7d780(DAT_02394268 / (float)local_e0);
        local_48 = (longlong *)CONCAT44(local_48._4_4_,uVar16);
        iVar13 = (int)uVar39;
        local_fc = iVar13 * 4;
        FUN_00c8e690();
        plVar32 = local_40;
        if (((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
           ((FUN_00d50b00(), local_38 != '\0' && (local_40 != (longlong *)0x0)))) {
          FUN_00d50b20();
        }
        FUN_00c92170();
        FUN_00c92160();
        local_b8 = plVar32;
        ___bzero();
        FUN_00c8e690();
        plVar32 = local_40;
        if (((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
           ((FUN_00d50b00(), local_38 != '\0' && (local_40 != (longlong *)0x0)))) {
          FUN_00d50b20();
        }
        FUN_00c92170();
        FUN_00c92160();
        local_50 = plVar32;
        ___bzero();
        local_e0 = (double)(uVar39 & 0xffffffff);
        if (iVar13 < 1) {
          uVar16 = 0;
        }
        else {
          local_7c = (float)(int)local_58;
          local_128 = DAT_025f14a0;
          lVar18 = (longlong)(int)(float)local_48;
          uVar39 = (longlong)local_58 - 1;
          local_c8 = (longlong)local_58 - 2;
          local_c0 = (ulonglong)((uint)uVar39 & 3);
          local_60 = (longlong *)((ulonglong)local_60 & 0xffffffff00000000);
          dVar42 = 0.0;
          local_98 = (undefined8 *)&DAT_025f1488;
          do {
            puVar19 = (undefined8 *)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar19 = local_98;
            *(undefined8 *)((longlong)puVar19 + 0xc) = 0;
            *(undefined8 *)((longlong)puVar19 + 0x14) = 0;
            *(undefined8 *)((longlong)puVar19 + 0x1c) = 0;
            *(undefined8 *)((longlong)puVar19 + 0x24) = 0;
            *(undefined8 *)((longlong)puVar19 + 0x2c) = 0;
            *(undefined8 *)((longlong)puVar19 + 0x34) = 0;
            *(undefined8 *)((longlong)puVar19 + 0x3c) = 0;
            *(undefined8 *)((longlong)puVar19 + 0x44) = 0;
            puVar19[9] = 0;
            puVar19[10] = 0;
            (*local_128)();
            local_1a0 = plVar25;
            local_198 = '\0';
            local_190 = local_f8;
            local_188 = '\0';
            local_180 = 0;
            local_178 = '\0';
            local_170 = local_120;
            local_168 = '\0';
            local_160 = 0;
            local_158 = '\0';
            FUN_015c4d90(0,local_130,&local_1a0,&local_190,&local_170,local_138,0,2,&local_160);
            if ((local_158 != '\0') && (local_160 != 0)) {
              FUN_00d50b20();
            }
            if ((local_168 != '\0') && (local_170 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_178 != '\0') && (local_180 != 0)) {
              FUN_00d50b20();
            }
            if ((local_188 != '\0') && (local_190 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_198 != '\0') && (local_1a0 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            lVar20 = FUN_015c6b60();
            if ((int)local_58._0_4_ < 2) {
              *(undefined4 *)(local_50[2] + (longlong)dVar42 * 4) = 0;
              fVar60 = 0.0;
              if (0.0 <= local_60._0_4_) {
                fVar60 = local_60._0_4_;
              }
              local_48 = (longlong *)CONCAT44(local_48._4_4_,fVar60);
              *(undefined4 *)(local_b8[2] + (longlong)dVar42 * 4) = 0;
LAB_014c0d20:
              FUN_00d50b20();
            }
            else {
              uVar43 = local_c0;
              if (local_c8 < 3) {
                fVar58 = 0.0;
                lVar26 = 1;
                fVar60 = 0.0;
              }
              else {
                fVar58 = 0.0;
                fVar60 = 0.0;
                uVar36 = 0;
                do {
                  uVar27 = uVar36;
                  fVar59 = *(float *)(lVar20 + 4 + uVar27 * 4);
                  if (lVar18 < (longlong)(uVar27 + 1)) {
                    fVar60 = fVar60 + fVar59;
                  }
                  fVar2 = *(float *)(lVar20 + 8 + uVar27 * 4);
                  if (lVar18 <= (longlong)(uVar27 + 1)) {
                    fVar60 = fVar60 + fVar2;
                  }
                  fVar3 = *(float *)(lVar20 + 0xc + uVar27 * 4);
                  if (lVar18 < (longlong)(uVar27 + 3)) {
                    fVar60 = fVar60 + fVar3;
                  }
                  fVar4 = *(float *)(lVar20 + 0x10 + uVar27 * 4);
                  uVar36 = uVar27 + 4;
                  if (lVar18 < (longlong)uVar36) {
                    fVar60 = fVar60 + fVar4;
                  }
                  fVar58 = fVar58 + fVar59 + fVar2 + fVar3 + fVar4;
                } while ((uVar39 & 0xfffffffffffffffc) != uVar36);
                lVar26 = uVar27 + 5;
              }
              for (; uVar43 != 0; uVar43 = uVar43 - 1) {
                fVar59 = *(float *)(lVar20 + lVar26 * 4);
                if (lVar18 < lVar26) {
                  fVar60 = fVar60 + fVar59;
                }
                fVar58 = fVar58 + fVar59;
                lVar26 = lVar26 + 1;
              }
              *(float *)(local_50[2] + (longlong)dVar42 * 4) = fVar58;
              fVar59 = fVar58;
              if (fVar58 <= local_60._0_4_) {
                fVar59 = local_60._0_4_;
              }
              local_48 = (longlong *)CONCAT44(local_48._4_4_,fVar59);
              fVar59 = 0.0;
              dVar28 = 4.94065645841247e-324;
              do {
                fVar59 = fVar59 + *(float *)(lVar20 + (longlong)dVar28 * 4);
                if (fVar58 * DAT_0239011c <= fVar59) {
                  fVar58 = (float)SUB84(dVar28,0) / local_7c;
                  goto LAB_014c103c;
                }
                dVar28 = (double)((longlong)dVar28 + 1);
              } while (local_58 != (longlong *)dVar28);
              fVar58 = 0.0;
LAB_014c103c:
              *(float *)(local_b8[2] + (longlong)dVar42 * 4) = fVar60 * fVar58;
              if (puVar19 != (undefined8 *)0x0) goto LAB_014c0d20;
            }
            dVar42 = (double)((longlong)dVar42 + 1);
            local_60 = (longlong *)CONCAT44(local_60._4_4_,(float)local_48);
            uVar16 = (float)local_48;
          } while (dVar42 != local_e0);
        }
        local_48 = (longlong *)CONCAT44(local_48._4_4_,uVar16);
        FUN_00e83070();
        FUN_00e83070();
        FUN_00e83070();
        dVar42 = local_e0;
        if (local_a4 < 0xf) {
          local_c8 = CONCAT44(local_c8._4_4_,local_9c);
          local_7c = local_a0;
        }
        else {
          uVar16 = _powf();
          local_60 = (longlong *)CONCAT44(local_60._4_4_,uVar16);
          bVar30 = true;
          local_7c = local_a0;
          local_c8 = CONCAT44(local_c8._4_4_,local_9c);
          bVar41 = false;
          do {
            if (((~bVar30 | local_a0._0_1_) & 1) != 0) {
              if (((~bVar41 | (byte)local_9c) & 1) == 0) break;
              if (bVar30 == false) {
                uVar22 = *(undefined8 *)((longlong)*(int *)(local_88 + 3) + -8 + local_88[2]);
                iVar24 = (int)uVar22;
                iVar13 = FUN_00e7d850(((double)iVar24 / local_118) / local_90);
                iVar24 = (int)((ulonglong)uVar22 >> 0x20) + iVar24;
                iVar14 = FUN_00e7d850(((double)iVar24 / local_118) / local_90);
                if (iVar13 < 0) {
                  iVar13 = 0;
                }
                local_58 = (longlong *)((double)((int)local_68 - iVar24) / local_118);
                iVar33 = (int)local_b0;
                iVar24 = iVar14;
                if (iVar33 < iVar14) {
                  iVar14 = iVar33;
                  iVar24 = iVar33;
                }
              }
              else {
                iVar13 = *(int *)local_88[2];
                iVar14 = ((int *)local_88[2])[1];
                local_58 = (longlong *)((double)iVar13 / local_118);
                iVar33 = FUN_00e7d850((double)local_58 / local_90);
                iVar24 = FUN_00e7d850(((double)(iVar14 + iVar13) / local_118) / local_90);
                if ((int)local_b0 < iVar24) {
                  iVar24 = (int)local_b0;
                }
                iVar13 = iVar33;
                iVar14 = 0;
              }
              fVar60 = 0.0;
              if (bVar41 != false) {
                fVar60 = 0.0;
                fVar58 = 0.0;
                if (iVar14 + 2 < iVar33 + -2) {
                  lVar18 = local_50[2];
                  lVar20 = (longlong)(iVar14 + 2);
                  fVar58 = 0.0;
                  for (uVar45 = (iVar33 - iVar14) + 4U & 7; uVar45 != 0; uVar45 = uVar45 - 1) {
                    fVar58 = fVar58 + *(float *)(lVar18 + lVar20 * 4);
                    lVar20 = lVar20 + 1;
                  }
                  if (6 < (iVar33 - iVar14) - 5U) {
                    do {
                      fVar58 = fVar58 + *(float *)(lVar18 + lVar20 * 4) +
                               *(float *)(lVar18 + 4 + lVar20 * 4) +
                               *(float *)(lVar18 + 8 + lVar20 * 4) +
                               *(float *)(lVar18 + 0xc + lVar20 * 4) +
                               *(float *)(lVar18 + 0x10 + lVar20 * 4) +
                               *(float *)(lVar18 + 0x14 + lVar20 * 4) +
                               *(float *)(lVar18 + 0x18 + lVar20 * 4) +
                               *(float *)(lVar18 + 0x1c + lVar20 * 4);
                      lVar20 = lVar20 + 8;
                    } while (iVar33 + -2 != (int)lVar20);
                  }
                }
                if (DAT_02394274 < local_60._0_4_) {
                  fVar60 = fVar58 / local_60._0_4_;
                }
              }
              local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
              auVar50 = ZEXT816(0);
              iVar7 = iVar33 - iVar14;
              if (iVar33 - iVar14 < 1) {
                iVar7 = 1;
              }
              iVar37 = (int)local_b0;
              iVar33 = iVar7 + iVar14;
              if (iVar37 < iVar7 + iVar14) {
                iVar33 = iVar37;
              }
              iVar31 = (iVar24 - iVar13) / 3;
              iVar13 = iVar13 + iVar31;
              iVar24 = iVar24 - (iVar31 + iVar13);
              if (iVar24 < 1) {
                iVar24 = 1;
              }
              iVar31 = iVar24 + iVar13;
              if (iVar37 < iVar24 + iVar13) {
                iVar31 = iVar37;
              }
              if (iVar14 < iVar33) {
                lVar18 = local_b8[2];
                uVar39 = (ulonglong)iVar14;
                uVar43 = ~uVar39;
                if ((iVar33 - iVar14 & 7U) == 0) {
                  auVar50 = ZEXT816(0);
                }
                else {
                  lVar20 = -((ulonglong)(uint)(iVar33 - iVar14) & 7);
                  auVar50 = ZEXT816(0);
                  do {
                    auVar50._0_4_ = auVar50._0_4_ + *(float *)(lVar18 + uVar39 * 4);
                    uVar39 = uVar39 + 1;
                    lVar20 = lVar20 + 1;
                  } while (lVar20 != 0);
                }
                if (6 < uVar43 + (longlong)iVar33) {
                  do {
                    auVar50._0_4_ =
                         auVar50._0_4_ + *(float *)(lVar18 + uVar39 * 4) +
                         *(float *)(lVar18 + 4 + uVar39 * 4) + *(float *)(lVar18 + 8 + uVar39 * 4) +
                         *(float *)(lVar18 + 0xc + uVar39 * 4) +
                         *(float *)(lVar18 + 0x10 + uVar39 * 4) +
                         *(float *)(lVar18 + 0x14 + uVar39 * 4) +
                         *(float *)(lVar18 + 0x18 + uVar39 * 4) +
                         *(float *)(lVar18 + 0x1c + uVar39 * 4);
                    uVar39 = uVar39 + 8;
                  } while ((longlong)iVar33 != uVar39);
                }
              }
              local_48 = (longlong *)CONCAT44(local_48._4_4_,fVar60);
              auVar51._4_12_ = auVar50._4_12_;
              auVar57 = ZEXT816(0);
              if (iVar13 < iVar31) {
                lVar18 = local_b8[2];
                uVar39 = (ulonglong)iVar13;
                uVar43 = ~uVar39;
                if ((iVar31 - iVar13 & 7U) == 0) {
                  auVar57 = ZEXT816(0);
                }
                else {
                  lVar20 = -((ulonglong)(uint)(iVar31 - iVar13) & 7);
                  auVar57 = ZEXT816(0);
                  do {
                    auVar57._0_4_ = auVar57._0_4_ + *(float *)(lVar18 + uVar39 * 4);
                    uVar39 = uVar39 + 1;
                    lVar20 = lVar20 + 1;
                  } while (lVar20 != 0);
                }
                if (6 < uVar43 + (longlong)iVar31) {
                  do {
                    auVar57._0_4_ =
                         auVar57._0_4_ + *(float *)(lVar18 + uVar39 * 4) +
                         *(float *)(lVar18 + 4 + uVar39 * 4) + *(float *)(lVar18 + 8 + uVar39 * 4) +
                         *(float *)(lVar18 + 0xc + uVar39 * 4) +
                         *(float *)(lVar18 + 0x10 + uVar39 * 4) +
                         *(float *)(lVar18 + 0x14 + uVar39 * 4) +
                         *(float *)(lVar18 + 0x18 + uVar39 * 4) +
                         *(float *)(lVar18 + 0x1c + uVar39 * 4);
                    uVar39 = uVar39 + 8;
                  } while ((longlong)uVar39 < (longlong)iVar31);
                }
              }
              auVar51._0_4_ =
                   (auVar50._0_4_ / (float)iVar7 + DAT_0239425c) /
                   (auVar57._0_4_ / (float)iVar24 + DAT_0239425c);
              auVar52._0_8_ = _logf(auVar51._0_8_);
              auVar52._8_8_ = extraout_XMM0_Qb;
              if ((double)local_58 < DAT_0240d790) {
                fVar58 = (float)(((double)local_58 + DAT_0240d3e0) / _DAT_023944e0);
                uVar45 = -(uint)(fVar58 <= DAT_02394270);
                fVar60 = (float)auVar52._0_8_;
                auVar52._0_4_ =
                     fVar60 * (float)(~uVar45 & (uint)SQRT(fVar58) & _DAT_02390140 |
                                     uVar45 & DAT_023b3e04);
              }
              fVar60 = 0.0;
              uVar45 = (uint)(byte)local_c8;
              if ((float)local_48 < DAT_02390124) {
                uVar45 = 0;
              }
              fVar58 = (float)((uint)local_7c & 0xff);
              if (DAT_02391094 <= auVar52._0_4_) {
                uVar45 = (uint)(byte)local_c8;
                fVar60 = fVar58;
              }
              local_7c = fVar60;
              if (!bVar30) {
                local_7c = fVar58;
              }
              if (!bVar41) {
                uVar45 = (uint)(byte)local_c8;
              }
              local_c8 = CONCAT44(local_c8._4_4_,uVar45);
              dVar42 = local_e0;
            }
            bVar41 = true;
            bVar44 = bVar30 != false;
            bVar30 = false;
          } while (bVar44);
        }
        plVar25 = local_d8;
        if (*local_148 != 0) {
          puVar19 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar19 = &DAT_025f0d98;
          puVar19[2] = 0;
          puVar19[3] = 0;
          puVar19[4] = 0;
          puVar19[5] = 0;
          puVar19[6] = 0;
          puVar19[7] = 0;
          (*DAT_025f0db0)();
          uVar39 = local_b0;
          FUN_015c1480(3,local_b0 & 0xffffffff);
          local_68 = puVar19;
          FUN_015c1480(3,uVar39 & 0xffffffff);
          FUN_00c8e690();
          plVar32 = local_40;
          if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
              (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00c92170();
          FUN_00c92160();
          auVar56 = _DAT_02411250;
          fVar2 = _UNK_0241124c;
          fVar59 = _UNK_02411248;
          fVar58 = _UNK_02411244;
          fVar60 = _DAT_02411240;
          uVar10 = _UNK_0239014c;
          uVar9 = _UNK_02390148;
          uVar15 = _UNK_02390144;
          uVar45 = _DAT_02390140;
          local_60 = plVar32;
          dVar28 = DAT_02411970 / local_90;
          if (0 < (int)(uint)local_b0) {
            uVar39 = local_50[2];
            uVar43 = local_b8[2];
            uVar36 = plVar32[2];
            uVar8 = DAT_023b3e04;
            fVar3 = DAT_02394270;
            if ((uint)local_b0 < 4) {
              dVar38 = 0.0;
            }
            else {
              uVar27 = uVar36 + (longlong)dVar42 * 4;
              dVar38 = 0.0;
              if ((uVar39 + (longlong)dVar42 * 4 <= uVar36 || uVar27 <= uVar39) &&
                 (uVar43 + (longlong)dVar42 * 4 <= uVar36 || uVar27 <= uVar43)) {
                dVar38 = (double)(ulonglong)(SUB84(dVar42,0) & 0xfffffffc);
                dVar40 = 0.0;
                do {
                  auVar61 = *(undefined1 (*) [16])(uVar39 + (longlong)dVar40 * 4);
                  pfVar1 = (float *)(uVar43 + (longlong)dVar40 * 4);
                  auVar53._0_4_ = *pfVar1 * auVar61._0_4_;
                  auVar53._4_4_ = pfVar1[1] * auVar61._4_4_;
                  auVar53._8_4_ = pfVar1[2] * auVar61._8_4_;
                  auVar53._12_4_ = pfVar1[3] * auVar61._12_4_;
                  auVar61 = sqrtps(auVar61,auVar53);
                  auVar62._0_4_ = auVar61._0_4_ & uVar45;
                  auVar62._4_4_ = auVar61._4_4_ & uVar15;
                  auVar62._8_4_ = auVar61._8_4_ & uVar9;
                  auVar62._12_4_ = auVar61._12_4_ & uVar10;
                  auVar54._4_4_ = -(uint)(auVar53._4_4_ == fVar58);
                  auVar54._0_4_ = -(uint)(auVar53._0_4_ == fVar60);
                  auVar54._8_4_ = -(uint)(auVar53._8_4_ == fVar59);
                  auVar54._12_4_ = -(uint)(auVar53._12_4_ == fVar2);
                  auVar61 = blendvps(auVar62,auVar56,auVar54);
                  *(undefined1 (*) [16])(uVar36 + (longlong)dVar40 * 4) = auVar61;
                  dVar40 = (double)((longlong)dVar40 + 4);
                } while (dVar38 != dVar40);
                uVar8 = DAT_023b3e04;
                fVar3 = DAT_02394270;
                uVar45 = _DAT_02390140;
                if (dVar38 == dVar42) goto LAB_014c12f3;
              }
            }
            do {
              fVar60 = *(float *)(uVar39 + (longlong)dVar38 * 4) *
                       *(float *)(uVar43 + (longlong)dVar38 * 4);
              uVar15 = -(uint)(fVar60 <= fVar3);
              *(uint *)(uVar36 + (longlong)dVar38 * 4) =
                   uVar15 & uVar8 | ~uVar15 & (uint)SQRT(fVar60) & uVar45;
              dVar38 = (double)((longlong)dVar38 + 1);
            } while (dVar42 != dVar38);
          }
LAB_014c12f3:
          local_150 = CONCAT44(local_150._4_4_,(int)dVar28);
          iVar13 = 0;
          do {
            if ((iVar13 != 0) || (local_a4 < 0xf)) {
              if (iVar13 == 1) {
                if (local_a0._0_1_ == '\0') goto LAB_014c1310;
                iVar24 = 0;
                iVar14 = FUN_00e7d850(((double)*(int *)local_88[2] / local_118) / local_90);
                local_e8 = local_e8 & 0xffffffff00000000;
              }
              else {
                local_e8 = local_e8 & 0xffffffff00000000;
                iVar14 = (int)local_b0;
                iVar24 = 0;
                if (iVar13 == 2) {
                  if ((byte)local_9c == '\0') break;
                  uVar22 = *(undefined8 *)((longlong)*(int *)(local_88 + 3) + -8 + local_88[2]);
                  uVar22 = FUN_00e7d850(((double)((int)((ulonglong)uVar22 >> 0x20) + (int)uVar22) /
                                        local_118) / local_90);
                  iVar24 = (int)uVar22;
                  local_e8 = CONCAT44(local_e8._4_4_,(int)CONCAT71((int7)((ulonglong)uVar22 >> 8),1)
                                     );
                  iVar14 = (int)local_b0;
                }
              }
              local_e0 = (double)CONCAT44(local_e0._4_4_,iVar24);
              FUN_015b46b0((longlong)iVar24,iVar14 - iVar24);
              plVar32 = local_40;
              if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
                  (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              local_48 = (longlong *)CONCAT44(local_48._4_4_,iVar13);
              uVar39 = (ulonglong)*(uint *)((longlong)plVar32 + 0xc);
              while (1 < (int)uVar39) {
                lVar18 = plVar32[2];
                uVar43 = 0xffffffff;
                uVar36 = 1;
                auVar48 = ZEXT416(DAT_02391078);
                do {
                  local_58 = (longlong *)CONCAT44(local_58._4_4_,auVar48._0_4_);
                  iVar13 = FUN_00e7d850(*(double *)(*(longlong *)(lVar18 + uVar36 * 8) + 0x10) -
                                        *(double *)(*(longlong *)(lVar18 + -8 + uVar36 * 8) + 0x10))
                  ;
                  iVar14 = FUN_00e7d850(*(double *)
                                         (*(longlong *)(plVar32[2] + 8 + uVar36 * 8) + 0x10) -
                                        *(double *)(*(longlong *)(plVar32[2] + uVar36 * 8) + 0x10));
                  plVar25 = local_d8;
                  lVar18 = plVar32[2];
                  fVar60 = (float)*(double *)(*(longlong *)(lVar18 + uVar36 * 8) + 0x18);
                  auVar56 = ZEXT816(0);
                  if (DAT_0239425c < fVar60) {
                    auVar49._4_4_ = fVar60;
                    auVar49._0_4_ = fVar60;
                    auVar49._8_8_ = 0;
                    auVar55._0_4_ = fVar60 * DAT_02391090;
                    auVar55._4_4_ = auVar55._0_4_;
                    auVar55._8_8_ = 0;
                    auVar6._4_4_ = (float)*(double *)(*(longlong *)(lVar18 + 8 + uVar36 * 8) + 0x18)
                    ;
                    auVar6._0_4_ = (float)*(double *)
                                           (*(longlong *)(lVar18 + -8 + uVar36 * 8) + 0x18);
                    auVar6._8_8_ = 0;
                    auVar56 = maxps(auVar55,auVar6);
                    auVar56 = divps(auVar49,auVar56);
                  }
                  fVar60 = (float)iVar13 * auVar56._0_4_;
                  fVar58 = (float)iVar14 * auVar56._4_4_;
                  fVar59 = auVar56._12_4_ * 0.0;
                  auVar48._4_4_ = fVar58;
                  auVar48._0_4_ = fVar58;
                  auVar48._8_4_ = fVar59;
                  auVar48._12_4_ = fVar59;
                  if (fVar60 <= fVar58) {
                    auVar48._0_4_ = fVar60;
                  }
                  if (auVar48._0_4_ < local_58._0_4_) {
                    uVar43 = uVar36 & 0xffffffff;
                  }
                  else {
                    auVar48._0_4_ = local_58._0_4_;
                  }
                  uVar36 = uVar36 + 2;
                  uVar39 = (ulonglong)*(int *)((longlong)plVar32 + 0xc);
                } while ((longlong)uVar36 < (longlong)uVar39);
                if ((*(int *)((longlong)plVar32 + 0xc) < 4) || (DAT_023908ec < auVar48._0_4_))
                break;
                if ((int)uVar43 != -1) {
                  FUN_00d23620();
                  FUN_00d23620();
                  uVar39 = (ulonglong)*(uint *)((longlong)plVar32 + 0xc);
                }
                if ((int)uVar39 < 4) break;
              }
              puVar19 = (undefined8 *)FUN_00e8fc40();
              FUN_00d4ff40();
              *puVar19 = &DAT_025683c0;
              (*pcVar29)();
              FUN_00c92170();
              FUN_00c92160();
              local_70 = puVar19;
              puVar19 = (undefined8 *)FUN_00e8fc40();
              iVar13 = (int)(float)local_48;
              FUN_00d4ff40();
              *puVar19 = &DAT_025683c0;
              (*pcVar29)();
              FUN_00c92170();
              local_98 = puVar19;
              if (*(int *)((longlong)plVar32 + 0xc) < 2) {
LAB_014c1bca:
                FUN_00d50b20();
              }
              else {
                local_c0 = 0xffffffff;
                local_128 = (code *)((ulonglong)local_128 & 0xffffffff00000000);
                lVar18 = 1;
                do {
                  iVar14 = FUN_00e7d850(*(undefined8 *)
                                         (*(longlong *)(plVar32[2] + lVar18 * 8) + 0x10));
                  iVar13 = FUN_00e7d850(*(undefined8 *)
                                         (*(longlong *)(plVar32[2] + -8 + lVar18 * 8) + 0x10));
                  iVar24 = FUN_00e7d850(*(undefined8 *)
                                         (*(longlong *)(plVar32[2] + 8 + lVar18 * 8) + 0x10));
                  iVar14 = iVar14 + local_e0._0_4_;
                  iVar33 = (iVar24 + local_e0._0_4_) - (iVar13 + local_e0._0_4_);
                  bVar30 = (int)local_150 < iVar33;
                  if ((char)local_e8 != '\0') {
                    fVar60 = *(float *)(local_60[2] + (longlong)iVar14 * 4);
                    if ((DAT_02394274 < fVar60) &&
                       (DAT_02390128 <
                        *(float *)(local_60[2] + (longlong)(iVar13 + local_e0._0_4_) * 4) / fVar60))
                    {
                      bVar30 = false;
                    }
                  }
                  iVar13 = (int)(float)local_48;
                  if ((float)local_48 == 1.4013e-45) {
                    fVar60 = *(float *)(local_60[2] + (longlong)iVar14 * 4);
                    if (fVar60 <= DAT_02394274) goto LAB_014c1790;
                    if ((*(float *)(local_60[2] + (longlong)(iVar24 + local_e0._0_4_) * 4) / fVar60
                         <= DAT_02390128) && (!(bool)(bVar30 ^ 1))) goto LAB_014c179c;
                  }
                  else {
LAB_014c1790:
                    if (bVar30) {
LAB_014c179c:
                      lVar20 = (longlong)iVar14;
                      fVar60 = *(float *)(local_b8[2] + lVar20 * 4);
                      fVar58 = DAT_023908e0;
                      if (DAT_02394274 < fVar60) {
                        fVar58 = *(float *)(local_50[2] + lVar20 * 4) / fVar60;
                      }
                      if (DAT_02394274 < *(float *)(local_60[2] + lVar20 * 4)) {
                        local_58 = (longlong *)CONCAT44(local_58._4_4_,fVar58);
                        fVar58 = (float)_powf();
                        fVar58 = local_58._0_4_ / fVar58;
                      }
                      puVar11 = local_70;
                      local_58 = (longlong *)CONCAT44(local_58._4_4_,fVar58);
                      local_138 = CONCAT71(local_138._1_7_,DAT_02392fd8 < fVar58);
                      local_130 = CONCAT44(local_130._4_4_,iVar33);
                      uVar22 = FUN_00e7b4e0();
                      iVar13 = *(int *)(puVar11 + 3);
                      uVar47 = FUN_00c8e340(extraout_XMM0_Qa_00,1);
                      puVar19 = local_98;
                      *(undefined8 *)(puVar11[2] + (longlong)iVar13) = uVar22;
                      iVar13 = *(int *)(local_98 + 3);
                      FUN_00c8e340(uVar47,1);
                      fVar60 = DAT_02392fd8;
                      *(undefined1 *)(puVar19[2] + (longlong)iVar13) = (undefined1)local_138;
                      iVar13 = (int)(float)local_48;
                      if (fVar60 < local_58._0_4_) {
                        if ((int)local_128 < (int)local_130) {
                          iVar14 = *(int *)(local_70 + 3);
                          iVar24 = iVar14 + 7;
                          if (-1 < iVar14) {
                            iVar24 = iVar14;
                          }
                          local_c0 = (ulonglong)((iVar24 >> 3) - 1);
                          local_128 = (code *)CONCAT44(local_128._4_4_,(int)local_130);
                        }
                      }
                    }
                  }
                  puVar19 = local_70;
                  lVar18 = lVar18 + 2;
                } while (lVar18 < *(int *)((longlong)plVar32 + 0xc));
                if ((uint)local_c0 != 0xffffffff) {
                  iVar14 = *(int *)(local_70 + 3);
                  uVar45 = (uint)local_c0;
                  if (0xf < iVar14) {
                    if (0 < (int)(uint)local_c0) {
                      uVar15 = (uint)local_c0 - 1;
                      if (*(char *)(local_98[2] + (ulonglong)uVar15) != '\0') {
                        FUN_00e7b4e0();
                        FUN_00c921e0();
                        FUN_00e7b4e0();
                        FUN_00c921e0();
                        uVar22 = FUN_00e7b4e0();
                        *(undefined8 *)(puVar19[2] + (ulonglong)uVar15 * 8) = uVar22;
                        iVar14 = *(int *)(puVar19 + 3);
                        uVar45 = uVar15;
                      }
                    }
                    iVar13 = iVar14 + 7;
                    if (-1 < iVar14) {
                      iVar13 = iVar14;
                    }
                    if (((int)uVar45 < (iVar13 >> 3) + -1) &&
                       (lVar18 = (longlong)(int)uVar45, *(char *)(local_98[2] + 1 + lVar18) != '\0')
                       ) {
                      local_58 = (longlong *)
                                 CONCAT44(local_58._4_4_,*(undefined4 *)(local_70[2] + lVar18 * 8));
                      FUN_00e7b4e0();
                      FUN_00c921e0();
                      FUN_00e7b4e0();
                      FUN_00c921e0();
                      uVar22 = FUN_00e7b4e0();
                      *(undefined8 *)(local_70[2] + lVar18 * 8) = uVar22;
                    }
                    iVar13 = (int)(float)local_48;
                    if (uVar45 == 0xffffffff) goto LAB_014c1bb5;
                  }
                  if (local_a4 < 0xf) {
                    if ((int)*(uint *)(local_70 + 3) < 0x10) goto LAB_014c1bb5;
                    uVar15 = (*(uint *)(local_70 + 3) >> 3) - 1;
                    bVar30 = 0 < (int)uVar45 && (int)uVar45 < (int)uVar15;
                    cVar12 = uVar45 == 0 || bVar30;
                    if ((bVar30) || (uVar45 == uVar15)) goto LAB_014c1aa2;
joined_r0x014c1b23:
                    if (cVar12 == '\0') goto LAB_014c1bb5;
                  }
                  else {
                    if (iVar13 != 1) {
                      if ((char)local_e8 == '\0') goto LAB_014c1bb5;
                      iVar14 = *(int *)(local_70 + 3);
                      iVar24 = iVar14 + 7;
                      if (-1 < iVar14) {
                        iVar24 = iVar14;
                      }
                      cVar12 = uVar45 != (iVar24 >> 3) - 1U;
LAB_014c1aa2:
                      dVar42 = (double)*(int *)(local_70[2] + (longlong)(int)uVar45 * 8) * local_90
                               + local_140;
                      if (DAT_024111a0 < dVar42 - local_140) {
                        local_58 = (longlong *)CONCAT71(local_58._1_7_,cVar12);
                        iVar14 = FUN_00e7d850(dVar42 * local_d0);
                        lVar18 = *local_148;
                        iVar13 = *(int *)(lVar18 + 0x18);
                        FUN_00c8e340(extraout_XMM0_Qa_01,1);
                        *(longlong *)(*(longlong *)(lVar18 + 0x10) + (longlong)iVar13) =
                             (longlong)iVar14;
                        iVar13 = (int)(float)local_48;
                        cVar12 = (char)local_58;
                      }
                      goto joined_r0x014c1b23;
                    }
                    cVar12 = true;
                    if (uVar45 != 0) goto LAB_014c1aa2;
                  }
                  dVar42 = (double)(*(int *)(local_70[2] + 4 + (longlong)(int)uVar45 * 8) +
                                   *(int *)(local_70[2] + (longlong)(int)uVar45 * 8)) * local_90 +
                           local_140;
                  if (DAT_024111a0 < dVar46 - dVar42) {
                    iVar14 = FUN_00e7d850(dVar42 * local_d0);
                    lVar18 = *local_148;
                    iVar13 = *(int *)(lVar18 + 0x18);
                    FUN_00c8e340(extraout_XMM0_Qa_02,1);
                    *(longlong *)(*(longlong *)(lVar18 + 0x10) + (longlong)iVar13) =
                         (longlong)iVar14;
                    iVar13 = (int)(float)local_48;
                  }
                }
LAB_014c1bb5:
                plVar25 = local_d8;
                if (local_98 != (undefined8 *)0x0) goto LAB_014c1bca;
              }
              if (local_70 != (undefined8 *)0x0) {
                FUN_00d50b20();
              }
              FUN_00d50b20();
              if (local_a4 < 0xf) break;
            }
LAB_014c1310:
            iVar13 = iVar13 + 1;
          } while (iVar13 != 3);
          if (local_60 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if (local_68 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
        }
        if (local_50 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if (local_b8 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if (local_120 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if (0xe < local_a4) goto LAB_014c1c64;
        *unaff_RSI = 0x7fffffffffffffff;
      }
      else {
        iVar14 = *(int *)local_88[2];
        uVar39 = *(ulonglong *)((longlong)(int)uVar45 + -8 + (longlong)local_88[2]);
        iVar33 = (int)uVar39 + (int)(uVar39 >> 0x20);
        iVar24 = (int)local_68 - iVar33;
        local_9c = CONCAT31((int3)((uint)iVar33 >> 8),iVar13 < iVar24);
        auVar61._0_8_ = (double)iVar33;
        auVar61._8_8_ = (double)(_UNK_0240e464 + iVar14);
        auVar56._8_8_ = local_118;
        auVar56._0_8_ = local_118;
        local_1c8._0_16_ = divpd(auVar61,auVar56);
        local_a0 = (float)CONCAT31((int3)((uint)iVar14 >> 8),iVar13 < iVar14);
        if (iVar13 < iVar14) goto LAB_014c0af1;
        local_c8 = CONCAT44(local_c8._4_4_,local_9c);
        local_7c = local_a0;
        if (iVar13 < iVar24) goto LAB_014c0af1;
LAB_014c1c64:
        if (((uint)local_7c & 1) != 0) {
          uVar22 = FUN_00e7dae0((double)local_1c8._8_8_ * local_d0);
          *unaff_RSI = uVar22;
        }
        if ((local_c8 & 1) != 0) {
          uVar22 = FUN_00e7dae0(local_d0 * (double)local_1c8._0_8_);
          *param_2 = uVar22;
        }
      }
      if (local_88 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      if (local_f0 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      if (local_f8 == (undefined8 *)0x0) goto LAB_014c1cf6;
    }
  }
  FUN_00d50b20();
LAB_014c1cf6:
  if (plVar25 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


