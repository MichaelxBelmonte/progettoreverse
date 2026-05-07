// Function: FUN_01adaf60
// Address: 01adaf60
// Size: 6337 bytes
// Class: MUScaleRulerView


/* WARNING: Removing unreachable block (ram,0x01adc749) */
/* WARNING: Removing unreachable block (ram,0x01adc755) */
/* WARNING: Removing unreachable block (ram,0x01adbad9) */
/* WARNING: Removing unreachable block (ram,0x01adbae2) */
/* WARNING: Removing unreachable block (ram,0x01adc0ce) */
/* WARNING: Removing unreachable block (ram,0x01adc0da) */
/* WARNING: Removing unreachable block (ram,0x01adb959) */
/* WARNING: Removing unreachable block (ram,0x01adb965) */
/* WARNING: Removing unreachable block (ram,0x01adc84f) */
/* WARNING: Removing unreachable block (ram,0x01adc85b) */
/* WARNING: Removing unreachable block (ram,0x01adb90e) */
/* WARNING: Removing unreachable block (ram,0x01adb917) */
/* WARNING: Removing unreachable block (ram,0x01adc66a) */
/* WARNING: Removing unreachable block (ram,0x01adc673) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01adaf60(dword *param_1,undefined8 param_2)

{
  float fVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  longlong lVar8;
  undefined8 *puVar9;
  int iVar10;
  pthread_key_t pVar11;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  dword *pdVar12;
  dword *pdVar13;
  dword *pdVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float extraout_XMM0_Db;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 extraout_XMM0_Qb_03;
  undefined1 auVar23 [16];
  undefined8 extraout_XMM0_Qb_04;
  undefined8 extraout_XMM0_Qb_05;
  undefined8 extraout_XMM0_Qb_06;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  dword *local_130;
  char local_128;
  longlong *local_118;
  char local_110;
  uint local_90;
  float local_88;
  float fStack_84;
  uint uStack_80;
  uint uStack_7c;
  float local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  dword *local_48;
  char local_40;
  
  fVar15 = (float)((ulonglong)param_2 >> 0x20);
  FUN_01e436c0();
  fVar15 = fVar15 + extraout_XMM0_Db + DAT_0241c3ec;
  (**(code **)(*unaff_RDI + 0x920))();
  pdVar14 = (dword *)unaff_RDI[0x36];
  if (pdVar14 == (dword *)0x0) {
    FUN_01ad8590();
    pdVar14 = (dword *)unaff_RDI[0x36];
  }
  if (pdVar14 == (dword *)0x0) {
    FUN_01ad3cb0();
    if ((local_48 != (dword *)0x0) && (pdVar14 = local_48, local_40 == '\0')) {
      FUN_00d50b00();
    }
  }
  else {
    FUN_00d50b00();
  }
  if (pdVar14 != (dword *)0x0) {
    iVar4 = 0;
    local_90 = 0;
    if (unaff_RDI[0x39] != 0) {
      iVar6 = *(int *)(unaff_RDI[0x39] + 0x18);
      iVar10 = iVar6 + 3;
      if (-1 < iVar6) {
        iVar10 = iVar6;
      }
      local_90 = iVar10 >> 2;
      param_1 = (dword *)(ulonglong)local_90;
    }
    if ((dword *)unaff_RDI[0x36] != pdVar14) {
      pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        param_1 = pdVar14;
      }
      FUN_0173b6f0();
      pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar3 = FUN_01736840();
      if ((local_40 != '\0') && (local_48 != (dword *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar3 != '\0') {
        pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          param_1 = pdVar14;
        }
        FUN_0173b6f0();
        pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar4 = FUN_01736c50();
        if ((local_40 != '\0') && (local_48 != (dword *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
    if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      param_1 = pdVar14;
    }
    FUN_0173b790();
    pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar5 = FUN_01770c70();
    if ((local_40 != '\0') && (local_48 != (dword *)0x0)) {
      FUN_00d50b20();
    }
    pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
    if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      param_1 = pdVar14;
    }
    FUN_0173b790();
    pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar3 = FUN_01770870();
    if ((local_40 != '\0') && (local_48 != (dword *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar3 != '\0') {
      pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
      pdVar13 = pdVar14;
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        pdVar13 = *(dword **)(pdVar14 + ((ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4) * 2);
      }
      iVar6 = (**(code **)(*(longlong *)pdVar13 + 0x3a8))();
      param_1 = (dword *)(ulonglong)uVar5;
      iVar4 = iVar4 + uVar5;
      do {
        iVar4 = iVar4 - uVar5;
      } while (iVar6 <= iVar4);
    }
    pcVar2 = DAT_02680418;
    fVar16 = extraout_XMM0_Db + DAT_0241f374;
    do {
      while( true ) {
        pdVar13 = local_48;
        pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          param_1 = pdVar14;
        }
        FUN_0173b790();
        pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar3 = FUN_01770870();
        if ((local_40 != '\0') && (local_48 != (dword *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar3 != '\0') break;
        uVar19 = (**(code **)(*unaff_RDI + 0x918))((float)*(int *)((longlong)unaff_RDI + 0x1c4));
        uVar20 = (**(code **)(*unaff_RDI + 0x918))((float)(int)unaff_RDI[0x38]);
        auVar27._0_4_ = (uint)(float)uVar19 & _DAT_023945e0;
        auVar27._4_4_ = (uint)((ulonglong)uVar19 >> 0x20) & _UNK_023945e4;
        auVar27._8_4_ = (uint)extraout_XMM0_Qb & _UNK_023945e8;
        auVar27._12_4_ = (uint)((ulonglong)extraout_XMM0_Qb >> 0x20) & _UNK_023945ec;
        auVar28._4_12_ = SUB1612(auVar27 | _DAT_023945f0,4);
        auVar28._0_4_ = SUB164(auVar27 | _DAT_023945f0,0) + (float)uVar19;
        auVar21 = roundss(auVar28,auVar28,0xb);
        if ((fVar15 < auVar21._0_4_) ||
           (auVar29._0_4_ = (uint)(float)uVar20 & _DAT_023945e0,
           auVar29._4_4_ = (uint)((ulonglong)uVar20 >> 0x20) & _UNK_023945e4,
           auVar29._8_4_ = (uint)extraout_XMM0_Qb_00 & _UNK_023945e8,
           auVar29._12_4_ = (uint)((ulonglong)extraout_XMM0_Qb_00 >> 0x20) & _UNK_023945ec,
           auVar30._4_12_ = SUB1612(auVar29 | _DAT_023945f0,4),
           auVar30._0_4_ = SUB164(auVar29 | _DAT_023945f0,0) + (float)uVar20,
           auVar38 = roundss(auVar30,auVar30,0xb), auVar38._0_4_ < fVar16)) goto LAB_01adc1af;
        iVar4 = *(int *)((longlong)unaff_RDI + 0x284);
        auVar34 = auVar38;
joined_r0x01adb741:
        if (iVar4 == 3) {
          FUN_01e3f820();
          auVar31 = blendps(auVar34,_DAT_0241c700,0xd);
        }
        else {
          auVar31._4_4_ = DAT_023dccf4._4_4_;
          auVar31._0_4_ = (float)DAT_023dccf4;
          auVar31._8_8_ = 0;
        }
        auVar22._4_12_ = auVar38._4_12_;
        auVar22._0_4_ = auVar38._0_4_ - auVar21._0_4_;
        auVar33._4_12_ = auVar31._4_12_;
        auVar33._0_4_ = auVar31._0_4_ + DAT_023b1608;
        auVar34 = insertps(auVar33,auVar22,0x10);
        auVar38 = insertps(_DAT_0241c740,auVar21,0x10);
        FUN_00d05530(auVar38._0_8_);
        FUN_01ada2c0();
        if ((dword *)unaff_RDI[0x36] == pdVar14) {
          local_88 = auVar34._0_4_;
          fStack_84 = auVar34._4_4_;
          uVar19 = FUN_00d05530();
          fVar17 = (float)((ulonglong)uVar19 >> 0x20);
          fStack_84 = fVar17 + fStack_84;
          (**(code **)(*unaff_RDI + 0x920))();
          (**(code **)(*unaff_RDI + 0x920))();
          pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
          if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            param_1 = pdVar14;
          }
          iVar4 = FUN_017423e0();
          pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
          if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            param_1 = pdVar14;
          }
          iVar6 = FUN_017423e0();
          FUN_01d39800();
          if ((local_40 == '\0') && (local_48 != (dword *)0x0)) {
            FUN_00d50b00();
          }
          FUN_01d48370();
          (**(code **)(*(longlong *)*unaff_RSI + 0x398))();
          if (iVar4 <= iVar6) {
            do {
              pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
              pdVar12 = pdVar14;
              if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                param_1 = pdVar14;
                pdVar12 = *(dword **)(pdVar14 + ((ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4) * 2)
                ;
              }
              (**(code **)(*(longlong *)pdVar12 + 0x3a0))();
              pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
              if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                param_1 = pdVar14;
              }
              FUN_01740240();
              if (local_118 != (longlong *)0x0) {
                pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
                if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                  param_1 = pdVar14;
                }
                FUN_01740240();
                if (local_128 == '\0') {
                  if (local_130 != (dword *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_128 = '\0';
                }
                local_40 = '\0';
                FUN_00d23d70();
                if (local_130 != (dword *)0x0) {
                  FUN_00d50b20();
                }
                local_48 = local_130;
                if ((local_128 != '\0') && (local_130 != (dword *)0x0)) {
                  FUN_00d50b20();
                }
              }
              if ((local_110 != '\0') && (local_118 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              uVar20 = (**(code **)(*unaff_RDI + 0x918))();
              auVar35._0_4_ = (uint)(float)uVar20 & _DAT_023945e0;
              auVar35._4_4_ = (uint)((ulonglong)uVar20 >> 0x20) & _UNK_023945e4;
              auVar35._8_4_ = (uint)extraout_XMM0_Qb_03 & _UNK_023945e8;
              auVar35._12_4_ = (uint)((ulonglong)extraout_XMM0_Qb_03 >> 0x20) & _UNK_023945ec;
              auVar36._4_12_ = SUB1612(auVar35 | _DAT_023945f0,4);
              auVar36._0_4_ = SUB164(auVar35 | _DAT_023945f0,0) + (float)uVar20;
              auVar38 = roundss(in_XMM3,auVar36,0xb);
              FUN_01ad93a0();
              in_XMM3 = ZEXT416((uint)(auVar38._0_4_ + DAT_02390d34 + DAT_02390d00));
              FUN_01ad93a0();
              iVar4 = iVar4 + 1;
            } while (iVar6 + 1 != iVar4);
          }
          fVar18 = local_88 * DAT_02390120;
          for (fVar26 = fVar17; fVar26 < fStack_84; fVar26 = fVar26 + DAT_02390124) {
            (**(code **)(*unaff_RDI + 0x920))();
            iVar4 = FUN_00e7d780();
            if ((char)unaff_RDI[0x37] == '\0') {
              uVar5 = iVar4 - (int)unaff_RDI[0x38];
            }
            else {
              uVar5 = iVar4 % *(int *)((longlong)unaff_RDI + 0x1bc);
            }
            local_88 = 0.0;
            if ((-1 < (int)uVar5) && (local_88 = 0.0, (int)uVar5 < (int)local_90)) {
              param_1 = *(dword **)(unaff_RDI[0x39] + 0x10);
              local_88 = (float)param_1[uVar5];
            }
            if ((char)unaff_RDI[0x3b] == '\0') {
              FUN_01cfbee0();
              if (local_40 == '\0') {
                if (local_48 != (dword *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_40 = '\0';
              }
              FUN_01d488d0();
              if (local_48 != (dword *)0x0) {
                FUN_00d50b20();
              }
              if ((local_40 != '\0') && (local_48 != (dword *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              fVar1 = (float)(~-(uint)(local_88 <= DAT_02394270) &
                              (uint)SQRT(local_88) & _DAT_02390140 |
                             -(uint)(local_88 <= DAT_02394270) & DAT_023b3e04);
              FUN_01cfbee0(fVar1 * 0.0 + DAT_02390124,fVar1 * DAT_0241c6d4 + DAT_0239011c,
                           fVar1 * DAT_02390120 + 0.0);
              if (local_40 == '\0') {
                if (local_48 != (dword *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_40 = '\0';
              }
              FUN_01d488d0();
              if (local_48 != (dword *)0x0) {
                FUN_00d50b20();
              }
              if ((local_40 != '\0') && (local_48 != (dword *)0x0)) {
                FUN_00d50b20();
              }
            }
            in_XMM3 = ZEXT416((uint)fVar26);
            (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
          }
          puVar9 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar9 = &DAT_02680400;
          *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
          puVar9[6] = 0;
          puVar9[7] = 0;
          *(undefined8 *)((longlong)puVar9 + 0x39) = 0;
          *(undefined8 *)((longlong)puVar9 + 0x41) = 0;
          (*pcVar2)();
          for (; fVar17 < fStack_84; fVar17 = fVar17 + DAT_02390124) {
            (**(code **)(*unaff_RDI + 0x920))();
            iVar4 = FUN_00e7d780();
            if ((char)unaff_RDI[0x37] == '\0') {
              uVar5 = iVar4 - (int)unaff_RDI[0x38];
            }
            else {
              uVar5 = iVar4 % *(int *)((longlong)unaff_RDI + 0x1bc);
            }
            auVar38 = ZEXT816(0);
            if ((-1 < (int)uVar5) && (auVar38 = ZEXT816(0), (int)uVar5 < (int)local_90)) {
              param_1 = *(dword **)(unaff_RDI[0x39] + 0x10);
              auVar38 = ZEXT416(param_1[uVar5]);
            }
            auVar23._4_12_ = auVar38._4_12_;
            auVar23._0_4_ = auVar38._0_4_ * fVar18 + (float)uVar19;
            FUN_01d38ba0(auVar23._0_8_);
          }
          FUN_01cfbee0();
          if (local_40 == '\0') {
            if (local_48 != (dword *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          FUN_01d488d0();
          if (local_48 != (dword *)0x0) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != (dword *)0x0)) {
            FUN_00d50b20();
          }
          (**(code **)(*(longlong *)*unaff_RSI + 0x3a8))();
          FUN_01d48390();
          if (puVar9 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
          if (pdVar13 != (dword *)0x0) {
            FUN_00d50b20();
          }
        }
        pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          param_1 = pdVar14;
        }
        FUN_0173b790();
        pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar3 = FUN_01770870();
        if ((local_40 != '\0') && (local_48 != (dword *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar3 == '\0') goto LAB_01adc1af;
      }
      pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
      pdVar12 = pdVar14;
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        param_1 = pdVar14;
        pdVar12 = *(dword **)(pdVar14 + ((ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4) * 2);
      }
      (**(code **)(*(longlong *)pdVar12 + 0x3a0))();
      pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
      pdVar12 = pdVar14;
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        param_1 = pdVar14;
        pdVar12 = *(dword **)(pdVar14 + ((ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4) * 2);
      }
      (**(code **)(*(longlong *)pdVar12 + 0x3a0))();
      pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
      pdVar12 = pdVar14;
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        param_1 = pdVar14;
        pdVar12 = *(dword **)(pdVar14 + ((ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4) * 2);
      }
      pVar11 = (pthread_key_t)param_1;
      (**(code **)(*(longlong *)pdVar12 + 0x3a0))();
      pvVar7 = _pthread_getspecific(pVar11);
      pdVar12 = pdVar14;
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        pdVar12 = *(dword **)(pdVar14 + ((ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4) * 2);
      }
      (**(code **)(*(longlong *)pdVar12 + 0x3a0))();
      uVar19 = (**(code **)(*unaff_RDI + 0x918))();
      fVar17 = (float)(**(code **)(*unaff_RDI + 0x918))();
      fVar26 = ((float)uVar19 + fVar17) * DAT_0239011c;
      uVar20 = (**(code **)(*unaff_RDI + 0x918))();
      fVar17 = (float)(**(code **)(*unaff_RDI + 0x918))();
      uStack_64 = (uint)((ulonglong)uVar19 >> 0x20);
      uStack_60 = (uint)extraout_XMM0_Qb_01;
      uStack_5c = (uint)((ulonglong)extraout_XMM0_Qb_01 >> 0x20);
      auVar32._0_4_ = (uint)fVar26 & _DAT_023945e0;
      auVar32._4_4_ = uStack_64 & _UNK_023945e4;
      auVar32._8_4_ = uStack_60 & _UNK_023945e8;
      auVar32._12_4_ = uStack_5c & _UNK_023945ec;
      auVar34._4_12_ = SUB1612(auVar32 | _DAT_023945f0,4);
      auVar34._0_4_ = SUB164(auVar32 | _DAT_023945f0,0) + fVar26;
      local_88 = (float)uVar20;
      fStack_84 = (float)((ulonglong)uVar20 >> 0x20);
      uStack_80 = (uint)extraout_XMM0_Qb_02;
      uStack_7c = (uint)((ulonglong)extraout_XMM0_Qb_02 >> 0x20);
      fVar17 = (local_88 + fVar17) * DAT_0239011c;
      auVar38._0_4_ = (uint)fVar17 & _DAT_023945e0;
      auVar38._4_4_ = (uint)fStack_84 & _UNK_023945e4;
      auVar38._8_4_ = uStack_80 & _UNK_023945e8;
      auVar38._12_4_ = uStack_7c & _UNK_023945ec;
      auVar21._4_12_ = SUB1612(auVar38 | _DAT_023945f0,4);
      auVar21._0_4_ = SUB164(auVar38 | _DAT_023945f0,0) + fVar17;
      auVar38 = roundss(ZEXT816(0),auVar21,0xb);
      auVar21 = roundss(ZEXT816(0),auVar34,0xb);
      cVar3 = (auVar38._0_4_ < fVar16) * '\x05';
      param_1 = &MACH_HEADER.cputype;
      if (fVar15 < auVar21._0_4_) {
        cVar3 = '\x04';
      }
      in_XMM3 = _DAT_023945f0;
      if (cVar3 == '\0') {
        iVar4 = *(int *)((longlong)unaff_RDI + 0x284);
        goto joined_r0x01adb741;
      }
    } while (cVar3 == '\x04');
LAB_01adc1af:
    if ((((dword *)unaff_RDI[0x36] == pdVar14) && (*(char *)((longlong)unaff_RDI + 0x20a) != '\0'))
       && ((double)unaff_RDI[0x40] <= 0.0)) {
      if ((*(float *)(unaff_RDI + 0x42) == (float)DAT_023dccec) &&
         (!NAN(*(float *)(unaff_RDI + 0x42)) && !NAN((float)DAT_023dccec))) {
        if ((*(float *)((longlong)unaff_RDI + 0x214) == DAT_023dccec._4_4_) &&
           (!NAN(*(float *)((longlong)unaff_RDI + 0x214)) && !NAN(DAT_023dccec._4_4_))) {
          if ((*(float *)(unaff_RDI + 0x43) == (float)DAT_023dccf4) &&
             (!NAN(*(float *)(unaff_RDI + 0x43)) && !NAN((float)DAT_023dccf4))) {
            if ((*(float *)((longlong)unaff_RDI + 0x21c) == DAT_023dccf4._4_4_) &&
               (!NAN(*(float *)((longlong)unaff_RDI + 0x21c)) && !NAN(DAT_023dccf4._4_4_))) {
              pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
              if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                param_1 = pdVar14;
              }
              FUN_0173b790();
              pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01770c70();
              if ((local_40 != '\0') && (local_48 != (dword *)0x0)) {
                FUN_00d50b20();
              }
              do {
                fVar15 = *(float *)(unaff_RDI + 0x33);
                pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
                pdVar13 = pdVar14;
                if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                  param_1 = pdVar14;
                  pdVar13 = *(dword **)
                             (pdVar14 + ((ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4) * 2);
                }
                fVar16 = (float)(**(code **)(*(longlong *)pdVar13 + 0x3a0))();
                auVar38 = ZEXT416((uint)fVar15);
              } while (fVar16 < fVar15);
              do {
                fVar15 = *(float *)(unaff_RDI + 0x33);
                pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
                pdVar13 = pdVar14;
                if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                  param_1 = pdVar14;
                  pdVar13 = *(dword **)
                             (pdVar14 + ((ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4) * 2);
                }
                fVar16 = (float)(**(code **)(*(longlong *)pdVar13 + 0x3a0))();
              } while (fVar15 < fVar16);
              pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
              pdVar13 = pdVar14;
              if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                param_1 = pdVar14;
                pdVar13 = *(dword **)(pdVar14 + ((ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4) * 2)
                ;
              }
              (**(code **)(*(longlong *)pdVar13 + 0x3a0))();
              pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
              pdVar13 = pdVar14;
              if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                param_1 = pdVar14;
                pdVar13 = *(dword **)(pdVar14 + ((ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4) * 2)
                ;
              }
              (**(code **)(*(longlong *)pdVar13 + 0x3a0))();
              pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
              pdVar13 = pdVar14;
              if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                param_1 = pdVar14;
                pdVar13 = *(dword **)(pdVar14 + ((ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4) * 2)
                ;
              }
              pVar11 = (pthread_key_t)param_1;
              (**(code **)(*(longlong *)pdVar13 + 0x3a0))();
              pvVar7 = _pthread_getspecific(pVar11);
              if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                pdVar14 = *(dword **)(pdVar14 + ((ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4) * 2)
                ;
              }
              (**(code **)(*(longlong *)pdVar14 + 0x3a0))();
              uVar19 = (**(code **)(*unaff_RDI + 0x918))();
              fVar15 = (float)(**(code **)(*unaff_RDI + 0x918))();
              uVar20 = (**(code **)(*unaff_RDI + 0x918))();
              fVar16 = (float)(**(code **)(*unaff_RDI + 0x918))();
              if (*(int *)((longlong)unaff_RDI + 0x284) == 3) {
                auVar24._0_8_ = FUN_01e3f820();
                auVar24._8_8_ = extraout_XMM0_Qb_06;
                auVar37 = blendps(auVar38,_DAT_0241c700,0xd);
              }
              else {
                auVar24._4_4_ = DAT_023dccec._4_4_;
                auVar24._0_4_ = (float)DAT_023dccec;
                auVar24._8_8_ = 0;
                auVar37._4_4_ = DAT_023dccf4._4_4_;
                auVar37._0_4_ = (float)DAT_023dccf4;
                auVar37._8_8_ = 0;
              }
              local_88 = (float)uVar19;
              fStack_84 = (float)((ulonglong)uVar19 >> 0x20);
              uStack_80 = (uint)extraout_XMM0_Qb_04;
              uStack_7c = (uint)((ulonglong)extraout_XMM0_Qb_04 >> 0x20);
              fVar15 = (local_88 + fVar15) * DAT_0239011c;
              auVar39._0_4_ = _DAT_023945e0 & (uint)fVar15;
              auVar39._4_4_ = _UNK_023945e4 & (uint)fStack_84;
              auVar39._8_4_ = _UNK_023945e8 & uStack_80;
              auVar39._12_4_ = _UNK_023945ec & uStack_7c;
              auVar40._4_12_ = SUB1612(auVar39 | _DAT_023945f0,4);
              auVar40._0_4_ = SUB164(auVar39 | _DAT_023945f0,0) + fVar15;
              local_68 = (float)uVar20;
              uStack_64 = (uint)((ulonglong)uVar20 >> 0x20);
              uStack_60 = (uint)extraout_XMM0_Qb_05;
              uStack_5c = (uint)((ulonglong)extraout_XMM0_Qb_05 >> 0x20);
              fVar15 = (local_68 + fVar16) * DAT_0239011c;
              auVar42._0_4_ = _DAT_023945e0 & (uint)fVar15;
              auVar42._4_4_ = _UNK_023945e4 & uStack_64;
              auVar42._8_4_ = _UNK_023945e8 & uStack_60;
              auVar42._12_4_ = _UNK_023945ec & uStack_5c;
              auVar38 = roundss(auVar40,auVar40,0xb);
              auVar43._4_12_ = SUB1612(auVar42 | _DAT_023945f0,4);
              auVar43._0_4_ = SUB164(auVar42 | _DAT_023945f0,0) + fVar15;
              auVar21 = roundss(auVar43,auVar43,0xb);
              auVar44._4_12_ = auVar21._4_12_;
              auVar44._0_4_ = auVar21._0_4_ - auVar38._0_4_;
              auVar21 = insertps(auVar37,auVar44,0x10);
              auVar38 = insertps(auVar24,auVar38,0x10);
              unaff_RDI[0x42] = auVar38._0_8_;
              unaff_RDI[0x43] = auVar21._0_8_;
              lVar8 = FUN_00d05530();
              unaff_RDI[0x42] = lVar8;
              unaff_RDI[0x43] = auVar21._0_8_;
            }
          }
        }
      }
      auVar25._8_8_ = 0;
      auVar25._0_8_ = unaff_RDI[0x42];
      fVar15 = (float)((ulonglong)unaff_RDI[0x42] >> 0x20);
      auVar41._0_4_ = fVar15 + *(float *)((longlong)unaff_RDI + 0x20c);
      auVar41._4_4_ = fVar15;
      auVar41._8_8_ = 0;
      auVar38 = insertps(auVar25,auVar41,0x10);
      FUN_01d39800(auVar38._0_8_,unaff_RDI[0x43]);
      if ((local_40 == '\0') && (local_48 != (dword *)0x0)) {
        FUN_00d50b00();
      }
      FUN_01cfcdc0();
      if (local_40 == '\0') {
        if (local_48 != (dword *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      FUN_01d488d0();
      if (local_48 != (dword *)0x0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (dword *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*(longlong *)*unaff_RSI + 0x3a0))();
      (**(code **)(*unaff_RDI + 0x640))();
      (**(code **)(*local_118 + 0x390))();
      if (local_40 == '\0') {
        if (local_48 != (dword *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      FUN_01d488d0();
      if (local_48 != (dword *)0x0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (dword *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_110 != '\0') && (local_118 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*(longlong *)*unaff_RSI + 0x3a8))();
      if (local_48 != (dword *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
  return;
}


