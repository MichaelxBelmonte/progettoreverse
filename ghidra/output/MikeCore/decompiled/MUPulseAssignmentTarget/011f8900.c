// Function: FUN_011f8900
// Address: 011f8900
// Size: 24558 bytes
// Class: MUPulseAssignmentTarget


/* WARNING: Removing unreachable block (ram,0x011f92f6) */
/* WARNING: Removing unreachable block (ram,0x011fc08b) */
/* WARNING: Removing unreachable block (ram,0x011fc097) */
/* WARNING: Removing unreachable block (ram,0x011fe09c) */
/* WARNING: Removing unreachable block (ram,0x011fe0a8) */
/* WARNING: Removing unreachable block (ram,0x011fdade) */
/* WARNING: Removing unreachable block (ram,0x011fdaea) */
/* WARNING: Removing unreachable block (ram,0x011fe79e) */
/* WARNING: Removing unreachable block (ram,0x011fe7aa) */
/* WARNING: Removing unreachable block (ram,0x011fa6b3) */
/* WARNING: Removing unreachable block (ram,0x011fa6bf) */
/* WARNING: Removing unreachable block (ram,0x011fccae) */
/* WARNING: Removing unreachable block (ram,0x011fccba) */
/* WARNING: Removing unreachable block (ram,0x011f8aff) */
/* WARNING: Removing unreachable block (ram,0x011f8b0b) */
/* WARNING: Removing unreachable block (ram,0x011f93c7) */
/* WARNING: Removing unreachable block (ram,0x011f93d3) */
/* WARNING: Removing unreachable block (ram,0x011fe4a5) */
/* WARNING: Removing unreachable block (ram,0x011fe4b1) */
/* WARNING: Removing unreachable block (ram,0x011fc4ba) */
/* WARNING: Removing unreachable block (ram,0x011fc4c6) */
/* WARNING: Removing unreachable block (ram,0x011faf2d) */
/* WARNING: Removing unreachable block (ram,0x011faf39) */
/* WARNING: Removing unreachable block (ram,0x011fab04) */
/* WARNING: Removing unreachable block (ram,0x011fab10) */
/* WARNING: Removing unreachable block (ram,0x011fd447) */
/* WARNING: Removing unreachable block (ram,0x011fd453) */
/* WARNING: Removing unreachable block (ram,0x011fab89) */
/* WARNING: Removing unreachable block (ram,0x011fab95) */
/* WARNING: Removing unreachable block (ram,0x011fb66c) */
/* WARNING: Removing unreachable block (ram,0x011fac2b) */
/* WARNING: Removing unreachable block (ram,0x011fac37) */
/* WARNING: Removing unreachable block (ram,0x011fe1f4) */
/* WARNING: Removing unreachable block (ram,0x011fe200) */
/* WARNING: Removing unreachable block (ram,0x011fe97c) */
/* WARNING: Removing unreachable block (ram,0x011fe98c) */
/* WARNING: Removing unreachable block (ram,0x011faff1) */
/* WARNING: Removing unreachable block (ram,0x011faffd) */

void FUN_011f8900(void)

