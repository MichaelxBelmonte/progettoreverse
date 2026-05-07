// Reconstructed implementation of MUPulseAssignmentTarget
// From MikeCore binary — reverse-engineered pseudocode

#include "MUPulseAssignmentTarget.h"

// ============================================================
// @011f8900 — 24558 bytes
// ============================================================

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




// ============================================================
// @011f4f10 — 3676 bytes
// str: ""MUPulseAssignmentTarget""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x011f5d66) */
/* WARNING: Removing unreachable block (ram,0x011f5d6d) */
/* WARNING: Removing unreachable block (ram,0x011f595e) */
/* WARNING: Removing unreachable block (ram,0x011f5963) */
/* WARNING: Removing unreachable block (ram,0x011f51d2) */
/* WARNING: Removing unreachable block (ram,0x011f51d7) */
/* WARNING: Removing unreachable block (ram,0x011f5ac6) */
/* WARNING: Removing unreachable block (ram,0x011f5ad2) */
/* WARNING: Removing unreachable block (ram,0x011f5d85) */
/* WARNING: Removing unreachable block (ram,0x011f5d8c) */
/* WARNING: Removing unreachable block (ram,0x011f5097) */
/* WARNING: Removing unreachable block (ram,0x011f50a0) */
/* WARNING: Removing unreachable block (ram,0x011f4fc9) */
/* WARNING: Removing unreachable block (ram,0x011f4fd2) */
/* WARNING: Removing unreachable block (ram,0x011f59f2) */
/* WARNING: Removing unreachable block (ram,0x011f59f7) */
/* WARNING: Removing unreachable block (ram,0x011f5b0e) */
/* WARNING: Removing unreachable block (ram,0x011f5b1a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_011f4f10(double param_1,byte param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  bool bVar2;
  bool bVar3;
  bool bVar4;
  code *pcVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  void *pvVar9;
  longlong lVar10;
  int extraout_var;
  ulonglong uVar11;
  undefined8 *puVar12;
  pthread_key_t in_ECX;
  pthread_key_t pVar13;
  uint uVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar17;
  uint uVar18;
  int iVar19;
  longlong lVar20;
  pthread_key_t pVar21;
  undefined8 uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 auVar26 [16];
  char local_res8;
  char local_res10;
  undefined1 uVar27;
  undefined8 *puVar28;
  undefined1 uVar29;
  byte local_dc;
  longlong local_88;
  longlong local_80;
  char local_78;
  longlong *local_70;
  longlong local_58;
  longlong *local_50;
  
  pVar13 = in_ECX;
  pvVar9 = _pthread_getspecific(in_ECX);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016c99c0();
  if ((local_78 == '\0') && (local_80 != 0)) {
    FUN_00d50b00();
  }
  pvVar9 = _pthread_getspecific(pVar13);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016c99c0();
  if (local_78 == '\0') {
    if (local_80 == 0) {
      bVar4 = true;
      local_88 = 0;
      goto LAB_011f50ea;
    }
    FUN_00d50b00();
  }
  local_88 = local_80;
  if (param_2 == 0) {
    if (local_80 != 0) {
      FUN_00d50b00();
      bVar4 = false;
      goto LAB_011f50ea;
    }
  }
  else if (local_80 != 0) {
    FUN_00d50b00();
    bVar4 = false;
    goto LAB_011f50ea;
  }
  bVar4 = true;
  local_88 = 0;
LAB_011f50ea:
  if (local_res8 == '\0') {
    local_dc = 0;
  }
  else {
    local_dc = FUN_011f6ad0();
  }
  lVar10 = *unaff_RSI;
  if (*(int *)(lVar10 + 0xc) < 1) {
    bVar3 = false;
    local_58 = 0;
    local_70 = (longlong *)0x0;
  }
  else {
    lVar20 = 0;
    local_70 = (longlong *)0x0;
    local_58 = 0;
    lVar15 = 0;
    bVar3 = false;
    do {
      pVar13 = (pthread_key_t)lVar15;
      plVar16 = *(longlong **)(*(longlong *)(lVar10 + 0x10) + lVar20 * 8);
      if ((DAT_0272fca8 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
        _DAT_027902e0 = "MUPulseAssignmentTarget";
        DAT_027902f0 = 0;
        _DAT_027902e8 = 0;
        ___cxa_guard_release();
      }
      plVar17 = local_70;
      if (plVar16 == (longlong *)0x0) {
        plVar16 = (longlong *)0x0;
        if (local_70 != (longlong *)0x0) goto LAB_011f51be;
      }
      else {
        uVar22 = (**(code **)(*plVar16 + 0x360))();
        lVar10 = FUN_00e86120(uVar22,1);
        plVar16 = (longlong *)((longlong)plVar16 + lVar10);
        if (plVar16 != local_70) {
LAB_011f51be:
          plVar17 = plVar16;
          if (local_70 != (longlong *)0x0) {
            (**(code **)(*local_70 + 0x10))();
          }
        }
      }
      uVar22 = (**(code **)(*plVar17 + 0x18))();
      pvVar9 = _pthread_getspecific(pVar13);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar23 = (double)FUN_016c25f0(uVar22);
      if ((local_res10 == '\0') || (iVar7 = (**(code **)(*plVar17 + 0x70))(), iVar7 == -1)) {
        pVar21 = in_ECX;
        if (in_ECX == 0xffffffff) {
          pvVar9 = _pthread_getspecific(pVar13);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar25 = (double)FUN_016c9380(uVar22);
          dVar24 = (double)FUN_00e7c860();
          dVar25 = (dVar25 * dVar24) / param_1;
          pVar21 = 0;
          if (DAT_024110e8 <= dVar25) {
            uVar14 = *(int *)(*(longlong *)(*(longlong *)(local_88 + 0x10) + 8) + 0xc) == 3 ^ 3;
            dVar24 = (double)uVar14;
            iVar7 = 1;
            if (dVar24 < dVar25) {
              iVar7 = 1;
              do {
                uVar14 = uVar14 * 2;
                iVar7 = iVar7 + 1;
                dVar24 = (double)(int)uVar14;
              } while (dVar24 < dVar25);
            }
            pVar21 = iVar7 - (uint)((double)((ulonglong)((double)(uVar14 >> 1) - dVar25) &
                                            _DAT_023908f0) <
                                   (double)((ulonglong)(dVar24 - dVar25) & _UNK_023908f8));
          }
        }
        while (*(int *)(local_88 + 0xc) <= (int)pVar21) {
          FUN_011f7510();
        }
        lVar10 = *(longlong *)(*(longlong *)(local_88 + 0x10) + (longlong)(int)pVar21 * 8);
        if (lVar10 != 0) {
          FUN_00d50b00();
        }
        if (local_58 == lVar10) {
          bVar2 = bVar3;
          if (lVar10 != 0) {
            bVar2 = true;
          }
          lVar15 = local_58;
          if ((bVar3) && (bVar2 = bVar3, lVar10 != 0)) {
            FUN_00d50b20();
            bVar2 = true;
          }
        }
        else {
          bVar2 = true;
          lVar15 = lVar10;
          if ((bVar3) && (local_58 != 0)) {
            FUN_00d50b20();
          }
        }
        bVar3 = bVar2;
        local_58 = lVar15;
        dVar24 = (double)FUN_00e7c860();
        dVar25 = (double)FUN_00e7c860();
        dVar25 = (dVar23 - dVar24) / dVar25;
        auVar26._8_8_ = 0;
        auVar26._0_8_ = dVar25;
        auVar26 = roundsd(ZEXT816(0),auVar26,9);
        FUN_011f78b0(dVar25 - auVar26._0_8_);
        FUN_00e7bcc0();
        FUN_00e7b820();
        FUN_00e7bac0();
        FUN_00e7b820();
      }
      else {
        iVar7 = (**(code **)(*plVar17 + 0x70))();
        cVar6 = (**(code **)(*plVar17 + 0x68))();
        bVar2 = bVar3;
        if (cVar6 == '\0') {
          while (*(int *)(local_80 + 0xc) <= iVar7) {
            FUN_011f7510();
          }
          lVar10 = *(longlong *)(*(longlong *)(local_80 + 0x10) + (longlong)iVar7 * 8);
          if (lVar10 != 0) {
            FUN_00d50b00();
          }
          if (local_58 == lVar10) {
            if (lVar10 != 0) {
              bVar2 = true;
            }
            param_2 = 0;
            if ((bVar3) && (bVar2 = bVar3, lVar10 != 0)) {
              FUN_00d50b20();
              param_2 = 0;
              bVar2 = true;
            }
          }
          else {
            if ((bVar3) && (local_58 != 0)) {
              FUN_00d50b20();
            }
            param_2 = 0;
            local_58 = lVar10;
            bVar2 = true;
          }
        }
        else {
          while (*(int *)(local_80 + 0xc) <= iVar7) {
            FUN_011f7510();
          }
          lVar10 = *(longlong *)(*(longlong *)(local_80 + 0x10) + (longlong)iVar7 * 8);
          if (lVar10 != 0) {
            FUN_00d50b00();
          }
          if (local_58 == lVar10) {
            if (lVar10 != 0) {
              bVar2 = true;
            }
            param_2 = 1;
            if ((bVar3) && (bVar2 = bVar3, lVar10 != 0)) {
              FUN_00d50b20();
              bVar2 = true;
            }
          }
          else {
            bVar2 = true;
            if ((bVar3) && (local_58 != 0)) {
              FUN_00d50b20();
              param_2 = 1;
              local_58 = lVar10;
            }
            else {
              param_2 = 1;
              local_58 = lVar10;
            }
          }
        }
        dVar24 = (double)FUN_00e7c860();
        dVar25 = (double)FUN_00e7c860();
        dVar25 = (dVar23 - dVar24) / dVar25;
        auVar1._8_8_ = 0;
        auVar1._0_8_ = dVar25;
        auVar26 = roundsd(ZEXT816(0),auVar1,9);
        FUN_011f78b0(dVar25 - auVar26._0_8_);
        FUN_00e7bcc0();
        FUN_00e7b820();
        FUN_00e7bac0();
        FUN_00e7b820();
        bVar3 = bVar2;
      }
      (**(code **)(*plVar17 + 0x40))();
      (**(code **)(*plVar17 + 0x58))();
      (**(code **)(*plVar17 + 0x60))();
      lVar20 = lVar20 + 1;
      lVar10 = *unaff_RSI;
      lVar15 = (longlong)*(int *)(lVar10 + 0xc);
      local_70 = plVar17;
    } while (lVar20 < lVar15);
  }
  cVar6 = FUN_011f6270();
  pcVar5 = DAT_02572370;
  bVar2 = false;
  puVar12 = (undefined8 *)0x0;
  local_50 = (longlong *)0x0;
  uVar14 = 0;
  iVar7 = 0;
  while( true ) {
    if ((cVar6 == '\0' & local_dc) != 1) break;
    lVar10 = *unaff_RSI;
    if (1 < *(int *)(lVar10 + 0xc)) {
      lVar15 = 0;
      do {
        plVar16 = *(longlong **)(*(longlong *)(lVar10 + 0x10) + lVar15 * 8);
        if ((DAT_0272fca8 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
          _DAT_027902e0 = "MUPulseAssignmentTarget";
          DAT_027902f0 = 0;
          _DAT_027902e8 = 0;
          ___cxa_guard_release();
        }
        if (plVar16 == (longlong *)0x0) {
          lVar10 = 0;
        }
        else {
          uVar22 = (**(code **)(*plVar16 + 0x360))();
          lVar10 = FUN_00e86120(uVar22,1);
        }
        plVar16 = (longlong *)((longlong)plVar16 + lVar10);
        plVar17 = local_70;
        if ((plVar16 != local_70) && (plVar17 = plVar16, local_70 != (longlong *)0x0)) {
          (**(code **)(*local_70 + 0x10))();
        }
        local_70 = plVar17;
        plVar16 = *(longlong **)(*(longlong *)(*unaff_RSI + 0x10) + 8 + lVar15 * 8);
        if ((DAT_0272fca8 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
          _DAT_027902e0 = "MUPulseAssignmentTarget";
          DAT_027902f0 = 0;
          _DAT_027902e8 = 0;
          ___cxa_guard_release();
        }
        plVar17 = local_50;
        if (plVar16 == (longlong *)0x0) {
          plVar16 = (longlong *)0x0;
          if (local_50 != (longlong *)0x0) goto LAB_011f59de;
        }
        else {
          uVar22 = (**(code **)(*plVar16 + 0x360))();
          lVar10 = FUN_00e86120(uVar22,1);
          plVar16 = (longlong *)((longlong)plVar16 + lVar10);
          if (plVar16 != local_50) {
LAB_011f59de:
            plVar17 = plVar16;
            if (local_50 != (longlong *)0x0) {
              (**(code **)(*local_50 + 0x10))();
            }
          }
        }
        (**(code **)(*plVar17 + 0x38))();
        uVar11 = (**(code **)(*local_70 + 0x38))();
        if (((extraout_var == 0) || (uVar11 >> 0x20 == 0)) ||
           (cVar6 = FUN_00e7c020(), cVar6 == '\0')) {
          if (puVar12 == (undefined8 *)0x0) {
            puVar12 = (undefined8 *)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar12 = &DAT_02572358;
            (*pcVar5)();
            bVar2 = true;
          }
          FUN_00d216c0();
          (**(code **)(*local_70 + 0x10))();
          FUN_00d21140();
          (**(code **)(*plVar17 + 0x10))();
          FUN_00d21140();
          uVar22 = *unaff_RDI;
          uVar27 = 0;
          uVar29 = 0;
          puVar28 = puVar12;
          iVar8 = FUN_011f6d20(param_3,param_2 & 1,param_4);
          if (4 < iVar8) {
            iVar8 = 5;
          }
          uVar18 = 0xb - iVar8;
          if (199 < uVar18) {
            uVar18 = 200;
          }
          uVar11 = 0;
          iVar19 = 0;
          do {
            iVar7 = iVar19;
            if ((uVar11 & 1) != 0) break;
            FUN_011f70a0(iVar8 + 1 + iVar19,param_2 & 1,param_3,param_4,uVar22,uVar27,puVar28,uVar29
                         ,*unaff_RDI,0,puVar12,0);
            uVar11 = FUN_011f6270();
            iVar19 = iVar19 + 1;
            iVar7 = uVar18 + 1;
          } while (uVar18 + 1 != iVar19);
        }
        lVar15 = lVar15 + 1;
        lVar10 = *unaff_RSI;
        local_50 = plVar17;
      } while (lVar15 < (longlong)*(int *)(lVar10 + 0xc) + -1);
    }
    cVar6 = FUN_011f6270();
    if ((199 < uVar14) || (uVar14 = uVar14 + 1, 200 < iVar7)) break;
  }
  if (local_80 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  if (!bVar4 && local_88 != 0) {
    FUN_00d50b20();
  }
  if ((bVar2) && (puVar12 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar3) && (local_58 != 0)) {
    FUN_00d50b20();
  }
  return cVar6 != '\0';
}




// ============================================================
// @011f3be0 — 3313 bytes
// str: ""MUPulseAssignmentTarget""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x011f3cc4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_011f3be0(undefined8 param_1,longlong *param_2,pthread_key_t param_3,undefined8 param_4
                      )

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  ulonglong *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  int extraout_var;
  int extraout_var_00;
  void *pvVar9;
  uint in_ECX;
  uint uVar10;
  pthread_key_t pVar11;
  undefined8 unaff_RBX;
  longlong lVar12;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar13;
  ulonglong uVar14;
  longlong *plVar15;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar16;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 local_res8;
  byte local_res10;
  undefined8 local_138;
  undefined1 local_130;
  longlong *local_128;
  undefined1 local_120;
  longlong *local_118;
  longlong *local_110;
  uint local_104;
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  longlong *local_88;
  char local_80;
  uint local_78;
  pthread_key_t local_74;
  longlong *local_58;
  ulonglong local_50;
  undefined8 *local_48;
  ulonglong local_40;
  char local_38 [8];
  
  if (*(int *)(*unaff_RSI + 0xc) == 0) {
    uVar14 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
    goto LAB_011f48b9;
  }
  local_a0 = param_1;
  local_98 = param_4;
  local_74 = param_3;
  if (*param_2 != 0) {
    FUN_00d23340();
    local_40 = CONCAT71(local_40._1_7_,(char)local_50);
    puVar6 = &local_40;
    if ((char)local_50 != '\0') {
      puVar6 = &local_50;
    }
    *(undefined1 *)puVar6 = 0;
    if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d23340();
    puVar6 = &local_50;
    if ((char)local_50 == '\0') {
      puVar6 = (ulonglong *)local_38;
    }
    local_38[0] = (char)local_50;
    *(undefined1 *)puVar6 = 0;
    if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_40 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  uVar16 = FUN_00d23340();
  puVar6 = &local_40;
  if ((char)local_50 != '\0') {
    puVar6 = &local_50;
  }
  local_40 = CONCAT71(local_40._1_7_,(char)local_50);
  *(undefined1 *)puVar6 = 0;
  if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    uVar16 = FUN_00d50b20();
  }
  if ((DAT_0272fca8 == '\0') &&
     (iVar5 = ___cxa_guard_acquire(), uVar16 = extraout_XMM0_Qa_01, iVar5 != 0)) {
    _DAT_027902e0 = "MUPulseAssignmentTarget";
    DAT_027902f0 = 0;
    _DAT_027902e8 = 0;
    uVar16 = ___cxa_guard_release();
  }
  if (local_58 == (longlong *)0x0) {
    plVar13 = (longlong *)0x0;
    local_90 = 0;
  }
  else {
    uVar16 = (**(code **)(*local_58 + 0x360))();
    lVar8 = FUN_00e86120(uVar16,1);
    plVar13 = (longlong *)(lVar8 + (longlong)local_58);
    (**(code **)(*(longlong *)((longlong)local_58 + lVar8) + 0x10))();
    uVar16 = FUN_00d50b00();
    local_90 = CONCAT71((int7)((ulonglong)uVar16 >> 8),1);
    uVar16 = extraout_XMM0_Qa;
    if ((char)local_40 != '\0') {
      uVar16 = FUN_00d50b20();
    }
  }
  FUN_00d242c0(uVar16,0);
  local_104 = (uint)local_res10;
  local_78 = in_ECX & 0xff;
  pVar11 = local_74;
  FUN_011f4f10(local_a0,local_78,local_98,local_res8,*unaff_RSI,0);
  if (*param_2 == 0) {
LAB_011f45a9:
    if (local_74 != 0xffffffff) {
      pvVar9 = _pthread_getspecific(pVar11);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_a0 = FUN_016ca710();
      unaff_RSI = (longlong *)*unaff_RDI;
      pvVar9 = _pthread_getspecific(pVar11);
      if (pvVar9 != (void *)0x0) {
        unaff_RSI = (longlong *)*unaff_RDI;
        lVar8 = FUN_00e8b990();
        if (lVar8 != 0) {
          unaff_RSI = (longlong *)unaff_RSI[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
        }
      }
      local_98 = FUN_016ca6f0();
    }
    lVar8 = *param_2;
    uVar14 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if (0 < *(int *)(lVar8 + 0xc)) {
      lVar12 = 0;
      local_118 = param_2;
      do {
        plVar1 = *(longlong **)(*(longlong *)(lVar8 + 0x10) + lVar12 * 8);
        if ((DAT_0272fca8 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
          _DAT_027902e0 = "MUPulseAssignmentTarget";
          DAT_027902f0 = 0;
          _DAT_027902e8 = 0;
          ___cxa_guard_release();
        }
        if (plVar1 == (longlong *)0x0) {
          lVar8 = 0;
        }
        else {
          uVar16 = (**(code **)(*plVar1 + 0x360))();
          lVar8 = FUN_00e86120(uVar16,1);
        }
        plVar15 = (longlong *)(lVar8 + (longlong)plVar1);
        local_40 = local_40 & 0xffffffffffffff00;
        local_138 = *unaff_RDI;
        local_130 = 0;
        local_120 = 0;
        local_128 = plVar15;
        FUN_011f64f0(local_a0,local_78,local_res8);
        if (lVar12 < (longlong)*(int *)(*param_2 + 0xc) + -1) {
          plVar2 = *(longlong **)(*(longlong *)(*param_2 + 0x10) + 8 + lVar12 * 8);
          if ((DAT_0272fca8 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
            _DAT_027902e0 = "MUPulseAssignmentTarget";
            DAT_027902f0 = 0;
            _DAT_027902e8 = 0;
            ___cxa_guard_release();
          }
          if (plVar2 == (longlong *)0x0) {
            lVar8 = 0;
          }
          else {
            uVar16 = (**(code **)(*plVar2 + 0x360))();
            lVar8 = FUN_00e86120(uVar16,1);
          }
          local_100 = (**(code **)(*(longlong *)((longlong)plVar2 + lVar8) + 0x38))();
          uVar14 = (**(code **)(*plVar15 + 0x48))();
          param_2 = local_118;
          if (((uVar14 >> 0x20 != 0) && (local_100._4_4_ != 0)) &&
             (cVar3 = FUN_00e7c020(), cVar3 != '\0')) {
            (**(code **)(*plVar15 + 0x50))();
          }
        }
        if (((char)local_40 != '\0') && (plVar1 != (longlong *)0x0)) {
          (**(code **)(*plVar15 + 0x10))();
          FUN_00d50b20();
        }
        lVar12 = lVar12 + 1;
        lVar8 = *param_2;
      } while (lVar12 < *(int *)(lVar8 + 0xc));
      uVar14 = CONCAT71((int7)((ulonglong)&local_138 >> 8),1);
    }
  }
  else {
    puVar7 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar7 = &DAT_02572358;
    uVar16 = (*DAT_02572370)();
    FUN_00d242c0(uVar16,0);
    local_f0 = **(longlong **)(*unaff_RSI + 0x10);
    local_e8 = 0;
    if (local_f0 != 0) {
      FUN_00d50b00();
    }
    local_e8 = '\x01';
    uVar4 = FUN_00d237a0();
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      FUN_00d50b20();
    }
    if (uVar4 == 0xffffffff) {
      FUN_00d50b20();
    }
    else {
      FUN_00d216c0();
      local_110 = (longlong *)(ulonglong)uVar4;
      local_48 = puVar7;
      if (0 < (int)uVar4) {
        uVar14 = 0;
        do {
          lVar8 = *(longlong *)(*(longlong *)(*param_2 + 0x10) + uVar14 * 8);
          local_d8 = 0;
          if (lVar8 != 0) {
            FUN_00d50b00();
          }
          local_d8 = '\x01';
          local_e0 = lVar8;
          FUN_00d21140();
          if ((local_d8 != '\0') && (local_e0 != 0)) {
            FUN_00d50b20();
          }
          uVar14 = uVar14 + 1;
        } while (uVar4 != uVar14);
      }
      puVar7 = local_48;
      cVar3 = FUN_011f6270();
      if (cVar3 == '\0') {
        if (puVar7 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
      }
      else {
        FUN_00d23340();
        puVar6 = &local_40;
        if ((char)local_50 != '\0') {
          puVar6 = &local_50;
        }
        local_40 = CONCAT71(local_40._1_7_,(char)local_50);
        *(undefined1 *)puVar6 = 0;
        if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_80 = 0;
        if (((char)local_40 == '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        local_88 = local_58;
        local_80 = '\x01';
        uVar4 = FUN_00d237a0();
        if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (uVar4 == 0xffffffff) {
          if (local_48 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
        }
        else {
          FUN_00d216c0();
          uVar10 = uVar4 + 1;
          uVar14 = (ulonglong)uVar10;
          lVar8 = *param_2;
          local_f8 = (ulonglong)uVar4;
          if ((int)uVar10 < *(int *)(lVar8 + 0xc)) {
            lVar12 = (longlong)(int)uVar10;
            do {
              lVar8 = *(longlong *)(*(longlong *)(lVar8 + 0x10) + lVar12 * 8);
              local_c8 = 0;
              if (lVar8 != 0) {
                FUN_00d50b00();
              }
              local_c8 = '\x01';
              local_d0 = lVar8;
              FUN_00d21140();
              if ((local_c8 != '\0') && (local_d0 != 0)) {
                FUN_00d50b20();
              }
              lVar12 = lVar12 + 1;
              lVar8 = *param_2;
              uVar14 = (ulonglong)*(int *)(lVar8 + 0xc);
            } while (lVar12 < (longlong)uVar14);
          }
          cVar3 = FUN_011f6270();
          unaff_RSI = local_110;
          if (cVar3 != '\0') {
            while( true ) {
              pVar11 = (pthread_key_t)uVar14;
              cVar3 = FUN_011f6270();
              if (cVar3 != '\0') break;
              if (0 < (int)unaff_RSI) {
                plVar1 = *(longlong **)
                          (*(longlong *)(*param_2 + 0x10) + ((ulonglong)unaff_RSI & 0xffffffff) * 8)
                ;
                if ((DAT_0272fca8 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
                  _DAT_027902e0 = "MUPulseAssignmentTarget";
                  DAT_027902f0 = 0;
                  _DAT_027902e8 = 0;
                  ___cxa_guard_release();
                }
                if (plVar1 == (longlong *)0x0) {
                  lVar8 = 0;
                }
                else {
                  uVar16 = (**(code **)(*plVar1 + 0x360))();
                  lVar8 = FUN_00e86120(uVar16,1);
                }
                (**(code **)(*(longlong *)((longlong)plVar1 + lVar8) + 0x38))();
                plVar15 = (longlong *)(ulonglong)((int)unaff_RSI - 1);
                plVar1 = *(longlong **)(*(longlong *)(*param_2 + 0x10) + (longlong)plVar15 * 8);
                if ((DAT_0272fca8 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
                  _DAT_027902e0 = "MUPulseAssignmentTarget";
                  DAT_027902f0 = 0;
                  _DAT_027902e8 = 0;
                  ___cxa_guard_release();
                }
                if (plVar1 == (longlong *)0x0) {
                  lVar8 = 0;
                }
                else {
                  uVar16 = (**(code **)(*plVar1 + 0x360))();
                  lVar8 = FUN_00e86120(uVar16,1);
                }
                local_40 = (**(code **)(*(longlong *)((longlong)plVar1 + lVar8) + 0x38))();
                if (((extraout_var != 0) && (local_40 >> 0x20 != 0)) &&
                   (cVar3 = FUN_00e7c020(), cVar3 == '\0')) {
                  lVar8 = *(longlong *)(*(longlong *)(*param_2 + 0x10) + (longlong)plVar15 * 8);
                  local_b8 = 0;
                  uVar16 = extraout_XMM0_Qa_00;
                  if (lVar8 != 0) {
                    uVar16 = FUN_00d50b00();
                  }
                  local_b8 = '\x01';
                  local_c0 = lVar8;
                  FUN_00d23370(uVar16,0);
                  unaff_RSI = plVar15;
                  if ((local_b8 != '\0') && (local_c0 != 0)) {
                    FUN_00d50b20();
                  }
                }
              }
              if ((int)local_f8 < *(int *)(*param_2 + 0xc) + -1) {
                lVar8 = (longlong)(int)local_f8;
                plVar1 = *(longlong **)(*(longlong *)(*param_2 + 0x10) + lVar8 * 8);
                if ((DAT_0272fca8 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
                  _DAT_027902e0 = "MUPulseAssignmentTarget";
                  DAT_027902f0 = 0;
                  _DAT_027902e8 = 0;
                  ___cxa_guard_release();
                }
                if (plVar1 == (longlong *)0x0) {
                  lVar12 = 0;
                }
                else {
                  uVar16 = (**(code **)(*plVar1 + 0x360))();
                  lVar12 = FUN_00e86120(uVar16,1);
                }
                (**(code **)(*(longlong *)((longlong)plVar1 + lVar12) + 0x38))();
                plVar1 = *(longlong **)(*(longlong *)(*param_2 + 0x10) + 8 + lVar8 * 8);
                if ((DAT_0272fca8 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
                  _DAT_027902e0 = "MUPulseAssignmentTarget";
                  DAT_027902f0 = 0;
                  _DAT_027902e8 = 0;
                  ___cxa_guard_release();
                }
                if (plVar1 == (longlong *)0x0) {
                  lVar12 = 0;
                }
                else {
                  uVar16 = (**(code **)(*plVar1 + 0x360))();
                  lVar12 = FUN_00e86120(uVar16,1);
                }
                local_40 = (**(code **)(*(longlong *)((longlong)plVar1 + lVar12) + 0x38))();
                if (((extraout_var_00 != 0) && (local_40 >> 0x20 != 0)) &&
                   (cVar3 = FUN_00e7c020(), cVar3 == '\0')) {
                  lVar8 = *(longlong *)(*(longlong *)(*param_2 + 0x10) + (lVar8 + 1) * 8);
                  local_a8 = 0;
                  if (lVar8 != 0) {
                    FUN_00d50b00();
                  }
                  local_a8 = '\x01';
                  local_b0 = lVar8;
                  FUN_00d21140();
                  local_f8 = (ulonglong)((int)local_f8 + 1);
                  if ((local_a8 != '\0') && (local_b0 != 0)) {
                    FUN_00d50b20();
                  }
                }
              }
              uVar14 = (ulonglong)local_74;
              FUN_011f4f10(local_a0,local_78,local_98,local_res8);
            }
            if (local_48 != (undefined8 *)0x0) {
              FUN_00d50b20();
            }
            goto LAB_011f45a9;
          }
          if (local_48 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
        }
      }
    }
    uVar14 = 0;
  }
  if (((char)local_90 != '\0') && (plVar13 != (longlong *)0x0)) {
    (**(code **)(*plVar13 + 0x10))();
    FUN_00d50b20();
  }
LAB_011f48b9:
  return uVar14 & 0xffffffff;
}




// ============================================================
// @012a55e0 — 2909 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_012a55e0(undefined8 param_1,undefined8 param_2,size_t param_3)

{
  double *pdVar1;
  ulonglong uVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
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
  float fVar22;
  float fVar23;
  float fVar24;
  bool bVar25;
  bool bVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  double dVar30;
  double dVar31;
  undefined8 uVar32;
  int iVar33;
  int iVar34;
  uint uVar35;
  longlong lVar36;
  undefined8 *puVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  longlong lVar41;
  undefined8 *puVar42;
  int iVar43;
  longlong lVar44;
  float *pfVar45;
  ulonglong uVar46;
  ulonglong uVar47;
  undefined *puVar48;
  longlong lVar49;
  ulonglong uVar50;
  longlong lVar51;
  ulonglong uVar52;
  ulonglong uVar53;
  uint uVar54;
  ulonglong uVar55;
  uint uVar56;
  ulonglong uVar57;
  bool bVar58;
  int iVar59;
  float fVar60;
  int iVar61;
  undefined1 auVar62 [16];
  float fVar63;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  longlong local_60;
  longlong local_38;
  
  DAT_028ac5c0 = FUN_00e84280();
  DAT_028ac5d0 = FUN_00e84a30();
  lVar36 = FUN_00e83010();
  iVar34 = _UNK_02410ff4;
  iVar33 = _DAT_02410ff0;
  dVar31 = _UNK_0240d0d8;
  dVar30 = _DAT_0240d0d0;
  iVar29 = _UNK_023d92f4;
  iVar28 = _DAT_023d92f0;
  auVar65 = _DAT_023d92e0;
  iVar27 = _UNK_023d92d4;
  iVar43 = _DAT_023d92d0;
  lVar44 = 0;
  iVar59 = _DAT_02392fe0;
  iVar61 = _UNK_02392fe4;
  DAT_028ac748 = lVar36;
  do {
    pdVar1 = (double *)(lVar36 + lVar44 * 8);
    *pdVar1 = (double)iVar59 * dVar30;
    pdVar1[1] = (double)iVar61 * dVar31;
    pdVar1 = (double *)(lVar36 + 0x10 + lVar44 * 8);
    *pdVar1 = (double)(iVar59 + iVar43) * dVar30;
    pdVar1[1] = (double)(iVar61 + iVar27) * dVar31;
    pdVar1 = (double *)(lVar36 + 0x20 + lVar44 * 8);
    *pdVar1 = (double)(iVar59 + auVar65._0_4_) * dVar30;
    pdVar1[1] = (double)(iVar61 + auVar65._4_4_) * dVar31;
    pdVar1 = (double *)(lVar36 + 0x30 + lVar44 * 8);
    *pdVar1 = (double)(iVar59 + iVar28) * dVar30;
    pdVar1[1] = (double)(iVar61 + iVar29) * dVar31;
    lVar44 = lVar44 + 8;
    iVar59 = iVar59 + iVar33;
    iVar61 = iVar61 + iVar34;
  } while (lVar44 != 0x800);
  puVar37 = (undefined8 *)FUN_00e83010();
  uVar32 = _UNK_0240d0e8;
  DAT_028ac5c8 = puVar37;
  *puVar37 = _DAT_0240d0e0;
  puVar37[1] = uVar32;
  *(undefined4 *)(puVar37 + 2) = 0x3f99999a;
  FUN_012a52b0();
  DAT_028ac5d8 = 0x46d55552;
  lVar36 = FUN_00e83010();
  fVar60 = DAT_0240d144;
  fVar21 = DAT_0240d140;
  puVar48 = (undefined *)0x0;
  DAT_028ac5e0 = lVar36;
  do {
    iVar43 = (int)puVar48;
    fVar63 = (float)iVar43 * fVar21;
    if (fVar60 < fVar63) {
LAB_012a5756:
      if (0x1fff < (uint)puVar48) goto LAB_012a577b;
      goto LAB_012a575e;
    }
    *(float *)(lVar36 + (longlong)puVar48 * 4) = fVar63;
    fVar63 = (float)(iVar43 + 1) * fVar21;
    if (fVar60 < fVar63) {
      puVar48 = (undefined *)(ulonglong)(iVar43 + 1);
      goto LAB_012a5756;
    }
    *(float *)(lVar36 + 4 + (longlong)puVar48 * 4) = fVar63;
    puVar48 = puVar48 + 2;
  } while (puVar48 != &DAT_00002000);
  puVar48 = (undefined *)0x0;
LAB_012a575e:
  _memset_pattern16(puVar48,(void *)((ulonglong)(0x2000 - (int)puVar48) << 2),param_3);
LAB_012a577b:
  puVar37 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar37 = &DAT_025f0d98;
  puVar37[2] = 0;
  puVar37[3] = 0;
  puVar37[4] = 0;
  puVar37[5] = 0;
  puVar37[6] = 0;
  puVar37[7] = 0;
  (*DAT_025f0db0)();
  FUN_015c1480(3,0x2000);
  lVar36 = DAT_028ac5e0;
  fVar22 = _UNK_0240d0fc;
  fVar63 = _UNK_0240d0f8;
  fVar60 = _UNK_0240d0f4;
  fVar21 = _DAT_0240d0f0;
  lVar44 = 0;
  do {
    pfVar45 = (float *)(lVar36 + lVar44 * 4);
    fVar6 = pfVar45[1];
    fVar7 = pfVar45[2];
    fVar8 = pfVar45[3];
    pfVar3 = (float *)(lVar36 + 0x10 + lVar44 * 4);
    fVar9 = *pfVar3;
    fVar10 = pfVar3[1];
    fVar11 = pfVar3[2];
    fVar12 = pfVar3[3];
    pfVar3 = (float *)(lVar36 + 0x20 + lVar44 * 4);
    fVar13 = *pfVar3;
    fVar14 = pfVar3[1];
    fVar15 = pfVar3[2];
    fVar16 = pfVar3[3];
    pfVar3 = (float *)(lVar36 + 0x30 + lVar44 * 4);
    fVar17 = *pfVar3;
    fVar18 = pfVar3[1];
    fVar19 = pfVar3[2];
    fVar20 = pfVar3[3];
    pfVar3 = (float *)(lVar36 + lVar44 * 4);
    *pfVar3 = *pfVar45 + fVar21;
    pfVar3[1] = fVar6 + fVar60;
    pfVar3[2] = fVar7 + fVar63;
    pfVar3[3] = fVar8 + fVar22;
    pfVar45 = (float *)(lVar36 + 0x10 + lVar44 * 4);
    *pfVar45 = fVar9 + fVar21;
    pfVar45[1] = fVar10 + fVar60;
    pfVar45[2] = fVar11 + fVar63;
    pfVar45[3] = fVar12 + fVar22;
    pfVar45 = (float *)(lVar36 + 0x20 + lVar44 * 4);
    *pfVar45 = fVar13 + fVar21;
    pfVar45[1] = fVar14 + fVar60;
    pfVar45[2] = fVar15 + fVar63;
    pfVar45[3] = fVar16 + fVar22;
    pfVar45 = (float *)(lVar36 + 0x30 + lVar44 * 4);
    *pfVar45 = fVar17 + fVar21;
    pfVar45[1] = fVar18 + fVar60;
    pfVar45[2] = fVar19 + fVar63;
    pfVar45[3] = fVar20 + fVar22;
    lVar44 = lVar44 + 0x10;
  } while (lVar44 != 0x2000);
  uVar57 = 0x10;
  uVar39 = 0;
  uVar38 = 0;
  lVar36 = 0;
  local_38 = 0;
  do {
    uVar56 = (uint)uVar57;
    if ((int)uVar56 < 0x200) {
      if ((int)uVar56 < 0x40) {
        if (uVar56 == 0x10) {
          local_38 = FUN_00e83da0();
          DAT_028ac5e8 = local_38;
          lVar36 = FUN_00e83da0();
          DAT_028ac5f0 = lVar36;
          uVar38 = FUN_00e83010();
          DAT_028ac698 = uVar38;
          uVar39 = FUN_00e83010();
          DAT_028ac6a0 = uVar39;
        }
        else if (uVar56 == 0x20) {
          local_38 = FUN_00e83da0();
          DAT_028ac5f8 = local_38;
          lVar36 = FUN_00e83da0();
          DAT_028ac600 = lVar36;
          uVar38 = FUN_00e83010();
          DAT_028ac6a8 = uVar38;
          uVar39 = FUN_00e83010();
          DAT_028ac6b0 = uVar39;
        }
      }
      else if (uVar56 == 0x40) {
        local_38 = FUN_00e83da0();
        DAT_028ac608 = local_38;
        lVar36 = FUN_00e83da0();
        DAT_028ac610 = lVar36;
        uVar38 = FUN_00e83010();
        DAT_028ac6b8 = uVar38;
        uVar39 = FUN_00e83010();
        DAT_028ac6c0 = uVar39;
      }
      else if (uVar56 == 0x80) {
        local_38 = FUN_00e83da0();
        DAT_028ac618 = local_38;
        lVar36 = FUN_00e83da0();
        DAT_028ac620 = lVar36;
        uVar38 = FUN_00e83010();
        DAT_028ac6c8 = uVar38;
        uVar39 = FUN_00e83010();
        DAT_028ac6d0 = uVar39;
      }
      else if (uVar56 == 0x100) {
        local_38 = FUN_00e83da0();
        DAT_028ac628 = local_38;
        lVar36 = FUN_00e83da0();
        DAT_028ac630 = lVar36;
        uVar38 = FUN_00e83010();
        DAT_028ac6d8 = uVar38;
        uVar39 = FUN_00e83010();
        DAT_028ac6e0 = uVar39;
      }
    }
    else if ((int)uVar56 < 0x1000) {
      if (uVar56 == 0x200) {
        local_38 = FUN_00e83da0();
        DAT_028ac638 = local_38;
        lVar36 = FUN_00e83da0();
        DAT_028ac640 = lVar36;
        uVar38 = FUN_00e83010();
        DAT_028ac6e8 = uVar38;
        uVar39 = FUN_00e83010();
        DAT_028ac6f0 = uVar39;
      }
      else if (uVar56 == 0x400) {
        local_38 = FUN_00e83da0();
        DAT_028ac648 = local_38;
        lVar36 = FUN_00e83da0();
        DAT_028ac650 = lVar36;
        uVar38 = FUN_00e83010();
        DAT_028ac6f8 = uVar38;
        uVar39 = FUN_00e83010();
        DAT_028ac700 = uVar39;
      }
      else if (uVar56 == 0x800) {
        local_38 = FUN_00e83da0();
        DAT_028ac658 = local_38;
        lVar36 = FUN_00e83da0();
        DAT_028ac660 = lVar36;
        uVar38 = FUN_00e83010();
        DAT_028ac708 = uVar38;
        uVar39 = FUN_00e83010();
        DAT_028ac710 = uVar39;
      }
    }
    else if (uVar56 == 0x1000) {
      local_38 = FUN_00e83da0();
      DAT_028ac668 = local_38;
      lVar36 = FUN_00e83da0();
      DAT_028ac670 = lVar36;
      uVar38 = FUN_00e83010();
      DAT_028ac718 = uVar38;
      uVar39 = FUN_00e83010();
      DAT_028ac720 = uVar39;
    }
    else if (uVar56 == 0x2000) {
      local_38 = FUN_00e83da0();
      DAT_028ac678 = local_38;
      lVar36 = FUN_00e83da0();
      DAT_028ac680 = lVar36;
      uVar38 = FUN_00e83010();
      DAT_028ac728 = uVar38;
      uVar39 = FUN_00e83010();
      DAT_028ac730 = uVar39;
    }
    else if (uVar56 == 0x4000) {
      local_38 = FUN_00e83da0();
      DAT_028ac688 = local_38;
      lVar36 = FUN_00e83da0();
      DAT_028ac690 = lVar36;
      uVar38 = FUN_00e83010();
      DAT_028ac738 = uVar38;
      uVar39 = FUN_00e83010();
      DAT_028ac740 = uVar39;
    }
    fVar22 = _UNK_0240d10c;
    fVar63 = _UNK_0240d108;
    fVar60 = _UNK_0240d104;
    fVar21 = _DAT_0240d100;
    uVar35 = uVar56 - 0x10;
    uVar40 = (ulonglong)((uVar35 >> 3) + 2);
    pfVar45 = (float *)(lVar36 + 0x30);
    do {
      pfVar45[-0xc] = pfVar45[-0xc] * fVar21;
      pfVar45[-0xb] = pfVar45[-0xb] * fVar60;
      pfVar45[-10] = pfVar45[-10] * fVar63;
      pfVar45[-9] = pfVar45[-9] * fVar22;
      pfVar45[-8] = pfVar45[-8] * fVar21;
      pfVar45[-7] = pfVar45[-7] * fVar60;
      pfVar45[-6] = pfVar45[-6] * fVar63;
      pfVar45[-5] = pfVar45[-5] * fVar22;
      pfVar45[-4] = pfVar45[-4] * fVar21;
      pfVar45[-3] = pfVar45[-3] * fVar60;
      pfVar45[-2] = pfVar45[-2] * fVar63;
      pfVar45[-1] = pfVar45[-1] * fVar22;
      *pfVar45 = *pfVar45 * fVar21;
      pfVar45[1] = pfVar45[1] * fVar60;
      pfVar45[2] = pfVar45[2] * fVar63;
      pfVar45[3] = pfVar45[3] * fVar22;
      pfVar45 = pfVar45 + 0x10;
      uVar40 = uVar40 - 2;
    } while (uVar40 != 0);
    ___bzero();
    uVar40 = uVar57 >> 2;
    lVar44 = local_38 + 0x10;
    lVar51 = lVar36 + 0x10;
    local_60 = 0;
    lVar49 = 0;
    uVar53 = 0;
    uVar54 = 0;
    do {
      uVar46 = uVar40 * lVar49;
      uVar50 = uVar46 | 1;
      uVar55 = uVar57;
      if (uVar57 < uVar50) {
        uVar55 = uVar50;
      }
      uVar52 = uVar55 - uVar46;
      uVar47 = uVar53;
      if (uVar52 < 8) {
        uVar50 = 0;
LAB_012a5e54:
        pfVar45 = (float *)(uVar38 + uVar50 * 4);
        do {
          *pfVar45 = *(float *)(local_38 + uVar47 * 4) * *(float *)(lVar36 + uVar47 * 4) + *pfVar45;
          uVar47 = uVar47 + 1;
          pfVar45 = pfVar45 + 1;
        } while (uVar47 < uVar57);
      }
      else {
        uVar2 = uVar38 + uVar52 * 4;
        lVar41 = ~uVar46 + uVar55 + uVar50;
        if (uVar38 < (ulonglong)(local_38 + lVar41 * 4) && local_38 + uVar46 * 4 < uVar2) {
          uVar50 = 0;
          goto LAB_012a5e54;
        }
        uVar50 = 0;
        if (uVar38 < (ulonglong)(lVar36 + lVar41 * 4) && lVar36 + uVar46 * 4 < uVar2)
        goto LAB_012a5e54;
        uVar50 = uVar52 & 0xfffffffffffffff8;
        uVar47 = uVar53 + uVar50;
        uVar46 = 0;
        do {
          pfVar4 = (float *)(lVar44 + -0x10 + uVar46 * 4);
          fVar21 = pfVar4[1];
          fVar60 = pfVar4[2];
          fVar63 = pfVar4[3];
          pfVar45 = (float *)(lVar44 + uVar46 * 4);
          fVar22 = *pfVar45;
          fVar6 = pfVar45[1];
          fVar7 = pfVar45[2];
          fVar8 = pfVar45[3];
          pfVar5 = (float *)(lVar51 + -0x10 + uVar46 * 4);
          fVar9 = pfVar5[1];
          fVar10 = pfVar5[2];
          fVar11 = pfVar5[3];
          pfVar45 = (float *)(lVar51 + uVar46 * 4);
          fVar12 = *pfVar45;
          fVar13 = pfVar45[1];
          fVar14 = pfVar45[2];
          fVar15 = pfVar45[3];
          pfVar45 = (float *)(uVar38 + uVar46 * 4);
          fVar16 = pfVar45[1];
          fVar17 = pfVar45[2];
          fVar18 = pfVar45[3];
          pfVar3 = (float *)(uVar38 + 0x10 + uVar46 * 4);
          fVar19 = *pfVar3;
          fVar20 = pfVar3[1];
          fVar23 = pfVar3[2];
          fVar24 = pfVar3[3];
          pfVar3 = (float *)(uVar38 + uVar46 * 4);
          *pfVar3 = *pfVar45 + *pfVar5 * *pfVar4;
          pfVar3[1] = fVar16 + fVar9 * fVar21;
          pfVar3[2] = fVar17 + fVar10 * fVar60;
          pfVar3[3] = fVar18 + fVar11 * fVar63;
          pfVar45 = (float *)(uVar38 + 0x10 + uVar46 * 4);
          *pfVar45 = fVar19 + fVar12 * fVar22;
          pfVar45[1] = fVar20 + fVar13 * fVar6;
          pfVar45[2] = fVar23 + fVar14 * fVar7;
          pfVar45[3] = fVar24 + fVar15 * fVar8;
          uVar46 = uVar46 + 8;
        } while ((uVar55 + local_60 & 0xfffffffffffffff8) != uVar46);
        if (uVar52 != uVar50) goto LAB_012a5e54;
      }
      uVar54 = uVar54 + (int)(uVar57 >> 2);
      uVar53 = uVar53 + uVar40;
      lVar49 = lVar49 + 1;
      lVar44 = lVar44 + uVar40 * 4;
      lVar51 = lVar51 + uVar40 * 4;
      local_60 = local_60 - uVar40;
    } while (uVar54 < uVar56);
    if ((uVar39 < uVar38 + (ulonglong)uVar35 * 4 + 0x40) &&
       (uVar38 < uVar39 + (ulonglong)uVar35 * 4 + 0x40)) {
      lVar44 = 0;
      do {
        fVar60 = DAT_02390124;
        fVar63 = DAT_02390124 - *(float *)(uVar38 + lVar44 * 4);
        fVar21 = 0.0;
        if (0.0 <= fVar63) {
          fVar21 = fVar63;
        }
        *(float *)(uVar39 + lVar44 * 4) = fVar21;
        fVar63 = fVar60 - *(float *)(uVar38 + 4 + lVar44 * 4);
        fVar21 = 0.0;
        if (0.0 <= fVar63) {
          fVar21 = fVar63;
        }
        *(float *)(uVar39 + 4 + lVar44 * 4) = fVar21;
        fVar63 = fVar60 - *(float *)(uVar38 + 8 + lVar44 * 4);
        fVar21 = 0.0;
        if (0.0 <= fVar63) {
          fVar21 = fVar63;
        }
        *(float *)(uVar39 + 8 + lVar44 * 4) = fVar21;
        fVar60 = fVar60 - *(float *)(uVar38 + 0xc + lVar44 * 4);
        fVar21 = 0.0;
        if (0.0 <= fVar60) {
          fVar21 = fVar60;
        }
        *(float *)(uVar39 + 0xc + lVar44 * 4) = fVar21;
        lVar44 = lVar44 + 4;
      } while (uVar56 != (uint)lVar44);
    }
    else {
      lVar51 = (ulonglong)(uVar35 >> 3) + 2;
      lVar44 = 0x30;
      do {
        fVar22 = _UNK_023b2d5c;
        fVar63 = _UNK_023b2d58;
        fVar60 = _UNK_023b2d54;
        fVar21 = _DAT_023b2d50;
        pfVar45 = (float *)((uVar38 - 0x30) + lVar44);
        pfVar3 = (float *)((uVar38 - 0x20) + lVar44);
        auVar64._0_4_ = _DAT_023b2d50 - *pfVar45;
        auVar64._4_4_ = _UNK_023b2d54 - pfVar45[1];
        auVar64._8_4_ = _UNK_023b2d58 - pfVar45[2];
        auVar64._12_4_ = _UNK_023b2d5c - pfVar45[3];
        auVar65._0_4_ = _DAT_023b2d50 - *pfVar3;
        auVar65._4_4_ = _UNK_023b2d54 - pfVar3[1];
        auVar65._8_4_ = _UNK_023b2d58 - pfVar3[2];
        auVar65._12_4_ = _UNK_023b2d5c - pfVar3[3];
        auVar62 = maxps(ZEXT816(0),auVar64);
        auVar65 = maxps(ZEXT816(0),auVar65);
        *(undefined1 (*) [16])((uVar39 - 0x30) + lVar44) = auVar62;
        *(undefined1 (*) [16])((uVar39 - 0x20) + lVar44) = auVar65;
        pfVar3 = (float *)((uVar38 - 0x10) + lVar44);
        pfVar45 = (float *)(uVar38 + lVar44);
        auVar66._0_4_ = fVar21 - *pfVar3;
        auVar66._4_4_ = fVar60 - pfVar3[1];
        auVar66._8_4_ = fVar63 - pfVar3[2];
        auVar66._12_4_ = fVar22 - pfVar3[3];
        auVar62._0_4_ = fVar21 - *pfVar45;
        auVar62._4_4_ = fVar60 - pfVar45[1];
        auVar62._8_4_ = fVar63 - pfVar45[2];
        auVar62._12_4_ = fVar22 - pfVar45[3];
        auVar65 = maxps(ZEXT816(0),auVar66);
        auVar62 = maxps(ZEXT816(0),auVar62);
        *(undefined1 (*) [16])((uVar39 - 0x10) + lVar44) = auVar65;
        *(undefined1 (*) [16])(uVar39 + lVar44) = auVar62;
        lVar44 = lVar44 + 0x40;
        lVar51 = lVar51 + -2;
      } while (lVar51 != 0);
    }
    uVar57 = (ulonglong)(uVar56 * 2);
    if (0x4000 < uVar56 * 2) {
      puVar42 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar42 = &DAT_025f0698;
      *(undefined4 *)(puVar42 + 7) = 0;
      *(undefined1 *)((longlong)puVar42 + 0x3c) = 0;
      puVar42[8] = 0;
      puVar42[9] = 0;
      *(undefined4 *)(puVar42 + 10) = 0;
      (*DAT_025f06b0)();
      if (DAT_028ac598 == puVar42) {
        bVar26 = false;
        bVar25 = false;
      }
      else {
        bVar26 = true;
        bVar25 = true;
        bVar58 = DAT_028ac598 != (undefined8 *)0x0;
        DAT_028ac598 = puVar42;
        if (bVar58) {
          FUN_00d50b20();
        }
      }
      if (DAT_028ac5a0 == '\0') {
        DAT_028ac5a0 = '\x01';
        FUN_00e8cb90();
        bVar25 = bVar26;
      }
      if (!bVar25) {
        FUN_00d50b20();
      }
      if (puVar37 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      return;
    }
  } while( true );
}




// ============================================================
// @012a7870 — 2423 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_012a7870(longlong param_1,int param_2)

{
  char cVar1;
  void *pvVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  pthread_key_t pVar7;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  longlong local_70;
  char local_68;
  longlong local_40;
  longlong local_38;
  
  lVar6 = *unaff_RDI;
  pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar2 != (void *)0x0) {
    lVar6 = *unaff_RDI;
    lVar3 = FUN_00e8b990();
    if (lVar3 != 0) {
      lVar6 = *(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8);
    }
  }
  local_40 = *(longlong *)(lVar6 + 0x50);
  lVar6 = *unaff_RSI;
  pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar2 != (void *)0x0) {
    lVar6 = *unaff_RSI;
    lVar3 = FUN_00e8b990();
    if (lVar3 != 0) {
      lVar6 = *(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8);
    }
  }
  local_38 = *(longlong *)(lVar6 + 0x50);
  lVar6 = *unaff_RDI;
  if (lVar6 != 0) {
    pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar2 != (void *)0x0) {
      lVar6 = *unaff_RDI;
      lVar3 = FUN_00e8b990();
      if (lVar3 != 0) {
        lVar6 = *(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8);
      }
    }
    uVar8 = 0;
    if ((*(longlong *)(lVar6 + 0x48) == 0) || (local_40 == 0)) goto LAB_012a7b13;
  }
  lVar6 = *unaff_RSI;
  if (lVar6 != 0) {
    pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar2 != (void *)0x0) {
      lVar6 = *unaff_RSI;
      lVar3 = FUN_00e8b990();
      if (lVar3 != 0) {
        lVar6 = *(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8);
      }
    }
    uVar8 = 0;
    if ((*(longlong *)(lVar6 + 0x48) == 0) || (uVar8 = 0, local_38 == 0)) goto LAB_012a7b13;
  }
  lVar6 = *unaff_RDI;
  pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar2 != (void *)0x0) {
    lVar6 = *unaff_RDI;
    lVar3 = FUN_00e8b990();
    if (lVar3 != 0) {
      lVar6 = *(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8);
    }
  }
  lVar6 = *(longlong *)(lVar6 + 0x48);
  lVar3 = *unaff_RSI;
  pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar2 != (void *)0x0) {
    lVar3 = *unaff_RSI;
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      lVar3 = *(longlong *)(lVar3 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
    }
  }
  uVar8 = 0;
  if ((lVar6 == 0) || (lVar3 = *(longlong *)(lVar3 + 0x48), lVar3 == 0)) goto LAB_012a7b13;
  pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
  if ((pvVar2 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
    lVar4 = *(longlong *)(lVar6 + 0x100);
  }
  else {
    lVar4 = *(longlong *)
             (*(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8) + 0x100);
  }
  if (lVar4 != 0) {
    pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
    if ((pvVar2 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
      lVar4 = *(longlong *)(lVar3 + 0x100);
    }
    else {
      lVar4 = *(longlong *)
               (*(longlong *)(lVar3 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8) + 0x100)
      ;
    }
    if (lVar4 != 0) {
      pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
      lVar4 = lVar6;
      if ((pvVar2 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        lVar4 = *(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
      }
      if (NAN(*(double *)(lVar4 + 0x120))) {
        pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
        lVar4 = lVar3;
        if ((pvVar2 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
          lVar4 = *(longlong *)(lVar3 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
        }
        if (NAN(*(double *)(lVar4 + 0x118))) {
          if (param_2 == 1) {
            pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
            if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
              param_1 = local_38;
            }
            cVar1 = FUN_013ddf90();
            if (cVar1 == '\0') {
              lVar4 = *unaff_RDI;
              pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
              if (pvVar2 != (void *)0x0) {
                lVar4 = *unaff_RDI;
                lVar5 = FUN_00e8b990();
                if (lVar5 != 0) {
                  lVar4 = *(longlong *)
                           (lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
                }
              }
              dVar9 = (double)FUN_011eeeb0();
              pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
              if ((pvVar2 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
                lVar6 = *(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
              }
              dVar9 = dVar9 + *(double *)(lVar6 + 0xe8);
              pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
              if (pvVar2 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar10 = (double)FUN_011eedd0();
              pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
              if ((pvVar2 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
                lVar3 = *(longlong *)(lVar3 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
              }
              dVar10 = dVar10 + *(double *)(lVar3 + 0xe8);
              if (((dVar9 == dVar10) && (!NAN(dVar9) && !NAN(dVar10))) ||
                 ((double)((ulonglong)(dVar9 - dVar10) & _DAT_023908f0) <= DAT_0240d190)) {
                pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
                lVar6 = local_40;
                if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
                  param_1 = local_40;
                  lVar6 = *(longlong *)
                           (local_40 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8);
                }
                lVar3 = *(longlong *)(lVar6 + 0x48);
                pVar7 = (pthread_key_t)param_1;
                pvVar2 = _pthread_getspecific(pVar7);
                if (pvVar2 != (void *)0x0) {
                  lVar3 = *(longlong *)(lVar6 + 0x48);
                  lVar6 = FUN_00e8b990();
                  if (lVar6 != 0) {
                    lVar3 = *(longlong *)
                             (lVar3 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
                  }
                }
                pvVar2 = _pthread_getspecific(pVar7);
                lVar6 = local_38;
                if ((pvVar2 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
                  lVar6 = *(longlong *)
                           (local_38 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
                }
                lVar3 = *(longlong *)(lVar3 + 0xb8);
                uVar8 = CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
                if (lVar3 == *(longlong *)(lVar6 + 0x48)) goto LAB_012a7b13;
                pvVar2 = _pthread_getspecific((pthread_key_t)lVar3);
                lVar6 = local_40;
                if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
                  lVar3 = local_40;
                  lVar6 = *(longlong *)
                           (local_40 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
                }
                lVar4 = *(longlong *)(lVar6 + 0x48);
                pvVar2 = _pthread_getspecific((pthread_key_t)lVar3);
                if (pvVar2 != (void *)0x0) {
                  lVar4 = *(longlong *)(lVar6 + 0x48);
                  lVar6 = FUN_00e8b990();
                  if (lVar6 != 0) {
                    lVar4 = *(longlong *)
                             (lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
                  }
                }
                lVar6 = *(longlong *)(lVar4 + 0x78);
                if (lVar6 == 0) {
                  pvVar2 = _pthread_getspecific((pthread_key_t)lVar3);
                  lVar6 = local_40;
                  if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
                    lVar3 = local_40;
                    lVar6 = *(longlong *)
                             (local_40 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
                  }
                  lVar4 = *(longlong *)(lVar6 + 0x40);
                  pvVar2 = _pthread_getspecific((pthread_key_t)lVar3);
                  if (pvVar2 != (void *)0x0) {
                    lVar4 = *(longlong *)(lVar6 + 0x40);
                    lVar6 = FUN_00e8b990();
                    if (lVar6 != 0) {
                      lVar4 = *(longlong *)
                               (lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
                    }
                  }
                  lVar6 = *(longlong *)(lVar4 + 0x60);
                  pvVar2 = _pthread_getspecific((pthread_key_t)lVar3);
                  if (pvVar2 != (void *)0x0) {
                    lVar6 = *(longlong *)(lVar4 + 0x60);
                    lVar4 = FUN_00e8b990();
                    if (lVar4 != 0) {
                      lVar6 = *(longlong *)
                               (lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
                    }
                  }
                  lVar6 = *(longlong *)(lVar6 + 0x38);
                }
                pvVar2 = _pthread_getspecific((pthread_key_t)lVar3);
                lVar4 = local_38;
                if ((pvVar2 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
                  lVar3 = local_38;
                  lVar4 = *(longlong *)
                           (local_38 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
                }
                lVar5 = *(longlong *)(lVar4 + 0x48);
                pvVar2 = _pthread_getspecific((pthread_key_t)lVar3);
                if (pvVar2 != (void *)0x0) {
                  lVar5 = *(longlong *)(lVar4 + 0x48);
                  lVar4 = FUN_00e8b990();
                  if (lVar4 != 0) {
                    lVar5 = *(longlong *)
                             (lVar5 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
                  }
                }
                lVar4 = *(longlong *)(lVar5 + 0x78);
                if (lVar4 == 0) {
                  pvVar2 = _pthread_getspecific((pthread_key_t)lVar3);
                  lVar4 = local_38;
                  if ((pvVar2 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
                    lVar3 = local_38;
                    lVar4 = *(longlong *)
                             (local_38 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
                  }
                  lVar5 = *(longlong *)(lVar4 + 0x40);
                  pvVar2 = _pthread_getspecific((pthread_key_t)lVar3);
                  if (pvVar2 != (void *)0x0) {
                    lVar5 = *(longlong *)(lVar4 + 0x40);
                    lVar4 = FUN_00e8b990();
                    if (lVar4 != 0) {
                      lVar5 = *(longlong *)
                               (lVar5 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
                    }
                  }
                  lVar4 = *(longlong *)(lVar5 + 0x60);
                  pvVar2 = _pthread_getspecific((pthread_key_t)lVar3);
                  if (pvVar2 != (void *)0x0) {
                    lVar4 = *(longlong *)(lVar5 + 0x60);
                    lVar5 = FUN_00e8b990();
                    if (lVar5 != 0) {
                      lVar4 = *(longlong *)
                               (lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
                    }
                  }
                  lVar4 = *(longlong *)(lVar4 + 0x38);
                }
                if (lVar6 == lVar4) {
                  pvVar2 = _pthread_getspecific((pthread_key_t)lVar3);
                  lVar6 = local_40;
                  if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
                    lVar3 = local_40;
                    lVar6 = *(longlong *)
                             (local_40 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
                  }
                  lVar4 = *(longlong *)(lVar6 + 0x48);
                  pvVar2 = _pthread_getspecific((pthread_key_t)lVar3);
                  if (pvVar2 != (void *)0x0) {
                    lVar4 = *(longlong *)(lVar6 + 0x48);
                    lVar6 = FUN_00e8b990();
                    if (lVar6 != 0) {
                      lVar4 = *(longlong *)
                               (lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
                    }
                  }
                  lVar6 = *(longlong *)(lVar4 + 0x58);
                  pvVar2 = _pthread_getspecific((pthread_key_t)lVar3);
                  if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
                    lVar3 = *(longlong *)
                             (local_40 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
                    local_40 = lVar3;
                  }
                  lVar4 = *(longlong *)(local_40 + 0x48);
                  pvVar2 = _pthread_getspecific((pthread_key_t)lVar3);
                  if (pvVar2 != (void *)0x0) {
                    lVar4 = *(longlong *)(local_40 + 0x48);
                    lVar5 = FUN_00e8b990();
                    if (lVar5 != 0) {
                      lVar4 = *(longlong *)
                               (lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
                    }
                  }
                  lVar4 = *(longlong *)(lVar4 + 0x60);
                  pvVar2 = _pthread_getspecific((pthread_key_t)lVar3);
                  if ((pvVar2 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
                    lVar3 = *(longlong *)
                             (local_38 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
                    local_38 = lVar3;
                  }
                  lVar5 = *(longlong *)(local_38 + 0x48);
                  pvVar2 = _pthread_getspecific((pthread_key_t)lVar3);
                  if (pvVar2 != (void *)0x0) {
                    lVar5 = *(longlong *)(local_38 + 0x48);
                    lVar3 = FUN_00e8b990();
                    if (lVar3 != 0) {
                      lVar5 = *(longlong *)
                               (lVar5 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8);
                    }
                  }
                  if (lVar6 + lVar4 == *(longlong *)(lVar5 + 0x58)) goto LAB_012a7b13;
                }
              }
            }
          }
          else if (param_2 == 0) {
            pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012641c0();
            if ((local_68 != '\0') && (local_70 != 0)) {
              FUN_00d50b20();
            }
            if (local_70 == lVar3) {
              uVar8 = 1;
              goto LAB_012a7b13;
            }
          }
        }
      }
    }
  }
  uVar8 = 0;
LAB_012a7b13:
  return uVar8 & 0xffffffff;
}




// ============================================================
// @011f3320 — 1543 bytes
// str: ""MUPulseAssignmentTarget""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x011f389e) */
/* WARNING: Removing unreachable block (ram,0x011f38a7) */
/* WARNING: Removing unreachable block (ram,0x011f34db) */
/* WARNING: Removing unreachable block (ram,0x011f34e4) */
/* WARNING: Removing unreachable block (ram,0x011f34a8) */
/* WARNING: Removing unreachable block (ram,0x011f34b1) */
/* WARNING: Removing unreachable block (ram,0x011f381a) */
/* WARNING: Removing unreachable block (ram,0x011f3825) */
/* WARNING: Removing unreachable block (ram,0x011f38d1) */
/* WARNING: Removing unreachable block (ram,0x011f38da) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_011f3320(pthread_key_t param_1)

{
  longlong *plVar1;
  code *pcVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  void *pvVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  pthread_key_t pVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  
  pVar12 = param_1;
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_02572358;
  pcVar2 = DAT_02572370;
  (*DAT_02572370)();
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_02572358;
  (*pcVar2)();
  pvVar7 = _pthread_getspecific(pVar12);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar8 = FUN_016ca6f0();
  uVar9 = FUN_00e7bdb0();
  pvVar7 = _pthread_getspecific(pVar12);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar3 = FUN_016ca5b0();
  pvVar7 = _pthread_getspecific(pVar12);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar16 = FUN_016ca710();
  if (param_1 == 3) {
    uVar17 = FUN_00d214d0(uVar16,*(undefined4 *)((longlong)puVar5 + 0xc));
    uVar17 = FUN_00d214d0(uVar17,*(undefined4 *)((longlong)puVar6 + 0xc));
    uVar17 = FUN_00d242c0(uVar17,0);
    FUN_00d242c0(uVar17,0);
    FUN_011f4f10(uVar16,uVar3,uVar8,uVar9,0);
    lVar13 = 0xffffffff;
    FUN_011f4f10(uVar16,uVar3,uVar8,uVar9,0);
    if (0 < *(int *)((longlong)puVar6 + 0xc)) {
      lVar14 = 0;
      do {
        plVar15 = *(longlong **)(puVar6[2] + lVar14 * 8);
        if ((DAT_0272fca8 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
          _DAT_027902e0 = "MUPulseAssignmentTarget";
          DAT_027902f0 = 0;
          _DAT_027902e8 = 0;
          ___cxa_guard_release();
        }
        if (plVar15 == (longlong *)0x0) {
          lVar10 = 0;
        }
        else {
          uVar8 = (**(code **)(*plVar15 + 0x360))();
          lVar10 = FUN_00e86120(uVar8,1);
        }
        pvVar7 = _pthread_getspecific((pthread_key_t)lVar13);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        plVar15 = (longlong *)(lVar10 + (longlong)plVar15);
        uVar8 = (**(code **)(*plVar15 + 0x38))();
        dVar18 = (double)FUN_016c98e0(uVar8,0);
        if (0 < *(int *)((longlong)puVar5 + 0xc)) {
          lVar10 = 0;
          do {
            plVar1 = *(longlong **)(puVar5[2] + lVar10 * 8);
            if ((DAT_0272fca8 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
              _DAT_027902e0 = "MUPulseAssignmentTarget";
              DAT_027902f0 = 0;
              _DAT_027902e8 = 0;
              ___cxa_guard_release();
            }
            if (plVar1 == (longlong *)0x0) {
              lVar11 = 0;
            }
            else {
              (**(code **)(*plVar1 + 0x360))();
              lVar11 = FUN_00e86120();
            }
            pvVar7 = _pthread_getspecific((pthread_key_t)lVar13);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar8 = (**(code **)(*(longlong *)((longlong)plVar1 + lVar11) + 0x38))();
            dVar19 = (double)FUN_016c98e0(uVar8,0);
            dVar20 = (double)(**(code **)(*plVar15 + 0x18))();
            if (dVar20 < dVar19) break;
            if ((dVar18 < dVar19) &&
               (dVar20 = (double)(**(code **)(*plVar15 + 0x18))(), dVar19 < dVar20)) {
              (**(code **)(*(longlong *)((longlong)plVar1 + lVar11) + 0x38))();
              lVar13 = *plVar15;
              (**(code **)(lVar13 + 0x40))();
            }
            lVar10 = lVar10 + 1;
          } while (lVar10 < *(int *)((longlong)puVar5 + 0xc));
        }
        lVar14 = lVar14 + 1;
      } while (lVar14 < *(int *)((longlong)puVar6 + 0xc));
    }
  }
  else {
    uVar17 = FUN_00d214d0(uVar16,*(undefined4 *)((longlong)puVar5 + 0xc));
    uVar17 = FUN_00d214d0(uVar17,*(undefined4 *)((longlong)puVar5 + 0xc));
    FUN_00d242c0(uVar17,0);
    FUN_011f4f10(uVar16,uVar3,uVar8,uVar9,0);
  }
  FUN_00d50b20();
  FUN_00d50b20();
  return;
}




// ============================================================
// @011f64f0 — 1351 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x011f65bb) */
/* WARNING: Removing unreachable block (ram,0x011f65c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_011f64f0(double param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  char cVar4;
  uint uVar5;
  int extraout_var;
  void *pvVar6;
  ulonglong uVar7;
  pthread_key_t in_ECX;
  longlong lVar8;
  undefined8 *unaff_RSI;
  int iVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  double local_68;
  longlong local_50;
  char local_48;
  
  (**(code **)(*(longlong *)*unaff_RSI + 0x38))();
  dVar10 = (double)(**(code **)(*(longlong *)*unaff_RSI + 0x18))();
  dVar11 = (double)(**(code **)(*(longlong *)*unaff_RSI + 0x28))();
  pvVar6 = _pthread_getspecific(in_ECX);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016c99c0();
  if ((local_48 == '\0') && (local_50 != 0)) {
    FUN_00d50b00();
  }
  pvVar6 = _pthread_getspecific(in_ECX);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_68 = DAT_02390108;
  if (DAT_02390108 <= dVar11 - dVar10) {
    local_68 = dVar11 - dVar10;
  }
  dVar11 = (double)FUN_016c25f0();
  pvVar6 = _pthread_getspecific(in_ECX);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar12 = (double)FUN_016c9380(dVar10 + local_68);
  iVar9 = 0;
  dVar13 = (double)FUN_00e7c860();
  param_1 = (dVar12 * dVar13) / param_1;
  if (DAT_024110e8 <= param_1) {
    uVar5 = *(int *)(*(longlong *)(*(longlong *)(local_50 + 0x10) + 8) + 0xc) == 3 ^ 3;
    dVar12 = (double)uVar5;
    iVar9 = 1;
    if (dVar12 < param_1) {
      iVar9 = 1;
      do {
        uVar5 = uVar5 * 2;
        iVar9 = iVar9 + 1;
        dVar12 = (double)(int)uVar5;
      } while (dVar12 < param_1);
    }
    iVar9 = iVar9 - (uint)((double)((ulonglong)((double)(uVar5 >> 1) - param_1) & _DAT_023908f0) <
                          (double)((ulonglong)(dVar12 - param_1) & _UNK_023908f8));
  }
  iVar1 = *(int *)(local_50 + 0xc);
  while (iVar1 <= iVar9) {
    FUN_011f7510();
    iVar1 = *(int *)(local_50 + 0xc);
  }
  lVar8 = (longlong)iVar9;
  lVar2 = *(longlong *)(*(longlong *)(local_50 + 0x10) + lVar8 * 8);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  dVar13 = (double)FUN_00e7c860();
  dVar12 = (double)FUN_00e7c860();
  dVar12 = (dVar11 - dVar13) / dVar12;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = dVar12;
  auVar14 = roundsd(ZEXT816(0),auVar14,9);
  FUN_011f78b0(dVar12 - auVar14._0_8_);
  uVar7 = FUN_00e7bcc0();
  FUN_00e7b820();
  FUN_00e7bac0();
  FUN_00e7b820();
  if ((uVar7 >> 0x20 != 0) && (extraout_var != 0)) {
    while (cVar4 = FUN_00e7c020(), cVar4 == '\0') {
      local_68 = local_68 * DAT_024110e8;
      pvVar6 = _pthread_getspecific((pthread_key_t)lVar8);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar12 = (double)FUN_016c25f0(dVar10 + local_68);
      dVar13 = (double)FUN_00e7c860();
      dVar11 = (double)FUN_00e7c860();
      dVar11 = (dVar12 - dVar13) / dVar11;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = dVar11;
      auVar14 = roundsd(ZEXT816(0),auVar3,9);
      FUN_011f78b0(dVar11 - auVar14._0_8_);
      uVar7 = FUN_00e7bcc0();
      FUN_00e7b820();
      FUN_00e7bac0();
      FUN_00e7b820();
      if ((uVar7 >> 0x20 == 0) || (extraout_var == 0)) break;
    }
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x50))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @012a6340 — 1322 bytes
// ============================================================

void FUN_012a6340(void)

{
  if (DAT_028ac748 != 0) {
    FUN_00e83070();
    DAT_028ac748 = 0;
  }
  if (DAT_028ac5c8 != 0) {
    FUN_00e83070();
    DAT_028ac5c8 = 0;
  }
  if (DAT_028ac5e0 != 0) {
    FUN_00e83070();
    DAT_028ac5e0 = 0;
  }
  if (DAT_028ac5e8 != 0) {
    FUN_00e83070();
    DAT_028ac5e8 = 0;
  }
  if (DAT_028ac5f8 != 0) {
    FUN_00e83070();
    DAT_028ac5f8 = 0;
  }
  if (DAT_028ac608 != 0) {
    FUN_00e83070();
    DAT_028ac608 = 0;
  }
  if (DAT_028ac618 != 0) {
    FUN_00e83070();
    DAT_028ac618 = 0;
  }
  if (DAT_028ac628 != 0) {
    FUN_00e83070();
    DAT_028ac628 = 0;
  }
  if (DAT_028ac638 != 0) {
    FUN_00e83070();
    DAT_028ac638 = 0;
  }
  if (DAT_028ac648 != 0) {
    FUN_00e83070();
    DAT_028ac648 = 0;
  }
  if (DAT_028ac658 != 0) {
    FUN_00e83070();
    DAT_028ac658 = 0;
  }
  if (DAT_028ac668 != 0) {
    FUN_00e83070();
    DAT_028ac668 = 0;
  }
  if (DAT_028ac678 != 0) {
    FUN_00e83070();
    DAT_028ac678 = 0;
  }
  if (DAT_028ac688 != 0) {
    FUN_00e83070();
    DAT_028ac688 = 0;
  }
  if (DAT_028ac5f0 != 0) {
    FUN_00e83070();
    DAT_028ac5f0 = 0;
  }
  if (DAT_028ac600 != 0) {
    FUN_00e83070();
    DAT_028ac600 = 0;
  }
  if (DAT_028ac610 != 0) {
    FUN_00e83070();
    DAT_028ac610 = 0;
  }
  if (DAT_028ac620 != 0) {
    FUN_00e83070();
    DAT_028ac620 = 0;
  }
  if (DAT_028ac630 != 0) {
    FUN_00e83070();
    DAT_028ac630 = 0;
  }
  if (DAT_028ac640 != 0) {
    FUN_00e83070();
    DAT_028ac640 = 0;
  }
  if (DAT_028ac650 != 0) {
    FUN_00e83070();
    DAT_028ac650 = 0;
  }
  if (DAT_028ac660 != 0) {
    FUN_00e83070();
    DAT_028ac660 = 0;
  }
  if (DAT_028ac670 != 0) {
    FUN_00e83070();
    DAT_028ac670 = 0;
  }
  if (DAT_028ac680 != 0) {
    FUN_00e83070();
    DAT_028ac680 = 0;
  }
  if (DAT_028ac690 != 0) {
    FUN_00e83070();
    DAT_028ac690 = 0;
  }
  if (DAT_028ac698 != 0) {
    FUN_00e83070();
    DAT_028ac698 = 0;
  }
  if (DAT_028ac6a8 != 0) {
    FUN_00e83070();
    DAT_028ac6a8 = 0;
  }
  if (DAT_028ac6b8 != 0) {
    FUN_00e83070();
    DAT_028ac6b8 = 0;
  }
  if (DAT_028ac6c8 != 0) {
    FUN_00e83070();
    DAT_028ac6c8 = 0;
  }
  if (DAT_028ac6d8 != 0) {
    FUN_00e83070();
    DAT_028ac6d8 = 0;
  }
  if (DAT_028ac6e8 != 0) {
    FUN_00e83070();
    DAT_028ac6e8 = 0;
  }
  if (DAT_028ac6f8 != 0) {
    FUN_00e83070();
    DAT_028ac6f8 = 0;
  }
  if (DAT_028ac708 != 0) {
    FUN_00e83070();
    DAT_028ac708 = 0;
  }
  if (DAT_028ac718 != 0) {
    FUN_00e83070();
    DAT_028ac718 = 0;
  }
  if (DAT_028ac728 != 0) {
    FUN_00e83070();
    DAT_028ac728 = 0;
  }
  if (DAT_028ac738 != 0) {
    FUN_00e83070();
    DAT_028ac738 = 0;
  }
  if (DAT_028ac6a0 != 0) {
    FUN_00e83070();
    DAT_028ac6a0 = 0;
  }
  if (DAT_028ac6b0 != 0) {
    FUN_00e83070();
    DAT_028ac6b0 = 0;
  }
  if (DAT_028ac6c0 != 0) {
    FUN_00e83070();
    DAT_028ac6c0 = 0;
  }
  if (DAT_028ac6d0 != 0) {
    FUN_00e83070();
    DAT_028ac6d0 = 0;
  }
  if (DAT_028ac6e0 != 0) {
    FUN_00e83070();
    DAT_028ac6e0 = 0;
  }
  if (DAT_028ac6f0 != 0) {
    FUN_00e83070();
    DAT_028ac6f0 = 0;
  }
  if (DAT_028ac700 != 0) {
    FUN_00e83070();
    DAT_028ac700 = 0;
  }
  if (DAT_028ac710 != 0) {
    FUN_00e83070();
    DAT_028ac710 = 0;
  }
  if (DAT_028ac720 != 0) {
    FUN_00e83070();
    DAT_028ac720 = 0;
  }
  if (DAT_028ac730 != 0) {
    FUN_00e83070();
    DAT_028ac730 = 0;
  }
  if (DAT_028ac740 != 0) {
    FUN_00e83070();
    DAT_028ac740 = 0;
  }
  return;
}




// ============================================================
// @012a4a40 — 1317 bytes
// str: ""MUPulseAssignmentTarget""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x012a4eea) */
/* WARNING: Removing unreachable block (ram,0x012a4ef6) */
/* WARNING: Removing unreachable block (ram,0x012a4f04) */
/* WARNING: Removing unreachable block (ram,0x012a4f10) */
/* WARNING: Removing unreachable block (ram,0x012a4aac) */
/* WARNING: Removing unreachable block (ram,0x012a4ab1) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_012a4a40(ulonglong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  char cVar4;
  longlong lVar5;
  void *pvVar6;
  pthread_key_t pVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  longlong **pplVar11;
  ulonglong *unaff_RSI;
  bool bVar12;
  undefined8 uVar13;
  longlong local_e0;
  char local_d8;
  longlong local_c0;
  char local_b8;
  longlong local_90;
  char local_88;
  char local_80;
  undefined7 uStack_7f;
  char local_78;
  ulonglong local_70;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  char local_50 [8];
  ulonglong local_48;
  undefined8 local_40;
  int local_38;
  
  if (*(int *)(*unaff_RSI + 0xc) != 0) {
    uVar8 = param_1;
    FUN_00d23310();
    plVar2 = local_58;
    local_80 = local_50[0] != '\0';
    local_68 = local_58;
    if ((bool)local_80) {
      local_50[0] = '\0';
    }
    FUN_0006e1c0();
    uVar3 = local_48;
    plVar1 = DAT_02802688;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x360))();
      cVar4 = FUN_00e85ea0();
      plVar1 = local_68;
      if (cVar4 == '\0') {
        plVar1 = DAT_02802688;
      }
      uVar3 = local_48;
      if (local_80 != '\0') {
        FUN_00d50b20();
        uVar3 = local_48;
      }
    }
    if ((plVar1 != (longlong *)0x0) && (local_48 = *unaff_RSI, local_48 != 0)) {
      local_50[0] = '\0';
      local_58 = (longlong *)0x0;
      local_40 = 0xffffffff;
      local_38 = 0;
      local_70 = param_1;
      while( true ) {
        lVar5 = (longlong)(int)local_40;
        iVar10 = (int)local_40 + 1;
        local_40 = CONCAT44(local_40._4_4_,iVar10);
        if (*(int *)(local_48 + 0xc) <= iVar10) break;
        lVar9 = *(longlong *)(local_48 + 0x10);
        local_58 = *(longlong **)(lVar9 + 8 + lVar5 * 8);
        pvVar6 = _pthread_getspecific((pthread_key_t)lVar9);
        pVar7 = (pthread_key_t)lVar9;
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e930();
        if (local_68 == (longlong *)0x0) {
          bVar12 = true;
        }
        else {
          pvVar6 = _pthread_getspecific(pVar7);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e930();
          pvVar6 = _pthread_getspecific(pVar7);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0152ebe0();
          bVar12 = CONCAT71(uStack_7f,local_80) == 0;
          if ((local_78 != '\0') && (CONCAT71(uStack_7f,local_80) != 0)) {
            FUN_00d50b20();
          }
          if ((local_b8 != '\0') && (local_c0 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (bVar12) {
          FUN_001159b0();
          return;
        }
        if (local_40._4_4_ != 0) {
          if (local_40._4_4_ < 1) {
            iVar10 = -local_40._4_4_;
          }
          else {
            local_40 = CONCAT44(local_40._4_4_,(int)local_40 - local_40._4_4_);
            FUN_00d23690();
            local_38 = local_38 + local_40._4_4_;
            iVar10 = 0;
          }
          local_40 = CONCAT44(iVar10,(int)local_40);
        }
      }
      uVar8 = local_48;
      FUN_001159b0();
      param_1 = local_70;
      uVar3 = local_48;
    }
    local_48 = uVar3;
    FUN_00d23310();
    plVar2 = local_58;
    pVar7 = (pthread_key_t)CONCAT71((int7)(uVar8 >> 8),local_50[0]);
    pplVar11 = &local_68;
    if (local_50[0] != '\0') {
      pplVar11 = (longlong **)local_50;
    }
    local_68 = (longlong *)CONCAT71(local_68._1_7_,local_50[0]);
    *(char *)pplVar11 = '\0';
    if ((local_50[0] != '\0') && (plVar2 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((DAT_0272fca8 == '\0') && (iVar10 = ___cxa_guard_acquire(), iVar10 != 0)) {
      _DAT_027902e0 = "MUPulseAssignmentTarget";
      DAT_027902f0 = 0;
      _DAT_027902e8 = 0;
      ___cxa_guard_release();
    }
    if (plVar2 == (longlong *)0x0) {
      lVar5 = 0;
    }
    else {
      uVar13 = (**(code **)(*plVar2 + 0x360))();
      lVar5 = FUN_00e86120(uVar13,1);
    }
    local_70 = (**(code **)(*(longlong *)((longlong)plVar2 + lVar5) + 0x18))();
    if ((char)local_68 != '\0') {
      FUN_00d50b20();
    }
    pvVar6 = _pthread_getspecific(pVar7);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0123fd00();
    pVar7 = 0;
    uVar13 = FUN_016cb9d0(local_70,1);
    pvVar6 = _pthread_getspecific(pVar7);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016ca840(&local_58,uVar13,0,0);
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
    local_90 = *param_2;
    local_88 = '\0';
    FUN_011f4d10(param_1,&local_90,local_58,param_1 >> 0x20 == 0);
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @012a6b90 — 984 bytes
// ============================================================

void FUN_012a6b90(void)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong unaff_RDI;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(unaff_RDI + 0x160);
  if (0 < (int)uVar1) {
    uVar5 = 0;
    do {
      lVar3 = *(longlong *)(unaff_RDI + 0x150);
      lVar2 = *(longlong *)(lVar3 + uVar5 * 8);
      if ((lVar2 != 0) && (0 < (int)*(uint *)(unaff_RDI + 0x300))) {
        uVar4 = 0;
        do {
          if (*(longlong *)(*(longlong *)(unaff_RDI + 0x308) + uVar4 * 8) == lVar2 + -0x10) {
            *(undefined1 *)(*(longlong *)(unaff_RDI + 0x310) + uVar4) = 0;
            break;
          }
          uVar4 = uVar4 + 1;
        } while (*(uint *)(unaff_RDI + 0x300) != uVar4);
      }
      *(undefined8 *)(lVar3 + uVar5 * 8) = 0;
      lVar3 = *(longlong *)(unaff_RDI + 0x298);
      lVar2 = *(longlong *)(lVar3 + uVar5 * 8);
      if ((lVar2 != 0) && (0 < (int)*(uint *)(unaff_RDI + 0x300))) {
        uVar4 = 0;
        do {
          if (*(longlong *)(*(longlong *)(unaff_RDI + 0x308) + uVar4 * 8) == lVar2 + -0x10) {
            *(undefined1 *)(*(longlong *)(unaff_RDI + 0x310) + uVar4) = 0;
            break;
          }
          uVar4 = uVar4 + 1;
        } while (*(uint *)(unaff_RDI + 0x300) != uVar4);
      }
      *(undefined8 *)(lVar3 + uVar5 * 8) = 0;
      lVar3 = *(longlong *)(unaff_RDI + 0x170);
      lVar2 = *(longlong *)(lVar3 + uVar5 * 8);
      if ((lVar2 != 0) && (0 < (int)*(uint *)(unaff_RDI + 0x300))) {
        uVar4 = 0;
        do {
          if (*(longlong *)(*(longlong *)(unaff_RDI + 0x308) + uVar4 * 8) == lVar2 + -0x10) {
            *(undefined1 *)(*(longlong *)(unaff_RDI + 0x310) + uVar4) = 0;
            break;
          }
          uVar4 = uVar4 + 1;
        } while (*(uint *)(unaff_RDI + 0x300) != uVar4);
      }
      *(undefined8 *)(lVar3 + uVar5 * 8) = 0;
      lVar3 = *(longlong *)(unaff_RDI + 0x178);
      lVar2 = *(longlong *)(lVar3 + uVar5 * 8);
      if ((lVar2 != 0) && (0 < (int)*(uint *)(unaff_RDI + 0x300))) {
        uVar4 = 0;
        do {
          if (*(longlong *)(*(longlong *)(unaff_RDI + 0x308) + uVar4 * 8) == lVar2 + -0x10) {
            *(undefined1 *)(*(longlong *)(unaff_RDI + 0x310) + uVar4) = 0;
            break;
          }
          uVar4 = uVar4 + 1;
        } while (*(uint *)(unaff_RDI + 0x300) != uVar4);
      }
      *(undefined8 *)(lVar3 + uVar5 * 8) = 0;
      lVar3 = *(longlong *)(unaff_RDI + 0x180);
      lVar2 = *(longlong *)(lVar3 + uVar5 * 8);
      if ((lVar2 != 0) && (0 < (int)*(uint *)(unaff_RDI + 0x300))) {
        uVar4 = 0;
        do {
          if (*(longlong *)(*(longlong *)(unaff_RDI + 0x308) + uVar4 * 8) == lVar2 + -0x10) {
            *(undefined1 *)(*(longlong *)(unaff_RDI + 0x310) + uVar4) = 0;
            break;
          }
          uVar4 = uVar4 + 1;
        } while (*(uint *)(unaff_RDI + 0x300) != uVar4);
      }
      *(undefined8 *)(lVar3 + uVar5 * 8) = 0;
      lVar3 = *(longlong *)(unaff_RDI + 0x188);
      lVar2 = *(longlong *)(lVar3 + uVar5 * 8);
      if ((lVar2 != 0) && (0 < (int)*(uint *)(unaff_RDI + 0x300))) {
        uVar4 = 0;
        do {
          if (*(longlong *)(*(longlong *)(unaff_RDI + 0x308) + uVar4 * 8) == lVar2 + -0x10) {
            *(undefined1 *)(*(longlong *)(unaff_RDI + 0x310) + uVar4) = 0;
            break;
          }
          uVar4 = uVar4 + 1;
        } while (*(uint *)(unaff_RDI + 0x300) != uVar4);
      }
      *(undefined8 *)(lVar3 + uVar5 * 8) = 0;
      lVar3 = *(longlong *)(unaff_RDI + 0x198);
      lVar2 = *(longlong *)(lVar3 + uVar5 * 8);
      if ((lVar2 != 0) && (0 < (int)*(uint *)(unaff_RDI + 0x300))) {
        uVar4 = 0;
        do {
          if (*(longlong *)(*(longlong *)(unaff_RDI + 0x308) + uVar4 * 8) == lVar2 + -0x10) {
            *(undefined1 *)(*(longlong *)(unaff_RDI + 0x310) + uVar4) = 0;
            break;
          }
          uVar4 = uVar4 + 1;
        } while (*(uint *)(unaff_RDI + 0x300) != uVar4);
      }
      *(undefined8 *)(lVar3 + uVar5 * 8) = 0;
      lVar3 = *(longlong *)(unaff_RDI + 0x1a0);
      lVar2 = *(longlong *)(lVar3 + uVar5 * 8);
      if ((lVar2 != 0) && (0 < (int)*(uint *)(unaff_RDI + 0x300))) {
        uVar4 = 0;
        do {
          if (*(longlong *)(*(longlong *)(unaff_RDI + 0x308) + uVar4 * 8) == lVar2 + -0x10) {
            *(undefined1 *)(*(longlong *)(unaff_RDI + 0x310) + uVar4) = 0;
            break;
          }
          uVar4 = uVar4 + 1;
        } while (*(uint *)(unaff_RDI + 0x300) != uVar4);
      }
      *(undefined8 *)(lVar3 + uVar5 * 8) = 0;
      lVar3 = *(longlong *)(unaff_RDI + 400);
      lVar2 = *(longlong *)(lVar3 + uVar5 * 8);
      if ((lVar2 != 0) && (0 < (int)*(uint *)(unaff_RDI + 0x300))) {
        uVar4 = 0;
        do {
          if (*(longlong *)(*(longlong *)(unaff_RDI + 0x308) + uVar4 * 8) == lVar2 + -0x10) {
            *(undefined1 *)(*(longlong *)(unaff_RDI + 0x310) + uVar4) = 0;
            break;
          }
          uVar4 = uVar4 + 1;
        } while (*(uint *)(unaff_RDI + 0x300) != uVar4);
      }
      *(undefined8 *)(lVar3 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar1);
  }
  if ((*(longlong *)(unaff_RDI + 0x1a8) != 0) && (0 < (int)*(uint *)(unaff_RDI + 0x300))) {
    uVar5 = 0;
    do {
      if (*(longlong *)(*(longlong *)(unaff_RDI + 0x308) + uVar5 * 8) ==
          *(longlong *)(unaff_RDI + 0x1a8) + -0x10) {
        *(undefined1 *)(*(longlong *)(unaff_RDI + 0x310) + uVar5) = 0;
        *(undefined8 *)(unaff_RDI + 0x1a8) = 0;
        lVar3 = *(longlong *)(unaff_RDI + 0x2b8);
        if (lVar3 == 0) goto LAB_012a6f1f;
        goto LAB_012a6ef6;
      }
      uVar5 = uVar5 + 1;
    } while (*(uint *)(unaff_RDI + 0x300) != uVar5);
  }
  *(undefined8 *)(unaff_RDI + 0x1a8) = 0;
  lVar3 = *(longlong *)(unaff_RDI + 0x2b8);
  if (lVar3 != 0) {
LAB_012a6ef6:
    if (0 < (int)*(uint *)(unaff_RDI + 0x300)) {
      uVar5 = 0;
      do {
        if (*(longlong *)(*(longlong *)(unaff_RDI + 0x308) + uVar5 * 8) == lVar3 + -0x10) {
          *(undefined1 *)(*(longlong *)(unaff_RDI + 0x310) + uVar5) = 0;
          *(undefined8 *)(unaff_RDI + 0x2b8) = 0;
          return;
        }
        uVar5 = uVar5 + 1;
      } while (*(uint *)(unaff_RDI + 0x300) != uVar5);
    }
  }
LAB_012a6f1f:
  *(undefined8 *)(unaff_RDI + 0x2b8) = 0;
  return;
}




// ============================================================
// @011f70a0 — 943 bytes
// str: ""MUPulseAssignmentTarget""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x011f713f) */
/* WARNING: Removing unreachable block (ram,0x011f7148) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_011f70a0(pthread_key_t param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  int extraout_var;
  ulonglong uVar6;
  pthread_key_t pVar7;
  longlong lVar8;
  longlong *unaff_RSI;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  longlong local_50;
  char local_48;
  uint local_34;
  
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016c99c0();
  if ((local_48 == '\0') && (local_50 != 0)) {
    FUN_00d50b00();
  }
  iVar3 = *(int *)(local_50 + 0xc);
  while (iVar3 <= (int)param_1) {
    FUN_011f7510();
    iVar3 = *(int *)(local_50 + 0xc);
  }
  lVar8 = (longlong)(int)param_1;
  lVar1 = *(longlong *)(*(longlong *)(local_50 + 0x10) + lVar8 * 8);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  lVar5 = *unaff_RSI;
  if (*(int *)(lVar5 + 0xc) < 1) {
    local_34 = (uint)CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
  }
  else {
    lVar8 = CONCAT71((int7)((ulonglong)lVar8 >> 8),1);
    local_34 = (uint)lVar8;
    lVar10 = 0;
    plVar9 = (longlong *)0x0;
    do {
      pVar7 = (pthread_key_t)lVar8;
      plVar11 = *(longlong **)(*(longlong *)(lVar5 + 0x10) + lVar10 * 8);
      if ((DAT_0272fca8 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        _DAT_027902e0 = "MUPulseAssignmentTarget";
        DAT_027902f0 = 0;
        _DAT_027902e8 = 0;
        ___cxa_guard_release();
      }
      if (plVar11 == (longlong *)0x0) {
        lVar8 = 0;
      }
      else {
        uVar12 = (**(code **)(*plVar11 + 0x360))();
        lVar8 = FUN_00e86120(uVar12,1);
      }
      pvVar4 = _pthread_getspecific(pVar7);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      plVar11 = (longlong *)((longlong)plVar11 + lVar8);
      (**(code **)(*plVar11 + 0x18))();
      dVar13 = (double)FUN_016c25f0();
      dVar14 = (double)FUN_00e7c860();
      dVar15 = (double)FUN_00e7c860();
      dVar15 = (dVar13 - dVar14) / dVar15;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = dVar15;
      auVar16 = roundsd(ZEXT816(0),auVar16,9);
      FUN_011f78b0(dVar15 - auVar16._0_8_);
      FUN_00e7bcc0();
      FUN_00e7b820();
      FUN_00e7bac0();
      FUN_00e7b820();
      (**(code **)(*plVar11 + 0x40))();
      (**(code **)(*plVar11 + 0x58))();
      (**(code **)(*plVar11 + 0x60))();
      if (plVar9 == (longlong *)0x0) {
        plVar9 = (longlong *)0x0;
        if (plVar11 != (longlong *)0x0) {
          plVar9 = plVar11;
        }
      }
      else {
        (**(code **)(*plVar11 + 0x38))();
        uVar6 = (**(code **)(*plVar9 + 0x38))();
        if ((extraout_var == 0) || (uVar6 >> 0x20 == 0)) {
          local_34 = 0;
        }
        else {
          cVar2 = FUN_00e7c020();
          local_34 = local_34 & 0xff;
          if (cVar2 == '\0') {
            local_34 = 0;
          }
        }
        if (plVar11 != plVar9) {
          (**(code **)(*plVar9 + 0x10))();
          plVar9 = plVar11;
        }
      }
      lVar5 = *unaff_RSI;
      lVar8 = (longlong)*(int *)(lVar5 + 0xc);
      lVar10 = lVar10 + 1;
    } while (lVar10 < lVar8);
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  return local_34;
}




// ============================================================
// @011f83a0 — 868 bytes
// ============================================================

longlong * FUN_011f83a0(longlong param_1)

{
  char cVar1;
  void *pvVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  pthread_key_t pVar6;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  
  pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00d51d20();
  local_38 = local_48;
  if ((((local_40 == '\0') && (local_48 != 0)) && (FUN_00d50b00(), local_40 != '\0')) &&
     (local_48 != 0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
  if ((pvVar2 == (void *)0x0) || (lVar3 = FUN_00e8b990(), lVar5 = local_38, lVar3 == 0)) {
    lVar5 = param_1;
  }
  local_40 = '\0';
  local_48 = 0;
  FUN_0124f820();
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  local_50 = '\0';
  local_58 = 0;
  do {
    do {
      pvVar2 = _pthread_getspecific((pthread_key_t)lVar5);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar4 = FUN_00e7bdb0();
      lVar5 = FUN_00e7bdb0();
      cVar1 = FUN_01252960(lVar5,uVar4,&local_58,&local_68);
      pVar6 = (pthread_key_t)lVar5;
      if (cVar1 == '\0') {
        *unaff_RDI = local_38;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        return unaff_RDI;
      }
    } while (local_58 == 0);
    lVar5 = *(longlong *)(unaff_RSI + 0x78);
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    local_68 = FUN_011f81d0();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    lVar5 = *(longlong *)(unaff_RSI + 0x78);
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    local_60 = FUN_011f81d0();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    FUN_00d51d20();
    lVar3 = local_48;
    cVar1 = local_50;
    lVar5 = local_58;
    if (local_58 == local_48) {
      if ((local_50 == '\0') && (local_48 != 0)) {
        if (local_40 != '\0') goto LAB_011f8611;
        FUN_00d50b00();
        goto LAB_011f8644;
      }
LAB_011f8648:
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
        local_58 = lVar3;
        if ((cVar1 != '\0') && (lVar5 != 0)) {
          FUN_00d50b20();
        }
LAB_011f8644:
        local_50 = '\x01';
        goto LAB_011f8648;
      }
      local_58 = local_48;
      if ((local_50 != '\0') && (lVar5 != 0)) {
        FUN_00d50b20();
      }
LAB_011f8611:
      local_50 = '\x01';
    }
    pvVar2 = _pthread_getspecific(pVar6);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_48 = local_58;
    local_40 = '\0';
    lVar5 = local_60;
    FUN_012502a0(local_60,local_68,0);
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  } while( true );
}




// ============================================================
// @012a8950 — 824 bytes
// ============================================================

void FUN_012a8950(void)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong unaff_RDI;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(unaff_RDI + 0x160);
  if (0 < (int)uVar1) {
    uVar5 = 0;
    do {
      lVar3 = *(longlong *)(unaff_RDI + 0x1e0);
      lVar2 = *(longlong *)(lVar3 + uVar5 * 8);
      if ((lVar2 != 0) && (0 < (int)*(uint *)(unaff_RDI + 0x300))) {
        uVar4 = 0;
        do {
          if (*(longlong *)(*(longlong *)(unaff_RDI + 0x308) + uVar4 * 8) == lVar2 + -0x10) {
            *(undefined1 *)(*(longlong *)(unaff_RDI + 0x310) + uVar4) = 0;
            break;
          }
          uVar4 = uVar4 + 1;
        } while (*(uint *)(unaff_RDI + 0x300) != uVar4);
      }
      *(undefined8 *)(lVar3 + uVar5 * 8) = 0;
      lVar3 = *(longlong *)(unaff_RDI + 0x1e8);
      lVar2 = *(longlong *)(lVar3 + uVar5 * 8);
      if ((lVar2 != 0) && (0 < (int)*(uint *)(unaff_RDI + 0x300))) {
        uVar4 = 0;
        do {
          if (*(longlong *)(*(longlong *)(unaff_RDI + 0x308) + uVar4 * 8) == lVar2 + -0x10) {
            *(undefined1 *)(*(longlong *)(unaff_RDI + 0x310) + uVar4) = 0;
            break;
          }
          uVar4 = uVar4 + 1;
        } while (*(uint *)(unaff_RDI + 0x300) != uVar4);
      }
      *(undefined8 *)(lVar3 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar1);
  }
  if ((*(longlong *)(unaff_RDI + 0x1b8) != 0) && (0 < (int)*(uint *)(unaff_RDI + 0x300))) {
    uVar5 = 0;
    do {
      if (*(longlong *)(*(longlong *)(unaff_RDI + 0x308) + uVar5 * 8) ==
          *(longlong *)(unaff_RDI + 0x1b8) + -0x10) {
        *(undefined1 *)(*(longlong *)(unaff_RDI + 0x310) + uVar5) = 0;
        lVar3 = *(longlong *)(unaff_RDI + 0x1c0);
        if (lVar3 == 0) goto LAB_012a8ad5;
        goto LAB_012a8a7b;
      }
      uVar5 = uVar5 + 1;
    } while (*(uint *)(unaff_RDI + 0x300) != uVar5);
  }
  lVar3 = *(longlong *)(unaff_RDI + 0x1c0);
  if (lVar3 != 0) {
LAB_012a8a7b:
    if (0 < (int)*(uint *)(unaff_RDI + 0x300)) {
      uVar5 = 0;
      do {
        if (*(longlong *)(*(longlong *)(unaff_RDI + 0x308) + uVar5 * 8) == lVar3 + -0x10) {
          *(undefined1 *)(*(longlong *)(unaff_RDI + 0x310) + uVar5) = 0;
          break;
        }
        uVar5 = uVar5 + 1;
      } while (*(uint *)(unaff_RDI + 0x300) != uVar5);
    }
  }
LAB_012a8ad5:
  if ((*(longlong *)(unaff_RDI + 0x1c8) != 0) && (0 < (int)*(uint *)(unaff_RDI + 0x300))) {
    uVar5 = 0;
    do {
      if (*(longlong *)(*(longlong *)(unaff_RDI + 0x308) + uVar5 * 8) ==
          *(longlong *)(unaff_RDI + 0x1c8) + -0x10) {
        *(undefined1 *)(*(longlong *)(unaff_RDI + 0x310) + uVar5) = 0;
        lVar3 = *(longlong *)(unaff_RDI + 0x1d0);
        if (lVar3 == 0) goto LAB_012a8b75;
        goto LAB_012a8b1b;
      }
      uVar5 = uVar5 + 1;
    } while (*(uint *)(unaff_RDI + 0x300) != uVar5);
  }
  lVar3 = *(longlong *)(unaff_RDI + 0x1d0);
  if (lVar3 != 0) {
LAB_012a8b1b:
    if (0 < (int)*(uint *)(unaff_RDI + 0x300)) {
      uVar5 = 0;
      do {
        if (*(longlong *)(*(longlong *)(unaff_RDI + 0x308) + uVar5 * 8) == lVar3 + -0x10) {
          *(undefined1 *)(*(longlong *)(unaff_RDI + 0x310) + uVar5) = 0;
          break;
        }
        uVar5 = uVar5 + 1;
      } while (*(uint *)(unaff_RDI + 0x300) != uVar5);
    }
  }
LAB_012a8b75:
  if ((*(longlong *)(unaff_RDI + 0x2c0) != 0) && (0 < (int)*(uint *)(unaff_RDI + 0x300))) {
    uVar5 = 0;
    do {
      if (*(longlong *)(*(longlong *)(unaff_RDI + 0x308) + uVar5 * 8) ==
          *(longlong *)(unaff_RDI + 0x2c0) + -0x10) {
        *(undefined1 *)(*(longlong *)(unaff_RDI + 0x310) + uVar5) = 0;
        lVar3 = *(longlong *)(unaff_RDI + 0x2c8);
        if (lVar3 == 0) goto LAB_012a8c15;
        goto LAB_012a8bbb;
      }
      uVar5 = uVar5 + 1;
    } while (*(uint *)(unaff_RDI + 0x300) != uVar5);
  }
  lVar3 = *(longlong *)(unaff_RDI + 0x2c8);
  if (lVar3 != 0) {
LAB_012a8bbb:
    if (0 < (int)*(uint *)(unaff_RDI + 0x300)) {
      uVar5 = 0;
      do {
        if (*(longlong *)(*(longlong *)(unaff_RDI + 0x308) + uVar5 * 8) == lVar3 + -0x10) {
          *(undefined1 *)(*(longlong *)(unaff_RDI + 0x310) + uVar5) = 0;
          break;
        }
        uVar5 = uVar5 + 1;
      } while (*(uint *)(unaff_RDI + 0x300) != uVar5);
    }
  }
LAB_012a8c15:
  if ((*(longlong *)(unaff_RDI + 0x1d8) != 0) && (0 < (int)*(uint *)(unaff_RDI + 0x300))) {
    uVar5 = 0;
    do {
      if (*(longlong *)(*(longlong *)(unaff_RDI + 0x308) + uVar5 * 8) ==
          *(longlong *)(unaff_RDI + 0x1d8) + -0x10) {
        *(undefined1 *)(*(longlong *)(unaff_RDI + 0x310) + uVar5) = 0;
        lVar3 = *(longlong *)(unaff_RDI + 0x1b0);
        goto joined_r0x012a8c84;
      }
      uVar5 = uVar5 + 1;
    } while (*(uint *)(unaff_RDI + 0x300) != uVar5);
  }
  lVar3 = *(longlong *)(unaff_RDI + 0x1b0);
joined_r0x012a8c84:
  if (lVar3 == 0) {
    return;
  }
  *(undefined8 *)(unaff_RDI + 0x1b0) = 0;
  FUN_00d50b20();
  return;
}




// ============================================================
// @011f6d20 — 748 bytes
// str: ""MUPulseAssignmentTarget""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x011f6da8) */
/* WARNING: Removing unreachable block (ram,0x011f6db1) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_011f6d20(pthread_key_t param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  longlong lVar6;
  int extraout_var;
  int extraout_var_00;
  longlong *unaff_RSI;
  longlong lVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  longlong local_48;
  char local_40;
  int local_34;
  
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016c99c0();
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  lVar6 = *unaff_RSI;
  if (*(int *)(lVar6 + 0xc) < 1) {
    local_34 = 0;
    if (local_48 == 0) {
      return 0;
    }
  }
  else {
    lVar7 = 0;
    local_34 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(lVar6 + 0x10) + lVar7 * 8);
      if ((DAT_0272fca8 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
        _DAT_027902e0 = "MUPulseAssignmentTarget";
        DAT_027902f0 = 0;
        _DAT_027902e8 = 0;
        ___cxa_guard_release();
      }
      if (plVar1 == (longlong *)0x0) {
        lVar6 = 0;
      }
      else {
        uVar8 = (**(code **)(*plVar1 + 0x360))();
        lVar6 = FUN_00e86120(uVar8,1);
      }
      (**(code **)(*(longlong *)((longlong)plVar1 + lVar6) + 0x38))();
      dVar9 = (double)FUN_00e7c860();
      iVar4 = *(int *)(local_48 + 0xc);
      if (0 < iVar4) {
        lVar6 = 0;
        do {
          lVar2 = *(longlong *)(*(longlong *)(local_48 + 0x10) + lVar6 * 8);
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          dVar10 = (double)FUN_00e7c860();
          dVar11 = (double)FUN_00e7c860();
          dVar11 = (dVar9 - dVar10) / dVar11;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = dVar11;
          auVar12 = roundsd(ZEXT816(0),auVar12,9);
          FUN_011f78b0(dVar11 - auVar12._0_8_);
          FUN_00e7bcc0();
          FUN_00e7b820();
          FUN_00e7bac0();
          FUN_00e7b820();
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          if (((extraout_var != 0) && (extraout_var_00 != 0)) &&
             (cVar3 = FUN_00e7c000(), cVar3 != '\0')) {
            if (local_34 < (int)lVar6) {
              local_34 = (int)lVar6;
            }
            goto LAB_011f6dea;
          }
          lVar6 = lVar6 + 1;
          iVar4 = *(int *)(local_48 + 0xc);
        } while (lVar6 < iVar4);
      }
      local_34 = iVar4 + -1;
LAB_011f6dea:
      lVar6 = *unaff_RSI;
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(lVar6 + 0xc));
  }
  FUN_00d50b20();
  return local_34;
}




// ============================================================
// @01cee610 — 670 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01cee63b) */
/* WARNING: Removing unreachable block (ram,0x01cee644) */

