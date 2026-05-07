// Function: FUN_0147a0a0
// Address: 0147a0a0
// Size: 4495 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x0147a3b9) */
/* WARNING: Removing unreachable block (ram,0x0147a3c5) */
/* WARNING: Removing unreachable block (ram,0x0147aa61) */
/* WARNING: Removing unreachable block (ram,0x0147aa6d) */
/* WARNING: Removing unreachable block (ram,0x0147a379) */
/* WARNING: Removing unreachable block (ram,0x0147a385) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0147a0a0(pthread_key_t param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  float *pfVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 *puVar9;
  float *pfVar10;
  float fVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 *puVar14;
  int iVar15;
  int iVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  code *pcVar19;
  code *pcVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  void *pvVar25;
  longlong lVar26;
  undefined8 uVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  ulonglong uVar31;
  int iVar32;
  ulonglong uVar33;
  longlong lVar34;
  uint uVar35;
  int iVar36;
  longlong unaff_RDI;
  uint uVar37;
  uint uVar38;
  int iVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  uint uVar44;
  bool bVar45;
  float fVar46;
  undefined4 uVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  undefined8 uVar51;
  undefined1 auVar52 [16];
  int iVar55;
  int iVar56;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  int iVar64;
  undefined1 auVar62 [16];
  int iVar65;
  undefined1 auVar63 [16];
  int iVar67;
  undefined1 auVar66 [16];
  int iVar68;
  int iVar69;
  int iVar70;
  int iVar71;
  int iVar72;
  int iVar73;
  int iVar74;
  int iVar75;
  int iVar76;
  float fVar77;
  undefined1 auVar78 [16];
  longlong lVar79;
  longlong local_110;
  char local_108;
  undefined8 *local_100;
  char local_f8;
  float local_f0;
  float local_ec;
  longlong local_e8;
  char local_e0;
  ulonglong local_d8;
  double local_d0;
  undefined1 local_c8 [16];
  undefined8 *local_b0;
  uint local_a4;
  int local_a0;
  uint local_9c;
  longlong local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 local_68;
  ulonglong local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  char local_38;
  
  pvVar25 = _pthread_getspecific(param_1);
  if (pvVar25 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01328c30();
  local_80 = local_40;
  if ((((local_38 == '\0') && (local_40 != (undefined8 *)0x0)) && (FUN_00d50b00(), local_38 != '\0')
      ) && (local_40 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  pvVar25 = _pthread_getspecific(param_1);
  if (pvVar25 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013293b0();
  local_88 = local_40;
  if (((local_38 == '\0') && (local_40 != (undefined8 *)0x0)) &&
     ((FUN_00d50b00(), local_38 != '\0' && (local_40 != (undefined8 *)0x0)))) {
    FUN_00d50b20();
  }
  lVar34 = *(longlong *)(unaff_RDI + 0x68);
  pvVar25 = _pthread_getspecific(param_1);
  if (pvVar25 != (void *)0x0) {
    lVar34 = *(longlong *)(unaff_RDI + 0x68);
    lVar26 = FUN_00e8b990();
    if (lVar26 != 0) {
      lVar34 = *(longlong *)(lVar34 + 0x20 + (ulonglong)(*(uint *)(lVar26 + 0x154) & 1) * 8);
    }
  }
  FUN_0132d790();
  local_d0 = (double)local_40[7];
  if (local_38 != '\0') {
    FUN_00d50b20();
  }
  pcVar20 = DAT_025f0db0;
  pcVar19 = DAT_02572370;
  dVar48 = _DAT_0240d308 / local_d0;
  local_ec = (float)(DAT_0240de90 / local_d0);
  dVar49 = DAT_0240de98 / local_d0;
  dVar50 = DAT_0238fee8 / local_d0;
  uVar51 = CONCAT71((int7)((ulonglong)lVar34 >> 8),1);
  do {
    if ((char)uVar51 == '\0') {
      FUN_00352bd0();
      local_50 = local_40;
      puVar30 = local_40;
      if (local_40 == (undefined8 *)0x0) {
        local_50 = (undefined8 *)0x0;
        local_68 = 0;
      }
      else if (local_38 == '\0') {
        uVar27 = FUN_00d50b00();
        local_68 = CONCAT71((int7)((ulonglong)uVar27 >> 8),1);
        if ((local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
        local_68 = CONCAT71((int7)((ulonglong)local_40 >> 8),1);
      }
    }
    else {
      FUN_00352bd0();
      local_50 = local_40;
      puVar30 = local_40;
      if (local_40 == (undefined8 *)0x0) {
        local_50 = (undefined8 *)0x0;
        local_68 = 0;
      }
      else if (local_38 == '\0') {
        uVar27 = FUN_00d50b00();
        local_68 = CONCAT71((int7)((ulonglong)uVar27 >> 8),1);
        if ((local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
        local_68 = CONCAT71((int7)((ulonglong)local_40 >> 8),1);
      }
    }
    local_9c = (uint)uVar51;
    puVar28 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    local_c8._0_8_ = &DAT_02572358;
    *puVar28 = &DAT_02572358;
    (*pcVar19)();
    local_78 = puVar28;
    while (*(int *)((longlong)local_50 + 0xc) != 0) {
      puVar28 = *(undefined8 **)local_50[2];
      if (puVar28 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
      while( true ) {
        pvVar25 = _pthread_getspecific((pthread_key_t)puVar30);
        if (pvVar25 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bc340();
        puVar29 = local_40;
        if ((local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if (puVar29 == (undefined8 *)0x0) break;
        pvVar25 = _pthread_getspecific((pthread_key_t)puVar30);
        if (pvVar25 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bc340();
        puVar14 = local_40;
        puVar29 = puVar28;
        if (local_40 == puVar28) {
joined_r0x0147a531:
          puVar28 = puVar29;
          if ((local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_38 == '\0') {
            if (local_40 != (undefined8 *)0x0) {
              FUN_00d50b00();
            }
            puVar29 = puVar14;
            if (puVar28 != (undefined8 *)0x0) {
              FUN_00d50b20();
            }
            goto joined_r0x0147a531;
          }
          bVar45 = puVar28 != (undefined8 *)0x0;
          puVar28 = puVar14;
          if (bVar45) {
            FUN_00d50b20();
          }
        }
      }
      puVar29 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar29 = local_c8._0_8_;
      (*pcVar19)();
      local_38 = '\0';
      local_40 = puVar29;
      FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      while (puVar28 != (undefined8 *)0x0) {
        pvVar25 = _pthread_getspecific((pthread_key_t)puVar30);
        if (pvVar25 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar51 = FUN_014c2a40();
        lVar34 = local_e8;
        if (local_e0 == '\0') {
          if (local_e8 != 0) {
            uVar51 = FUN_00d50b00();
          }
        }
        else {
          local_e0 = '\0';
        }
        local_40 = (undefined8 *)lVar34;
        local_38 = '\0';
        FUN_00d214d0(uVar51,*(undefined4 *)((longlong)puVar29 + 0xc));
        if ((local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar34 != 0) {
          FUN_00d50b20();
        }
        if ((local_e0 != '\0') && (local_e8 != 0)) {
          FUN_00d50b20();
        }
        local_38 = '\0';
        local_40 = puVar28;
        FUN_00d23f50();
        if ((local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        pvVar25 = _pthread_getspecific((pthread_key_t)puVar30);
        if (pvVar25 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bc420();
        puVar14 = puVar28;
        if (local_40 == puVar28) {
joined_r0x0147a727:
          if ((local_38 != '\0') && (puVar14 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          puVar28 = local_40;
          if (local_38 == '\0') {
            if (local_40 != (undefined8 *)0x0) {
              FUN_00d50b00();
            }
            FUN_00d50b20();
            puVar14 = local_40;
            goto joined_r0x0147a727;
          }
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
    }
    iVar21 = FUN_00e7d850(dVar48);
    if (iVar21 < 1) {
      iVar21 = 1;
    }
    puVar30 = (undefined8 *)FUN_00e8fc40();
    uVar44 = local_9c;
    FUN_00d4ff40();
    *puVar30 = &DAT_025f0d98;
    puVar30[2] = 0;
    puVar30[3] = 0;
    puVar30[4] = 0;
    puVar30[5] = 0;
    puVar30[6] = 0;
    puVar30[7] = 0;
    (*pcVar20)();
    local_f0 = (float)iVar21 + DAT_02391090;
    if (*(int *)((longlong)local_78 + 0xc) < 1) {
LAB_0147b250:
      FUN_00d50b20();
    }
    else {
      lVar34 = 0;
      local_58 = puVar30;
      do {
        lVar26 = *(longlong *)(local_78[2] + lVar34 * 8);
        if (lVar26 != 0) {
          FUN_00d50b00();
          local_60 = (ulonglong)*(uint *)(lVar26 + 0xc);
          if (local_60 != 0) {
            iVar22 = FUN_00e7d850(dVar49);
            local_a0 = (int)local_60 * 4;
            FUN_00c8e690();
            puVar30 = local_40;
            uVar42 = local_60;
            if ((((local_38 == '\0') && (local_40 != (undefined8 *)0x0)) &&
                (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
            FUN_00c92170();
            FUN_00c92160();
            FUN_00c8e690();
            puVar28 = local_40;
            if (((local_38 == '\0') && (local_40 != (undefined8 *)0x0)) &&
               ((FUN_00d50b00(), local_38 != '\0' && (local_40 != (undefined8 *)0x0)))) {
              FUN_00d50b20();
            }
            FUN_00c92170();
            FUN_00c92160();
            uVar44 = (uint)uVar42;
            local_48 = puVar28;
            if (0 < (int)uVar44) {
              lVar4 = *(longlong *)(lVar26 + 0x10);
              lVar5 = puVar30[2];
              lVar6 = puVar28[2];
              if (uVar44 == 1) {
                uVar31 = 0;
              }
              else {
                uVar31 = 0;
                do {
                  uVar47 = *(undefined4 *)(*(longlong *)(lVar4 + uVar31 * 8) + 0x14);
                  *(undefined4 *)(lVar5 + uVar31 * 4) = uVar47;
                  *(undefined4 *)(lVar6 + uVar31 * 4) = uVar47;
                  uVar47 = *(undefined4 *)(*(longlong *)(lVar4 + 8 + uVar31 * 8) + 0x14);
                  *(undefined4 *)(lVar5 + 4 + uVar31 * 4) = uVar47;
                  *(undefined4 *)(lVar6 + 4 + uVar31 * 4) = uVar47;
                  uVar31 = uVar31 + 2;
                } while ((uVar44 & 0xfffffffe) != uVar31);
              }
              if ((uVar42 & 1) != 0) {
                uVar47 = *(undefined4 *)(*(longlong *)(lVar4 + uVar31 * 8) + 0x14);
                *(undefined4 *)(lVar5 + uVar31 * 4) = uVar47;
                *(undefined4 *)(lVar6 + uVar31 * 4) = uVar47;
              }
            }
            FUN_015c15b0(1,uVar42 & 0xffffffff);
            local_110 = 0;
            local_108 = '\0';
            FUN_0161e150(dVar50,&local_110);
            local_b0 = local_40;
            if (local_38 == '\0') {
              if (((local_40 != (undefined8 *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
                 (local_40 != (undefined8 *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_38 = '\0';
            }
            if ((local_108 != '\0') && (local_110 != 0)) {
              FUN_00d50b20();
            }
            local_100 = local_b0;
            local_f8 = '\0';
            FUN_0161e1a0();
            local_90 = local_40;
            if (local_38 == '\0') {
              if (((local_40 != (undefined8 *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
                 (local_40 != (undefined8 *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_38 = '\0';
            }
            if ((local_f8 != '\0') && (local_100 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
            local_a4 = uVar44 - 1;
            local_70 = puVar30;
            if (7 < (int)*(uint *)(local_90 + 3)) {
              fVar77 = (float)iVar22;
              local_d8 = (ulonglong)(*(uint *)(local_90 + 3) >> 3);
              lVar4 = local_90[2];
              uVar42 = 0;
              do {
                lVar6 = _UNK_0240dfb8;
                lVar5 = _DAT_0240dfb0;
                auVar18 = _DAT_0240dfa0;
                auVar17 = _DAT_023b2d50;
                iVar16 = _UNK_0239418c;
                iVar15 = _UNK_02394188;
                iVar39 = _UNK_02394184;
                iVar36 = _DAT_02394180;
                uVar44 = *(uint *)(lVar4 + uVar42 * 8);
                uVar35 = *(int *)(lVar4 + 4 + uVar42 * 8) + uVar44;
                if ((int)uVar44 < 0) {
                  uVar44 = 0;
                }
                if ((int)(uint)local_60 <= (int)uVar35) {
                  uVar35 = local_a4;
                }
                if ((int)uVar44 <= (int)uVar35) {
                  uVar37 = uVar35 + 1;
                  iVar23 = uVar35 - iVar22;
                  iVar32 = iVar22 + uVar44;
                  lVar7 = puVar30[2];
                  lVar8 = local_48[2];
                  uVar31 = (ulonglong)uVar44;
                  uVar33 = (ulonglong)uVar37;
                  uVar40 = uVar33 - uVar31;
                  uVar38 = uVar44;
                  if (3 < uVar40) {
                    uVar1 = lVar7 + uVar31 * 4;
                    uVar2 = lVar8 + uVar31 * 4;
                    if ((lVar8 + uVar33 * 4 <= uVar1) || (lVar7 + uVar33 * 4 <= uVar2)) {
                      iVar24 = 1 - uVar44;
                      uVar43 = uVar40 & 0xfffffffffffffffc;
                      uVar31 = uVar31 + uVar43;
                      auVar78._0_8_ = (ulonglong)uVar44 + _DAT_0240df80;
                      auVar78._8_8_ = (ulonglong)uVar44 + _UNK_0240df88;
                      lVar12 = (ulonglong)uVar44 + _DAT_0240df90;
                      lVar13 = (ulonglong)uVar44 + _UNK_0240df98;
                      iVar73 = uVar44 + _DAT_0238fcc0;
                      iVar74 = uVar44 + _UNK_0238fcc4;
                      iVar75 = uVar44 + _UNK_0238fcc8;
                      iVar76 = uVar44 + _UNK_0238fccc;
                      local_c8._0_8_ = SEXT48(iVar32);
                      local_c8._8_4_ = iVar32;
                      local_c8._12_4_ = iVar32 >> 0x1f;
                      auVar52._0_8_ = (longlong)iVar23;
                      auVar52._8_4_ = iVar23;
                      auVar52._12_4_ = iVar23 >> 0x1f;
                      uVar41 = 0;
                      fVar46 = DAT_023b2d50._4_4_;
                      fVar11 = DAT_023b2d50._12_4_;
                      iVar69 = iVar73;
                      iVar70 = iVar74;
                      iVar71 = iVar75;
                      iVar72 = iVar76;
                      do {
                        auVar62._8_4_ = (int)lVar13;
                        auVar62._0_8_ = lVar12;
                        auVar62._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
                        auVar62 = auVar62 ^ auVar18;
                        auVar57 = local_c8 ^ auVar18;
                        iVar55 = auVar57._4_4_;
                        iVar64 = auVar62._4_4_;
                        iVar56 = auVar57._12_4_;
                        iVar65 = auVar62._12_4_;
                        auVar66 = auVar78 ^ auVar18;
                        iVar67 = auVar66._4_4_;
                        iVar68 = auVar66._12_4_;
                        auVar58._0_4_ = -(uint)(iVar55 == iVar64 && auVar62._0_4_ < auVar57._0_4_);
                        auVar58._4_4_ = -(uint)(iVar56 == iVar65 && auVar62._8_4_ < auVar57._8_4_);
                        auVar58._8_4_ = -(uint)(iVar55 == iVar67 && auVar66._0_4_ < auVar57._0_4_);
                        auVar58._12_4_ = -(uint)(iVar56 == iVar68 && auVar66._8_4_ < auVar57._8_4_);
                        auVar53._4_4_ = -(uint)(iVar65 < iVar56);
                        auVar53._0_4_ = -(uint)(iVar64 < iVar55);
                        auVar53._8_4_ = -(uint)(iVar67 < iVar55);
                        auVar53._12_4_ = -(uint)(iVar68 < iVar56);
                        auVar59._0_4_ = (float)(iVar24 + iVar73);
                        auVar59._4_4_ = (float)(iVar24 + iVar74);
                        auVar59._8_4_ = (float)(iVar24 + iVar75);
                        auVar59._12_4_ = (float)(iVar24 + iVar76);
                        auVar57._4_4_ = fVar77;
                        auVar57._0_4_ = fVar77;
                        auVar57._8_4_ = fVar77;
                        auVar57._12_4_ = fVar77;
                        auVar57 = divps(auVar59,auVar57);
                        auVar57 = blendvps(auVar17,auVar57,auVar53 | auVar58);
                        auVar60 = auVar52 ^ auVar18;
                        iVar55 = auVar60._4_4_;
                        iVar56 = auVar60._12_4_;
                        auVar63._0_4_ = -(uint)(iVar64 == iVar55 && auVar60._0_4_ < auVar62._0_4_);
                        auVar63._4_4_ = -(uint)(iVar65 == iVar56 && auVar60._8_4_ < auVar62._8_4_);
                        auVar63._8_4_ = -(uint)(iVar55 == iVar67 && auVar60._0_4_ < auVar66._0_4_);
                        auVar63._12_4_ = -(uint)(iVar56 == iVar68 && auVar60._8_4_ < auVar66._8_4_);
                        auVar66._4_4_ = -(uint)(iVar56 < iVar65);
                        auVar66._0_4_ = -(uint)(iVar55 < iVar64);
                        auVar66._8_4_ = -(uint)(iVar55 < iVar67);
                        auVar66._12_4_ = -(uint)(iVar56 < iVar68);
                        auVar61._0_4_ = (float)(int)(uVar37 - iVar69);
                        auVar61._4_4_ = (float)(int)(uVar37 - iVar70);
                        auVar61._8_4_ = (float)(int)(uVar37 - iVar71);
                        auVar61._12_4_ = (float)(int)(uVar37 - iVar72);
                        auVar60._4_4_ = fVar77;
                        auVar60._0_4_ = fVar77;
                        auVar60._8_4_ = fVar77;
                        auVar60._12_4_ = fVar77;
                        auVar60 = divps(auVar61,auVar60);
                        auVar57 = blendvps(auVar57,auVar60,auVar66 | auVar63);
                        pfVar10 = (float *)(uVar1 + uVar41 * 4);
                        pfVar3 = (float *)(uVar2 + uVar41 * 4);
                        auVar54._0_4_ =
                             *pfVar3 * auVar57._0_4_ + (auVar17._0_4_ - auVar57._0_4_) * *pfVar10;
                        auVar54._4_4_ =
                             pfVar3[1] * auVar57._4_4_ + (fVar46 - auVar57._4_4_) * pfVar10[1];
                        auVar54._8_4_ =
                             pfVar3[2] * auVar57._8_4_ +
                             (auVar17._8_4_ - auVar57._8_4_) * pfVar10[2];
                        auVar54._12_4_ =
                             pfVar3[3] * auVar57._12_4_ + (fVar11 - auVar57._12_4_) * pfVar10[3];
                        *(undefined1 (*) [16])(uVar1 + uVar41 * 4) = auVar54;
                        uVar41 = uVar41 + 4;
                        lVar12 = lVar12 + lVar5;
                        lVar13 = lVar13 + lVar6;
                        lVar79 = auVar78._8_8_;
                        auVar78._0_8_ = auVar78._0_8_ + lVar5;
                        auVar78._8_8_ = lVar79 + lVar6;
                        iVar73 = iVar73 + iVar36;
                        iVar74 = iVar74 + iVar39;
                        iVar75 = iVar75 + iVar15;
                        iVar76 = iVar76 + iVar16;
                        iVar69 = iVar69 + iVar36;
                        iVar70 = iVar70 + iVar39;
                        iVar71 = iVar71 + iVar15;
                        iVar72 = iVar72 + iVar16;
                      } while (uVar43 != uVar41);
                      uVar38 = uVar44 + (int)uVar43;
                      if (uVar40 == uVar43) goto LAB_0147ab40;
                    }
                  }
                  iVar36 = (uVar35 - (int)uVar31) + 1;
                  iVar39 = uVar38 - uVar44;
                  fVar46 = DAT_02390124;
                  do {
                    fVar11 = DAT_02390124;
                    iVar39 = iVar39 + 1;
                    if ((longlong)uVar31 < (longlong)iVar32) {
                      fVar46 = (float)iVar39 / fVar77;
                    }
                    if ((longlong)iVar23 < (longlong)uVar31) {
                      fVar46 = (float)iVar36 / fVar77;
                    }
                    *(float *)(lVar7 + uVar31 * 4) =
                         fVar46 * *(float *)(lVar8 + uVar31 * 4) +
                         (DAT_02390124 - fVar46) * *(float *)(lVar7 + uVar31 * 4);
                    uVar31 = uVar31 + 1;
                    iVar36 = iVar36 + -1;
                    fVar46 = fVar11;
                  } while (uVar33 != uVar31);
                }
LAB_0147ab40:
                uVar42 = uVar42 + 1;
              } while (uVar42 != local_d8);
            }
            if (0 < (int)(uint)local_60) {
              lVar4 = puVar30[2];
              lVar5 = *(longlong *)(lVar26 + 0x10);
              if (local_60 - 1 < 3) {
                uVar42 = 0;
              }
              else {
                uVar42 = 0;
                do {
                  *(undefined4 *)(*(longlong *)(lVar5 + uVar42 * 8) + 0x40) =
                       *(undefined4 *)(lVar4 + uVar42 * 4);
                  *(undefined4 *)(*(longlong *)(lVar5 + 8 + uVar42 * 8) + 0x40) =
                       *(undefined4 *)(lVar4 + 4 + uVar42 * 4);
                  *(undefined4 *)(*(longlong *)(lVar5 + 0x10 + uVar42 * 8) + 0x40) =
                       *(undefined4 *)(lVar4 + 8 + uVar42 * 4);
                  *(undefined4 *)(*(longlong *)(lVar5 + 0x18 + uVar42 * 8) + 0x40) =
                       *(undefined4 *)(lVar4 + 0xc + uVar42 * 4);
                  uVar42 = uVar42 + 4;
                } while (((uint)local_60 & 0xfffffffc) != uVar42);
              }
              if ((ulonglong)((uint)local_60 & 3) != 0) {
                uVar31 = 0;
                do {
                  *(undefined4 *)(*(longlong *)(lVar5 + uVar42 * 8 + uVar31 * 8) + 0x40) =
                       *(undefined4 *)(lVar4 + uVar42 * 4 + uVar31 * 4);
                  uVar31 = uVar31 + 1;
                } while (((uint)local_60 & 3) != uVar31);
              }
            }
            local_98 = lVar26;
            FUN_00c8e690();
            local_c8._0_8_ = local_40;
            if ((((local_38 == '\0') && (local_40 != (undefined8 *)0x0)) &&
                (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
            FUN_00c92170();
            FUN_00c92160();
            uVar44 = _DAT_02390140;
            iVar22 = (int)local_60;
            uVar51 = local_c8._0_8_;
            if (iVar22 < 3) {
              if (iVar22 == 2) {
                fVar77 = (float)((double)(float)((uint)(*(float *)local_70[2] -
                                                       ((float *)local_70[2])[1]) & _DAT_02390140) /
                                local_d0);
                pfVar10 = *(float **)(local_c8._0_8_ + 0x10);
                *pfVar10 = fVar77;
                pfVar10[1] = fVar77;
              }
              else {
                **(undefined4 **)(local_c8._0_8_ + 0x10) = 0x43c80000;
              }
            }
            else {
              lVar26 = local_70[2];
              puVar9 = *(undefined4 **)(local_c8._0_8_ + 0x10);
              uVar42 = 1;
              do {
                uVar35 = (int)uVar42 - iVar21;
                uVar31 = (ulonglong)uVar35;
                if ((int)uVar35 < 0) {
                  uVar31 = 0;
                }
                uVar35 = iVar21 + (int)uVar42;
                if (iVar22 <= (int)uVar35) {
                  uVar35 = local_a4;
                }
                puVar9[uVar42] =
                     (float)((double)((float)((uint)(*(float *)(lVar26 + uVar31 * 4) -
                                                    *(float *)(lVar26 + (longlong)(int)uVar35 * 4))
                                             & uVar44) / (float)(int)(uVar35 - (int)uVar31)) /
                            local_d0);
                uVar42 = uVar42 + 1;
              } while (local_a4 != uVar42);
              *puVar9 = puVar9[1];
              puVar9[(int)local_a4] = puVar9[iVar22 - 2];
            }
            FUN_015c15b0(1,local_60 & 0xffffffff);
            if (0 < iVar22) {
              uVar42 = 0;
              do {
                uVar47 = FUN_00e84a50();
                *(undefined4 *)(*(longlong *)(*(longlong *)(local_98 + 0x10) + uVar42 * 8) + 0x44) =
                     uVar47;
                uVar42 = uVar42 + 1;
              } while (local_60 != uVar42);
            }
            if (uVar51 != 0) {
              FUN_00d50b20();
            }
            puVar30 = local_b0;
            if (local_90 != (undefined8 *)0x0) {
              FUN_00d50b20();
            }
            puVar28 = local_70;
            if (puVar30 != (undefined8 *)0x0) {
              FUN_00d50b20();
            }
            if (local_48 != (undefined8 *)0x0) {
              FUN_00d50b20();
            }
            if (puVar28 != (undefined8 *)0x0) {
              FUN_00d50b20();
            }
          }
          FUN_00d50b20();
        }
        lVar34 = lVar34 + 1;
      } while (lVar34 < *(int *)((longlong)local_78 + 0xc));
      uVar44 = local_9c;
      if (local_58 != (undefined8 *)0x0) goto LAB_0147b250;
    }
    FUN_00d50b20();
    if (((char)local_68 != '\0') && (local_50 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    uVar51 = 0;
    if ((uVar44 & 1) == 0) {
      if (local_88 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      if (local_80 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      return;
    }
  } while( true );
}