{
  code *pcVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  void *pvVar7;
  longlong lVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined7 uVar18;
  longlong *plVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  char *pcVar15;
  longlong *plVar16;
  undefined8 uVar17;
  pthread_key_t pVar19;
  pthread_key_t pVar20;
  longlong *plVar21;
  longlong lVar22;
  char *pcVar23;
  int iVar24;
  longlong *unaff_RDI;
  pthread_key_t pVar25;
  longlong *unaff_R14;
  longlong *plVar26;
  bool bVar27;
  undefined4 local_1bc;
  longlong *local_1b8;
  char local_1b0;
  longlong *local_1a8;
  char local_1a0;
  longlong *local_198;
  char local_190;
  longlong *local_188;
  char local_180;
  undefined *local_178;
  code *local_170;
  undefined8 local_168;
  longlong *local_160;
  longlong *local_158;
  uint local_14c;
  undefined8 local_148;
  longlong *local_140;
  ulonglong local_138;
  char local_130;
  undefined8 local_128;
  undefined8 local_120;
  longlong *local_118;
  longlong *local_110;
  longlong local_108;
  longlong *local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  longlong *local_e8;
  undefined8 local_e0;
  undefined8 local_c8;
  char local_c0 [8];
  longlong *local_b8;
  undefined8 local_b0;
  int local_a8;
  undefined8 local_a0;
  char local_98;
  longlong *local_90;
  undefined8 local_88;
  char local_80;
  longlong *local_78;
  undefined8 local_70;
  int local_68;
  undefined8 local_60;
  char local_58 [8];
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  undefined8 local_38;
  
  if (unaff_RDI[0xe] != 0) {
    lVar8 = unaff_RDI[0xc];
    if (lVar8 != 0) {
      FUN_00d50b00();
    }
    FUN_01201400();
    local_158 = local_60;
    if (local_58[0] == '\0') {
      if (((local_60 != (longlong *)0x0) && (FUN_00d50b00(), local_58[0] != '\0')) &&
         (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_58[0] = '\0';
    }
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
    pcVar1 = DAT_025683d8;
    if (*(int *)((longlong)local_158 + 0xc) != 0) {
      local_170 = DAT_02572370;
      local_178 = &DAT_02572358;
      do {
        local_60 = local_158;
        local_58[0] = '\0';
        plVar21 = unaff_RDI;
        FUN_00d243f0();
        pVar19 = (pthread_key_t)plVar21;
        if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d216c0();
        FUN_00d216c0();
        pvVar7 = _pthread_getspecific(pVar19);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01505900();
        plVar21 = local_60;
        if (((local_58[0] == '\0') && (local_60 != (longlong *)0x0)) &&
           ((FUN_00d50b00(), unaff_R14 = plVar21, local_58[0] != '\0' &&
            (local_60 != (longlong *)0x0)))) {
          FUN_00d50b20();
        }
        local_100 = plVar21;
        FUN_016cbba0();
        plVar21 = local_60;
        if (local_58[0] == '\0') {
          if (((local_60 != (longlong *)0x0) && (FUN_00d50b00(), local_58[0] != '\0')) &&
             (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_58[0] = '\0';
        }
        pvVar7 = _pthread_getspecific(pVar19);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01505930();
        FUN_00d23310();
        plVar14 = local_60;
        local_c8 = (longlong *)CONCAT71(local_c8._1_7_,local_58[0]);
        plVar11 = &local_c8;
        plVar16 = (longlong *)local_58;
        if (local_58[0] == '\0') {
          plVar16 = plVar11;
        }
        *(undefined1 *)plVar16 = 0;
        if ((local_58[0] != '\0') && (plVar14 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_110 = plVar14;
        if (((char)local_c8 == '\0') && (plVar14 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_128 = (longlong *)FUN_00e7bdb0();
        local_120 = (longlong *)FUN_00e7bdb0();
        local_1bc = 0xffffffff;
        local_148 = (longlong *)FUN_00e7bdb0();
        local_168 = (longlong *)FUN_00e7bdb0();
        (**(code **)(*unaff_RDI + 0x3b0))();
        pVar19 = (pthread_key_t)plVar21;
        plVar14 = unaff_RDI;
        if ((longlong *)unaff_RDI[0xd] == (longlong *)0x0) {
          local_38 = (ulonglong)local_38._4_4_ << 0x20;
          local_e0 = (longlong *)((ulonglong)local_e0._4_4_ << 0x20);
LAB_011f9001:
          pVar20 = (pthread_key_t)plVar11;
          if ((((byte)local_e0 | (byte)local_38) & 1) == 0) {
            plVar16 = (longlong *)0x0;
            local_14c = 0;
            local_90 = (longlong *)0x0;
            local_f0 = local_f0 & 0xffffffff00000000;
LAB_011f9040:
            if (local_90 == (longlong *)0x0) {
              pvVar7 = _pthread_getspecific((pthread_key_t)plVar11);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_016ca8d0(&local_120,&local_128,&local_1bc);
              local_90 = local_60;
              plVar11 = local_60;
              if (local_60 == (longlong *)0x0) {
                local_90 = (longlong *)0x0;
                goto LAB_011fb68b;
              }
              plVar14 = (longlong *)CONCAT71((int7)((ulonglong)plVar14 >> 8),1);
              if (((local_58[0] == '\0') && (FUN_00d50b00(), local_58[0] != '\0')) &&
                 (local_60 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              local_f0 = CONCAT44(local_f0._4_4_,(int)plVar14);
            }
            else {
              pvVar7 = _pthread_getspecific((pthread_key_t)plVar11);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              plVar11 = &local_120;
              FUN_016ca9d0(plVar11,&local_128,&local_1bc);
              plVar14 = local_60;
              uVar18 = (undefined7)((ulonglong)unaff_R14 >> 8);
              if (local_60 == local_90) {
                if (((char)local_f0 != '\0') || (local_60 == (longlong *)0x0)) {
                  unaff_R14 = (longlong *)(local_f0 & 0xffffffff);
                  plVar26 = local_90;
                  goto joined_r0x011f927e;
                }
                unaff_R14 = (longlong *)CONCAT71(uVar18,1);
                if (local_58[0] == '\0') {
                  FUN_00d50b00();
                  goto LAB_011f9229;
                }
              }
              else if (local_58[0] == '\0') {
                if (local_60 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
                unaff_R14 = (longlong *)CONCAT71(uVar18,1);
                plVar26 = plVar14;
                if ((char)local_f0 != '\0') {
                  FUN_00d50b20();
                  local_90 = plVar14;
LAB_011f9229:
                  unaff_R14 = (longlong *)CONCAT71(uVar18,1);
                  plVar26 = local_90;
                }
joined_r0x011f927e:
                local_90 = plVar26;
                if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                unaff_R14 = (longlong *)CONCAT71(uVar18,1);
                if ((char)local_f0 == '\0') {
                  local_90 = local_60;
                }
                else {
                  FUN_00d50b20();
                  local_90 = plVar14;
                }
              }
              local_f0 = CONCAT44(local_f0._4_4_,(int)unaff_R14);
            }
            if (local_90 == (longlong *)0x0) goto LAB_011fb68b;
            local_138 = FUN_0123fff0();
            plVar11 = (longlong *)0x0;
            pVar20 = 0;
            local_140 = (longlong *)0x0;
            if ((longlong *)unaff_RDI[0xd] == (longlong *)0x0) {
              local_e8 = (longlong *)0x0;
            }
            else {
              local_58[0] = '\0';
              local_60 = (longlong *)0x0;
              local_48 = 0xffffffff;
              local_40 = 0;
              local_50 = (longlong *)unaff_RDI[0xd];
              while( true ) {
                lVar8 = (longlong)(int)local_48;
                iVar24 = (int)local_48 + 1;
                local_48 = CONCAT44(local_48._4_4_,iVar24);
                if (*(int *)((longlong)local_50 + 0xc) <= iVar24) break;
                plVar11 = (longlong *)local_50[2];
                local_60 = (longlong *)plVar11[lVar8 + 1];
                FUN_0124b7b0();
                if (local_88 == local_90) {
                  plVar14 = (longlong *)CONCAT71((int7)((ulonglong)plVar14 >> 8),1);
                  plVar26 = local_90;
                }
                else {
                  FUN_0124b7b0();
                  if (local_c8 == (longlong *)0x0) {
                    plVar14 = (longlong *)0x0;
                  }
                  else {
                    FUN_0124b7b0();
                    uVar4 = (**(code **)(*local_a0 + 0x50))();
                    plVar14 = (longlong *)(ulonglong)uVar4;
                    if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  plVar26 = local_88;
                  if ((local_c0[0] != '\0') && (local_c8 != (longlong *)0x0)) {
                    FUN_00d50b20();
                    plVar26 = local_88;
                  }
                }
                if ((local_80 != '\0') && (plVar26 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                plVar26 = local_60;
                if ((char)plVar14 != '\0') {
                  if (local_60 == (longlong *)0x0) {
                    local_140 = (longlong *)0x0;
                    plVar26 = (longlong *)0x0;
                  }
                  else {
                    if (local_58[0] == '\0') {
                      plVar14 = (longlong *)FUN_00d50b00();
                    }
                    else {
                      local_58[0] = '\0';
                      plVar14 = local_60;
                    }
                    local_140 = (longlong *)CONCAT71((int7)((ulonglong)plVar14 >> 8),1);
                  }
                  local_e8 = plVar26;
                  FUN_0124b820();
                  plVar14 = local_88;
                  if (local_80 == '\0') {
                    if (local_88 == (longlong *)0x0) goto LAB_011f954f;
                    FUN_00d50b00();
                    if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  else if (local_88 == (longlong *)0x0) goto LAB_011f954f;
                  local_80 = '\0';
                  local_88 = plVar14;
                  FUN_00d235a0();
                  if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  FUN_00d50b20();
                  goto LAB_011f954f;
                }
                if (local_48._4_4_ != 0) {
                  if (local_48._4_4_ < 1) {
                    iVar24 = -local_48._4_4_;
                  }
                  else {
                    local_48 = CONCAT44(local_48._4_4_,(int)local_48 - local_48._4_4_);
                    FUN_00d23690();
                    local_40 = local_40 + local_48._4_4_;
                    iVar24 = 0;
                  }
                  local_48 = CONCAT44(iVar24,(int)local_48);
                }
              }
              local_140 = (longlong *)0x0;
              local_e8 = (longlong *)0x0;
              plVar11 = local_50;
LAB_011f954f:
              FUN_01204500();
              pVar20 = (pthread_key_t)plVar11;
            }
            if (local_120._4_4_ == 0) {
              pvVar7 = _pthread_getspecific(pVar20);
              if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                pVar20 = (pthread_key_t)local_100;
              }
              pvVar7 = _pthread_getspecific(pVar20);
              if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                pVar20 = (pthread_key_t)local_110;
              }
              FUN_012cb110();
              pvVar7 = _pthread_getspecific(pVar20);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012ebd30();
              pVar20 = 0;
              local_120 = (longlong *)FUN_016cb690(0,0);
              if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              pvVar7 = _pthread_getspecific(pVar20);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_015058d0();
              pvVar7 = _pthread_getspecific(pVar20);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01510280();
              unaff_R14 = local_60;
              if (local_58[0] == '\0') {
                if (((local_60 != (longlong *)0x0) && (FUN_00d50b00(), local_58[0] != '\0')) &&
                   (local_60 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_58[0] = '\0';
              }
              if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              pvVar7 = _pthread_getspecific(pVar20);
              plVar11 = unaff_R14;
              if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                plVar11 = (longlong *)unaff_R14[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
              }
              pVar20 = *(int *)(plVar11[9] + 0x18) + 7;
              if (pVar20 < 0xf) {
                FUN_00d23310();
                plVar14 = local_60;
                local_88 = (longlong *)CONCAT71(local_88._1_7_,local_58[0]);
                plVar11 = &local_88;
                plVar26 = (longlong *)local_58;
                if (local_58[0] == '\0') {
                  plVar26 = plVar11;
                }
                *(undefined1 *)plVar26 = 0;
                if ((local_58[0] != '\0') && (plVar14 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if (((char)local_88 != '\0') && (plVar14 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                pVar20 = (pthread_key_t)plVar11;
                if (plVar14 != (longlong *)0x0) goto LAB_011f97d9;
              }
              else {
LAB_011f97d9:
                pvVar7 = _pthread_getspecific(pVar20);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012527b0(&local_88,0,0,0);
                plVar14 = local_60;
                local_108._0_1_ = local_58[0];
                plVar11 = &local_108;
                plVar26 = (longlong *)local_58;
                if (local_58[0] == '\0') {
                  plVar26 = plVar11;
                }
                *(undefined1 *)plVar26 = 0;
                if ((local_58[0] != '\0') && (plVar14 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if (((char)local_108 != '\0') && (plVar14 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if (((local_88._4_4_ != 0) && (local_120._4_4_ != 0)) &&
                   (cVar3 = FUN_00e7c020(), cVar3 != '\0')) {
                  local_120 = local_88;
                }
              }
              local_60 = (longlong *)FUN_0123fff0();
              FUN_00e7b820();
              if (unaff_R14 != (longlong *)0x0) {
                FUN_00d50b20();
              }
            }
            if ((local_e8 == (longlong *)0x0) || (cVar3 = FUN_0124b7e0(), cVar3 != '\0')) {
              pVar20 = (pthread_key_t)plVar11;
              if (local_120._4_4_ == 0) goto LAB_011fa380;
              if (local_148._4_4_ == 0) {
                local_148 = local_128;
              }
              if (((ulonglong)plVar16 & 1) == 0) {
                pvVar7 = _pthread_getspecific(pVar20);
                if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                  pVar20 = pVar19;
                }
                local_14c = 1;
                FUN_016caa50();
                plVar16 = (longlong *)CONCAT71((int7)((ulonglong)plVar16 >> 8),1);
              }
              if ((char)local_f0 != '\0') {
                FUN_00d50b00();
              }
              local_60 = local_120;
              local_118 = plVar16;
              FUN_00e7b970();
              local_c8 = local_60;
              local_a0 = (longlong *)FUN_00e7bcc0();
              unaff_R14 = local_90;
              pVar25 = (pthread_key_t)local_f0;
              if (local_e8 != (longlong *)0x0) {
                cVar3 = FUN_0124b7e0();
                unaff_R14 = local_90;
                pVar25 = (pthread_key_t)local_f0;
                pVar20 = (pthread_key_t)local_f0;
                if (cVar3 != '\0') {
                  FUN_0124b780();
                  plVar11 = local_90;
                  cVar3 = (char)local_f0;
                  if (local_60 == local_90) {
                    pVar25 = (pthread_key_t)local_f0;
                    if (cVar3 == '\0') {
                      pVar25 = 1;
                      if (local_58[0] != '\0') goto LAB_011fa039;
                      pVar25 = 1;
                      FUN_00d50b00();
                    }
LAB_011fa025:
                    if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  else {
                    plVar11 = local_60;
                    if (local_58[0] == '\0') {
                      if (local_60 != (longlong *)0x0) {
                        FUN_00d50b00();
                      }
                      pVar25 = 1;
                      if ((char)local_f0 != '\0') {
                        FUN_00d50b20();
                      }
                      goto LAB_011fa025;
                    }
                    pVar25 = 1;
                    if ((char)local_f0 != '\0') {
                      FUN_00d50b20();
                    }
                  }
LAB_011fa039:
                  FUN_0124b7b0();
                  plVar14 = local_60;
                  if ((((local_58[0] == '\0') && (local_60 != (longlong *)0x0)) &&
                      (FUN_00d50b00(), local_58[0] != '\0')) && (local_60 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  iVar24 = FUN_0123fef0();
                  if ((iVar24 * -0x55555555 + 0x2aaaaaaaU < 0x55555555) &&
                     (uVar10 = FUN_0123fef0(), (uVar10 & 1) == 0)) {
                    local_a0 = (longlong *)FUN_00e7bcc0();
                  }
                  uVar10 = FUN_0123fef0();
                  if (((uVar10 & 1) == 0) &&
                     (iVar24 = FUN_0123fef0(), iVar24 * -0x55555555 + 0x2aaaaaaaU < 0x55555555)) {
                    local_a0 = (longlong *)FUN_00e7bcc0();
                  }
                  local_60 = local_c8;
                  FUN_00e7bac0();
                  local_c8 = local_60;
                  local_60 = (longlong *)CONCAT44(local_60._4_4_,1);
                  unaff_R14 = plVar11;
                  plVar16 = local_a0;
                  if (((local_a0._4_4_ != 0) &&
                      (cVar3 = FUN_00e7c630(), plVar16 = local_a0, cVar3 != '\0')) &&
                     (unaff_R14 = local_90, plVar16 = local_168, plVar11 != local_90)) {
                    if ((char)local_f0 != '\0') {
                      FUN_00d50b00();
                    }
                    unaff_R14 = local_90;
                    pVar25 = (pthread_key_t)local_f0;
                    plVar16 = local_168;
                    if (plVar11 != (longlong *)0x0) {
                      FUN_00d50b20();
                      pVar25 = (pthread_key_t)local_f0;
                      plVar16 = local_168;
                    }
                  }
                  local_168 = plVar16;
                  if (plVar14 != (longlong *)0x0) {
                    FUN_00d50b20();
                  }
                }
              }
              pvVar7 = _pthread_getspecific(pVar20);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0123fef0();
              uVar5 = FUN_0123ff00();
              FUN_016c3060(local_148,uVar5,1);
              plVar14 = local_120;
              plVar11 = local_148;
              local_60 = local_148;
              FUN_00e7b820();
              (**(code **)(*unaff_RDI + 0x3c0))(plVar11,plVar14,local_60);
              plVar16 = local_120;
              plVar14 = local_148;
              local_e0 = (longlong *)CONCAT71(local_e0._1_7_,(char)pVar25);
              local_60 = local_148;
              FUN_00e7b820();
              plVar11 = plVar14;
              FUN_0124bb00(plVar14,plVar16,local_60);
              plVar16 = local_88;
              plVar26 = local_e0;
              if (local_80 == '\0') {
                if (local_88 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_80 = '\0';
              }
              local_60 = plVar16;
              local_58[0] = '\0';
              FUN_00d21140();
              if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar16 != (longlong *)0x0) {
                FUN_00d50b20();
              }
              if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              FUN_00e7b820();
              plVar16 = local_118;
              if ((char)plVar26 != '\0') {
                if (unaff_R14 != (longlong *)0x0) {
                  FUN_00d50b20();
                }
                goto LAB_011fa380;
              }
            }
            else {
              FUN_0124b780();
              local_a0 = (longlong *)FUN_0123fff0();
              if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              local_f8 = local_128;
              if ((ulonglong)local_128 >> 0x20 != 0) {
                do {
                  if ((local_120._4_4_ == 0) ||
                     (cVar3 = FUN_00e7c020(), plVar26 = local_f8, cVar3 == '\0')) break;
                  pVar20 = (pthread_key_t)((ulonglong)local_f8 >> 0x20);
                  if (local_148._4_4_ == 0) {
                    local_148 = local_f8;
                  }
                  if (((ulonglong)plVar16 & 1) == 0) {
                    pvVar7 = _pthread_getspecific(pVar20);
                    if (pvVar7 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    uVar9 = FUN_016caa50();
                    local_14c = (uint)CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
                    pVar20 = (pthread_key_t)((ulonglong)local_f8 >> 0x20);
                    plVar16 = (longlong *)CONCAT71((int7)((ulonglong)plVar16 >> 8),1);
                  }
                  if (((pVar20 != 0) && (local_128._4_4_ != 0)) &&
                     (cVar3 = FUN_00e7c000(), cVar3 != '\0')) {
                    pvVar7 = _pthread_getspecific(pVar20);
                    if (pvVar7 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_0124b780();
                    FUN_0123fef0();
                    FUN_0124b780();
                    uVar5 = FUN_0123ff00();
                    FUN_016c3060(local_148,uVar5,1);
                    if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  local_60 = local_f8;
                  FUN_00e7b820();
                  unaff_R14 = local_60;
                  plVar14 = local_148;
                  local_60 = local_148;
                  FUN_00e7b820();
                  plVar11 = plVar14;
                  (**(code **)(*unaff_RDI + 0x3b8))(plVar14,unaff_R14,local_60);
                  FUN_0124b750();
                  plVar2 = local_60;
                  if (local_58[0] == '\0') {
                    if (local_60 != (longlong *)0x0) {
                      FUN_00d50b00();
                      if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                      goto LAB_011f9c00;
                    }
                  }
                  else if (local_60 != (longlong *)0x0) {
LAB_011f9c00:
                    local_58[0] = '\0';
                    local_60 = (longlong *)0x0;
                    local_50 = plVar2;
                    local_48 = 0xffffffff;
                    local_40 = 0;
                    local_48._4_4_ = 0;
                    local_160 = plVar2;
                    local_118 = plVar16;
                    while( true ) {
                      plVar16 = local_118;
                      if (local_48._4_4_ != 0) {
                        if (local_48._4_4_ < 1) {
                          iVar24 = -local_48._4_4_;
                        }
                        else {
                          iVar24 = (int)local_48 - local_48._4_4_;
                          local_48 = CONCAT44(local_48._4_4_,iVar24);
                          FUN_00d23690();
                          local_40 = local_40 + local_48._4_4_;
                          iVar24 = 0;
                        }
                        local_48 = CONCAT44(iVar24,(int)local_48);
                      }
                      lVar8 = (longlong)(int)local_48;
                      iVar24 = (int)local_48 + 1;
                      local_48 = CONCAT44(local_48._4_4_,iVar24);
                      if (*(int *)((longlong)local_50 + 0xc) <= iVar24) break;
                      local_60 = *(longlong **)(local_50[2] + 8 + lVar8 * 8);
                      local_c8 = (longlong *)FUN_0124ba40();
                      local_88 = plVar26;
                      FUN_00e7b820();
                      local_c8 = (longlong *)FUN_0124ba50();
                      local_88 = plVar26;
                      FUN_00e7b820();
                      plVar11 = local_88;
                      local_c8 = (longlong *)FUN_0124ba90();
                      local_88 = local_148;
                      FUN_00e7b820();
                      local_e0 = local_88;
                      local_c8 = (longlong *)FUN_0124bac0();
                      local_88 = local_148;
                      FUN_00e7b820();
                      plVar16 = local_88;
                      local_38 = unaff_RDI[0xf];
                      uVar4 = FUN_0124b850();
                      plVar14 = (longlong *)(ulonglong)uVar4;
                      FUN_00e7bdb0();
                      FUN_0124bb00(local_e0,plVar11,plVar16);
                      unaff_R14 = local_c8;
                      if (local_c0[0] == '\0') {
                        if (local_c8 != (longlong *)0x0) {
                          FUN_00d50b00();
                        }
                      }
                      else {
                        local_c0[0] = '\0';
                      }
                      local_88 = unaff_R14;
                      local_80 = '\0';
                      FUN_00d21140();
                      if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                      if (unaff_R14 != (longlong *)0x0) {
                        FUN_00d50b20();
                      }
                      if ((local_c0[0] != '\0') && (local_c8 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                    }
                    plVar11 = local_50;
                    FUN_012045a0();
                    FUN_00d50b20();
                  }
                  FUN_00e7b820();
                  FUN_00e7b820();
                } while (local_f8._4_4_ != 0);
              }
LAB_011fa380:
            }
            if (((char)local_140 != '\0') && (local_e8 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_011f9040;
          }
          pvVar7 = _pthread_getspecific(pVar20);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_015058d0();
          pvVar7 = _pthread_getspecific(pVar20);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0150c530();
          plVar11 = (longlong *)0x0;
          FUN_012014f0();
          local_140 = local_60;
          if (local_58[0] == '\0') {
            if (((local_60 != (longlong *)0x0) && (FUN_00d50b00(), local_58[0] != '\0')) &&
               (local_60 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_58[0] = '\0';
          }
          if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_c0[0] != '\0') && (local_c8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00e7bdb0();
          puVar13 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar13 = &DAT_025683c0;
          (*pcVar1)();
          FUN_00c92170();
          FUN_00c92160();
          plVar14 = (longlong *)FUN_00e8fc40();
          FUN_00d4ff40();
          *plVar14 = (longlong)&DAT_025683c0;
          (*pcVar1)();
          FUN_00c92170();
          FUN_00c92160();
          local_160 = plVar14;
          local_e8 = (longlong *)FUN_00e7bdb0();
          if (local_140 == (longlong *)0x0) {
            plVar14 = (longlong *)0x0;
            local_90 = (longlong *)0x0;
LAB_011fb2e4:
            FUN_00d50b20();
          }
          else {
            local_58[0] = '\0';
            local_60 = (longlong *)0x0;
            local_50 = local_140;
            local_48 = 0xffffffff;
            local_40 = 0;
            local_90 = (longlong *)0x0;
            plVar14 = (longlong *)0x0;
            while( true ) {
              lVar8 = (longlong)(int)local_48;
              iVar24 = (int)local_48 + 1;
              local_48 = CONCAT44(local_48._4_4_,iVar24);
              if (*(int *)((longlong)local_50 + 0xc) <= iVar24) break;
              plVar11 = (longlong *)local_50[2];
              local_60 = (longlong *)plVar11[lVar8 + 1];
              pvVar7 = _pthread_getspecific((pthread_key_t)plVar11);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_118 = (longlong *)FUN_01507970();
              (**(code **)(*unaff_RDI + 0x3a8))();
              plVar16 = local_88;
              if (local_80 == '\0') {
                if (((local_88 != (longlong *)0x0) && (FUN_00d50b00(), local_80 != '\0')) &&
                   (local_88 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_80 = '\0';
              }
              if (plVar16 != plVar14) {
                uVar9 = FUN_00c8e340();
                if (plVar16 != (longlong *)0x0) {
                  uVar9 = FUN_00d50b00();
                }
                if (((char)local_90 != '\0') && (plVar14 != (longlong *)0x0)) {
                  uVar9 = FUN_00d50b20();
                }
                plVar14 = plVar16;
                if (((ulonglong)local_e0 & 1) == 0) {
                  if ((local_38 & 1) == 0) goto LAB_011fa860;
                  pvVar7 = _pthread_getspecific((pthread_key_t)plVar11);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  uVar9 = FUN_017c4e20();
                  plVar26 = local_88;
                  if (local_88 == (longlong *)0x0) {
                    plVar26 = (longlong *)0x0;
                    local_f0 = 0;
                  }
                  else {
                    local_f0 = CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
                    if (((local_80 == '\0') && (FUN_00d50b00(), local_80 != '\0')) &&
                       (local_88 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  pvVar7 = _pthread_getspecific((pthread_key_t)plVar11);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  local_e8 = (longlong *)FUN_017c4e00();
                  if (plVar26 != (longlong *)0x0) goto LAB_011fa927;
                  plVar11 = (longlong *)CONCAT71((int7)((ulonglong)plVar11 >> 8),1);
                  uVar18 = (undefined7)((ulonglong)local_e8 >> 8);
                }
                else {
                  pvVar7 = _pthread_getspecific((pthread_key_t)plVar11);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  uVar9 = FUN_017c5270();
                  plVar26 = local_88;
                  pVar20 = (pthread_key_t)plVar11;
                  if (local_88 == (longlong *)0x0) {
LAB_011fa860:
                    local_90 = (longlong *)CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
                    goto joined_r0x011fa86f;
                  }
                  if (((local_80 == '\0') && (uVar9 = FUN_00d50b00(), local_80 != '\0')) &&
                     (local_88 != (longlong *)0x0)) {
                    uVar9 = FUN_00d50b20();
                  }
                  local_f0 = CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
                  if (*(int *)((longlong)plVar26 + 0xc) != 0) {
                    pvVar7 = _pthread_getspecific(pVar20);
                    if (pvVar7 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    local_e8 = (longlong *)FUN_017c4e00();
                  }
LAB_011fa927:
                  local_80 = '\0';
                  local_88 = (longlong *)0x0;
                  local_70 = 0xffffffff;
                  local_68 = 0;
                  local_78 = plVar26;
                  while( true ) {
                    lVar8 = (longlong)(int)local_70;
                    iVar24 = (int)local_70 + 1;
                    local_70 = CONCAT44(local_70._4_4_,iVar24);
                    if (*(int *)((longlong)local_78 + 0xc) <= iVar24) break;
                    local_88 = *(longlong **)(local_78[2] + 8 + lVar8 * 8);
                    pvVar7 = _pthread_getspecific((pthread_key_t)local_78[2]);
                    if (pvVar7 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    uVar9 = FUN_017c3170();
                    iVar24 = *(int *)(puVar13 + 3);
                    FUN_00c8e340();
                    *(undefined8 *)(puVar13[2] + (longlong)iVar24) = uVar9;
                    if (local_70._4_4_ != 0) {
                      if ((longlong)local_70 < 0) {
                        iVar24 = -local_70._4_4_;
                      }
                      else {
                        local_70 = CONCAT44(local_70._4_4_,(int)local_70 - local_70._4_4_);
                        FUN_00d23690();
                        local_68 = local_68 + local_70._4_4_;
                        iVar24 = 0;
                      }
                      local_70 = CONCAT44(iVar24,(int)local_70);
                    }
                  }
                  uVar9 = FUN_0142bf90();
                  plVar11 = (longlong *)0x0;
                  uVar18 = (undefined7)((ulonglong)uVar9 >> 8);
                }
                local_90 = (longlong *)CONCAT71(uVar18,1);
                if (((char)local_f0 != '\0') && ((char)plVar11 == '\0')) {
                  FUN_00d50b20();
                }
              }
joined_r0x011fa86f:
              if (plVar16 != (longlong *)0x0) {
                FUN_00d50b20();
              }
              local_c8 = (longlong *)CONCAT44(local_c8._4_4_,3);
              local_88 = local_e8;
              FUN_00e7c3c0();
              unaff_R14 = local_88;
              plVar16 = local_88;
              if (((plVar14 != (longlong *)0x0) && (0xe < *(int *)(puVar13 + 3) + 7U)) &&
                 ((ulonglong)local_e8 >> 0x20 != 0)) {
                local_c8 = local_88;
                if (((ulonglong)local_e0 & 1) != 0) {
                  pvVar7 = _pthread_getspecific((pthread_key_t)plVar11);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  cVar3 = FUN_017c4d30();
                  if (cVar3 == '\0') {
                    local_88 = (longlong *)CONCAT44(local_88._4_4_,2);
                    FUN_00e7c3c0();
                  }
                }
                if ((local_38 & 1) != 0) {
                  pvVar7 = _pthread_getspecific((pthread_key_t)plVar11);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  cVar3 = FUN_017c4cb0();
                  if (cVar3 == '\0') {
                    local_88 = (longlong *)CONCAT44(local_88._4_4_,2);
                    FUN_00e7c3c0();
                  }
                }
                pvVar7 = _pthread_getspecific((pthread_key_t)plVar11);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_a0 = (longlong *)FUN_017c4310();
                iVar24 = *(int *)(puVar13 + 3);
                iVar6 = iVar24 + 7;
                if (-1 < iVar24) {
                  iVar6 = iVar24;
                }
                if (7 < iVar24) {
                  iVar6 = iVar6 >> 3;
                  lVar8 = puVar13[2];
                  do {
                    if (((*(int *)(lVar8 + 4) != 0) && (local_a0._4_4_ != 0)) &&
                       (cVar3 = FUN_00e7c000(), cVar3 != '\0')) {
                      lVar8 = local_160[3];
                      FUN_00c8e340();
                      *(longlong **)(local_160[2] + (longlong)(int)lVar8) = local_118;
                      plVar11 = local_118;
                      if (((ulonglong)local_e0 & 1) == 0) {
                        if ((local_38 & 1) != 0) {
                          pvVar7 = _pthread_getspecific((pthread_key_t)local_118);
                          if (pvVar7 != (void *)0x0) {
                            FUN_00e8b990();
                          }
                          local_88 = local_118;
                          FUN_00e7b820();
                          FUN_015084d0();
                        }
                      }
                      else {
                        pvVar7 = _pthread_getspecific((pthread_key_t)local_118);
                        if (pvVar7 != (void *)0x0) {
                          FUN_00e8b990();
                        }
                        local_88 = local_118;
                        FUN_00e7b970();
                        FUN_015084d0();
                      }
                      break;
                    }
                    lVar8 = lVar8 + 8;
                    iVar6 = iVar6 + -1;
                  } while (iVar6 != 0);
                }
              }
              pvVar7 = _pthread_getspecific((pthread_key_t)plVar11);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_88 = (longlong *)FUN_01508610();
              iVar24 = (int)local_160[3];
              iVar6 = iVar24 + 7;
              if (-1 < iVar24) {
                iVar6 = iVar24;
              }
              if (7 < iVar24) {
                iVar6 = iVar6 >> 3;
                uVar10 = (ulonglong)local_88 >> 0x20;
                iVar24 = *(int *)(local_160[2] + 4);
                lVar8 = local_160[2];
                plVar11 = local_160;
                do {
                  iVar6 = iVar6 + -1;
                  if ((iVar24 != 0) && ((int)uVar10 != 0)) {
                    cVar3 = FUN_00e7c000();
                    pVar20 = (pthread_key_t)plVar11;
                    if (cVar3 != '\0') {
                      local_c8 = unaff_R14;
                      if (((ulonglong)local_e0 & 1) == 0) {
                        if ((local_38 & 1) == 0) break;
LAB_011faf63:
                        pvVar7 = _pthread_getspecific(pVar20);
                        if (pvVar7 != (void *)0x0) {
                          FUN_00e8b990();
                        }
                        pvVar7 = _pthread_getspecific(pVar20);
                        if (pvVar7 != (void *)0x0) {
                          FUN_00e8b990();
                        }
                        FUN_01508610();
                        cVar3 = FUN_017c4cb0();
                        if (cVar3 == '\0') {
                          local_88 = (longlong *)CONCAT44(local_88._4_4_,2);
                          FUN_00e7c3c0();
                        }
                        unaff_R14 = local_60;
                        if (((ulonglong)local_e0 & 1) == 0) {
                          pvVar7 = _pthread_getspecific(pVar20);
                          plVar11 = local_60;
                          if ((pvVar7 != (void *)0x0) &&
                             (lVar8 = FUN_00e8b990(), unaff_R14 = plVar11, lVar8 != 0)) {
                            unaff_R14 = (longlong *)
                                        plVar11[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
                          }
                          pvVar7 = _pthread_getspecific(pVar20);
                          if (pvVar7 != (void *)0x0) {
                            FUN_00e8b990();
                          }
                          local_88 = (longlong *)FUN_01508610();
                          FUN_00e7b820();
                          FUN_015085a0();
                          break;
                        }
                      }
                      else {
                        pvVar7 = _pthread_getspecific(pVar20);
                        if (pvVar7 != (void *)0x0) {
                          FUN_00e8b990();
                        }
                        pvVar7 = _pthread_getspecific(pVar20);
                        if (pvVar7 != (void *)0x0) {
                          FUN_00e8b990();
                        }
                        FUN_01508610();
                        cVar3 = FUN_017c4d30();
                        if (cVar3 == '\0') {
                          local_88 = (longlong *)CONCAT44(local_88._4_4_,2);
                          FUN_00e7c3c0();
                        }
                        if ((local_38 & 1) != 0) goto LAB_011faf63;
                      }
                      unaff_R14 = local_60;
                      pvVar7 = _pthread_getspecific(pVar20);
                      plVar11 = local_60;
                      if ((pvVar7 != (void *)0x0) &&
                         (lVar8 = FUN_00e8b990(), unaff_R14 = plVar11, lVar8 != 0)) {
                        unaff_R14 = (longlong *)
                                    plVar11[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
                      }
                      pvVar7 = _pthread_getspecific(pVar20);
                      if (pvVar7 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      local_88 = (longlong *)FUN_01508610();
                      FUN_00e7b970();
                      FUN_015085a0();
                      break;
                    }
                  }
                  if (iVar6 == 0) break;
                  uVar10 = (ulonglong)local_88 >> 0x20;
                  iVar24 = *(int *)(lVar8 + 0xc);
                  lVar8 = lVar8 + 8;
                } while( true );
              }
              if (local_48._4_4_ != 0) {
                if ((longlong)local_48 < 0) {
                  iVar24 = -local_48._4_4_;
                }
                else {
                  local_48 = CONCAT44(local_48._4_4_,(int)local_48 - local_48._4_4_);
                  FUN_00d23690();
                  local_40 = local_40 + local_48._4_4_;
                  iVar24 = 0;
                }
                local_48 = CONCAT44(iVar24,(int)local_48);
              }
            }
            plVar11 = local_50;
            FUN_0015ed50();
            if (local_160 != (longlong *)0x0) goto LAB_011fb2e4;
          }
          if (puVar13 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
          if (((char)local_90 != '\0') && (plVar14 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (local_140 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          plVar16 = (longlong *)0x0;
        }
        else {
          local_58[0] = '\0';
          local_60 = (longlong *)0x0;
          local_48 = 0xffffffff;
          local_40 = 0;
          bVar27 = false;
          local_e0 = (longlong *)((ulonglong)local_e0._4_4_ << 0x20);
          local_38 = (ulonglong)local_38._4_4_ << 0x20;
          local_50 = (longlong *)unaff_RDI[0xd];
          local_48._4_4_ = 0;
          while( true ) {
            if (local_48._4_4_ != 0) {
              if (local_48._4_4_ < 1) {
                iVar24 = -local_48._4_4_;
              }
              else {
                iVar24 = (int)local_48 - local_48._4_4_;
                local_48 = CONCAT44(local_48._4_4_,iVar24);
                FUN_00d23690();
                local_40 = local_40 + local_48._4_4_;
                iVar24 = 0;
              }
              local_48 = CONCAT44(iVar24,(int)local_48);
            }
            lVar8 = (longlong)(int)local_48;
            iVar24 = (int)local_48 + 1;
            local_48 = CONCAT44(local_48._4_4_,iVar24);
            if (*(int *)((longlong)local_50 + 0xc) <= iVar24) break;
            local_60 = *(longlong **)(local_50[2] + 8 + lVar8 * 8);
            cVar3 = FUN_0124b7f0();
            if (cVar3 != '\0') {
              uVar9 = FUN_0124b820();
              plVar14 = local_88;
              if (local_80 == '\0') {
                if (local_88 != (longlong *)0x0) {
                  FUN_00d50b00();
                  if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  goto LAB_011f8d30;
                }
              }
              else if (local_88 != (longlong *)0x0) {
LAB_011f8d30:
                local_80 = '\0';
                local_88 = plVar14;
                uVar9 = FUN_00d235a0();
                if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
                  uVar9 = FUN_00d50b20();
                }
                local_e0 = (longlong *)
                           CONCAT44(local_e0._4_4_,(int)CONCAT71((int7)((ulonglong)uVar9 >> 8),1));
                FUN_00d50b20();
                goto LAB_011f8d80;
              }
              local_e0 = (longlong *)
                         CONCAT44(local_e0._4_4_,(int)CONCAT71((int7)((ulonglong)uVar9 >> 8),1));
            }
LAB_011f8d80:
            cVar3 = FUN_0124b800();
            if (cVar3 != '\0') {
              uVar9 = FUN_0124b820();
              plVar14 = local_88;
              if (local_80 == '\0') {
                if (local_88 != (longlong *)0x0) {
                  FUN_00d50b00();
                  if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  goto LAB_011f8dd0;
                }
              }
              else if (local_88 != (longlong *)0x0) {
LAB_011f8dd0:
                local_80 = '\0';
                local_88 = plVar14;
                uVar9 = FUN_00d235a0();
                if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
                  uVar9 = FUN_00d50b20();
                }
                local_38 = CONCAT44(local_38._4_4_,(int)CONCAT71((int7)((ulonglong)uVar9 >> 8),1));
                FUN_00d50b20();
                goto LAB_011f8e10;
              }
              local_38 = CONCAT44(local_38._4_4_,(int)CONCAT71((int7)((ulonglong)uVar9 >> 8),1));
            }
LAB_011f8e10:
            local_88 = (longlong *)FUN_0124b810();
            cVar3 = FUN_00e7c7f0();
            if (cVar3 == '\0') {
LAB_011f8c8b:
            }
            else {
              local_c8 = (longlong *)FUN_0124b810();
              local_a0 = (longlong *)CONCAT44(local_a0._4_4_,1);
              if (((ulonglong)local_c8 >> 0x20 != 0) && (cVar3 = FUN_00e7c630(), cVar3 != '\0'))
              goto LAB_011f8c8b;
              local_c8 = (longlong *)CONCAT44(local_c8._4_4_,1);
              local_88 = (longlong *)FUN_0124b810();
              local_168 = (longlong *)FUN_00e7c4f0();
              FUN_0124b820();
              plVar14 = local_88;
              if (local_80 == '\0') {
                if (local_88 != (longlong *)0x0) {
                  FUN_00d50b00();
                  if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  goto LAB_011f8ef0;
                }
                bVar27 = true;
              }
              else {
                if (local_88 != (longlong *)0x0) {
LAB_011f8ef0:
                  local_80 = '\0';
                  local_88 = plVar14;
                  FUN_00d235a0();
                  if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  bVar27 = true;
                  FUN_00d50b20();
                  goto LAB_011f8c8b;
                }
                bVar27 = true;
              }
            }
          }
          plVar11 = local_50;
          FUN_01204500();
          unaff_R14 = (longlong *)0x0;
          if (!bVar27) goto LAB_011f9001;
          local_a0 = (longlong *)CONCAT44(local_a0._4_4_,0xffffffff);
          pvVar7 = _pthread_getspecific((pthread_key_t)plVar11);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_016ca8d0(&local_120,&local_128,&local_a0);
          plVar14 = local_60;
          if ((((local_58[0] == '\0') && (local_60 != (longlong *)0x0)) &&
              (FUN_00d50b00(), local_58[0] != '\0')) && (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          local_c8 = (longlong *)FUN_00e7bcc0();
          local_e0 = (longlong *)unaff_RDI[0xf];
          local_60 = local_128;
          FUN_00e7b820();
          plVar16 = local_60;
          local_60 = local_128;
          FUN_00e7bac0();
          unaff_R14 = local_60;
          local_60 = local_128;
          FUN_00e7b820();
          FUN_00e7bac0();
          plVar11 = unaff_R14;
          FUN_0124bb00(unaff_R14,plVar16,local_60);
          plVar16 = local_88;
          if (local_80 == '\0') {
            if (local_88 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_80 = '\0';
          }
          local_60 = plVar16;
          local_58[0] = '\0';
          FUN_00d21140();
          if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar16 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          pvVar7 = _pthread_getspecific((pthread_key_t)plVar11);
          if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            plVar11 = plVar21;
          }
          FUN_016caa50();
          while (pVar20 = (pthread_key_t)plVar11, plVar14 != (longlong *)0x0) {
            local_60._4_4_ = (undefined4)((ulonglong)local_60 >> 0x20);
            local_60 = (longlong *)CONCAT44(local_60._4_4_,1);
            local_168._4_4_ = (int)((ulonglong)local_168 >> 0x20);
            bVar27 = local_168._4_4_ == 0;
            unaff_R14 = plVar21;
            if ((bVar27) || (cVar3 = FUN_00e7c6b0(), cVar3 != '\0')) {
              pvVar7 = _pthread_getspecific(pVar20);
              if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                unaff_R14 = (longlong *)plVar21[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
              }
              FUN_0123fef0();
              uVar5 = FUN_0123ff00();
              local_60 = local_128;
              FUN_00e7bac0();
              plVar11 = local_60;
              FUN_016c3060(local_60,uVar5,1);
              pVar20 = (pthread_key_t)plVar11;
            }
            else {
              pvVar7 = _pthread_getspecific(pVar20);
              if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                unaff_R14 = (longlong *)plVar21[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
              }
              FUN_0123fef0();
              iVar6 = FUN_0123ff00();
              iVar24 = local_168._4_4_;
              local_60 = local_128;
              FUN_00e7bac0();
              plVar11 = local_60;
              FUN_016c3060(local_60,iVar24 * iVar6,1);
              pVar20 = (pthread_key_t)plVar11;
            }
            pvVar7 = _pthread_getspecific(pVar20);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            plVar11 = &local_120;
            FUN_016ca9d0(plVar11,&local_128,&local_a0);
            if (local_60 == plVar14) {
LAB_011fb5fc:
              if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              plVar14 = local_60;
              if (local_58[0] == '\0') {
                if (local_60 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
                FUN_00d50b20();
                goto LAB_011fb5fc;
              }
              FUN_00d50b20();
            }
          }
          pvVar7 = _pthread_getspecific(pVar20);
          if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            plVar11 = plVar21;
          }
          FUN_016c30e0();
          plVar16 = (longlong *)((longlong)&MACH_HEADER.magic + 1);
        }
        local_14c = 0;
        local_f0 = (ulonglong)local_f0._4_4_ << 0x20;
LAB_011fb68b:
        pVar20 = (pthread_key_t)plVar11;
        if (((ulonglong)plVar16 & 1) != 0) {
          if ((longlong *)unaff_RDI[0xf] != (longlong *)0x0) {
            local_58[0] = '\0';
            local_60 = (longlong *)0x0;
            local_48 = 0xffffffff;
            local_40 = 0;
            local_48._4_4_ = 0;
            local_50 = (longlong *)unaff_RDI[0xf];
            while( true ) {
              if (local_48._4_4_ != 0) {
                if (local_48._4_4_ < 1) {
                  iVar24 = -local_48._4_4_;
                }
                else {
                  iVar24 = (int)local_48 - local_48._4_4_;
                  local_48 = CONCAT44(local_48._4_4_,iVar24);
                  FUN_00d23690();
                  local_40 = local_40 + local_48._4_4_;
                  iVar24 = 0;
                }
                local_48 = CONCAT44(iVar24,(int)local_48);
              }
              lVar8 = (longlong)(int)local_48;
              iVar24 = (int)local_48 + 1;
              local_48 = CONCAT44(local_48._4_4_,iVar24);
              if (*(int *)((longlong)local_50 + 0xc) <= iVar24) break;
              lVar22 = local_50[2];
              local_60 = *(longlong **)(lVar22 + 8 + lVar8 * 8);
              local_138 = (**(code **)(*local_60 + 0x368))();
              pVar20 = (pthread_key_t)lVar22;
              local_88 = (longlong *)CONCAT44(local_88._4_4_,1);
              if ((local_138 >> 0x20 == 0) || (cVar3 = FUN_00e7c630(), cVar3 == '\0')) {
                pvVar7 = _pthread_getspecific(pVar20);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012cb1b0();
                plVar11 = local_88;
                if (local_80 == '\0') {
                  if (local_88 != (longlong *)0x0) {
                    FUN_00d50b00();
                    if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    goto LAB_011fb810;
                  }
                }
                else if (local_88 != (longlong *)0x0) {
LAB_011fb810:
                  local_80 = '\0';
                  local_88 = (longlong *)0x0;
                  local_78 = plVar11;
                  local_70 = 0xffffffff;
                  local_68 = 0;
                  local_70._4_4_ = 0;
                  while( true ) {
                    if (local_70._4_4_ != 0) {
                      if (local_70._4_4_ < 1) {
                        iVar24 = -local_70._4_4_;
                      }
                      else {
                        iVar24 = (int)local_70 - local_70._4_4_;
                        local_70 = CONCAT44(local_70._4_4_,iVar24);
                        FUN_00d23690();
                        local_68 = local_68 + local_70._4_4_;
                        iVar24 = 0;
                      }
                      local_70 = CONCAT44(iVar24,(int)local_70);
                    }
                    lVar8 = (longlong)(int)local_70;
                    iVar24 = (int)local_70 + 1;
                    local_70 = CONCAT44(local_70._4_4_,iVar24);
                    if (*(int *)((longlong)local_78 + 0xc) <= iVar24) break;
                    lVar22 = local_78[2];
                    local_88 = *(longlong **)(lVar22 + 8 + lVar8 * 8);
                    pvVar7 = _pthread_getspecific((pthread_key_t)lVar22);
                    pVar20 = (pthread_key_t)lVar22;
                    if (pvVar7 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_012e7fb0();
                    unaff_R14 = local_c8;
                    if (local_c0[0] == '\0') {
                      if (local_c8 != (longlong *)0x0) {
                        FUN_00d50b00();
                        if ((local_c0[0] != '\0') && (local_c8 != (longlong *)0x0)) {
                          FUN_00d50b20();
                        }
                        goto LAB_011fb930;
                      }
                    }
                    else if (local_c8 != (longlong *)0x0) {
LAB_011fb930:
                      pvVar7 = _pthread_getspecific(pVar20);
                      if (pvVar7 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      FUN_0124ba40();
                      uVar9 = FUN_0124ba60();
                      FUN_0150dbb0(uVar9);
                      plVar11 = local_c8;
                      if (local_c0[0] == '\0') {
                        if (local_c8 != (longlong *)0x0) {
                          FUN_00d50b00();
                          if ((local_c0[0] != '\0') && (local_c8 != (longlong *)0x0)) {
                            FUN_00d50b20();
                          }
                          goto LAB_011fb9f0;
                        }
                      }
                      else if (local_c8 != (longlong *)0x0) {
LAB_011fb9f0:
                        local_c0[0] = '\0';
                        local_c8 = (longlong *)0x0;
                        local_b8 = plVar11;
                        local_b0 = 0xffffffff;
                        local_a8 = 0;
                        while( true ) {
                          lVar8 = (longlong)(int)local_b0;
                          iVar24 = (int)local_b0 + 1;
                          local_b0 = CONCAT44(local_b0._4_4_,iVar24);
                          if (*(int *)((longlong)local_b8 + 0xc) <= iVar24) break;
                          lVar22 = local_b8[2];
                          local_c8 = *(longlong **)(lVar22 + 8 + lVar8 * 8);
                          pvVar7 = _pthread_getspecific((pthread_key_t)lVar22);
                          pVar20 = (pthread_key_t)lVar22;
                          if (pvVar7 != (void *)0x0) {
                            FUN_00e8b990();
                          }
                          pvVar7 = _pthread_getspecific(pVar20);
                          if (pvVar7 != (void *)0x0) {
                            FUN_00e8b990();
                          }
                          uVar9 = FUN_01507970();
                          local_f8 = (longlong *)FUN_0124ba40();
                          local_a0 = (longlong *)uVar9;
                          FUN_00e7b970();
                          FUN_00e7bac0();
                          uVar9 = local_a0;
                          FUN_0124ba90();
                          local_a0 = (longlong *)uVar9;
                          FUN_00e7b820();
                          FUN_015084d0();
                          pvVar7 = _pthread_getspecific(pVar20);
                          if (pvVar7 != (void *)0x0) {
                            FUN_00e8b990();
                          }
                          pvVar7 = _pthread_getspecific(pVar20);
                          if (pvVar7 != (void *)0x0) {
                            FUN_00e8b990();
                          }
                          plVar11 = (longlong *)FUN_01508610();
                          local_f8 = (longlong *)FUN_0124ba50();
                          local_a0 = plVar11;
                          FUN_00e7b970();
                          FUN_00e7bac0();
                          plVar11 = local_a0;
                          FUN_0124bac0();
                          local_a0 = plVar11;
                          FUN_00e7b820();
                          FUN_015085a0();
                          if (local_b0._4_4_ != 0) {
                            if (local_b0 < 0) {
                              iVar24 = -local_b0._4_4_;
                            }
                            else {
                              local_b0 = CONCAT44(local_b0._4_4_,(int)local_b0 - local_b0._4_4_);
                              FUN_00d23690();
                              local_a8 = local_a8 + local_b0._4_4_;
                              iVar24 = 0;
                            }
                            local_b0 = CONCAT44(iVar24,(int)local_b0);
                          }
                        }
                        FUN_0015ed50();
                        FUN_00d50b20();
                      }
                      FUN_00d50b20();
                    }
                  }
                  FUN_000be170();
                  FUN_00d50b20();
                }
              }
            }
            plVar11 = local_50;
            FUN_01204640();
            pVar20 = (pthread_key_t)plVar11;
            if ((longlong *)unaff_RDI[0xf] != (longlong *)0x0) {
              local_58[0] = '\0';
              local_60 = (longlong *)0x0;
              local_48 = 0xffffffff;
              local_40 = 0;
              local_48._4_4_ = 0;
              plVar11 = (longlong *)0x0;
              local_50 = (longlong *)unaff_RDI[0xf];
              while( true ) {
                if (local_48._4_4_ != 0) {
                  if (local_48._4_4_ < 1) {
                    iVar24 = -local_48._4_4_;
                  }
                  else {
                    iVar24 = (int)local_48 - local_48._4_4_;
                    local_48 = CONCAT44(local_48._4_4_,iVar24);
                    FUN_00d23690();
                    local_40 = local_40 + local_48._4_4_;
                    iVar24 = 0;
                  }
                  local_48 = CONCAT44(iVar24,(int)local_48);
                }
                lVar8 = (longlong)(int)local_48;
                iVar24 = (int)local_48 + 1;
                local_48 = CONCAT44(local_48._4_4_,iVar24);
                if (*(int *)((longlong)local_50 + 0xc) <= iVar24) break;
                lVar22 = local_50[2];
                local_60 = *(longlong **)(lVar22 + 8 + lVar8 * 8);
                local_88 = (longlong *)(**(code **)(*local_60 + 0x368))();
                pVar20 = (pthread_key_t)lVar22;
                local_c8 = (longlong *)CONCAT44(local_c8._4_4_,1);
                if (((ulonglong)local_88 >> 0x20 != 0) && (cVar3 = FUN_00e7c630(), cVar3 != '\0')) {
                  iVar24 = FUN_0124bda0();
                  if ((iVar24 == 1) &&
                     ((plVar11 != (longlong *)0x0 && (iVar24 = FUN_0124bda0(), iVar24 == 1)))) {
                    local_88 = (longlong *)FUN_0124ba40();
                    local_c8 = (longlong *)FUN_0124ba40();
                    if ((local_88._4_4_ != 0) &&
                       (((ulonglong)local_c8 >> 0x20 != 0 && (cVar3 = FUN_00e7c000(), cVar3 != '\0')
                        ))) goto LAB_011fbd30;
                  }
                  pvVar7 = _pthread_getspecific(pVar20);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_012cb1b0();
                  plVar14 = local_88;
                  if (local_80 == '\0') {
                    if (local_88 != (longlong *)0x0) {
                      FUN_00d50b00();
                      if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                      goto LAB_011fbea5;
                    }
                  }
                  else if (local_88 != (longlong *)0x0) {
LAB_011fbea5:
                    local_80 = '\0';
                    local_88 = (longlong *)0x0;
                    local_78 = plVar14;
                    local_70 = 0xffffffff;
                    local_68 = 0;
                    local_70._4_4_ = 0;
                    while( true ) {
                      if (local_70._4_4_ != 0) {
                        if (local_70._4_4_ < 1) {
                          iVar24 = -local_70._4_4_;
                        }
                        else {
                          iVar24 = (int)local_70 - local_70._4_4_;
                          local_70 = CONCAT44(local_70._4_4_,iVar24);
                          FUN_00d23690();
                          local_68 = local_68 + local_70._4_4_;
                          iVar24 = 0;
                        }
                        local_70 = CONCAT44(iVar24,(int)local_70);
                      }
                      lVar8 = (longlong)(int)local_70;
                      iVar24 = (int)local_70 + 1;
                      local_70 = CONCAT44(local_70._4_4_,iVar24);
                      if (*(int *)((longlong)local_78 + 0xc) <= iVar24) break;
                      lVar22 = local_78[2];
                      local_88 = *(longlong **)(lVar22 + 8 + lVar8 * 8);
                      pvVar7 = _pthread_getspecific((pthread_key_t)lVar22);
                      pVar20 = (pthread_key_t)lVar22;
                      if (pvVar7 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      FUN_012e7fb0();
                      unaff_R14 = local_c8;
                      if (local_c0[0] == '\0') {
                        if (local_c8 != (longlong *)0x0) {
                          FUN_00d50b00();
                          if ((local_c0[0] != '\0') && (local_c8 != (longlong *)0x0)) {
                            FUN_00d50b20();
                          }
                          goto LAB_011fbfc0;
                        }
                      }
                      else if (local_c8 != (longlong *)0x0) {
LAB_011fbfc0:
                        pvVar7 = _pthread_getspecific(pVar20);
                        if (pvVar7 != (void *)0x0) {
                          FUN_00e8b990();
                        }
                        uVar9 = FUN_0124ba40();
                        uVar12 = FUN_0124ba60();
                        FUN_0150dbb0(uVar12,uVar9);
                        plVar14 = local_c8;
                        if ((((local_c0[0] == '\0') && (local_c8 != (longlong *)0x0)) &&
                            (FUN_00d50b00(), local_c0[0] != '\0')) && (local_c8 != (longlong *)0x0))
                        {
                          FUN_00d50b20();
                        }
                        FUN_0124bc70();
                        if (plVar14 != (longlong *)0x0) {
                          FUN_00d50b20();
                        }
                        FUN_00d50b20();
                      }
                    }
                    FUN_000be170();
                    FUN_00d50b20();
                  }
                  if (local_60 != plVar11) {
                    plVar11 = local_60;
                  }
                }
LAB_011fbd30:
              }
              plVar14 = local_50;
              FUN_01204640();
              pVar20 = (pthread_key_t)plVar14;
              if ((longlong *)unaff_RDI[0xf] != (longlong *)0x0) {
                local_58[0] = '\0';
                local_60 = (longlong *)0x0;
                local_48 = 0xffffffff;
                local_40 = 0;
                local_48._4_4_ = 0;
                local_50 = (longlong *)unaff_RDI[0xf];
                while( true ) {
                  if (local_48._4_4_ != 0) {
                    if (local_48._4_4_ < 1) {
                      iVar24 = -local_48._4_4_;
                    }
                    else {
                      iVar24 = (int)local_48 - local_48._4_4_;
                      local_48 = CONCAT44(local_48._4_4_,iVar24);
                      FUN_00d23690();
                      local_40 = local_40 + local_48._4_4_;
                      iVar24 = 0;
                    }
                    local_48 = CONCAT44(iVar24,(int)local_48);
                  }
                  lVar8 = (longlong)(int)local_48;
                  iVar24 = (int)local_48 + 1;
                  local_48 = CONCAT44(local_48._4_4_,iVar24);
                  if (*(int *)((longlong)local_50 + 0xc) <= iVar24) break;
                  local_60 = *(longlong **)(local_50[2] + 8 + lVar8 * 8);
                  local_88 = (longlong *)(**(code **)(*local_60 + 0x368))();
                  local_c8 = (longlong *)CONCAT44(local_c8._4_4_,1);
                  if (((ulonglong)local_88 >> 0x20 != 0) && (cVar3 = FUN_00e7c630(), cVar3 != '\0'))
                  {
                    local_88 = (longlong *)FUN_0124bad0();
                    local_c8 = (longlong *)((ulonglong)local_c8 & 0xffffffff00000000);
                    if (((ulonglong)local_88 >> 0x20 != 0) &&
                       (cVar3 = FUN_00e7c630(), cVar3 != '\0')) {
                      FUN_0124bd50();
                      local_e0 = local_88;
                      if ((((local_80 == '\0') && (local_88 != (longlong *)0x0)) &&
                          (FUN_00d50b00(), local_80 != '\0')) && (local_88 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                      puVar13 = (undefined8 *)FUN_00e8fc40();
                      FUN_00d4ff40();
                      *puVar13 = local_178;
                      (*local_170)();
                      if (local_e0 != (longlong *)0x0) {
                        local_80 = '\0';
                        local_88 = (longlong *)0x0;
                        local_78 = local_e0;
                        local_70 = 0xffffffff;
                        local_68 = 0;
                        local_70._4_4_ = 0;
                        while( true ) {
                          if (local_70._4_4_ != 0) {
                            if (local_70._4_4_ < 1) {
                              iVar24 = -local_70._4_4_;
                            }
                            else {
                              iVar24 = (int)local_70 - local_70._4_4_;
                              local_70 = CONCAT44(local_70._4_4_,iVar24);
                              FUN_00d23690();
                              local_68 = local_68 + local_70._4_4_;
                              iVar24 = 0;
                            }
                            local_70 = CONCAT44(iVar24,(int)local_70);
                          }
                          lVar8 = (longlong)(int)local_70;
                          iVar24 = (int)local_70 + 1;
                          local_70 = CONCAT44(local_70._4_4_,iVar24);
                          if (*(int *)((longlong)local_78 + 0xc) <= iVar24) break;
                          local_88 = *(longlong **)(local_78[2] + 8 + lVar8 * 8);
                          pvVar7 = _pthread_getspecific((pthread_key_t)local_78[2]);
                          if (pvVar7 != (void *)0x0) {
                            FUN_00e8b990();
                          }
                          FUN_01508830();
                          FUN_00d23310();
                          plVar14 = local_c8;
                          local_f8 = (longlong *)CONCAT71(local_f8._1_7_,local_c0[0]);
                          pcVar23 = (char *)&local_f8;
                          pcVar15 = local_c0;
                          if (local_c0[0] == '\0') {
                            pcVar15 = pcVar23;
                          }
                          *pcVar15 = '\0';
                          if ((local_c0[0] != '\0') && (plVar14 != (longlong *)0x0)) {
                            FUN_00d50b20();
                          }
                          pvVar7 = _pthread_getspecific((pthread_key_t)pcVar23);
                          if (pvVar7 != (void *)0x0) {
                            FUN_00e8b990();
                          }
                          FUN_0152ec50();
                          plVar16 = local_a0;
                          if (local_98 == '\0') {
                            if (local_a0 != (longlong *)0x0) {
                              FUN_00d50b00();
                            }
                          }
                          else {
                            local_98 = '\0';
                          }
                          local_c8 = plVar16;
                          local_c0[0] = '\0';
                          FUN_00d21140();
                          if ((local_c0[0] != '\0') && (local_c8 != (longlong *)0x0)) {
                            FUN_00d50b20();
                          }
                          if (plVar16 != (longlong *)0x0) {
                            FUN_00d50b20();
                          }
                          if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
                            FUN_00d50b20();
                          }
                          if (((char)local_f8 != '\0') && (plVar14 != (longlong *)0x0)) {
                            FUN_00d50b20();
                          }
                          if ((local_130 != '\0') && (local_138 != 0)) {
                            FUN_00d50b20();
                          }
                        }
                        FUN_0015ed50();
                      }
                      FUN_01273200();
                      unaff_R14 = local_88;
                      if (local_80 == '\0') {
                        if (((local_88 != (longlong *)0x0) && (FUN_00d50b00(), local_80 != '\0')) &&
                           (local_88 != (longlong *)0x0)) {
                          FUN_00d50b20();
                        }
                      }
                      else {
                        local_80 = '\0';
                      }
                      if (unaff_R14 != (longlong *)0x0) {
                        local_80 = '\0';
                        local_88 = (longlong *)0x0;
                        local_78 = (longlong *)unaff_R14[2];
                        local_70 = local_70 & 0xffffffff00000000;
                        if (0 < *(int *)((longlong)local_78 + 0xc)) {
                          pVar20 = 0;
                          do {
                            local_88 = *(longlong **)(local_78[2] + (longlong)(int)pVar20 * 8);
                            pvVar7 = _pthread_getspecific(pVar20);
                            if (pvVar7 != (void *)0x0) {
                              FUN_00e8b990();
                            }
                            FUN_019c6680();
                            plVar14 = local_c8;
                            local_1b0 = 0;
                            if (local_c0[0] == '\0') {
                              if (local_c8 != (longlong *)0x0) {
                                FUN_00d50b00();
                              }
                            }
                            else {
                              local_c0[0] = '\0';
                            }
                            local_1b0 = '\x01';
                            local_1b8 = plVar14;
                            FUN_012edae0();
                            if ((local_1b0 != '\0') && (local_1b8 != (longlong *)0x0)) {
                              FUN_00d50b20();
                            }
                            if ((local_c0[0] != '\0') && (local_c8 != (longlong *)0x0)) {
                              FUN_00d50b20();
                            }
                            pVar20 = (int)local_70 + 1;
                            local_70 = CONCAT44(local_70._4_4_,pVar20);
                          } while ((int)pVar20 < *(int *)((longlong)local_78 + 0xc));
                          if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
                            FUN_00d50b20();
                          }
                        }
                        FUN_00d50b20();
                      }
                      if (puVar13 != (undefined8 *)0x0) {
                        FUN_00d50b20();
                      }
                      if (local_e0 != (longlong *)0x0) {
                        FUN_00d50b20();
                      }
                    }
                  }
                }
                plVar14 = local_50;
                FUN_01204640();
                pVar20 = (pthread_key_t)plVar14;
                if ((longlong *)unaff_RDI[0xf] != (longlong *)0x0) {
                  local_58[0] = '\0';
                  local_60 = (longlong *)0x0;
                  local_48 = 0xffffffff;
                  local_40 = 0;
                  local_50 = (longlong *)unaff_RDI[0xf];
                  while( true ) {
                    if (local_48._4_4_ != 0) {
                      if (local_48._4_4_ < 1) {
                        iVar24 = -local_48._4_4_;
                      }
                      else {
                        local_48 = CONCAT44(local_48._4_4_,(int)local_48 - local_48._4_4_);
                        FUN_00d23690();
                        local_40 = local_40 + local_48._4_4_;
                        iVar24 = 0;
                      }
                      local_48 = CONCAT44(iVar24,(int)local_48);
                    }
                    lVar8 = (longlong)(int)local_48;
                    iVar24 = (int)local_48 + 1;
                    local_48 = CONCAT44(local_48._4_4_,iVar24);
                    if (*(int *)((longlong)local_50 + 0xc) <= iVar24) break;
                    local_60 = *(longlong **)(local_50[2] + 8 + lVar8 * 8);
                    local_88 = (longlong *)(**(code **)(*local_60 + 0x368))();
                    local_c8 = (longlong *)CONCAT44(local_c8._4_4_,1);
                    if (((ulonglong)local_88 >> 0x20 != 0) &&
                       (cVar3 = FUN_00e7c630(), cVar3 != '\0')) {
                      if (plVar11 != (longlong *)0x0) {
                        local_88 = (longlong *)FUN_0124bad0();
                        local_138 = local_138 & 0xffffffff00000000;
                        if (((ulonglong)local_88 >> 0x20 != 0) &&
                           (cVar3 = FUN_00e7c650(), cVar3 != '\0')) {
                          local_c8 = (longlong *)FUN_0124ba50();
                          local_a0 = (longlong *)FUN_0124ba40();
                          if ((local_c8._4_4_ != 0) &&
                             ((((ulonglong)local_a0 >> 0x20 != 0 &&
                               (cVar3 = FUN_00e7c020(), cVar3 != '\0')) &&
                              (iVar24 = FUN_0124bda0(), iVar24 == 0)))) {
                            FUN_0124bd50();
                            local_118 = local_88;
                            if ((((local_80 == '\0') && (local_88 != (longlong *)0x0)) &&
                                (FUN_00d50b00(), local_80 != '\0')) && (local_88 != (longlong *)0x0)
                               ) {
                              FUN_00d50b20();
                            }
                            plVar14 = (longlong *)FUN_00e8fc40();
                            FUN_00d4ff40();
                            *plVar14 = (longlong)local_178;
                            (*local_170)();
                            local_e0 = plVar14;
                            if (local_118 != (longlong *)0x0) {
                              local_80 = '\0';
                              local_88 = (longlong *)0x0;
                              local_78 = local_118;
                              local_70 = 0xffffffff;
                              local_68 = 0;
                              local_70._4_4_ = 0;
                              while( true ) {
                                if (local_70._4_4_ != 0) {
                                  if (local_70._4_4_ < 1) {
                                    iVar24 = -local_70._4_4_;
                                  }
                                  else {
                                    iVar24 = (int)local_70 - local_70._4_4_;
                                    local_70 = CONCAT44(local_70._4_4_,iVar24);
                                    FUN_00d23690();
                                    local_68 = local_68 + local_70._4_4_;
                                    iVar24 = 0;
                                  }
                                  local_70 = CONCAT44(iVar24,(int)local_70);
                                }
                                lVar8 = (longlong)(int)local_70;
                                iVar24 = (int)local_70 + 1;
                                local_70 = CONCAT44(local_70._4_4_,iVar24);
                                if (*(int *)((longlong)local_78 + 0xc) <= iVar24) break;
                                local_88 = *(longlong **)(local_78[2] + 8 + lVar8 * 8);
                                pvVar7 = _pthread_getspecific((pthread_key_t)local_78[2]);
                                if (pvVar7 != (void *)0x0) {
                                  FUN_00e8b990();
                                }
                                FUN_01508830();
                                FUN_00d23310();
                                plVar14 = local_c8;
                                local_f8 = (longlong *)CONCAT71(local_f8._1_7_,local_c0[0]);
                                pcVar23 = (char *)&local_f8;
                                pcVar15 = local_c0;
                                if (local_c0[0] == '\0') {
                                  pcVar15 = pcVar23;
                                }
                                *pcVar15 = '\0';
                                if ((local_c0[0] != '\0') && (plVar14 != (longlong *)0x0)) {
                                  FUN_00d50b20();
                                }
                                pvVar7 = _pthread_getspecific((pthread_key_t)pcVar23);
                                if (pvVar7 != (void *)0x0) {
                                  FUN_00e8b990();
                                }
                                FUN_0152ec50();
                                plVar16 = local_a0;
                                if (local_98 == '\0') {
                                  if (((local_a0 != (longlong *)0x0) &&
                                      (FUN_00d50b00(), local_98 != '\0')) &&
                                     (local_a0 != (longlong *)0x0)) {
                                    FUN_00d50b20();
                                  }
                                }
                                else {
                                  local_98 = '\0';
                                }
                                if (((char)local_f8 != '\0') && (plVar14 != (longlong *)0x0)) {
                                  FUN_00d50b20();
                                }
                                if ((local_130 != '\0') && (local_138 != 0)) {
                                  FUN_00d50b20();
                                }
                                local_c8 = plVar16;
                                local_c0[0] = '\0';
                                FUN_00d21140();
                                if ((local_c0[0] != '\0') && (local_c8 != (longlong *)0x0)) {
                                  FUN_00d50b20();
                                }
                                if (plVar16 != (longlong *)0x0) {
                                  FUN_00d50b20();
                                }
                              }
                              FUN_0015ed50();
                            }
                            plVar14 = (longlong *)FUN_00e8fc40();
                            FUN_00d4ff40();
                            *plVar14 = (longlong)local_178;
                            (*local_170)();
                            local_e8 = plVar14;
                            puVar13 = (undefined8 *)FUN_00e8fc40();
                            FUN_00d4ff40();
                            *puVar13 = local_178;
                            (*local_170)();
                            if (local_e0 != (longlong *)0x0) {
                              local_80 = '\0';
                              local_88 = (longlong *)0x0;
                              local_78 = local_e0;
                              local_70 = 0xffffffff;
                              local_68 = 0;
                              local_70._4_4_ = 0;
                              while( true ) {
                                if (local_70._4_4_ != 0) {
                                  if (local_70._4_4_ < 1) {
                                    iVar24 = -local_70._4_4_;
                                  }
                                  else {
                                    iVar24 = (int)local_70 - local_70._4_4_;
                                    local_70 = CONCAT44(local_70._4_4_,iVar24);
                                    FUN_00d23690();
                                    local_68 = local_68 + local_70._4_4_;
                                    iVar24 = 0;
                                  }
                                  local_70 = CONCAT44(iVar24,(int)local_70);
                                }
                                lVar8 = (longlong)(int)local_70;
                                iVar24 = (int)local_70 + 1;
                                local_70 = CONCAT44(local_70._4_4_,iVar24);
                                if (*(int *)((longlong)local_78 + 0xc) <= iVar24) break;
                                local_88 = *(longlong **)(local_78[2] + 8 + lVar8 * 8);
                                pvVar7 = _pthread_getspecific((pthread_key_t)local_78[2]);
                                if (pvVar7 != (void *)0x0) {
                                  FUN_00e8b990();
                                }
                                pVar20 = (pthread_key_t)*(byte *)((longlong)unaff_RDI + 0x59);
                                FUN_012649d0(*(byte *)((longlong)unaff_RDI + 0x59),0);
                                plVar14 = local_c8;
                                if ((((local_c0[0] == '\0') && (local_c8 != (longlong *)0x0)) &&
                                    (FUN_00d50b00(), local_c0[0] != '\0')) &&
                                   (local_c8 != (longlong *)0x0)) {
                                  FUN_00d50b20();
                                }
                                pvVar7 = _pthread_getspecific(pVar20);
                                if (pvVar7 != (void *)0x0) {
                                  FUN_00e8b990();
                                }
                                FUN_01266fe0();
                                pvVar7 = _pthread_getspecific(pVar20);
                                if (pvVar7 != (void *)0x0) {
                                  FUN_00e8b990();
                                }
                                FUN_012e6a70();
                                if ((local_c0[0] != '\0') && (local_c8 != (longlong *)0x0)) {
                                  FUN_00d50b20();
                                }
                                pvVar7 = _pthread_getspecific(pVar20);
                                if (pvVar7 != (void *)0x0) {
                                  FUN_00e8b990();
                                }
                                FUN_0128c620();
                                pvVar7 = _pthread_getspecific(pVar20);
                                if (pvVar7 != (void *)0x0) {
                                  FUN_00e8b990();
                                }
                                FUN_0128c200();
                                pvVar7 = _pthread_getspecific(pVar20);
                                if (pvVar7 != (void *)0x0) {
                                  FUN_00e8b990();
                                }
                                pvVar7 = _pthread_getspecific(pVar20);
                                if (pvVar7 != (void *)0x0) {
                                  FUN_00e8b990();
                                }
                                FUN_0128c200();
                                pvVar7 = _pthread_getspecific(pVar20);
                                if (pvVar7 != (void *)0x0) {
                                  FUN_00e8b990();
                                }
                                FUN_01507970();
                                FUN_015084d0();
                                if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
                                  FUN_00d50b20();
                                }
                                if ((local_c0[0] != '\0') && (local_c8 != (longlong *)0x0)) {
                                  FUN_00d50b20();
                                }
                                pvVar7 = _pthread_getspecific(pVar20);
                                if (pvVar7 != (void *)0x0) {
                                  FUN_00e8b990();
                                }
                                FUN_0128c200();
                                pvVar7 = _pthread_getspecific(pVar20);
                                if (pvVar7 != (void *)0x0) {
                                  FUN_00e8b990();
                                }
                                pvVar7 = _pthread_getspecific(pVar20);
                                if (pvVar7 != (void *)0x0) {
                                  FUN_00e8b990();
                                }
                                FUN_0128c200();
                                pvVar7 = _pthread_getspecific(pVar20);
                                if (pvVar7 != (void *)0x0) {
                                  FUN_00e8b990();
                                }
                                FUN_01508610();
                                FUN_015085a0();
                                if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
                                  FUN_00d50b20();
                                }
                                if ((local_c0[0] != '\0') && (local_c8 != (longlong *)0x0)) {
                                  FUN_00d50b20();
                                }
                                pvVar7 = _pthread_getspecific(pVar20);
                                if (pvVar7 != (void *)0x0) {
                                  FUN_00e8b990();
                                }
                                FUN_0128c200();
                                pvVar7 = _pthread_getspecific(pVar20);
                                if (pvVar7 != (void *)0x0) {
                                  FUN_00e8b990();
                                }
                                pvVar7 = _pthread_getspecific(pVar20);
                                if (pvVar7 != (void *)0x0) {
                                  FUN_00e8b990();
                                }
                                FUN_0128c200();
                                pvVar7 = _pthread_getspecific(pVar20);
                                if (pvVar7 != (void *)0x0) {
                                  FUN_00e8b990();
                                }
                                FUN_01507f00();
                                FUN_01508220();
                                if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
                                  FUN_00d50b20();
                                }
                                if ((local_c0[0] != '\0') && (local_c8 != (longlong *)0x0)) {
                                  FUN_00d50b20();
                                }
                                pvVar7 = _pthread_getspecific(pVar20);
                                unaff_R14 = plVar14;
                                if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0))
                                {
                                  unaff_R14 = (longlong *)
                                              plVar14[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4]
                                  ;
                                }
                                pvVar7 = _pthread_getspecific(pVar20);
                                if (pvVar7 != (void *)0x0) {
                                  FUN_00e8b990();
                                }
                                FUN_0126cd60();
                                FUN_0126cd10();
                                local_c0[0] = '\0';
                                local_c8 = plVar14;
                                FUN_00d21140();
                                if ((local_c0[0] != '\0') && (local_c8 != (longlong *)0x0)) {
                                  FUN_00d50b20();
                                }
                                pvVar7 = _pthread_getspecific(pVar20);
                                if (pvVar7 != (void *)0x0) {
                                  FUN_00e8b990();
                                }
                                FUN_0128c200();
                                plVar16 = local_a0;
                                if (local_98 == '\0') {
                                  if (local_a0 != (longlong *)0x0) {
                                    FUN_00d50b00();
                                  }
                                }
                                else {
                                  local_98 = '\0';
                                }
                                local_c8 = plVar16;
                                local_c0[0] = '\0';
                                FUN_00d21140();
                                if ((local_c0[0] != '\0') && (local_c8 != (longlong *)0x0)) {
                                  FUN_00d50b20();
                                }
                                if (plVar16 != (longlong *)0x0) {
                                  FUN_00d50b20();
                                }
                                if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
                                  FUN_00d50b20();
                                }
                                pvVar7 = _pthread_getspecific(pVar20);
                                if (pvVar7 != (void *)0x0) {
                                  FUN_00e8b990();
                                }
                                FUN_0128c200();
                                plVar16 = local_c8;
                                local_1a0 = 0;
                                if (local_c0[0] == '\0') {
                                  if (local_c8 != (longlong *)0x0) {
                                    FUN_00d50b00();
                                  }
                                }
                                else {
                                  local_c0[0] = '\0';
                                }
                                local_1a0 = '\x01';
                                local_1a8 = plVar16;
                                pvVar7 = _pthread_getspecific(pVar20);
                                if (pvVar7 != (void *)0x0) {
                                  FUN_00e8b990();
                                }
                                FUN_0128c200();
                                plVar16 = local_a0;
                                local_190 = 0;
                                if (local_98 == '\0') {
                                  if (local_a0 != (longlong *)0x0) {
                                    FUN_00d50b00();
                                  }
                                }
                                else {
                                  local_98 = '\0';
                                }
                                local_190 = '\x01';
                                local_198 = plVar16;
                                (**(code **)(*unaff_RDI + 0x3d0))();
                                if ((local_190 != '\0') && (local_198 != (longlong *)0x0)) {
                                  FUN_00d50b20();
                                }
                                if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
                                  FUN_00d50b20();
                                }
                                if ((local_1a0 != '\0') && (local_1a8 != (longlong *)0x0)) {
                                  FUN_00d50b20();
                                }
                                if ((local_c0[0] != '\0') && (local_c8 != (longlong *)0x0)) {
                                  FUN_00d50b20();
                                }
                                if (plVar14 != (longlong *)0x0) {
                                  FUN_00d50b20();
                                }
                              }
                              FUN_001159b0();
                            }
                            FUN_0124bce0();
                            if (puVar13 != (undefined8 *)0x0) {
                              FUN_00d50b20();
                            }
                            if (local_e8 != (longlong *)0x0) {
                              FUN_00d50b20();
                            }
                            if (local_e0 != (longlong *)0x0) {
                              FUN_00d50b20();
                            }
                            if (local_118 != (longlong *)0x0) {
                              FUN_00d50b20();
                            }
                          }
                        }
                      }
                      if (local_60 != plVar11) {
                        plVar11 = local_60;
                      }
                    }
                  }
                  plVar11 = local_50;
                  FUN_01204640();
                  pVar20 = (pthread_key_t)plVar11;
                }
              }
            }
          }
          plVar11 = (longlong *)FUN_00e8fc40();
          FUN_00d4ff40();
          *plVar11 = (longlong)local_178;
          (*local_170)();
          local_e0 = plVar11;
          plVar11 = (longlong *)FUN_00023900();
          (**(code **)(*plVar11 + 0x18))();
          if ((longlong *)unaff_RDI[0xf] == (longlong *)0x0) {
LAB_011fd8d6:
            pvVar7 = _pthread_getspecific(pVar20);
            if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
              pVar20 = (pthread_key_t)local_110;
            }
            FUN_012cb110();
            pvVar7 = _pthread_getspecific(pVar20);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e7210();
            plVar14 = local_60;
            if (local_58[0] == '\0') {
              if (((local_60 != (longlong *)0x0) && (FUN_00d50b00(), local_58[0] != '\0')) &&
                 (local_60 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_58[0] = '\0';
            }
            if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar14 != (longlong *)0x0) {
              local_58[0] = '\0';
              local_60 = (longlong *)0x0;
              local_50 = plVar14;
              local_48 = 0xffffffff;
              local_40 = 0;
              local_48._4_4_ = 0;
              while( true ) {
                if (local_48._4_4_ != 0) {
                  if (local_48._4_4_ < 1) {
                    iVar24 = -local_48._4_4_;
                  }
                  else {
                    iVar24 = (int)local_48 - local_48._4_4_;
                    local_48 = CONCAT44(local_48._4_4_,iVar24);
                    FUN_00d23690();
                    local_40 = local_40 + local_48._4_4_;
                    iVar24 = 0;
                  }
                  local_48 = CONCAT44(iVar24,(int)local_48);
                }
                lVar8 = (longlong)(int)local_48;
                iVar24 = (int)local_48 + 1;
                local_48 = CONCAT44(local_48._4_4_,iVar24);
                if (*(int *)((longlong)local_50 + 0xc) <= iVar24) break;
                local_88 = *(longlong **)(local_50[2] + 8 + lVar8 * 8);
                local_80 = '\0';
                local_60 = local_88;
                cVar3 = FUN_00e3a2e0();
                if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if (cVar3 == '\0') {
                  local_88 = local_60;
                  local_80 = '\0';
                  FUN_00d21140();
                  if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
              }
              plVar16 = local_50;
              FUN_001159b0();
              pVar20 = (pthread_key_t)plVar16;
            }
            if (*(int *)((longlong)local_e0 + 0xc) != 0) {
              FUN_01273200();
              unaff_R14 = local_60;
              if (local_58[0] == '\0') {
                if (((local_60 != (longlong *)0x0) && (FUN_00d50b00(), local_58[0] != '\0')) &&
                   (local_60 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_58[0] = '\0';
              }
              if (unaff_R14 != (longlong *)0x0) {
                local_58[0] = '\0';
                local_60 = (longlong *)0x0;
                local_50 = (longlong *)unaff_R14[2];
                local_48 = local_48 & 0xffffffff00000000;
                if (0 < *(int *)((longlong)local_50 + 0xc)) {
                  pVar20 = 0;
                  do {
                    local_60 = *(longlong **)(local_50[2] + (longlong)(int)pVar20 * 8);
                    pvVar7 = _pthread_getspecific(pVar20);
                    if (pvVar7 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_019c6680();
                    plVar16 = local_88;
                    local_180 = 0;
                    if (local_80 == '\0') {
                      if (local_88 != (longlong *)0x0) {
                        FUN_00d50b00();
                      }
                    }
                    else {
                      local_80 = '\0';
                    }
                    local_180 = '\x01';
                    local_188 = plVar16;
                    FUN_012edae0();
                    if ((local_180 != '\0') && (local_188 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    pVar20 = (int)local_48 + 1;
                    local_48 = CONCAT44(local_48._4_4_,pVar20);
                  } while ((int)pVar20 < *(int *)((longlong)local_50 + 0xc));
                  if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                FUN_00d50b20();
              }
            }
            if (plVar14 != (longlong *)0x0) {
              FUN_00d50b20();
            }
          }
          else {
            local_58[0] = '\0';
            local_60 = (longlong *)0x0;
            local_48 = 0xffffffff;
            local_40 = 0;
            local_48._4_4_ = 0;
            local_50 = (longlong *)unaff_RDI[0xf];
            while( true ) {
              if (local_48._4_4_ != 0) {
                if (local_48._4_4_ < 1) {
                  iVar24 = -local_48._4_4_;
                }
                else {
                  iVar24 = (int)local_48 - local_48._4_4_;
                  local_48 = CONCAT44(local_48._4_4_,iVar24);
                  FUN_00d23690();
                  local_40 = local_40 + local_48._4_4_;
                  iVar24 = 0;
                }
                local_48 = CONCAT44(iVar24,(int)local_48);
              }
              lVar8 = (longlong)(int)local_48;
              iVar24 = (int)local_48 + 1;
              local_48 = CONCAT44(local_48._4_4_,iVar24);
              if (*(int *)((longlong)local_50 + 0xc) <= iVar24) {
                plVar14 = local_50;
                FUN_01204640();
                pVar20 = (pthread_key_t)plVar14;
                goto LAB_011fd8d6;
              }
              lVar22 = local_50[2];
              local_60 = *(longlong **)(lVar22 + 8 + lVar8 * 8);
              local_88 = (longlong *)(**(code **)(*local_60 + 0x368))();
              pVar20 = (pthread_key_t)lVar22;
              local_c8 = (longlong *)CONCAT44(local_c8._4_4_,1);
              if (((ulonglong)local_88 >> 0x20 == 0) || (cVar3 = FUN_00e7c630(), cVar3 == '\0'))
              break;
              FUN_0124bd50();
              plVar14 = local_88;
              if ((((local_80 == '\0') && (local_88 != (longlong *)0x0)) &&
                  (FUN_00d50b00(), local_80 != '\0')) && (local_88 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              local_88 = (longlong *)FUN_0124bad0();
              local_c8 = (longlong *)((ulonglong)local_c8 & 0xffffffff00000000);
              if ((ulonglong)local_88 >> 0x20 == 0) {
                if (plVar14 != (longlong *)0x0) {
LAB_011fd65e:
                  local_80 = '\0';
                  local_88 = (longlong *)0x0;
                  local_78 = plVar14;
                  local_70 = 0xffffffff;
                  local_68 = 0;
                  local_70._4_4_ = 0;
                  while( true ) {
                    if (local_70._4_4_ != 0) {
                      if (local_70._4_4_ < 1) {
                        iVar24 = -local_70._4_4_;
                      }
                      else {
                        iVar24 = (int)local_70 - local_70._4_4_;
                        local_70 = CONCAT44(local_70._4_4_,iVar24);
                        FUN_00d23690();
                        local_68 = local_68 + local_70._4_4_;
                        iVar24 = 0;
                      }
                      local_70 = CONCAT44(iVar24,(int)local_70);
                    }
                    lVar8 = (longlong)(int)local_70;
                    iVar24 = (int)local_70 + 1;
                    local_70 = CONCAT44(local_70._4_4_,iVar24);
                    if (*(int *)((longlong)local_78 + 0xc) <= iVar24) break;
                    local_88 = *(longlong **)(local_78[2] + 8 + lVar8 * 8);
                    pvVar7 = _pthread_getspecific((pthread_key_t)local_78[2]);
                    if (pvVar7 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_01508830();
                    FUN_00d23310();
                    plVar16 = local_c8;
                    local_f8 = (longlong *)CONCAT71(local_f8._1_7_,local_c0[0]);
                    pcVar23 = (char *)&local_f8;
                    pcVar15 = local_c0;
                    if (local_c0[0] == '\0') {
                      pcVar15 = pcVar23;
                    }
                    *pcVar15 = '\0';
                    if ((local_c0[0] != '\0') && (plVar16 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    pvVar7 = _pthread_getspecific((pthread_key_t)pcVar23);
                    if (pvVar7 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_0152ec50();
                    unaff_R14 = local_a0;
                    if (local_98 == '\0') {
                      if (((local_a0 != (longlong *)0x0) && (FUN_00d50b00(), local_98 != '\0')) &&
                         (local_a0 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                    }
                    else {
                      local_98 = '\0';
                    }
                    if (((char)local_f8 != '\0') && (plVar16 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    if ((local_130 != '\0') && (local_138 != 0)) {
                      FUN_00d50b20();
                    }
                    local_c8 = unaff_R14;
                    local_c0[0] = '\0';
                    FUN_00e3a1c0();
                    if ((local_c0[0] != '\0') && (local_c8 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    if (unaff_R14 != (longlong *)0x0) {
                      FUN_00d50b20();
                    }
                  }
                  FUN_0015ed50();
                  goto LAB_011fd8a9;
                }
              }
              else {
                cVar3 = FUN_00e7c630();
                if (cVar3 == '\0' && plVar14 != (longlong *)0x0) goto LAB_011fd65e;
LAB_011fd8a9:
                if (plVar14 != (longlong *)0x0) {
                  FUN_00d50b20();
                }
              }
            }
            FUN_01204640();
          }
          if ((longlong *)unaff_RDI[0xf] != (longlong *)0x0) {
            local_58[0] = '\0';
            local_60 = (longlong *)0x0;
            local_48 = 0xffffffff;
            local_40 = 0;
            local_48._4_4_ = 0;
            local_50 = (longlong *)unaff_RDI[0xf];
            while( true ) {
              if (local_48._4_4_ != 0) {
                if (local_48._4_4_ < 1) {
                  iVar24 = -local_48._4_4_;
                }
                else {
                  iVar24 = (int)local_48 - local_48._4_4_;
                  local_48 = CONCAT44(local_48._4_4_,iVar24);
                  FUN_00d23690();
                  local_40 = local_40 + local_48._4_4_;
                  iVar24 = 0;
                }
                local_48 = CONCAT44(iVar24,(int)local_48);
              }
              lVar8 = (longlong)(int)local_48;
              iVar24 = (int)local_48 + 1;
              local_48 = CONCAT44(local_48._4_4_,iVar24);
              if (*(int *)((longlong)local_50 + 0xc) <= iVar24) break;
              local_60 = *(longlong **)(local_50[2] + 8 + lVar8 * 8);
              local_88 = (longlong *)(**(code **)(*local_60 + 0x368))();
              local_c8 = (longlong *)CONCAT44(local_c8._4_4_,1);
              if (((ulonglong)local_88 >> 0x20 != 0) && (cVar3 = FUN_00e7c630(), cVar3 != '\0')) {
                local_88 = (longlong *)FUN_0124bad0();
                local_c8 = (longlong *)((ulonglong)local_c8 & 0xffffffff00000000);
                if (((ulonglong)local_88 >> 0x20 != 0) && (cVar3 = FUN_00e7c650(), cVar3 != '\0')) {
                  FUN_0124bd50();
                  plVar14 = local_88;
                  if ((((local_80 == '\0') && (local_88 != (longlong *)0x0)) &&
                      (FUN_00d50b00(), local_80 != '\0')) && (local_88 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  unaff_R14 = (longlong *)FUN_00e8fc40();
                  FUN_00d4ff40();
                  *unaff_R14 = (longlong)local_178;
                  (*local_170)();
                  if (plVar14 != (longlong *)0x0) {
                    local_80 = '\0';
                    local_88 = (longlong *)0x0;
                    local_78 = plVar14;
                    local_70 = 0xffffffff;
                    local_68 = 0;
                    local_70._4_4_ = 0;
                    while( true ) {
                      if (local_70._4_4_ != 0) {
                        if (local_70._4_4_ < 1) {
                          iVar24 = -local_70._4_4_;
                        }
                        else {
                          iVar24 = (int)local_70 - local_70._4_4_;
                          local_70 = CONCAT44(local_70._4_4_,iVar24);
                          FUN_00d23690();
                          local_68 = local_68 + local_70._4_4_;
                          iVar24 = 0;
                        }
                        local_70 = CONCAT44(iVar24,(int)local_70);
                      }
                      lVar8 = (longlong)(int)local_70;
                      iVar24 = (int)local_70 + 1;
                      local_70 = CONCAT44(local_70._4_4_,iVar24);
                      if (*(int *)((longlong)local_78 + 0xc) <= iVar24) break;
                      local_88 = *(longlong **)(local_78[2] + 8 + lVar8 * 8);
                      pvVar7 = _pthread_getspecific((pthread_key_t)local_78[2]);
                      if (pvVar7 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      FUN_01508830();
                      FUN_00d23310();
                      plVar16 = local_c8;
                      local_f8 = (longlong *)CONCAT71(local_f8._1_7_,local_c0[0]);
                      pcVar23 = (char *)&local_f8;
                      pcVar15 = local_c0;
                      if (local_c0[0] == '\0') {
                        pcVar15 = pcVar23;
                      }
                      *pcVar15 = '\0';
                      if ((local_c0[0] != '\0') && (plVar16 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                      pvVar7 = _pthread_getspecific((pthread_key_t)pcVar23);
                      if (pvVar7 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      FUN_0152ec50();
                      plVar26 = local_a0;
                      if (local_98 == '\0') {
                        if (((local_a0 != (longlong *)0x0) && (FUN_00d50b00(), local_98 != '\0')) &&
                           (local_a0 != (longlong *)0x0)) {
                          FUN_00d50b20();
                        }
                      }
                      else {
                        local_98 = '\0';
                      }
                      if (((char)local_f8 != '\0') && (plVar16 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                      if ((local_130 != '\0') && (local_138 != 0)) {
                        FUN_00d50b20();
                      }
                      local_c8 = plVar26;
                      local_c0[0] = '\0';
                      FUN_00d21140();
                      if ((local_c0[0] != '\0') && (local_c8 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                      if (plVar26 != (longlong *)0x0) {
                        FUN_00d50b20();
                      }
                    }
                    FUN_0015ed50();
                  }
                  plVar16 = (longlong *)FUN_0124ba90();
                  local_c8 = (longlong *)FUN_0124ba40();
                  local_88 = plVar16;
                  FUN_00e7b970();
                  uVar9 = FUN_00e7bdb0();
                  FUN_01278f90(1,uVar9);
                  if (unaff_R14 != (longlong *)0x0) {
                    FUN_00d50b20();
                  }
                  if (plVar14 != (longlong *)0x0) {
                    FUN_00d50b20();
                  }
                }
              }
            }
            plVar14 = local_50;
            FUN_01204640();
            pVar20 = (pthread_key_t)plVar14;
          }
          if ((local_14c & 1) != 0) {
            pvVar7 = _pthread_getspecific(pVar20);
            if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
              pVar20 = pVar19;
            }
            FUN_016c30e0();
          }
          if (local_168._4_4_ != 0) {
            pvVar7 = _pthread_getspecific(pVar20);
            if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
              pVar20 = pVar19;
            }
            FUN_016ea820();
          }
          pvVar7 = _pthread_getspecific(pVar20);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_015056c0();
          if (plVar11 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if (local_e0 != (longlong *)0x0) {
            FUN_00d50b20();
          }
        }
        pvVar7 = _pthread_getspecific(pVar20);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_015058d0();
        pvVar7 = _pthread_getspecific(pVar20);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01510280();
        plVar11 = local_60;
        if (local_58[0] == '\0') {
          if (((local_60 != (longlong *)0x0) && (FUN_00d50b00(), local_58[0] != '\0')) &&
             (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_58[0] = '\0';
        }
        if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        pvVar7 = _pthread_getspecific(pVar20);
        if ((pvVar7 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
          iVar24 = *(int *)(plVar11[9] + 0x18);
        }
        else {
          iVar24 = *(int *)(*(longlong *)
                             (plVar11[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4] + 0x48) + 0x18)
          ;
        }
        if ((-8 < iVar24) && (0 < *(int *)(unaff_RDI[0xf] + 0xc))) {
          FUN_011f83a0();
          plVar14 = local_60;
          if (plVar11 == local_60) {
            plVar14 = plVar11;
            if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else if (local_58[0] == '\0') {
            if (local_60 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            if (plVar11 != (longlong *)0x0) {
              FUN_00d50b20();
            }
          }
          else if (plVar11 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          pvVar7 = _pthread_getspecific(pVar20);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_015058d0();
          pvVar7 = _pthread_getspecific(pVar20);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0150c7f0();
          plVar11 = plVar14;
          if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        pvVar7 = _pthread_getspecific(pVar20);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_015058d0();
        pvVar7 = _pthread_getspecific(pVar20);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01510030();
        plVar14 = local_60;
        if (local_58[0] == '\0') {
          if (((local_60 != (longlong *)0x0) && (FUN_00d50b00(), local_58[0] != '\0')) &&
             (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_58[0] = '\0';
        }
        if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        pvVar7 = _pthread_getspecific(pVar20);
        if ((pvVar7 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
          if (*(int *)(plVar11[9] + 0x18) < 8) goto LAB_011fe5c3;
LAB_011fe5ed:
          plVar16 = (longlong *)unaff_RDI[0xf];
          if (0 < *(int *)((longlong)plVar16 + 0xc)) {
            FUN_011f83a0();
            plVar16 = local_60;
            if (plVar14 == local_60) {
              if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else if (local_58[0] == '\0') {
              if (local_60 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              bVar27 = plVar14 != (longlong *)0x0;
              plVar14 = plVar16;
              if (bVar27) {
                FUN_00d50b20();
              }
            }
            else {
              bVar27 = plVar14 != (longlong *)0x0;
              plVar14 = plVar16;
              if (bVar27) {
                FUN_00d50b20();
              }
            }
            pvVar7 = _pthread_getspecific(pVar20);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_015058d0();
            pvVar7 = _pthread_getspecific(pVar20);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0150ceb0();
            if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            plVar16 = (longlong *)unaff_RDI[0xf];
            unaff_R14 = plVar14;
            goto joined_r0x011fe7d4;
          }
LAB_011fe7da:
          local_58[0] = '\0';
          local_60 = (longlong *)0x0;
          local_48 = 0xffffffff;
          local_40 = 0;
          local_50 = plVar16;
          while( true ) {
            lVar8 = (longlong)(int)local_48;
            iVar24 = (int)local_48 + 1;
            local_48 = CONCAT44(local_48._4_4_,iVar24);
            if (*(int *)((longlong)local_50 + 0xc) <= iVar24) break;
            local_60 = *(longlong **)(local_50[2] + 8 + lVar8 * 8);
            unaff_R14 = (longlong *)FUN_0124ba40();
            uVar9 = FUN_0124ba50();
            uVar12 = FUN_0124ba90();
            uVar17 = FUN_0124bac0();
            (**(code **)(*unaff_RDI + 0x3c8))(uVar12,uVar9,uVar17);
            if (local_48._4_4_ != 0) {
              if ((longlong)local_48 < 0) {
                iVar24 = -local_48._4_4_;
              }
              else {
                local_48 = CONCAT44(local_48._4_4_,(int)local_48 - local_48._4_4_);
                FUN_00d23690();
                local_40 = local_40 + local_48._4_4_;
                iVar24 = 0;
              }
              local_48 = CONCAT44(iVar24,(int)local_48);
            }
          }
          FUN_01204640();
        }
        else {
          if (7 < *(int *)(*(longlong *)
                            (plVar11[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4] + 0x48) + 0x18))
          goto LAB_011fe5ed;
LAB_011fe5c3:
          plVar16 = (longlong *)unaff_RDI[0xf];
joined_r0x011fe7d4:
          if (plVar16 != (longlong *)0x0) goto LAB_011fe7da;
        }
        (**(code **)(*unaff_RDI + 0x3d8))();
        if ((longlong *)unaff_RDI[0xf] != (longlong *)0x0) {
          local_58[0] = '\0';
          local_60 = (longlong *)0x0;
          local_48 = 0xffffffff;
          local_40 = 0;
          local_48._4_4_ = 0;
          local_50 = (longlong *)unaff_RDI[0xf];
          while( true ) {
            if (local_48._4_4_ != 0) {
              if (local_48._4_4_ < 1) {
                iVar24 = -local_48._4_4_;
              }
              else {
                iVar24 = (int)local_48 - local_48._4_4_;
                local_48 = CONCAT44(local_48._4_4_,iVar24);
                FUN_00d23690();
                local_40 = local_40 + local_48._4_4_;
                iVar24 = 0;
              }
              local_48 = CONCAT44(iVar24,(int)local_48);
            }
            lVar8 = (longlong)(int)local_48;
            iVar24 = (int)local_48 + 1;
            local_48 = CONCAT44(local_48._4_4_,iVar24);
            if (*(int *)((longlong)local_50 + 0xc) <= iVar24) break;
            local_60 = *(longlong **)(local_50[2] + 8 + lVar8 * 8);
            FUN_0124bce0();
          }
          FUN_01204640();
        }
        if (*(int *)(unaff_RDI[0x10] + 0xc) == 0) {
          unaff_R14 = (longlong *)unaff_RDI[0xf];
          if (unaff_R14 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          local_58[0] = '\0';
          local_60 = unaff_R14;
          FUN_00d243f0();
          if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (unaff_R14 != (longlong *)0x0) {
            FUN_00d50b20();
          }
        }
        else {
          local_58[0] = '\0';
          local_60 = (longlong *)0x0;
          local_48 = 0xffffffff;
          local_40 = 0;
          local_50 = (longlong *)unaff_RDI[0x10];
          while( true ) {
            lVar8 = (longlong)(int)local_48;
            iVar24 = (int)local_48 + 1;
            local_48 = CONCAT44(local_48._4_4_,iVar24);
            if (*(int *)((longlong)local_50 + 0xc) <= iVar24) break;
            local_60 = *(longlong **)(local_50[2] + 8 + lVar8 * 8);
            local_c8 = (longlong *)FUN_00e7bcc0();
            FUN_0124ba90();
            lVar8 = unaff_RDI[0xf];
            if (lVar8 != 0) {
              FUN_00d50b00();
            }
            FUN_011f81d0();
            FUN_0124b9c0();
            if (lVar8 != 0) {
              FUN_00d50b20();
            }
            FUN_0124bac0();
            unaff_R14 = (longlong *)unaff_RDI[0xf];
            if (unaff_R14 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            FUN_011f81d0();
            FUN_0124ba00();
            if (unaff_R14 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            local_88 = (longlong *)(**(code **)(*local_60 + 0x368))();
            FUN_00e7bac0();
            FUN_0124bd80();
            if (local_48._4_4_ != 0) {
              if ((longlong)local_48 < 0) {
                iVar24 = -local_48._4_4_;
              }
              else {
                local_48 = CONCAT44(local_48._4_4_,(int)local_48 - local_48._4_4_);
                FUN_00d23690();
                local_40 = local_40 + local_48._4_4_;
                iVar24 = 0;
              }
              local_48 = CONCAT44(iVar24,(int)local_48);
            }
          }
          FUN_01204640();
        }
        if (plVar14 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if (plVar11 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if (local_110 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if (plVar21 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if (local_100 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      } while (*(int *)((longlong)local_158 + 0xc) != 0);
    }
    FUN_00d50b20();
  }
  return;
}