void FUN_01cee610(void)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  longlong local_28;
  char local_20;
  
  FUN_01d0ec70();
  (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
  lVar1 = *(longlong *)(unaff_RDI + 0x1d0);
  if (lVar1 != local_28) {
    if (local_20 == '\0') {
      if (local_28 == 0) {
        *(undefined8 *)(unaff_RDI + 0x1d0) = 0;
      }
      else {
        FUN_00d50b00();
        lVar1 = *(longlong *)(unaff_RDI + 0x1d0);
        *(longlong *)(unaff_RDI + 0x1d0) = local_28;
      }
    }
    else {
      local_20 = '\0';
      *(longlong *)(unaff_RDI + 0x1d0) = local_28;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_20 != '\0') && (local_28 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
  lVar1 = *(longlong *)(unaff_RDI + 0x1d8);
  if (lVar1 != local_28) {
    if (local_20 == '\0') {
      if (local_28 == 0) {
        *(undefined8 *)(unaff_RDI + 0x1d8) = 0;
      }
      else {
        FUN_00d50b00();
        lVar1 = *(longlong *)(unaff_RDI + 0x1d8);
        *(longlong *)(unaff_RDI + 0x1d8) = local_28;
      }
    }
    else {
      local_20 = '\0';
      *(longlong *)(unaff_RDI + 0x1d8) = local_28;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_20 != '\0') && (local_28 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
  lVar1 = *(longlong *)(unaff_RDI + 0x1e0);
  if (lVar1 != local_28) {
    if (local_20 == '\0') {
      if (local_28 == 0) {
        *(undefined8 *)(unaff_RDI + 0x1e0) = 0;
      }
      else {
        FUN_00d50b00();
        lVar1 = *(longlong *)(unaff_RDI + 0x1e0);
        *(longlong *)(unaff_RDI + 0x1e0) = local_28;
      }
    }
    else {
      local_20 = '\0';
      *(longlong *)(unaff_RDI + 0x1e0) = local_28;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_20 != '\0') && (local_28 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
  lVar1 = *(longlong *)(unaff_RDI + 0x1e8);
  if (lVar1 != local_28) {
    if (local_20 == '\0') {
      if (local_28 == 0) {
        *(undefined8 *)(unaff_RDI + 0x1e8) = 0;
      }
      else {
        FUN_00d50b00();
        lVar1 = *(longlong *)(unaff_RDI + 0x1e8);
        *(longlong *)(unaff_RDI + 0x1e8) = local_28;
      }
    }
    else {
      local_20 = '\0';
      *(longlong *)(unaff_RDI + 0x1e8) = local_28;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_20 != '\0') && (local_28 != 0)) {
    FUN_00d50b20();
  }
  uVar2 = (**(code **)(*(longlong *)*unaff_RSI + 0x418))();
  *(undefined1 *)(unaff_RDI + 0x1f0) = uVar2;
  uVar3 = (**(code **)(*(longlong *)*unaff_RSI + 0x428))();
  *(undefined4 *)(unaff_RDI + 500) = uVar3;
  uVar2 = (**(code **)(*(longlong *)*unaff_RSI + 0x418))();
  *(undefined1 *)(unaff_RDI + 0x1f8) = uVar2;
  uVar3 = (**(code **)(*(longlong *)*unaff_RSI + 0x428))();
  *(undefined4 *)(unaff_RDI + 0x1fc) = uVar3;
  return;
}




// ============================================================
// @011f78b0 — 638 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_011f78b0(double param_1)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *unaff_RDI;
  longlong lVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  float fVar12;
  
  lVar4 = *unaff_RDI;
  if ((*(int *)(lVar4 + 0xc) < 2) || (param_1 <= 0.0)) {
    uVar6 = FUN_00e7bdb0();
    return uVar6;
  }
  if (DAT_0238fee8 <= param_1) {
    uVar6 = FUN_00e7bcc0();
    return uVar6;
  }
  lVar8 = 0;
  lVar7 = 0;
  bVar2 = false;
  lVar5 = 0;
  bVar3 = false;
  do {
    lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + lVar8 * 8);
    if (lVar7 == lVar4) {
      if ((!bVar2) && (lVar7 != 0)) {
        bVar2 = true;
        FUN_00d50b00();
      }
    }
    else {
      if (lVar4 != 0) {
        FUN_00d50b00();
      }
      if ((bVar2) && (lVar7 != 0)) {
        FUN_00d50b20();
        bVar2 = true;
        lVar7 = lVar4;
      }
      else {
        bVar2 = true;
        lVar7 = lVar4;
      }
    }
    lVar4 = *(longlong *)(*(longlong *)(*unaff_RDI + 0x10) + 8 + lVar8 * 8);
    if (lVar5 == lVar4) {
      if ((!bVar3) && (lVar5 != 0)) {
        bVar3 = true;
        FUN_00d50b00();
      }
    }
    else {
      if (lVar4 != 0) {
        FUN_00d50b00();
      }
      if ((bVar3) && (lVar5 != 0)) {
        FUN_00d50b20();
        bVar3 = true;
        lVar5 = lVar4;
      }
      else {
        bVar3 = true;
        lVar5 = lVar4;
      }
    }
    dVar9 = (double)FUN_00e7c860();
    if (dVar9 <= param_1) {
      dVar9 = (double)FUN_00e7c860();
      if (param_1 <= dVar9) break;
    }
    lVar8 = lVar8 + 1;
    lVar4 = *unaff_RDI;
  } while (lVar8 < (longlong)*(int *)(lVar4 + 0xc) + -1);
  fVar12 = *(float *)(lVar7 + 0x14);
  fVar1 = *(float *)(lVar5 + 0x14);
  if ((double)(float)((uint)(fVar12 - fVar1) & _DAT_02390140) < DAT_023934c8) {
    fVar12 = fVar12 * DAT_02394244;
  }
  dVar9 = (double)FUN_00e7c860();
  dVar10 = (double)FUN_00e7c860();
  auVar11 = insertps(ZEXT416((uint)fVar12),fVar1,0x10);
  if ((double)auVar11._0_4_ * (param_1 - dVar9) < (double)auVar11._4_4_ * (dVar10 - param_1)) {
    lVar5 = lVar7;
  }
  uVar6 = *(undefined8 *)(lVar5 + 0xc);
  if (bVar3) {
    FUN_00d50b20();
  }
  if (bVar2) {
    FUN_00d50b20();
  }
  return uVar6;
}




// ============================================================
// @012a6fc0 — 603 bytes
// ============================================================

void FUN_012a6fc0(void)

{
  uint uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong unaff_RDI;
  double dVar5;
  double extraout_XMM0_Qa;
  
  uVar1 = FUN_00b33120();
  dVar5 = (double)FUN_00b335d0();
  iVar4 = 0x1000;
  if (DAT_0240d188 <= dVar5) {
    iVar4 = (uint)(DAT_0240d180 <= dVar5) * 0x2000 + 0x2000;
  }
  *(int *)(unaff_RDI + 0x158) = iVar4;
  *(int *)(unaff_RDI + 0x15c) = iVar4;
  uVar2 = FUN_00e83010();
  *(undefined8 *)(unaff_RDI + 0x150) = uVar2;
  uVar2 = FUN_00e83010();
  *(undefined8 *)(unaff_RDI + 0x1e0) = uVar2;
  uVar2 = FUN_00e83010();
  *(undefined8 *)(unaff_RDI + 0x1e8) = uVar2;
  uVar2 = FUN_00e83010();
  *(undefined8 *)(unaff_RDI + 0x298) = uVar2;
  uVar2 = FUN_00e83010();
  *(undefined8 *)(unaff_RDI + 0x170) = uVar2;
  uVar2 = FUN_00e83010();
  *(undefined8 *)(unaff_RDI + 0x178) = uVar2;
  uVar2 = FUN_00e83010();
  *(undefined8 *)(unaff_RDI + 0x180) = uVar2;
  uVar2 = FUN_00e83010();
  *(undefined8 *)(unaff_RDI + 0x188) = uVar2;
  uVar2 = FUN_00e83010();
  *(undefined8 *)(unaff_RDI + 0x198) = uVar2;
  uVar2 = FUN_00e83010();
  *(undefined8 *)(unaff_RDI + 0x1a0) = uVar2;
  uVar2 = FUN_00e83010();
  *(undefined8 *)(unaff_RDI + 400) = uVar2;
  if (0 < (int)uVar1) {
    uVar3 = 0;
    do {
      *(undefined8 *)(*(longlong *)(unaff_RDI + 0x150) + uVar3 * 8) = 0;
      *(undefined8 *)(*(longlong *)(unaff_RDI + 0x1e0) + uVar3 * 8) = 0;
      *(undefined8 *)(*(longlong *)(unaff_RDI + 0x1e8) + uVar3 * 8) = 0;
      *(undefined8 *)(*(longlong *)(unaff_RDI + 0x170) + uVar3 * 8) = 0;
      *(undefined8 *)(*(longlong *)(unaff_RDI + 0x178) + uVar3 * 8) = 0;
      *(undefined8 *)(*(longlong *)(unaff_RDI + 0x180) + uVar3 * 8) = 0;
      *(undefined8 *)(*(longlong *)(unaff_RDI + 0x188) + uVar3 * 8) = 0;
      *(undefined8 *)(*(longlong *)(unaff_RDI + 0x198) + uVar3 * 8) = 0;
      *(undefined8 *)(*(longlong *)(unaff_RDI + 0x1a0) + uVar3 * 8) = 0;
      *(undefined8 *)(*(longlong *)(unaff_RDI + 400) + uVar3 * 8) = 0;
      *(undefined8 *)(*(longlong *)(unaff_RDI + 0x298) + uVar3 * 8) = 0;
      uVar3 = uVar3 + 1;
    } while (uVar1 != uVar3);
  }
  uVar2 = FUN_00e83010();
  *(undefined8 *)(unaff_RDI + 0x1f0) = uVar2;
  uVar2 = FUN_00e83020();
  *(undefined8 *)(unaff_RDI + 0x1f8) = uVar2;
  uVar2 = FUN_00e83010();
  *(undefined8 *)(unaff_RDI + 0x200) = uVar2;
  if (0 < (int)uVar1) {
    dVar5 = dVar5 * DAT_0240d2e8;
    uVar3 = 0;
    do {
      uVar2 = FUN_00e83010(dVar5);
      *(undefined8 *)(*(longlong *)(unaff_RDI + 0x200) + uVar3 * 8) = uVar2;
      uVar3 = uVar3 + 1;
      dVar5 = extraout_XMM0_Qa;
    } while (uVar1 != uVar3);
  }
  return;
}




// ============================================================
// @012a81f0 — 571 bytes
// ============================================================

ulonglong FUN_012a81f0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  ulonglong uVar4;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  longlong local_40;
  char local_38 [8];
  char local_30 [8];
  longlong lVar5;
  
  dVar6 = (double)(**(code **)(*unaff_RDI + 0x5f0))();
  dVar7 = (double)(**(code **)(*unaff_RDI + 0x5e0))();
  if (dVar6 <= dVar7) {
    if (dVar6 < dVar7) {
      if (*(int *)(unaff_RDI[0x1e] + 0xc) != 0) {
        uVar8 = FUN_00d23310();
        pcVar3 = local_30;
        if (local_38[0] != '\0') {
          pcVar3 = local_38;
        }
        local_30[0] = local_38[0];
        *pcVar3 = '\0';
        if ((local_38[0] != '\0') && (local_40 != 0)) {
          uVar8 = FUN_00d50b20();
        }
        if ((local_30[0] == '\0') && (local_40 != 0)) {
          uVar8 = FUN_00d50b00();
        }
        uVar2 = FUN_012a7870(uVar8,param_2);
        uVar4 = (ulonglong)uVar2;
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        goto LAB_012a8419;
      }
      lVar5 = unaff_RDI[0x1d];
      if (lVar5 != 0) {
        uVar8 = FUN_00d50b00();
        cVar1 = FUN_012a7870(uVar8,param_2);
        FUN_00d50b20();
        goto LAB_012a8410;
      }
    }
  }
  else {
    if (*(int *)(unaff_RDI[0x1e] + 0xc) != 0) {
      uVar8 = FUN_00d23310();
      pcVar3 = local_30;
      if (local_38[0] != '\0') {
        pcVar3 = local_38;
      }
      local_30[0] = local_38[0];
      *pcVar3 = '\0';
      if ((local_38[0] != '\0') && (local_40 != 0)) {
        uVar8 = FUN_00d50b20();
      }
      if ((local_30[0] == '\0') && (local_40 != 0)) {
        uVar8 = FUN_00d50b00();
      }
      uVar2 = FUN_012a7870(uVar8,param_2);
      uVar4 = (ulonglong)uVar2;
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      goto LAB_012a8419;
    }
    lVar5 = unaff_RDI[0x1d];
    if (lVar5 != 0) {
      uVar8 = FUN_00d50b00();
      cVar1 = FUN_012a7870(uVar8,param_2,param_3,param_4,*unaff_RSI,0);
      FUN_00d50b20();
LAB_012a8410:
      uVar4 = CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
      if (cVar1 != '\0') goto LAB_012a8419;
    }
  }
  uVar4 = 0;
LAB_012a8419:
  return uVar4 & 0xffffffff;
}




// ============================================================
// @012a52b0 — 547 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x012a5329) */
/* WARNING: Removing unreachable block (ram,0x012a5332) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_012a52b0(void)

{
  float *pfVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  int iVar5;
  float fVar9;
  float fVar11;
  undefined1 in_XMM0 [16];
  float fVar13;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  int iVar10;
  int iVar12;
  int iVar14;
  undefined1 auVar8 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 local_48 [16];
  longlong local_38;
  char local_30;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  
  if ((DAT_028ac5a8 == 0) || (DAT_028ac5b1 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028ac5a8 == 0) {
      FUN_00c8e690();
      if ((local_30 == '\0') && (local_38 != 0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      FUN_00c92160();
      lVar2 = DAT_028ac5a8;
      if ((DAT_028ac5a8 != local_38) && (DAT_028ac5a8 = local_38, lVar2 != 0)) {
        FUN_00d50b20();
      }
      if (local_38 != 0) {
        if (DAT_028ac5b0 == '\0') {
          DAT_028ac5b0 = '\x01';
          FUN_00e8cb90();
        }
        if (local_38 != 0 && lVar2 == local_38) {
          FUN_00d50b20();
        }
      }
      lVar2 = *(longlong *)(DAT_028ac5a8 + 0x10);
      lVar3 = 0;
      iVar5 = _DAT_0238fcc0;
      iVar10 = _UNK_0238fcc4;
      iVar12 = _UNK_0238fcc8;
      iVar14 = _UNK_0238fccc;
      do {
        auVar15._0_4_ = (float)iVar5;
        auVar15._4_4_ = (float)iVar10;
        auVar15._8_4_ = (float)iVar12;
        auVar15._12_4_ = (float)iVar14;
        auVar16 = divps(auVar15,_DAT_0240d0b0);
        fVar4 = (auVar16._0_4_ + _DAT_023b2d50) * _DAT_0240d0c0;
        fVar9 = (auVar16._4_4_ + _UNK_023b2d54) * _UNK_0240d0c4;
        fVar11 = (auVar16._8_4_ + _UNK_023b2d58) * _UNK_0240d0c8;
        fVar13 = (auVar16._12_4_ + _UNK_023b2d5c) * _UNK_0240d0cc;
        local_48._0_8_ = _powf();
        local_48._8_8_ = extraout_XMM0_Qb;
        auVar16._0_8_ = _powf();
        auVar16._8_8_ = extraout_XMM0_Qb_00;
        auVar16 = insertps(local_48,auVar16,0x10);
        auVar6._0_8_ = _powf();
        auVar6._8_8_ = extraout_XMM0_Qb_01;
        auVar16 = insertps(auVar16,auVar6,0x20);
        auVar7._0_8_ = _powf();
        auVar7._8_8_ = extraout_XMM0_Qb_02;
        auVar16 = insertps(auVar16,auVar7,0x30);
        pfVar1 = (float *)(lVar2 + lVar3 * 4);
        *pfVar1 = auVar16._0_4_ * fVar4;
        pfVar1[1] = auVar16._4_4_ * fVar9;
        pfVar1[2] = auVar16._8_4_ * fVar11;
        pfVar1[3] = auVar16._12_4_ * fVar13;
        lVar3 = lVar3 + 4;
        iVar5 = iVar5 + _DAT_02394180;
        iVar10 = iVar10 + _UNK_02394184;
        iVar12 = iVar12 + _UNK_02394188;
        iVar14 = iVar14 + _UNK_0239418c;
      } while (lVar3 != 200);
      DAT_028ac5b1 = '\x01';
      FUN_00e8cb70();
      in_XMM0 = ZEXT416(in_XMM0._0_4_);
    }
    else {
      DAT_028ac5b1 = '\x01';
      FUN_00e8cb70();
      in_XMM0 = ZEXT416(in_XMM0._0_4_);
    }
  }
  auVar8._4_12_ = in_XMM0._4_12_;
  auVar8._0_4_ = in_XMM0._0_4_ * DAT_02390d38;
  FUN_00e7d780(auVar8._0_8_);
  return;
}




// ============================================================
// @011f7510 — 545 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x011f75f2) */
/* WARNING: Removing unreachable block (ram,0x011f75fb) */

void FUN_011f7510(void)

{
  longlong lVar1;
  bool bVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  undefined4 uVar8;
  char local_60;
  undefined7 uStack_5f;
  char local_58;
  longlong local_50;
  undefined4 local_44;
  longlong local_40;
  char local_38 [8];
  
  FUN_00d23340();
  lVar6 = local_40;
  pcVar3 = local_38;
  pcVar4 = &local_60;
  if (local_38[0] != '\0') {
    pcVar4 = pcVar3;
  }
  local_60 = local_38[0];
  *pcVar4 = '\0';
  if ((local_38[0] != '\0') && (lVar6 != 0)) {
    pcVar3 = (char *)FUN_00d50b20();
  }
  local_50 = lVar6;
  if (lVar6 == 0) {
    local_44 = (undefined4)CONCAT71((int7)((ulonglong)pcVar3 >> 8),1);
  }
  else {
    if (local_60 == '\0') {
      FUN_00d50b00();
    }
    local_44 = 0;
  }
  FUN_016ca4c0();
  lVar6 = local_40;
  if (local_40 == 0) {
    bVar2 = true;
    lVar6 = 0;
  }
  else {
    if (local_38[0] == '\0') {
      FUN_00d50b00();
      bVar2 = false;
      if ((local_38[0] == '\0') || (local_40 == 0)) goto LAB_011f75e1;
      FUN_00d50b20();
    }
    else {
      local_38[0] = '\0';
    }
    bVar2 = false;
  }
LAB_011f75e1:
  iVar7 = *(int *)(lVar6 + 0xc) * 2 + -2;
  if (1 < iVar7) {
    iVar5 = 1;
    do {
      FUN_00e7bcc0();
      uVar8 = FUN_015c8000((float)iVar7);
      lVar1 = CONCAT71(uStack_5f,local_60);
      if (local_58 == '\0') {
        if (lVar1 != 0) {
          uVar8 = FUN_00d50b00();
        }
      }
      else {
        local_58 = '\0';
      }
      local_38[0] = '\0';
      local_40 = lVar1;
      FUN_00d23370(uVar8,iVar5);
      if ((local_38[0] != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
        FUN_00d50b20();
      }
      iVar5 = iVar5 + 2;
    } while (iVar5 < iVar7);
  }
  local_38[0] = '\0';
  local_40 = lVar6;
  FUN_00d21140();
  if ((local_38[0] != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((char)local_44 == '\0' && local_50 != 0) {
    FUN_00d50b20();
  }
  if (!bVar2 && lVar6 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @011f6270 — 544 bytes
// str: ""MUPulseAssignmentTarget""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x011f63c9) */
/* WARNING: Removing unreachable block (ram,0x011f63d2) */
/* WARNING: Removing unreachable block (ram,0x011f642d) */
/* WARNING: Removing unreachable block (ram,0x011f6432) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_011f6270(void)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  int extraout_var;
  ulonglong uVar5;
  longlong *unaff_RDI;
  longlong *plVar6;
  longlong lVar7;
  undefined8 unaff_R15;
  undefined7 uVar8;
  
  uVar8 = (undefined7)((ulonglong)unaff_R15 >> 8);
  if (*(int *)(*unaff_RDI + 0xc) == 0) {
    uVar5 = CONCAT71(uVar8,1);
  }
  else {
    plVar6 = (longlong *)**(longlong **)(*unaff_RDI + 0x10);
    if ((DAT_0272fca8 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
      _DAT_027902e0 = "MUPulseAssignmentTarget";
      DAT_027902f0 = 0;
      _DAT_027902e8 = 0;
      ___cxa_guard_release();
    }
    if (plVar6 == (longlong *)0x0) {
      lVar4 = 0;
    }
    else {
      (**(code **)(*plVar6 + 0x360))();
      lVar4 = FUN_00e86120();
    }
    plVar6 = (longlong *)((longlong)plVar6 + lVar4);
    lVar4 = *unaff_RDI;
    uVar5 = CONCAT71(uVar8,1);
    if (1 < *(int *)(lVar4 + 0xc)) {
      lVar7 = 1;
      do {
        plVar1 = *(longlong **)(*(longlong *)(lVar4 + 0x10) + lVar7 * 8);
        if ((DAT_0272fca8 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
          _DAT_027902e0 = "MUPulseAssignmentTarget";
          DAT_027902f0 = 0;
          _DAT_027902e8 = 0;
          ___cxa_guard_release();
        }
        if (plVar1 == (longlong *)0x0) {
          lVar4 = 0;
        }
        else {
          (**(code **)(*plVar1 + 0x360))();
          lVar4 = FUN_00e86120();
        }
        (**(code **)(*(longlong *)((longlong)plVar1 + lVar4) + 0x38))();
        uVar5 = (**(code **)(*plVar6 + 0x38))();
        if ((extraout_var == 0) || (uVar5 >> 0x20 == 0)) {
          uVar5 = 0;
          break;
        }
        uVar2 = FUN_00e7c020();
        uVar5 = (ulonglong)uVar2;
        if ((char)uVar2 == '\0') break;
        if ((longlong *)((longlong)plVar1 + lVar4) != plVar6) {
          (**(code **)(*plVar6 + 0x10))();
          plVar6 = (longlong *)((longlong)plVar1 + lVar4);
        }
        lVar4 = *unaff_RDI;
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)(lVar4 + 0xc));
    }
  }
  return uVar5 & 0xffffffff;
}




// ============================================================
// @012a85e0 — 533 bytes
// ============================================================

void FUN_012a85e0(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  longlong unaff_RDI;
  longlong local_88;
  char local_80;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  FUN_012a8950();
  FUN_012a6b90();
  if (*(longlong *)(unaff_RDI + 0xe8) != 0) {
    FUN_012ddc30();
    lVar2 = *(longlong *)(unaff_RDI + 0xe8);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    FUN_012c5850();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (*(longlong *)(unaff_RDI + 0xe8) != 0) {
      *(undefined8 *)(unaff_RDI + 0xe8) = 0;
      FUN_00d50b20();
    }
  }
  iVar1 = *(int *)(*(longlong *)(unaff_RDI + 0xf0) + 0xc);
  while (iVar1 != 0) {
    FUN_012ddc30();
    FUN_00d23340();
    local_38[0] = local_40[0];
    pcVar3 = local_40;
    if (local_40[0] == '\0') {
      pcVar3 = local_38;
    }
    *pcVar3 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    FUN_012c5850();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d23740();
    iVar1 = *(int *)(*(longlong *)(unaff_RDI + 0xf0) + 0xc);
  }
  FUN_012ddc30();
  FUN_00d50b00();
  FUN_012c5710();
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  *(undefined2 *)(unaff_RDI + 0x25e) = 0;
  *(undefined1 *)(unaff_RDI + 0x260) = 0;
  *(undefined1 *)(unaff_RDI + 0x262) = 0;
  return;
}




// ============================================================
// @012a6870 — 528 bytes
// ============================================================

void FUN_012a6870(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong unaff_RDI;
  longlong local_30;
  char local_28;
  
  FUN_012dd890();
  FUN_00d21370();
  FUN_00d4efa0();
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_025f0d98;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  (*DAT_025f0db0)();
  puVar1 = *(undefined8 **)(unaff_RDI + 0x128);
  if (puVar1 == puVar3) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(unaff_RDI + 0x128) = puVar3;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_015bf690();
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_025bec28;
  FUN_00d500e0();
  puVar1 = *(undefined8 **)(unaff_RDI + 0x100);
  if (puVar1 == puVar3) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(unaff_RDI + 0x100) = puVar3;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_025bec28;
  FUN_00d500e0();
  puVar1 = *(undefined8 **)(unaff_RDI + 0x108);
  if (puVar1 == puVar3) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(unaff_RDI + 0x108) = puVar3;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_025befa0;
  FUN_00d500e0();
  puVar1 = *(undefined8 **)(unaff_RDI + 0x110);
  if (puVar1 == puVar3) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(unaff_RDI + 0x110) = puVar3;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_025befa0;
  FUN_00d500e0();
  puVar1 = *(undefined8 **)(unaff_RDI + 0x118);
  if (puVar1 == puVar3) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(unaff_RDI + 0x118) = puVar3;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  *(undefined1 *)(unaff_RDI + 0x2a3) = 0;
  uVar2 = DAT_02411990;
  *(undefined8 *)(unaff_RDI + 0x2a8) = 0;
  *(undefined8 *)(unaff_RDI + 0x2b0) = uVar2;
  *(undefined4 *)(unaff_RDI + 0x26c) = 0x7fc00000;
  return;
}




// ============================================================
// @011f4d10 — 508 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_011f4d10(ulonglong param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  undefined8 *unaff_RSI;
  undefined8 *unaff_RDI;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  double dVar10;
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_48;
  
  local_48 = param_1;
  if (param_1 >> 0x20 != 0) {
    iVar9 = (int)param_1 % 3;
    if (iVar9 == 0) {
      local_58 = FUN_00e7bcc0();
      FUN_00e7bac0();
      iVar1 = local_48._4_4_;
    }
    else {
      iVar1 = (int)(param_1 >> 0x20);
    }
    if (iVar1 == 1) {
      uVar7 = (uint)(iVar9 == 0);
      local_60 = param_2;
      dVar10 = (double)_log((double)(int)local_48);
      uVar2 = FUN_00e7d850(dVar10 / _DAT_0241e5a8);
      uVar3 = FUN_00e7bcc0();
      uVar6 = uVar3 & 0xffffffff00000000;
      uVar8 = (uint)(iVar9 == 0);
      uVar4 = uVar2;
      if ((int)uVar2 < (int)uVar8) {
        iVar1 = -uVar2;
        uVar4 = uVar8 - uVar2 & 7;
        if (uVar4 != 0) {
          iVar5 = 0;
          do {
            uVar3 = (ulonglong)(uint)((int)uVar3 * 2);
            iVar5 = iVar5 + -1;
          } while (-uVar4 != iVar5);
          uVar2 = uVar2 - iVar5;
        }
        uVar4 = uVar7;
        if (6 < iVar1 - (uint)(iVar9 != 0)) {
          iVar9 = uVar8 - uVar2;
          do {
            uVar3 = (ulonglong)(uint)((int)uVar3 << 8);
            iVar9 = iVar9 + -8;
          } while (iVar9 != 0);
        }
      }
      local_58 = *unaff_RDI;
      local_a0 = *local_60;
      local_50 = 0;
      local_98 = 0;
      FUN_011f3be0(DAT_0238fee8,&local_a0,uVar4,uVar6 | uVar3 & 0xffffffff,0);
      return;
    }
  }
  local_90 = *unaff_RDI;
  local_88 = 0;
  local_80 = *unaff_RSI;
  local_78 = 0;
  local_70 = *param_2;
  local_68 = 0;
  FUN_011f3ab0(param_3,&local_70,param_4);
  return;
}




// ============================================================
// @011f6ad0 — 507 bytes
// str: ""MUPulseAssignmentTarget""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x011f6c0a) */
/* WARNING: Removing unreachable block (ram,0x011f6c13) */
/* WARNING: Removing unreachable block (ram,0x011f6c6d) */
/* WARNING: Removing unreachable block (ram,0x011f6c72) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_011f6ad0(void)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 unaff_RBX;
  undefined7 uVar5;
  ulonglong uVar4;
  longlong *unaff_RDI;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  
  uVar5 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if (*(int *)(*unaff_RDI + 0xc) == 0) {
    uVar4 = CONCAT71(uVar5,1);
  }
  else {
    plVar7 = (longlong *)**(longlong **)(*unaff_RDI + 0x10);
    if ((DAT_0272fca8 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
      _DAT_027902e0 = "MUPulseAssignmentTarget";
      DAT_027902f0 = 0;
      _DAT_027902e8 = 0;
      ___cxa_guard_release();
    }
    if (plVar7 == (longlong *)0x0) {
      lVar3 = 0;
    }
    else {
      uVar8 = (**(code **)(*plVar7 + 0x360))();
      lVar3 = FUN_00e86120(uVar8,1);
    }
    plVar7 = (longlong *)((longlong)plVar7 + lVar3);
    lVar3 = *unaff_RDI;
    uVar4 = CONCAT71(uVar5,1);
    if (1 < *(int *)(lVar3 + 0xc)) {
      lVar6 = 1;
      do {
        plVar1 = *(longlong **)(*(longlong *)(lVar3 + 0x10) + lVar6 * 8);
        if ((DAT_0272fca8 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
          _DAT_027902e0 = "MUPulseAssignmentTarget";
          DAT_027902f0 = 0;
          _DAT_027902e8 = 0;
          ___cxa_guard_release();
        }
        if (plVar1 == (longlong *)0x0) {
          lVar3 = 0;
        }
        else {
          uVar8 = (**(code **)(*plVar1 + 0x360))();
          lVar3 = FUN_00e86120(uVar8,1);
        }
        dVar9 = (double)(**(code **)(*(longlong *)((longlong)plVar1 + lVar3) + 0x18))();
        dVar10 = (double)(**(code **)(*plVar7 + 0x18))();
        uVar4 = CONCAT71((int7)(uVar4 >> 8),dVar10 < dVar9);
        if (dVar9 <= dVar10) goto LAB_011f6c83;
        if ((longlong *)((longlong)plVar1 + lVar3) != plVar7) {
          uVar4 = 0;
          (**(code **)(*plVar7 + 0x10))();
          plVar7 = (longlong *)((longlong)plVar1 + lVar3);
        }
        lVar3 = *unaff_RDI;
        lVar6 = lVar6 + 1;
      } while (lVar6 < *(int *)(lVar3 + 0xc));
      uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
    }
  }
LAB_011f6c83:
  return uVar4 & 0xffffffff;
}



