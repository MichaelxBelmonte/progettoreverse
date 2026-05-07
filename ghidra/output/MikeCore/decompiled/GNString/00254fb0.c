// Function: FUN_00254fb0
// Address: 00254fb0
// Size: 7598 bytes
// Class: GNString
// String references:
//   "GNString"


/* WARNING: Removing unreachable block (ram,0x00255c46) */
/* WARNING: Removing unreachable block (ram,0x002567e3) */
/* WARNING: Removing unreachable block (ram,0x002559c2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_00254fb0(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong **pplVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 uVar13;
  void *pvVar14;
  pthread_key_t pVar15;
  longlong **pplVar16;
  undefined4 uVar17;
  longlong *plVar18;
  longlong *plVar19;
  undefined7 uVar20;
  longlong unaff_RDI;
  longlong lVar21;
  longlong *plVar22;
  int iVar23;
  double dVar24;
  longlong *local_208;
  undefined1 local_200;
  longlong local_1f8;
  char local_1f0;
  longlong *local_1e8;
  char local_1e0;
  longlong local_1d8;
  char local_1d0;
  longlong local_1c8;
  char local_1c0;
  longlong *local_1b8;
  char local_1b0;
  longlong *local_1a8;
  char local_1a0;
  longlong *local_198;
  char local_190;
  longlong *local_188;
  char local_180;
  longlong *local_178;
  char local_170;
  longlong *local_168;
  char local_160;
  undefined4 local_158;
  int local_154;
  longlong *local_150;
  char local_148;
  longlong *local_140;
  char local_138;
  longlong *local_130;
  longlong *local_128;
  longlong *local_120;
  longlong *local_118;
  char local_110;
  longlong *local_108;
  char local_100;
  longlong *local_f8;
  char local_f0;
  longlong *local_e8;
  char local_e0;
  longlong *local_d8;
  longlong *local_d0;
  char local_c8;
  longlong *local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  longlong *local_a0;
  char local_98;
  longlong *local_88;
  char local_80 [8];
  longlong *local_78;
  undefined8 local_70;
  int local_68;
  longlong *local_60;
  char local_58 [8];
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  
  plVar9 = DAT_026f6fa0;
  local_158 = param_2;
  if (DAT_026f6fa0 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  dVar24 = (double)FUN_00e7d6f0();
  uVar8 = (ulonglong)(dVar24 * DAT_023907c0);
  dVar24 = dVar24 * DAT_023907c0 - _DAT_023907c8;
  pplVar16 = (longlong **)0xaaaaaaaaaaaaaaab;
  FUN_0071a120();
  if ((((local_58[0] == '\0') && (local_60 != (longlong *)0x0)) &&
      (FUN_00d50b00(), local_58[0] != '\0')) && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  bVar4 = (byte)(((longlong)dVar24 & (longlong)uVar8 >> 0x3f | uVar8) / 3);
  local_88 = plVar9;
  local_80[0] = '\0';
  FUN_000175c0();
  plVar12 = local_60;
  if (local_58[0] == '\0') {
    if (((local_60 != (longlong *)0x0) && (FUN_00d50b00(), local_58[0] != '\0')) &&
       (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_58[0] = '\0';
  }
  if ((local_80[0] != '\0') && (local_88 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar12 != (longlong *)0x0) {
    local_58[0] = '\0';
    local_60 = plVar12;
    bVar4 = FUN_00c70bc0();
    if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (plVar9 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((plVar12 != (longlong *)0x0 & bVar4) == 0) {
    uVar8 = 0;
    goto LAB_00256cde;
  }
  if (*(longlong *)(unaff_RDI + 0x1c0) == 0) {
    local_80[0] = '\0';
    local_88 = (longlong *)0x0;
LAB_00255177:
    local_e8 = (longlong *)0x0;
  }
  else {
    FUN_006f3f00();
    local_e8 = local_88;
    local_e0 = 0;
    if (local_80[0] == '\0') {
      if (local_88 == (longlong *)0x0) goto LAB_00255177;
      FUN_00d50b00();
    }
    else {
      local_80[0] = '\0';
    }
  }
  local_e0 = '\x01';
  FUN_00749e90();
  plVar9 = local_60;
  if (local_58[0] == '\0') {
    if (((local_60 != (longlong *)0x0) && (FUN_00d50b00(), local_58[0] != '\0')) &&
       (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_58[0] = '\0';
  }
  if ((local_e0 != '\0') && (local_e8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_80[0] != '\0') && (local_88 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_130 = plVar9;
  plVar9 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar9 + 0x18))();
  local_a8 = plVar9;
  (**(code **)(&UNK_00001550 + **(longlong **)(unaff_RDI + 0x90)))();
  plVar12 = local_60;
  if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar12 == (longlong *)0x0) {
    (**(code **)(&UNK_00001550 + **(longlong **)(unaff_RDI + 0x90)))();
    plVar12 = local_60;
    local_a0 = (longlong *)CONCAT71(local_a0._1_7_,local_58[0]);
    pplVar10 = &local_a0;
    if (local_58[0] != '\0') {
      pplVar10 = (longlong **)local_58;
    }
    *(char *)pplVar10 = '\0';
    if ((local_58[0] != '\0') && (plVar12 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar12 == (longlong *)0x0) {
      plVar12 = *(longlong **)(unaff_RDI + 0x90);
LAB_00255482:
      FUN_00d50b00();
    }
    else if ((char)local_a0 == '\0') goto LAB_00255482;
    (**(code **)(*plVar12 + 0xe10))();
    plVar12 = local_88;
    if (local_80[0] == '\0') {
      if (((local_88 != (longlong *)0x0) && (FUN_00d50b00(), local_80[0] != '\0')) &&
         (local_88 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_80[0] = '\0';
    }
    FUN_00d50b20();
    local_154 = *(int *)((longlong)plVar12 + 0xc);
    local_b8 = plVar12;
    if (local_154 == 0) {
      plVar12 = *(longlong **)(unaff_RDI + 0x90);
      if (plVar12 == (longlong *)0x0) {
LAB_002557a3:
        plVar18 = (longlong *)0x0;
      }
      else {
        (**(code **)(&UNK_00001550 + *plVar12))();
        plVar18 = local_60;
        local_88 = (longlong *)CONCAT71(local_88._1_7_,local_58[0]);
        pplVar16 = (longlong **)local_58;
        if (local_58[0] == '\0') {
          pplVar16 = &local_88;
        }
        *(char *)pplVar16 = '\0';
        if ((local_58[0] != '\0') && (plVar18 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar18 == (longlong *)0x0) {
          plVar18 = *(longlong **)(unaff_RDI + 0x90);
          if (plVar18 == (longlong *)0x0) goto LAB_002557a3;
        }
        else if ((char)local_88 != '\0') goto LAB_002557a5;
        FUN_00d50b00();
      }
LAB_002557a5:
      local_120 = plVar18;
      (**(code **)(*plVar18 + 0x988))();
      plVar18 = local_150;
      if (local_148 == '\0') {
        if (local_150 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_148 = '\0';
      }
      plVar1 = *(longlong **)(unaff_RDI + 0x90);
      local_c0 = plVar18;
      if (plVar1 == (longlong *)0x0) {
        plVar19 = (longlong *)0x0;
      }
      else {
        (**(code **)(&UNK_00001550 + *plVar1))();
        plVar19 = local_60;
        local_88 = (longlong *)CONCAT71(local_88._1_7_,local_58[0]);
        pplVar16 = (longlong **)local_58;
        if (local_58[0] == '\0') {
          pplVar16 = &local_88;
        }
        *(char *)pplVar16 = '\0';
        if ((local_58[0] != '\0') && (plVar19 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar19 == (longlong *)0x0) {
          plVar19 = *(longlong **)(unaff_RDI + 0x90);
          if (plVar19 != (longlong *)0x0) goto LAB_00255865;
          plVar19 = (longlong *)0x0;
        }
        else if ((char)local_88 == '\0') {
LAB_00255865:
          FUN_00d50b00();
        }
      }
      local_128 = plVar19;
      FUN_019a47c0();
      plVar19 = local_140;
      if (local_138 == '\0') {
        if (local_140 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_138 = '\0';
      }
      if (plVar18 != (longlong *)0x0) {
        local_b0 = plVar19;
        local_58[0] = '\0';
        local_60 = (longlong *)0x0;
        local_50 = plVar18;
        local_48 = 0xffffffff;
        local_40 = 0;
        local_48._4_4_ = 0;
        do {
          if (local_48._4_4_ != 0) {
            if (local_48._4_4_ < 1) {
              iVar6 = -local_48._4_4_;
            }
            else {
              iVar6 = (int)local_48 - local_48._4_4_;
              local_48 = CONCAT44(local_48._4_4_,iVar6);
              FUN_00d23690();
              local_40 = local_40 + local_48._4_4_;
              iVar6 = 0;
            }
            local_48 = CONCAT44(iVar6,(int)local_48);
          }
          lVar21 = (longlong)(int)local_48;
          iVar6 = (int)local_48 + 1;
          local_48 = CONCAT44(local_48._4_4_,iVar6);
          if (*(int *)((longlong)local_50 + 0xc) <= iVar6) {
            FUN_000be170();
            plVar19 = local_b0;
            plVar18 = local_c0;
            break;
          }
          local_a0 = *(longlong **)(local_50[2] + 8 + lVar21 * 8);
          local_98 = '\0';
          local_60 = local_a0;
          FUN_004f9cf0();
          plVar18 = local_88;
          if (local_80[0] == '\0') {
            if (((local_88 != (longlong *)0x0) && (FUN_00d50b00(), local_80[0] != '\0')) &&
               (local_88 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_80[0] = '\0';
          }
          if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar18 != (longlong *)0x0) {
            local_80[0] = '\0';
            local_88 = (longlong *)0x0;
            local_78 = plVar18;
            local_70 = 0xffffffff;
            local_68 = 0;
            while( true ) {
              lVar21 = (longlong)(int)local_70;
              iVar23 = (int)local_70 + 1;
              local_70 = CONCAT44(local_70._4_4_,iVar23);
              iVar6 = *(int *)((longlong)local_78 + 0xc);
              if (iVar6 <= iVar23) break;
              local_208 = *(longlong **)(local_78[2] + 8 + lVar21 * 8);
              local_d0 = local_a8;
              local_c8 = '\0';
              local_200 = 0;
              local_88 = local_208;
              cVar5 = FUN_0026a3e0();
              if (cVar5 == '\0') break;
              if (local_70._4_4_ != 0) {
                if (local_70._4_4_ < 1) {
                  iVar6 = -local_70._4_4_;
                }
                else {
                  local_70 = CONCAT44(local_70._4_4_,(int)local_70 - local_70._4_4_);
                  FUN_00d23690();
                  local_68 = local_68 + local_70._4_4_;
                  iVar6 = 0;
                }
                local_70 = CONCAT44(iVar6,(int)local_70);
              }
            }
            FUN_00115190();
            FUN_00d50b20();
            plVar9 = local_a8;
            if (iVar23 < iVar6) goto LAB_00255d72;
          }
        } while( true );
      }
      FUN_00c9fe20();
      plVar22 = local_60;
      pplVar16 = (longlong **)local_58;
      if (local_58[0] == '\0') {
        pplVar16 = &local_88;
      }
      local_88 = (longlong *)CONCAT71(local_88._1_7_,local_58[0]);
      *(char *)pplVar16 = '\0';
      if ((local_58[0] != '\0') && (plVar22 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      iVar6 = *(int *)((longlong)plVar22 + 0xc);
      if ((char)local_88 != '\0') {
        FUN_00d50b20();
      }
      bVar2 = true;
      if ((iVar6 < 1) && (plVar19 != (longlong *)0x0)) {
        local_58[0] = '\0';
        local_60 = (longlong *)0x0;
        local_40 = 0;
        local_48 = 0;
        local_50 = plVar19;
        if (0 < *(int *)((longlong)plVar19 + 0xc)) {
          lVar21 = 0;
          local_b0 = plVar19;
          do {
            local_118 = *(longlong **)(local_b0[2] + lVar21 * 8);
            local_110 = '\0';
            local_60 = local_118;
            FUN_004f9cf0();
            local_d8 = local_88;
            if (local_80[0] == '\0') {
              if (((local_88 != (longlong *)0x0) && (FUN_00d50b00(), local_80[0] != '\0')) &&
                 (local_88 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_80[0] = '\0';
            }
            if ((local_110 != '\0') && (local_118 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (local_d8 != (longlong *)0x0) {
              local_80[0] = '\0';
              local_88 = (longlong *)0x0;
              local_78 = local_d8;
              local_70 = 0xffffffff;
              local_68 = 0;
              while( true ) {
                lVar11 = (longlong)(int)local_70;
                iVar23 = (int)local_70 + 1;
                local_70 = CONCAT44(local_70._4_4_,iVar23);
                iVar6 = *(int *)((longlong)local_78 + 0xc);
                if (iVar6 <= iVar23) break;
                local_88 = *(longlong **)(local_78[2] + 8 + lVar11 * 8);
                cVar5 = FUN_0026a3e0();
                if (cVar5 == '\0') break;
                if (local_70._4_4_ != 0) {
                  if (local_70._4_4_ < 1) {
                    iVar6 = -local_70._4_4_;
                  }
                  else {
                    local_70 = CONCAT44(local_70._4_4_,(int)local_70 - local_70._4_4_);
                    FUN_00d23690();
                    local_68 = local_68 + local_70._4_4_;
                    iVar6 = 0;
                  }
                  local_70 = CONCAT44(iVar6,(int)local_70);
                }
              }
              FUN_00115190();
              FUN_00d50b20();
              plVar9 = local_a8;
              plVar18 = local_c0;
              if (iVar23 < iVar6) {
                FUN_000be170();
                goto LAB_00255d93;
              }
            }
            lVar21 = lVar21 + 1;
            local_48 = CONCAT44(local_48._4_4_,(int)lVar21);
            plVar19 = local_b0;
          } while (lVar21 < *(int *)((longlong)local_b0 + 0xc));
        }
        FUN_000be170();
        bVar2 = true;
      }
      goto LAB_00255d9a;
    }
    local_58[0] = '\0';
    local_60 = (longlong *)0x0;
    local_50 = plVar12;
    local_40 = 0;
    local_48 = 0;
    if (0 < local_154) {
      lVar21 = 0;
      do {
        local_60 = *(longlong **)(local_b8[2] + lVar21 * 8);
        pvVar14 = _pthread_getspecific((pthread_key_t)pplVar16);
        if (pvVar14 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01264240();
        plVar9 = local_88;
        local_208 = (longlong *)CONCAT71(local_208._1_7_,local_80[0]);
        pplVar16 = &local_208;
        pplVar10 = (longlong **)local_80;
        if (local_80[0] == '\0') {
          pplVar10 = pplVar16;
        }
        *(char *)pplVar10 = '\0';
        if ((local_80[0] != '\0') && (plVar9 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar9 != (longlong *)0x0) {
          pvVar14 = _pthread_getspecific((pthread_key_t)pplVar16);
          if (pvVar14 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01266fe0();
          plVar19 = local_88;
          local_118 = (longlong *)CONCAT71(local_118._1_7_,local_80[0]);
          pplVar16 = &local_118;
          pplVar10 = (longlong **)local_80;
          if (local_80[0] == '\0') {
            pplVar10 = pplVar16;
          }
          *(char *)pplVar10 = '\0';
          if ((local_80[0] != '\0') && (plVar19 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar19 == (longlong *)0x0) {
            bVar4 = 3;
          }
          else {
            local_a0 = local_a8;
            local_98 = '\0';
            local_d0 = plVar19;
            local_c8 = '\0';
            bVar4 = FUN_0026a3e0();
            bVar4 = bVar4 ^ 1;
            if ((char)local_118 != '\0') {
              FUN_00d50b20();
            }
          }
          if ((char)local_208 != '\0') {
            FUN_00d50b20();
          }
          if ((bVar4 != 0) && (bVar4 != 3)) goto LAB_002556d2;
        }
        lVar21 = lVar21 + 1;
        local_48 = CONCAT44(local_48._4_4_,(int)lVar21);
      } while (lVar21 < *(int *)((longlong)local_b8 + 0xc));
    }
    bVar4 = 0;
    plVar19 = local_b8;
LAB_002556d2:
    FUN_001159b0();
    plVar22 = local_b8;
    plVar9 = local_a8;
    if ((bVar4 & 1) == 0) goto LAB_00255e34;
    uVar17 = (undefined4)CONCAT71((int7)((ulonglong)plVar19 >> 8),1);
    bVar3 = false;
    goto LAB_00255e52;
  }
  (**(code **)(&UNK_00001550 + **(longlong **)(unaff_RDI + 0x90)))();
  FUN_019532c0();
  local_108 = local_60;
  local_100 = 0;
  if (local_58[0] == '\0') {
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58[0] = '\0';
  }
  local_100 = '\x01';
  (**(code **)(&UNK_00001550 + **(longlong **)(unaff_RDI + 0x90)))();
  (**(code **)(&UNK_00001668 + *local_d0))();
  local_f8 = local_a0;
  local_f0 = 0;
  if (local_98 == '\0') {
    if (local_a0 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_98 = '\0';
  }
  local_f0 = '\x01';
  FUN_00257e70();
  if ((local_f0 != '\0') && (local_f8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_100 != '\0') && (local_108 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_80[0] != '\0') && (local_88 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  uVar17 = 0;
LAB_00255e63:
  local_d8 = (longlong *)CONCAT44(local_d8._4_4_,uVar17);
  FUN_00c9fe20();
  plVar12 = local_60;
  local_88 = (longlong *)CONCAT71(local_88._1_7_,local_58[0]);
  pplVar16 = (longlong **)local_58;
  if (local_58[0] == '\0') {
    pplVar16 = &local_88;
  }
  *(char *)pplVar16 = '\0';
  if ((local_58[0] != '\0') && (plVar12 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  iVar6 = *(int *)((longlong)plVar12 + 0xc);
  if ((char)local_88 != '\0') {
    FUN_00d50b20();
  }
  if (iVar6 < 1) goto LAB_00256041;
  plVar12 = (longlong *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar12 = (longlong)&DAT_02572358;
  (*DAT_02572370)();
  local_b8 = plVar12;
  if (*(longlong **)(unaff_RDI + 0x90) == (longlong *)0x0) {
LAB_00256048:
    local_b0 = (longlong *)((ulonglong)local_b0 & 0xffffffff00000000);
  }
  else {
    (**(code **)(&UNK_00001550 + **(longlong **)(unaff_RDI + 0x90)))();
    plVar12 = local_60;
    if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar18 = DAT_026f6f08;
    if (plVar12 == (longlong *)0x0) goto LAB_00256048;
    if (DAT_026f6f08 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    dVar24 = (double)FUN_00e7d6f0();
    uVar8 = (ulonglong)(dVar24 * DAT_023907c0);
    dVar24 = dVar24 * DAT_023907c0 - _DAT_023907c8;
    FUN_0071a120();
    if ((((local_58[0] == '\0') && (local_60 != (longlong *)0x0)) &&
        (FUN_00d50b00(), local_58[0] != '\0')) && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    bVar4 = (byte)(((longlong)dVar24 & (longlong)uVar8 >> 0x3f | uVar8) / 3);
    local_88 = plVar18;
    local_80[0] = '\0';
    FUN_000175c0();
    plVar12 = local_60;
    if (local_58[0] == '\0') {
      if (((local_60 != (longlong *)0x0) && (FUN_00d50b00(), local_58[0] != '\0')) &&
         (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_58[0] = '\0';
    }
    if ((local_80[0] != '\0') && (local_88 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar12 != (longlong *)0x0) {
      local_58[0] = '\0';
      local_60 = plVar12;
      bVar4 = FUN_00c70bc0();
      if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    uVar13 = FUN_00d50b20();
    local_b0 = (longlong *)
               (CONCAT44(local_b0._4_4_,
                         (int)CONCAT71((int7)((ulonglong)uVar13 >> 8),
                                       plVar12 != (longlong *)0x0 & bVar4)) ^ 1);
    if (plVar18 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00c9fe20();
  plVar12 = local_60;
  pplVar16 = &local_88;
  if (local_58[0] != '\0') {
    pplVar16 = (longlong **)local_58;
  }
  local_88 = (longlong *)CONCAT71(local_88._1_7_,local_58[0]);
  *(char *)pplVar16 = '\0';
  if ((local_58[0] != '\0') && (plVar12 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pVar15 = (pthread_key_t)pplVar16;
  if ((char)local_88 == '\0') {
    if (plVar12 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_00256101;
    }
  }
  else if (plVar12 != (longlong *)0x0) {
LAB_00256101:
    local_58[0] = '\0';
    local_60 = (longlong *)0x0;
    local_c0 = plVar12;
    local_50 = plVar12;
    local_48 = 0xffffffff;
    local_40 = 0;
    local_48._4_4_ = 0;
    do {
      if (local_48._4_4_ != 0) {
        if (local_48._4_4_ < 1) {
          iVar6 = -local_48._4_4_;
        }
        else {
          iVar6 = (int)local_48 - local_48._4_4_;
          local_48 = CONCAT44(local_48._4_4_,iVar6);
          FUN_00d23690();
          local_40 = local_40 + local_48._4_4_;
          iVar6 = 0;
        }
        local_48 = CONCAT44(iVar6,(int)local_48);
      }
      lVar21 = (longlong)(int)local_48;
      iVar6 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar6);
      if (*(int *)((longlong)local_50 + 0xc) <= iVar6) {
        plVar12 = local_50;
        FUN_00115190();
        pVar15 = (pthread_key_t)plVar12;
        FUN_00d50b20();
        break;
      }
      lVar11 = local_50[2];
      local_60 = *(longlong **)(lVar11 + 8 + lVar21 * 8);
      pvVar14 = _pthread_getspecific((pthread_key_t)lVar11);
      pVar15 = (pthread_key_t)lVar11;
      if (pvVar14 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0134a500();
      plVar12 = local_88;
      if ((local_80[0] != '\0') && (local_88 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar12 != (longlong *)0x0) {
        pvVar14 = _pthread_getspecific(pVar15);
        if (pvVar14 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0134a500();
        pvVar14 = _pthread_getspecific(pVar15);
        if (pvVar14 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0141b7f0();
        plVar12 = local_a0;
        if (local_98 == '\0') {
          if (local_a0 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_98 = '\0';
        }
        local_88 = plVar12;
        local_80[0] = '\0';
        FUN_00d235a0();
        if ((local_80[0] != '\0') && (local_88 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar12 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        pvVar14 = _pthread_getspecific(pVar15);
        if (pvVar14 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01320d00();
        plVar12 = local_88;
        if ((local_80[0] != '\0') && (local_88 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar12 == (longlong *)0x0) goto LAB_0025653e;
      }
    } while( true );
  }
  FUN_01caeae0();
  FUN_01d66da0();
  local_1f8 = DAT_02726cf0;
  if (DAT_02726cf0 != 0) {
    FUN_00d50b00();
  }
  local_1f0 = '\x01';
  pplVar16 = &local_60;
  FUN_000175c0();
  plVar12 = local_60;
  if ((DAT_026fd0c0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
    _DAT_026d5e58 = FUN_00d4fe50();
    DAT_026d5e40 = "GNString";
    _DAT_026d5e48 = 0x40;
    pVar15 = 0x5d920;
    _DAT_026d5e50 = FUN_0005d920;
    _DAT_026d5e60 = 0;
    uRam00000000026d5e68 = 0;
    _DAT_026d5e70 = 0;
    uRam00000000026d5e78 = 0;
    _DAT_026d5e80 = 0;
    uRam00000000026d5e88 = 0;
    _DAT_026d5e90 = 0;
    uRam00000000026d5e98 = 0;
    _DAT_026d5ea0 = 0;
    uRam00000000026d5ea8 = 0;
    _DAT_026d5eb0 = 0;
    uRam00000000026d5eb8 = 0;
    _DAT_026d5ec0 = 0;
    uRam00000000026d5ec8 = 0;
    _DAT_026d5ed0 = 0;
    uRam00000000026d5ed8 = 0;
    _DAT_026d5ee0 = 0;
    uRam00000000026d5ee8 = 0;
    _DAT_026d5ef0 = 0;
    uRam00000000026d5ef8 = 0;
    _DAT_026d5f00 = 0;
    ___cxa_guard_release();
    plVar9 = local_a8;
  }
  if (plVar12 == (longlong *)0x0) {
LAB_0025641a:
    pplVar16 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar12 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 == '\0') goto LAB_0025641a;
  }
  plVar12 = *pplVar16;
  if (*(char *)(pplVar16 + 1) == '\0') {
    if (plVar12 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar16 + 1) = 0;
  }
  if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_1f0 != '\0') && (local_1f8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80[0] != '\0') && (local_88 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_b0 == '\0') || (plVar12 == (longlong *)0x0)) {
LAB_002565e0:
    FUN_01caeae0();
    local_58[0] = '\0';
    local_60 = plVar12;
    FUN_00d23d70();
    if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d66ab0();
    if ((local_80[0] != '\0') && (local_88 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((char)local_d8 == '\0') {
      FUN_00c9fe20();
      plVar18 = local_60;
      local_88 = (longlong *)CONCAT71(local_88._1_7_,local_58[0]);
      pplVar16 = (longlong **)local_58;
      if (local_58[0] == '\0') {
        pplVar16 = &local_88;
      }
      *(char *)pplVar16 = '\0';
      if ((local_58[0] != '\0') && (plVar18 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      iVar6 = *(int *)((longlong)plVar18 + 0xc);
      if (((char)local_88 != '\0') && (plVar18 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (1 < iVar6) goto LAB_002566a3;
    }
    if (*(longlong *)(unaff_RDI + 0x1c0) == 0) {
      local_58[0] = '\0';
      local_60 = (longlong *)0x0;
LAB_002566fe:
      uVar8 = 0;
    }
    else {
      FUN_006f3f00();
      if (local_60 == (longlong *)0x0) goto LAB_002566fe;
      if (*(longlong *)(unaff_RDI + 0x1c0) == 0) {
        local_80[0] = '\0';
        local_88 = (longlong *)0x0;
      }
      else {
        FUN_006f3f00();
      }
      uVar7 = FUN_0078cda0();
      uVar8 = (ulonglong)uVar7;
      if ((local_80[0] != '\0') && (local_88 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((char)local_158 == '\x01' && (char)uVar8 == '\0') {
      FUN_00c9fe20();
      plVar18 = local_60;
      local_88 = (longlong *)CONCAT71(local_88._1_7_,local_58[0]);
      pplVar16 = (longlong **)local_58;
      if (local_58[0] == '\0') {
        pplVar16 = &local_88;
      }
      *(char *)pplVar16 = '\0';
      if ((local_58[0] != '\0') && (plVar18 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((char)local_88 == '\0') {
        if (plVar18 != (longlong *)0x0) {
          FUN_00d50b00();
          goto LAB_002567b6;
        }
      }
      else if (plVar18 != (longlong *)0x0) {
LAB_002567b6:
        local_58[0] = '\0';
        local_60 = (longlong *)0x0;
        local_50 = plVar18;
        local_48 = 0xffffffff;
        local_40 = 0;
        while( true ) {
          lVar21 = (longlong)(int)local_48;
          iVar6 = (int)local_48 + 1;
          local_48 = CONCAT44(local_48._4_4_,iVar6);
          if (*(int *)((longlong)local_50 + 0xc) <= iVar6) break;
          local_60 = *(longlong **)(local_50[2] + 8 + lVar21 * 8);
          pvVar14 = _pthread_getspecific((pthread_key_t)local_50[2]);
          if (pvVar14 != (void *)0x0) {
            FUN_00e8b990();
          }
          iVar6 = FUN_01326de0();
          if (iVar6 != 0) {
            FUN_00115190();
            uVar13 = FUN_00d50b20();
            plVar9 = local_a8;
            local_1d8 = DAT_026f6fb0;
            if (DAT_026f6fb0 != 0) {
              uVar13 = FUN_00d50b00();
            }
            lVar21 = DAT_026f6fb8;
            local_1d0 = '\x01';
            if (DAT_026f6fb8 != 0) {
              uVar13 = FUN_00d50b00();
            }
            local_1c8 = lVar21;
            local_1c0 = '\x01';
            FUN_01f6ca30(uVar13,&local_1c8);
            plVar18 = local_60;
            if (local_58[0] == '\0') {
              if (((local_60 != (longlong *)0x0) && (FUN_00d50b00(), local_58[0] != '\0')) &&
                 (local_60 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_58[0] = '\0';
            }
            if ((local_1c0 != '\0') && (local_1c8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_1d0 != '\0') && (local_1d8 != 0)) {
              FUN_00d50b20();
            }
            iVar6 = (**(code **)(*plVar18 + 0x5e0))();
            FUN_00d50b20();
            uVar20 = (undefined7)((ulonglong)plVar18 >> 8);
            if (iVar6 != 0) goto LAB_00256ca2;
            goto LAB_0025696f;
          }
          if (local_48._4_4_ != 0) {
            if (local_48._4_4_ < 1) {
              iVar6 = -local_48._4_4_;
            }
            else {
              local_48 = CONCAT44(local_48._4_4_,(int)local_48 - local_48._4_4_);
              FUN_00d23690();
              local_40 = local_40 + local_48._4_4_;
              iVar6 = 0;
            }
            local_48 = CONCAT44(iVar6,(int)local_48);
          }
        }
        FUN_00115190();
        FUN_00d50b20();
        plVar9 = local_a8;
      }
LAB_0025696f:
      uVar13 = FUN_00c9fe20();
      plVar18 = local_60;
      pplVar16 = (longlong **)local_58;
      if (local_58[0] == '\0') {
        pplVar16 = &local_88;
      }
      local_88 = (longlong *)CONCAT71(local_88._1_7_,local_58[0]);
      *(char *)pplVar16 = '\0';
      if ((local_58[0] != '\0') && (plVar18 != (longlong *)0x0)) {
        uVar13 = FUN_00d50b20();
      }
      uVar20 = (undefined7)((ulonglong)plVar18 >> 8);
      if ((char)local_88 == '\0') {
        if (plVar18 != (longlong *)0x0) {
          uVar13 = FUN_00d50b00();
          goto LAB_002569c8;
        }
      }
      else if (plVar18 != (longlong *)0x0) {
LAB_002569c8:
        local_58[0] = '\0';
        local_60 = (longlong *)0x0;
        local_50 = plVar18;
        local_40 = 0;
        local_48 = 0;
        if (0 < *(int *)((longlong)plVar18 + 0xc)) {
          lVar21 = 0;
          do {
            plVar9 = *(longlong **)(plVar18[2] + lVar21 * 8);
            local_1b0 = '\0';
            local_1b8 = plVar9;
            local_60 = plVar9;
            uVar13 = FUN_00257f20(uVar13,&local_1b8);
            plVar1 = local_88;
            if (local_80[0] == '\0') {
              if (((local_88 != (longlong *)0x0) && (uVar13 = FUN_00d50b00(), local_80[0] != '\0'))
                 && (local_88 != (longlong *)0x0)) {
                uVar13 = FUN_00d50b20();
              }
            }
            else {
              local_80[0] = '\0';
            }
            if ((local_1b0 != '\0') && (local_1b8 != (longlong *)0x0)) {
              uVar13 = FUN_00d50b20();
            }
            local_1a8 = plVar1;
            local_1a0 = '\0';
            local_190 = '\0';
            local_198 = plVar9;
            FUN_004f9d80(uVar13,&local_198);
            plVar19 = local_88;
            if (local_80[0] == '\0') {
              if (((local_88 != (longlong *)0x0) && (FUN_00d50b00(), local_80[0] != '\0')) &&
                 (local_88 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_80[0] = '\0';
            }
            if ((local_190 != '\0') && (local_198 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_1a0 != '\0') && (local_1a8 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (*(longlong *)(unaff_RDI + 0x1c0) == 0) {
              local_80[0] = '\0';
              local_88 = (longlong *)0x0;
            }
            else {
              FUN_006f3f00();
            }
            local_180 = '\0';
            local_170 = '\0';
            local_168 = plVar19;
            local_160 = '\0';
            local_188 = plVar9;
            local_178 = plVar12;
            uVar13 = FUN_00784900(&local_168,&local_178);
            if ((local_160 != '\0') && (local_168 != (longlong *)0x0)) {
              uVar13 = FUN_00d50b20();
            }
            if ((local_170 != '\0') && (local_178 != (longlong *)0x0)) {
              uVar13 = FUN_00d50b20();
            }
            if ((local_180 != '\0') && (local_188 != (longlong *)0x0)) {
              uVar13 = FUN_00d50b20();
            }
            if ((local_80[0] != '\0') && (local_88 != (longlong *)0x0)) {
              uVar13 = FUN_00d50b20();
            }
            if (plVar19 != (longlong *)0x0) {
              uVar13 = FUN_00d50b20();
            }
            if (plVar1 != (longlong *)0x0) {
              uVar13 = FUN_00d50b20();
            }
            lVar21 = lVar21 + 1;
            local_48 = CONCAT44(local_48._4_4_,(int)lVar21);
          } while ((int)lVar21 < *(int *)((longlong)plVar18 + 0xc));
        }
        FUN_00115190();
        FUN_00d50b20();
        plVar9 = local_a8;
LAB_00256ca2:
        uVar8 = CONCAT71(uVar20,1);
        goto joined_r0x00256cf7;
      }
      uVar8 = CONCAT71(uVar20,1);
    }
    else {
      uVar8 = uVar8 ^ 1;
    }
  }
  else {
    local_1e0 = '\0';
    local_1e8 = plVar12;
    FUN_0141af60();
    plVar18 = local_60;
    if (local_58[0] == '\0') {
      if (((local_60 != (longlong *)0x0) && (FUN_00d50b00(), local_58[0] != '\0')) &&
         (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_58[0] = '\0';
    }
    if ((local_1e0 != '\0') && (local_1e8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar18 == (longlong *)0x0) goto LAB_002565e0;
    pvVar14 = _pthread_getspecific(pVar15);
    if (pvVar14 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar6 = FUN_0141bab0();
    if (iVar6 != 3) {
      FUN_00d50b20();
      goto LAB_002565e0;
    }
    FUN_01caeae0();
    FUN_01d66ab0();
    if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
LAB_002566a3:
    uVar8 = 0;
  }
joined_r0x00256cf7:
  if (plVar12 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_00256caf:
  if (local_b8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_00256cc0:
  if (plVar9 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (local_130 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_00256cde:
  return uVar8 & 0xffffffff;
LAB_00255d72:
  FUN_000be170();
  plVar18 = local_c0;
LAB_00255d93:
  bVar2 = false;
  plVar19 = local_b0;
LAB_00255d9a:
  plVar22 = local_b8;
  if (plVar19 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_138 != '\0') && (local_140 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((plVar1 != (longlong *)0x0) && (local_128 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar18 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_148 != '\0') && (local_150 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((plVar12 != (longlong *)0x0) && (local_120 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar2) {
LAB_00255e34:
    uVar17 = (undefined4)CONCAT71((int7)((ulonglong)plVar19 >> 8),local_154 != 0);
    bVar3 = true;
    bVar2 = true;
  }
  else {
    uVar17 = 0;
    bVar3 = false;
    bVar2 = false;
  }
  if (plVar22 != (longlong *)0x0) {
LAB_00255e52:
    bVar2 = bVar3;
    FUN_00d50b20();
  }
  if (bVar2) goto LAB_00255e63;
LAB_00256041:
  uVar8 = 0;
  goto LAB_00256cc0;
LAB_0025653e:
  FUN_00115190();
  FUN_00d50b20();
  uVar8 = 0;
  goto LAB_00256caf;
}


