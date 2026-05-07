// Function: FUN_01766120
// Address: 01766120
// Size: 4598 bytes
// Class: Unknown


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_01766120(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  float *pfVar5;
  undefined8 *puVar6;
  bool bVar7;
  undefined1 auVar8 [16];
  bool bVar9;
  bool bVar10;
  bool bVar11;
  code *pcVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  bool bVar19;
  uint uVar20;
  undefined8 *puVar21;
  void *pvVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
  undefined7 uVar27;
  char *pcVar25;
  longlong lVar26;
  pthread_key_t pVar28;
  undefined4 *puVar29;
  char *pcVar30;
  undefined4 *puVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  ulonglong uVar35;
  longlong lVar36;
  uint uVar37;
  undefined4 uVar38;
  float fVar39;
  float fVar40;
  undefined8 uVar41;
  uint extraout_XMM0_Dc;
  uint extraout_XMM0_Dc_00;
  uint extraout_XMM0_Dd;
  uint extraout_XMM0_Dd_00;
  float fVar42;
  float fVar43;
  uint uVar44;
  undefined1 local_a8 [8];
  uint uStack_a0;
  uint uStack_9c;
  ulonglong local_90;
  float local_78;
  char local_58 [8];
  undefined8 *local_50;
  char local_48 [8];
  ulonglong local_40;
  undefined8 *local_38;
  
  uVar2 = *(uint *)(*unaff_RSI + 0xc);
  uVar35 = (ulonglong)uVar2;
  FUN_00c8e690();
  puVar13 = local_50;
  if ((((local_48[0] == '\0') && (local_50 != (undefined8 *)0x0)) &&
      (FUN_00d50b00(), local_48[0] != '\0')) && (local_50 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  ___bzero();
  puVar21 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar21 = &DAT_02572358;
  pcVar12 = DAT_02572370;
  (*DAT_02572370)();
  FUN_00c8e690();
  puVar14 = local_50;
  if (((local_48[0] == '\0') && (local_50 != (undefined8 *)0x0)) &&
     ((FUN_00d50b00(), local_48[0] != '\0' && (local_50 != (undefined8 *)0x0)))) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  FUN_00c8e690();
  puVar15 = local_50;
  if (((local_48[0] == '\0') && (local_50 != (undefined8 *)0x0)) &&
     ((FUN_00d50b00(), local_48[0] != '\0' && (local_50 != (undefined8 *)0x0)))) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  FUN_00c8e690();
  puVar16 = local_50;
  if ((((local_48[0] == '\0') && (local_50 != (undefined8 *)0x0)) &&
      (FUN_00d50b00(), local_48[0] != '\0')) && (local_50 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  FUN_00c8e690();
  puVar17 = local_50;
  if (((local_48[0] == '\0') && (local_50 != (undefined8 *)0x0)) &&
     ((FUN_00d50b00(), local_48[0] != '\0' && (local_50 != (undefined8 *)0x0)))) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  FUN_00c8e690();
  puVar18 = local_50;
  if (((local_48[0] == '\0') && (local_50 != (undefined8 *)0x0)) &&
     ((FUN_00d50b00(), local_48[0] != '\0' && (local_50 != (undefined8 *)0x0)))) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  local_40 = 0;
  local_38 = (undefined8 *)0x0;
  do {
    if ((int)uVar2 < 1) {
      local_40 = 0;
      local_38 = (undefined8 *)0x0;
      iVar3 = *(int *)((longlong)puVar21 + 0xc);
      goto joined_r0x01767300;
    }
    uVar34 = local_40 & 0xffffffff;
    pcVar30 = *(char **)((longlong)puVar13 + 0x10);
    if (*pcVar30 == '\0') {
      bVar7 = true;
      local_90 = 0;
      lVar36 = *unaff_RSI;
      iVar3 = *(int *)(lVar36 + 0xc);
    }
    else {
      uVar32 = 0;
      do {
        if (uVar35 - 1 == uVar32) goto LAB_01767082;
        local_90 = uVar32 + 1;
        lVar36 = uVar32 + 1;
        uVar32 = local_90;
      } while (pcVar30[lVar36] != '\0');
      bVar7 = (longlong)local_90 < (longlong)(int)uVar2;
      lVar36 = *unaff_RSI;
      iVar3 = *(int *)(lVar36 + 0xc);
    }
    if (0 < iVar3) {
      auVar8._12_4_ = 0;
      auVar8._0_12_ = stack0xffffffffffffff5c;
      _local_a8 = auVar8 << 0x20;
      uVar32 = 0;
      cVar1 = *pcVar30;
      while( true ) {
        if (cVar1 == '\0') {
          pVar28 = (pthread_key_t)lVar36;
          pvVar22 = _pthread_getspecific(pVar28);
          if (pvVar22 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar39 = (float)FUN_01779a50();
          if ((float)local_a8._0_4_ < fVar39) {
            pvVar22 = _pthread_getspecific(pVar28);
            if (pvVar22 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar38 = FUN_01779a50();
            local_a8._0_4_ = uVar38;
            local_90 = uVar32 & 0xffffffff;
          }
        }
        uVar32 = uVar32 + 1;
        lVar36 = *unaff_RSI;
        if ((longlong)*(int *)(lVar36 + 0xc) <= (longlong)uVar32) break;
        cVar1 = *(char *)(*(longlong *)((longlong)puVar13 + 0x10) + uVar32);
      }
    }
    uVar24 = *(undefined8 *)(lVar36 + 0x10);
    pvVar22 = _pthread_getspecific((pthread_key_t)uVar24);
    if (pvVar22 != (void *)0x0) {
      FUN_00e8b990();
    }
    fVar39 = (float)FUN_01779ec0();
    uVar32 = 0;
    _local_a8 = ZEXT416((uint)DAT_02394264);
    do {
      if (uVar32 != (local_90 & 0xffffffff)) {
        pvVar22 = _pthread_getspecific((pthread_key_t)uVar24);
        if (pvVar22 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar41 = FUN_01779ec0();
        uVar20 = (uint)((ulonglong)uVar41 >> 0x20);
        for (fVar40 = (float)uVar41 - fVar39; fVar40 < 0.0; fVar40 = fVar40 + DAT_0239394c) {
        }
        for (; DAT_0239394c <= fVar40; fVar40 = fVar40 + DAT_02394218) {
        }
        fVar42 = (float)((uint)(fVar40 + _DAT_02411df0) & _DAT_02390140);
        if ((float)local_a8._0_4_ <= fVar42) {
          fVar42 = (float)local_a8._0_4_;
        }
        fVar40 = (float)((uint)(fVar40 + _DAT_02411df4) & _DAT_02390140);
        local_a8._4_4_ = uVar20 & _UNK_02390144;
        local_a8._0_4_ = fVar42;
        uStack_a0 = extraout_XMM0_Dc & _UNK_02390148;
        uStack_9c = extraout_XMM0_Dd & _UNK_0239014c;
        if (fVar40 < fVar42 + DAT_02390118) {
          local_a8._4_4_ = uVar20 & _UNK_02390144;
          local_a8._0_4_ = fVar40;
          uStack_a0 = extraout_XMM0_Dc & _UNK_02390148;
          uStack_9c = extraout_XMM0_Dd & _UNK_0239014c;
        }
      }
      uVar32 = uVar32 + 1;
    } while (uVar32 != uVar35);
    uVar32 = 0;
    do {
      if (*(char *)(*(longlong *)((longlong)puVar13 + 0x10) + uVar32) == '\0') {
        pvVar22 = _pthread_getspecific((pthread_key_t)uVar24);
        if (pvVar22 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar39 = (float)FUN_01779ec0();
        uVar33 = 0;
        do {
          if (uVar33 != uVar32) {
            pvVar22 = _pthread_getspecific((pthread_key_t)uVar24);
            if (pvVar22 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar41 = FUN_01779ec0();
            uVar20 = (uint)((ulonglong)uVar41 >> 0x20);
            for (fVar40 = (float)uVar41 - fVar39; fVar40 < 0.0; fVar40 = fVar40 + DAT_0239394c) {
            }
            for (; DAT_0239394c <= fVar40; fVar40 = fVar40 + DAT_02394218) {
            }
            fVar43 = (float)((uint)(fVar40 + _DAT_02411df0) & _DAT_02390140);
            uVar44 = uVar20 & _UNK_02390144;
            uVar37 = -(uint)(fVar43 < (float)local_a8._0_4_ + DAT_02390d00);
            fVar42 = (float)(~uVar37 & local_a8._0_4_ | (uint)fVar43 & uVar37);
            if (fVar43 < (float)local_a8._0_4_ + DAT_02390d00) {
              local_90 = uVar32;
            }
            local_90 = local_90 & 0xffffffff;
            local_a8._0_4_ = (uint)(fVar40 + _DAT_02411df4) & _DAT_02390140;
            if ((float)local_a8._0_4_ < fVar42 + DAT_02390d00) {
              local_a8._4_4_ = uVar20 & _UNK_02390144;
              uStack_a0 = extraout_XMM0_Dc_00 & _UNK_02390148;
              uStack_9c = extraout_XMM0_Dd_00 & _UNK_0239014c;
              local_90 = uVar32 & 0xffffffff;
            }
            else {
              local_a8._4_4_ = ~uVar44 & local_a8._4_4_ | uVar44;
              local_a8._0_4_ = fVar42;
              uStack_a0 = ~(extraout_XMM0_Dc_00 & _UNK_02390148) & uStack_a0 |
                          extraout_XMM0_Dc_00 & _UNK_02390148;
              uStack_9c = ~(extraout_XMM0_Dd_00 & _UNK_0239014c) & uStack_9c |
                          extraout_XMM0_Dd_00 & _UNK_0239014c;
            }
          }
          uVar33 = uVar33 + 1;
        } while (uVar33 != uVar35);
      }
      uVar32 = uVar32 + 1;
    } while (uVar32 != uVar35);
    puVar23 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar23 = &DAT_02572358;
    uVar24 = (*pcVar12)();
    uVar27 = (undefined7)((ulonglong)uVar24 >> 8);
    if (puVar23 == local_38) {
      if ((char)uVar34 == '\0') {
        local_40 = CONCAT71(uVar27,1);
        puVar23 = local_38;
      }
      else {
        FUN_00d50b20();
        puVar23 = local_38;
        local_40 = uVar34;
      }
    }
    else {
      local_40 = CONCAT71(uVar27,1);
      if (((char)uVar34 != '\0') && (local_38 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    local_48[0] = '\0';
    local_50 = puVar23;
    local_38 = puVar23;
    FUN_00d21140();
    if ((local_48[0] != '\0') && (local_50 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    puVar29 = (undefined4 *)(longlong)(int)(pthread_key_t)local_90;
    lVar36 = *(longlong *)(*(longlong *)(*unaff_RSI + 0x10) + (longlong)puVar29 * 8);
    if (lVar36 != 0) {
      FUN_00d50b00();
    }
    local_48[0] = '\0';
    local_50 = (undefined8 *)lVar36;
    FUN_00d21140();
    if ((local_48[0] != '\0') && (local_50 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar36 != 0) {
      FUN_00d50b20();
    }
    pvVar22 = _pthread_getspecific((pthread_key_t)local_90);
    if (pvVar22 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01779cd0(DAT_02390124);
    *(undefined1 *)(*(longlong *)((longlong)puVar13 + 0x10) + (longlong)puVar29) = 1;
    puVar4 = *(undefined4 **)((longlong)puVar18 + 0x10);
    puVar4[1] = 0;
    puVar31 = *(undefined4 **)((longlong)puVar17 + 0x10);
    puVar31[1] = 0;
    *puVar4 = 0;
    *puVar31 = 0;
    **(undefined8 **)((longlong)puVar15 + 0x10) = 0xffffffffffffffff;
    bVar10 = true;
    bVar19 = false;
    while( true ) {
      lVar36 = 0;
      bVar9 = true;
      do {
        bVar11 = bVar9;
        if (bVar11) {
          FUN_00d23340();
          puVar23 = local_50;
          local_58[0] = local_48[0];
          pcVar30 = local_58;
          pcVar25 = local_48;
          if (local_48[0] == '\0') {
            pcVar25 = pcVar30;
          }
          *pcVar25 = '\0';
          if ((local_48[0] != '\0') && (puVar23 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          pvVar22 = _pthread_getspecific((pthread_key_t)pcVar30);
          if (pvVar22 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar20 = FUN_01779ac0();
          fVar39 = DAT_02411dfc;
          if ((local_58[0] != '\0') && (puVar23 != (undefined8 *)0x0)) {
            FUN_00d50b20();
            fVar39 = DAT_02411dfc;
          }
        }
        else {
          pvVar22 = _pthread_getspecific((pthread_key_t)puVar31);
          if (pvVar22 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar20 = FUN_01779ac0();
          fVar39 = DAT_02411df8;
        }
        local_a8._0_4_ = fVar39;
        puVar31 = *(undefined4 **)(*unaff_RSI + 0x10);
        pvVar22 = _pthread_getspecific((pthread_key_t)puVar31);
        if (pvVar22 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar40 = (float)FUN_01779ec0();
        if (bVar11) {
          uVar34 = 0;
          local_78 = DAT_02394264;
          do {
            if (uVar34 != uVar20) {
              pvVar22 = _pthread_getspecific((pthread_key_t)puVar31);
              if (pvVar22 != (void *)0x0) {
                FUN_00e8b990();
              }
              fVar42 = (float)FUN_01779ec0();
              for (fVar42 = fVar42 - fVar40; fVar42 < 0.0; fVar42 = fVar42 + DAT_0239394c) {
              }
              for (; DAT_0239394c <= fVar42; fVar42 = fVar42 + DAT_02394218) {
              }
              fVar43 = (float)((uint)(fVar42 - fVar39) & _DAT_02390140);
              if (fVar43 < local_78) {
                **(float **)((longlong)puVar14 + 0x10) = fVar43;
                **(undefined4 **)((longlong)puVar15 + 0x10) = (int)uVar34;
                **(float **)((longlong)puVar16 + 0x10) = fVar42;
                local_78 = fVar43;
              }
            }
            uVar34 = uVar34 + 1;
          } while (uVar34 != uVar35);
        }
        else {
          uVar34 = 0;
          local_78 = DAT_02394264;
          do {
            if (uVar34 != uVar20) {
              pvVar22 = _pthread_getspecific((pthread_key_t)puVar31);
              if (pvVar22 != (void *)0x0) {
                FUN_00e8b990();
              }
              fVar42 = (float)FUN_01779ec0();
              for (fVar42 = fVar42 - fVar40; fVar42 < 0.0; fVar42 = fVar42 + DAT_0239394c) {
              }
              for (; DAT_0239394c <= fVar42; fVar42 = fVar42 + DAT_02394218) {
              }
              fVar43 = (float)((uint)(fVar42 - fVar39) & _DAT_02390140);
              if (fVar43 < local_78) {
                *(float *)(*(longlong *)((longlong)puVar14 + 0x10) + lVar36 * 4) = fVar43;
                *(int *)(*(longlong *)((longlong)puVar15 + 0x10) + lVar36 * 4) = (int)uVar34;
                *(float *)(*(longlong *)((longlong)puVar16 + 0x10) + lVar36 * 4) =
                     DAT_0239394c - fVar42;
                local_78 = fVar43;
              }
            }
            uVar34 = uVar34 + 1;
          } while (uVar34 != uVar35);
        }
        lVar36 = 1;
        bVar9 = false;
      } while (bVar11);
      pfVar5 = *(float **)((longlong)puVar14 + 0x10);
      bVar9 = *pfVar5 < pfVar5[1];
      if ((float)((uint)(pfVar5[1] - *pfVar5) & _DAT_02390140) < DAT_02390124) {
        bVar9 = bVar10;
      }
      bVar10 = (bool)(bVar9 ^ 1);
      uVar34 = (ulonglong)bVar10;
      uVar20 = *(uint *)(*(longlong *)((longlong)puVar15 + 0x10) + uVar34 * 4);
      uVar32 = (ulonglong)uVar20;
      if ((((uVar20 == (pthread_key_t)local_90) || (uVar20 == 0xffffffff)) ||
          (fVar39 = pfVar5[uVar34], DAT_023945a4 < fVar39)) ||
         ((((int)uVar20 < 0 || (*(int *)((longlong)puVar13 + 0x18) <= (int)uVar20)) ||
          (*(char *)(*(longlong *)((longlong)puVar13 + 0x10) + uVar32) != '\0')))) break;
      lVar36 = *(longlong *)(*(longlong *)(*unaff_RSI + 0x10) + uVar32 * 8);
      if (bVar9 == false) {
        if (lVar36 != 0) {
          fVar39 = (float)FUN_00d50b00();
        }
        local_48[0] = '\0';
        local_50 = (undefined8 *)lVar36;
        FUN_00d23370(fVar39,0);
        if ((local_48[0] != '\0') && (local_50 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar36 != 0) {
          FUN_00d50b20();
        }
      }
      else {
        if (lVar36 != 0) {
          FUN_00d50b00();
        }
        local_48[0] = '\0';
        local_50 = (undefined8 *)lVar36;
        FUN_00d21140();
        if ((local_48[0] != '\0') && (local_50 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar36 != 0) {
          FUN_00d50b20();
        }
      }
      *(undefined1 *)(*(longlong *)((longlong)puVar13 + 0x10) + uVar32) = 1;
      lVar36 = *(longlong *)((longlong)puVar17 + 0x10);
      *(float *)(lVar36 + uVar34 * 4) = *(float *)(lVar36 + uVar34 * 4) + DAT_02411dfc;
      puVar31 = *(undefined4 **)((longlong)puVar18 + 0x10);
      fVar39 = *(float *)(*(longlong *)((longlong)puVar16 + 0x10) + uVar34 * 4) +
               (float)puVar31[uVar34];
      puVar31[uVar34] = fVar39;
      fVar39 = (float)((uint)(fVar39 - *(float *)(lVar36 + uVar34 * 4)) & _DAT_02390140) /
               DAT_0241b660 + DAT_02390124;
      pvVar22 = _pthread_getspecific((pthread_key_t)puVar31);
      if (pvVar22 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar40 = DAT_02391090;
      if (DAT_02391090 <= fVar39) {
        fVar40 = fVar39;
      }
      _local_a8 = ZEXT416((uint)fVar40);
      FUN_01779cd0();
      bVar9 = !bVar19;
      bVar19 = true;
      if (bVar9) {
        puVar31 = puVar29;
        pvVar22 = _pthread_getspecific((pthread_key_t)local_90);
        if (pvVar22 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01779cd0(fVar40);
        bVar19 = true;
      }
    }
    uVar34 = local_40;
  } while (bVar7);
LAB_01767082:
  local_40 = uVar34;
  iVar3 = *(int *)((longlong)puVar21 + 0xc);
joined_r0x01767300:
  if (0 < iVar3) {
    lVar36 = 0;
    do {
      lVar26 = puVar21[2];
      puVar6 = *(undefined8 **)(lVar26 + lVar36 * 8);
      puVar23 = puVar21;
      if (local_38 == puVar6) {
        if (((char)local_40 == '\0') && (local_38 != (undefined8 *)0x0)) {
          local_40 = CONCAT71((int7)((ulonglong)lVar26 >> 8),1);
          FUN_00d50b00();
        }
      }
      else {
        if (puVar6 != (undefined8 *)0x0) {
          lVar26 = FUN_00d50b00();
        }
        if (((char)local_40 == '\0') || (local_38 == (undefined8 *)0x0)) {
          local_40 = CONCAT71((int7)((ulonglong)lVar26 >> 8),1);
          local_38 = puVar6;
        }
        else {
          local_38 = puVar6;
          uVar24 = FUN_00d50b20();
          local_40 = CONCAT71((int7)((ulonglong)uVar24 >> 8),1);
        }
      }
      if (0 < *(int *)((longlong)local_38 + 0xc)) {
        lVar26 = 0;
        do {
          while( true ) {
            pVar28 = (pthread_key_t)puVar23;
            pvVar22 = _pthread_getspecific(pVar28);
            if (pvVar22 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01779bd0();
            if (lVar26 != 0) {
              pvVar22 = _pthread_getspecific(pVar28);
              if (pvVar22 != (void *)0x0) {
                FUN_00e8b990();
              }
              pvVar22 = _pthread_getspecific(pVar28);
              if (pvVar22 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01779ac0();
              FUN_01779b70();
            }
            puVar23 = (undefined8 *)((longlong)*(int *)((longlong)local_38 + 0xc) + -1);
            if ((longlong)puVar23 <= lVar26) break;
            pvVar22 = _pthread_getspecific((pthread_key_t)puVar23);
            if (pvVar22 != (void *)0x0) {
              FUN_00e8b990();
            }
            pvVar22 = _pthread_getspecific((pthread_key_t)puVar23);
            if (pvVar22 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01779ac0();
            FUN_01779b20();
            lVar26 = lVar26 + 1;
            if (*(int *)((longlong)local_38 + 0xc) <= lVar26) goto LAB_017670a0;
          }
          lVar26 = lVar26 + 1;
        } while (lVar26 < *(int *)((longlong)local_38 + 0xc));
      }
LAB_017670a0:
      lVar36 = lVar36 + 1;
    } while (lVar36 < *(int *)((longlong)puVar21 + 0xc));
  }
  *unaff_RDI = puVar21;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (puVar18 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (puVar17 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (puVar16 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (puVar15 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (puVar14 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_40 != '\0') && (local_38 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (puVar13 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


