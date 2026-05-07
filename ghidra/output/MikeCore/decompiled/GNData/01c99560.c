// Function: FUN_01c99560
// Address: 01c99560
// Size: 6187 bytes
// Class: GNData
// String references:
//   "GNData"
//   "MUPasteboardElementsItem"


/* WARNING: Removing unreachable block (ram,0x01c9a625) */
/* WARNING: Removing unreachable block (ram,0x01c9a380) */
/* WARNING: Removing unreachable block (ram,0x01c9a389) */
/* WARNING: Removing unreachable block (ram,0x01c9976b) */
/* WARNING: Removing unreachable block (ram,0x01c99774) */
/* WARNING: Removing unreachable block (ram,0x01c9a6fe) */
/* WARNING: Removing unreachable block (ram,0x01c9a707) */
/* WARNING: Removing unreachable block (ram,0x01c9a749) */
/* WARNING: Removing unreachable block (ram,0x01c9a770) */
/* WARNING: Removing unreachable block (ram,0x01c9a74b) */
/* WARNING: Removing unreachable block (ram,0x01c9a774) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_01c99560(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  void *pvVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 uVar12;
  longlong lVar13;
  ulonglong uVar14;
  int iVar15;
  uint uVar16;
  pthread_key_t pVar17;
  int iVar18;
  char *pcVar19;
  int iVar20;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  undefined8 unaff_R13;
  byte bVar21;
  longlong **pplVar22;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar23;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  longlong local_198;
  char local_190;
  longlong local_188;
  char local_180;
  longlong *local_178;
  char local_170;
  longlong *local_168;
  char local_160;
  longlong local_158;
  char local_150;
  undefined4 local_148;
  pthread_key_t local_144;
  longlong *local_140;
  char local_138;
  undefined8 local_130;
  longlong local_128;
  char local_120;
  longlong local_118;
  char local_110;
  longlong local_108;
  char local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  uint local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  longlong *local_d8;
  char local_d0;
  undefined7 uStack_cf;
  char local_c8;
  longlong local_c0;
  uint local_b4;
  longlong *local_a8;
  longlong local_98;
  longlong local_88;
  char local_80;
  int local_70;
  longlong *local_58;
  char local_50 [8];
  longlong *local_48;
  undefined8 local_40;
  int local_38;
  
  if ((*param_1 == 0) || (*(int *)(*param_1 + 0xc) == 0)) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return unaff_RDI;
  }
  cVar1 = *(char *)(unaff_RSI + 0x2c);
  local_148 = param_3;
  local_e0 = param_2;
  if (cVar1 == '\0') {
    plVar10 = param_1;
    FUN_00d23310();
    plVar11 = local_58;
    pVar17 = (pthread_key_t)CONCAT71((int7)((ulonglong)plVar10 >> 8),local_50[0]);
    pcVar19 = &local_d0;
    if (local_50[0] != '\0') {
      pcVar19 = local_50;
    }
    local_d0 = local_50[0];
    *pcVar19 = '\0';
    if ((local_50[0] != '\0') && (plVar11 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pvVar7 = _pthread_getspecific(pVar17);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012f8680();
    local_130 = CONCAT71((int7)((ulonglong)pcVar19 >> 8),local_80);
    local_c0 = local_88;
    if (local_88 == 0) {
      local_c0 = 0;
      local_130 = 0;
joined_r0x01c997e6:
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
    }
    else if (local_80 != '\0') {
      FUN_00d50b00();
      goto joined_r0x01c997e6;
    }
    if ((local_d0 != '\0') && (plVar11 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_c0 != 0) {
      FUN_0167ab60();
      local_d8 = local_58;
      if (local_58 != (longlong *)0x0) {
        plVar11 = local_58;
        if (((local_50[0] == '\0') && (FUN_00d50b00(), local_50[0] != '\0')) &&
           (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        pVar17 = (pthread_key_t)plVar11;
        local_f8 = 0;
        local_98 = 0;
        goto LAB_01c99881;
      }
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    goto LAB_01c99d17;
  }
  plVar11 = param_1;
  FUN_00d23310();
  pVar17 = (pthread_key_t)CONCAT71((int7)((ulonglong)plVar11 >> 8),local_50[0]);
  pcVar19 = &local_d0;
  if (local_50[0] != '\0') {
    pcVar19 = local_50;
  }
  local_d0 = local_50[0];
  *pcVar19 = '\0';
  if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pvVar7 = _pthread_getspecific(pVar17);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e8920();
  local_98 = local_88;
  lVar13 = local_88;
  if (local_88 == 0) {
    local_98 = 0;
    local_f8 = 0;
  }
  else if (local_80 == '\0') {
    uVar12 = FUN_00d50b00();
    local_f8 = CONCAT71((int7)((ulonglong)uVar12 >> 8),1);
  }
  else {
    local_80 = '\0';
    local_f8 = CONCAT71((int7)((ulonglong)local_88 >> 8),1);
  }
  pVar17 = (pthread_key_t)lVar13;
  if ((local_d0 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_98 == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return unaff_RDI;
  }
  local_d8 = (longlong *)0x0;
  local_130 = 0;
  local_c0 = 0;
LAB_01c99881:
  FUN_01ca8220();
  plVar11 = DAT_027ed420;
  if (DAT_027ed420 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_58 = plVar11;
  local_50[0] = '\0';
  cVar3 = FUN_00d23d70();
  if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar11 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (cVar3 == '\0') {
LAB_01c99ccf:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    FUN_01caddb0();
    plVar11 = local_58;
    lVar13 = DAT_027ed430;
    if (DAT_027ed430 != 0) {
      FUN_00d50b00();
    }
    FUN_01cacbe0();
    local_120 = 0;
    if (local_80 == '\0') {
      if (local_88 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_80 = '\0';
    }
    local_120 = '\x01';
    local_128 = local_88;
    cVar3 = (**(code **)(*plVar11 + 0x50))();
    if ((local_120 != '\0') && (local_128 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if (lVar13 != 0) {
      FUN_00d50b20();
    }
    if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    lVar13 = DAT_027ed460;
    if (cVar3 == '\0') {
      uVar16 = (uint)CONCAT71((int7)((ulonglong)unaff_R13 >> 8),1);
      if (*(char *)(unaff_RSI + 0x2e) == '\0') goto LAB_01c99ccf;
    }
    else {
      uVar16 = 0;
    }
    if (DAT_027ed460 != 0) {
      FUN_00d50b00();
    }
    lVar8 = FUN_01cac500();
    if (lVar13 != 0) {
      FUN_00d50b20();
    }
    lVar13 = DAT_027ed468;
    if (DAT_027ed468 != 0) {
      FUN_00d50b00();
    }
    lVar9 = FUN_01cac500();
    if (lVar13 != 0) {
      FUN_00d50b20();
    }
    lVar13 = DAT_027ed448;
    if (*(char *)(unaff_RSI + 0x2d) != '\0') {
      if (lVar8 == 0) {
        uVar6 = uVar16 & 0xff;
        uVar16 = 1;
        if (lVar9 == local_98) {
          uVar16 = uVar6;
        }
        goto LAB_01c99b30;
      }
      goto LAB_01c99ccf;
    }
    if (lVar8 == 0) {
      if (lVar9 == local_98) goto LAB_01c99b30;
      goto LAB_01c99ccf;
    }
    if (lVar8 != local_c0) goto LAB_01c99ccf;
LAB_01c99b30:
    if (*(char *)(unaff_RSI + 0x2c) == '\0') {
      if (DAT_027ed448 != 0) {
        FUN_00d50b00();
      }
      FUN_01cac790();
      plVar11 = local_58;
      if (local_50[0] == '\0') {
        if (((local_58 != (longlong *)0x0) && (FUN_00d50b00(), local_50[0] != '\0')) &&
           (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_50[0] = '\0';
      }
      if (lVar13 != 0) {
        FUN_00d50b20();
      }
      if (plVar11 != (longlong *)0x0) {
        local_b4 = uVar16;
        if (7 < (int)plVar11[3]) {
          uVar14 = 0;
          do {
            if ((longlong *)*param_1 == (longlong *)0x0) {
LAB_01c9a1d2:
              *(undefined1 *)(unaff_RDI + 1) = 0;
              *unaff_RDI = 0;
              FUN_00d50b20();
              goto LAB_01c99ce1;
            }
            lVar13 = *(longlong *)(plVar11[2] + uVar14 * 8);
            local_50[0] = '\0';
            local_58 = (longlong *)0x0;
            local_40 = 0xffffffff;
            local_38 = 0;
            local_48 = (longlong *)*param_1;
            while( true ) {
              lVar8 = (longlong)(int)local_40;
              iVar18 = (int)local_40 + 1;
              local_40 = CONCAT44(local_40._4_4_,iVar18);
              if (*(int *)((longlong)local_48 + 0xc) <= iVar18) {
                FUN_000be170();
                goto LAB_01c9a1d2;
              }
              local_58 = *(longlong **)(local_48[2] + 8 + lVar8 * 8);
              pvVar7 = _pthread_getspecific((pthread_key_t)local_48[2]);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012f8400();
              if ((local_80 != '\0') && (local_88 != 0)) {
                FUN_00d50b20();
              }
              if (local_88 == lVar13) break;
              if (local_40._4_4_ != 0) {
                if (local_40._4_4_ < 1) {
                  iVar18 = -local_40._4_4_;
                }
                else {
                  local_40 = CONCAT44(local_40._4_4_,(int)local_40 - local_40._4_4_);
                  FUN_00d23690();
                  local_38 = local_38 + local_40._4_4_;
                  iVar18 = 0;
                }
                local_40 = CONCAT44(iVar18,(int)local_40);
              }
            }
            FUN_000be170();
            uVar16 = (int)uVar14 + 1;
            uVar14 = (ulonglong)uVar16;
            iVar18 = (int)plVar11[3];
            iVar15 = iVar18 + 7;
            if (-1 < iVar18) {
              iVar15 = iVar18;
            }
            pVar17 = iVar15 >> 3;
          } while ((int)uVar16 < (int)pVar17);
        }
        FUN_00d50b20();
        uVar16 = local_b4;
      }
    }
    cVar3 = (char)uVar16;
    if (cVar3 == '\0') {
      local_b4 = uVar16;
      if (*(char *)(unaff_RSI + 0x2c) == '\0') {
        local_a8 = (longlong *)FUN_00e8fc40();
        FUN_00d4ff40();
        pVar17 = 0x2572358;
        *local_a8 = (longlong)&DAT_02572358;
        (*DAT_02572370)();
        pvVar7 = _pthread_getspecific(pVar17);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar12 = FUN_01537d40();
        plVar11 = local_58;
        if (local_50[0] == '\0') {
          if (local_58 == (longlong *)0x0) goto LAB_01c9a3e5;
          FUN_00d50b00();
          if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else if (local_58 == (longlong *)0x0) {
LAB_01c9a3e5:
          local_f0 = CONCAT71((int7)((ulonglong)uVar12 >> 8),1);
          uVar23 = extraout_XMM0_Da_00;
          goto LAB_01c9a3ee;
        }
        local_50[0] = '\0';
        local_58 = (longlong *)0x0;
        local_48 = plVar11;
        local_40 = 0xffffffff;
        local_38 = 0;
        local_40._4_4_ = 0;
        while( true ) {
          if (local_40._4_4_ != 0) {
            if (local_40._4_4_ < 1) {
              iVar18 = -local_40._4_4_;
            }
            else {
              iVar18 = (int)local_40 - local_40._4_4_;
              local_40 = CONCAT44(local_40._4_4_,iVar18);
              FUN_00d23690();
              local_38 = local_38 + local_40._4_4_;
              iVar18 = 0;
            }
            local_40 = CONCAT44(iVar18,(int)local_40);
          }
          lVar13 = (longlong)(int)local_40;
          iVar18 = (int)local_40 + 1;
          local_40 = CONCAT44(local_40._4_4_,iVar18);
          if (*(int *)((longlong)local_48 + 0xc) <= iVar18) break;
          lVar8 = local_48[2];
          local_58 = *(longlong **)(lVar8 + 8 + lVar13 * 8);
          pvVar7 = _pthread_getspecific((pthread_key_t)lVar8);
          pVar17 = (pthread_key_t)lVar8;
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar3 = FUN_016670a0();
          if (cVar3 == '\0') {
            pvVar7 = _pthread_getspecific(pVar17);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_016670b0();
            local_88 = CONCAT71(uStack_cf,local_d0);
            if (local_c8 == '\0') {
              if (local_88 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_c8 = '\0';
            }
            local_80 = '\0';
            FUN_00d21140();
            if (local_88 != 0) {
              FUN_00d50b20();
            }
            if ((local_c8 != '\0') && (CONCAT71(uStack_cf,local_d0) != 0)) {
              FUN_00d50b20();
            }
          }
        }
        FUN_0049cb70();
        uVar12 = FUN_00d50b20();
        local_f0 = CONCAT71((int7)((ulonglong)uVar12 >> 8),1);
        uVar23 = extraout_XMM0_Da_01;
      }
      else {
        pvVar7 = _pthread_getspecific(pVar17);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar12 = FUN_012cb480();
        uVar23 = extraout_XMM0_Da;
        if (local_58 == (longlong *)0x0) {
          local_a8 = (longlong *)0x0;
          local_f0 = 0;
        }
        else {
          local_f0 = CONCAT71((int7)((ulonglong)uVar12 >> 8),1);
          local_a8 = local_58;
          if (((local_50[0] == '\0') && (uVar23 = FUN_00d50b00(), local_50[0] != '\0')) &&
             (local_58 != (longlong *)0x0)) {
            uVar23 = FUN_00d50b20();
          }
        }
      }
LAB_01c9a3ee:
      lVar13 = DAT_027ed450;
      if (DAT_027ed450 != 0) {
        uVar23 = FUN_00d50b00();
      }
      local_198 = lVar13;
      local_190 = '\x01';
      uVar23 = FUN_01cac790(uVar23,&local_198);
      plVar11 = local_58;
      if (local_50[0] == '\0') {
        if (((local_58 != (longlong *)0x0) && (uVar23 = FUN_00d50b00(), local_50[0] != '\0')) &&
           (local_58 != (longlong *)0x0)) {
          uVar23 = FUN_00d50b20();
        }
      }
      else {
        local_50[0] = '\0';
      }
      if ((local_190 != '\0') && (local_198 != 0)) {
        uVar23 = FUN_00d50b20();
      }
      lVar13 = DAT_027ed458;
      if (DAT_027ed458 != 0) {
        uVar23 = FUN_00d50b00();
      }
      local_188 = lVar13;
      local_180 = '\x01';
      pplVar22 = &local_58;
      uVar12 = FUN_01cacbe0(uVar23,&local_188);
      plVar10 = local_58;
      uVar12 = CONCAT71((int7)((ulonglong)uVar12 >> 8),DAT_026d0220);
      if ((DAT_026d0220 == '\0') && (uVar12 = ___cxa_guard_acquire(), (int)uVar12 != 0)) {
        _DAT_02789148 = FUN_00d4fe50();
        DAT_02789130 = "GNData";
        _DAT_02789138 = 0x28;
        _DAT_02789140 = FUN_000378a0;
        _DAT_02789150 = 0;
        uRam0000000002789158 = 0;
        _DAT_02789160 = 0;
        uRam0000000002789168 = 0;
        _DAT_02789170 = 0;
        uRam0000000002789178 = 0;
        _DAT_02789180 = 0;
        uRam0000000002789188 = 0;
        _DAT_02789190 = 0;
        uRam0000000002789198 = 0;
        _DAT_027891a0 = 0;
        uRam00000000027891a8 = 0;
        _DAT_027891b0 = 0;
        uRam00000000027891b8 = 0;
        _DAT_027891c0 = 0;
        uRam00000000027891c8 = 0;
        _DAT_027891d0 = 0;
        uRam00000000027891d8 = 0;
        _DAT_027891e0 = 0;
        uRam00000000027891e8 = 0;
        _DAT_027891f0 = 0;
        uVar12 = ___cxa_guard_release();
      }
      if (plVar10 == (longlong *)0x0) {
        pplVar22 = (longlong **)&DAT_02802688;
      }
      else {
        (**(code **)(*plVar10 + 0x360))();
        uVar12 = FUN_00e85ea0();
        if ((char)uVar12 == '\0') {
          pplVar22 = (longlong **)&DAT_02802688;
        }
      }
      plVar10 = *pplVar22;
      if (*(char *)(pplVar22 + 1) == '\0') {
        if (plVar10 != (longlong *)0x0) {
          uVar12 = FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(pplVar22 + 1) = 0;
      }
      if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
        uVar12 = FUN_00d50b20();
      }
      if ((local_180 != '\0') && (local_188 != 0)) {
        uVar12 = FUN_00d50b20();
      }
      local_e4 = (undefined4)CONCAT71((int7)((ulonglong)uVar12 >> 8),1);
      if (plVar11 == (longlong *)0x0) {
LAB_01c9a8bf:
        cVar3 = (char)local_b4;
      }
      else {
        pVar17 = 0xffffffff;
        do {
          pVar17 = pVar17 + 1;
          uVar16 = *(uint *)(plVar11 + 3);
          uVar14 = (ulonglong)uVar16;
          uVar6 = uVar16 + 7;
          if (-1 < (int)uVar16) {
            uVar6 = uVar16;
          }
          if ((int)uVar6 >> 3 <= (int)pVar17) goto LAB_01c9a8bf;
          if (local_a8 == (longlong *)0x0) break;
          lVar13 = *(longlong *)(plVar11[2] + (longlong)(int)pVar17 * 8);
          local_50[0] = '\0';
          local_58 = (longlong *)0x0;
          local_40 = 0xffffffff;
          local_38 = 0;
          local_e8 = 0;
          local_144 = pVar17;
          local_48 = local_a8;
          while( true ) {
            lVar8 = local_88;
            lVar9 = (longlong)(int)local_40;
            iVar18 = (int)local_40 + 1;
            local_40 = CONCAT44(local_40._4_4_,iVar18);
            if (*(int *)((longlong)local_48 + 0xc) <= iVar18) break;
            local_58 = *(longlong **)(local_48[2] + 8 + lVar9 * 8);
            pvVar7 = _pthread_getspecific((pthread_key_t)local_48[2]);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0124c6e0();
            if (local_80 == '\0') {
              if (local_88 != 0) {
                FUN_00d50b00();
                goto LAB_01c9a710;
              }
            }
            else if (local_88 != 0) {
LAB_01c9a710:
              local_80 = '\0';
              local_88 = 0;
              local_70 = -1;
              do {
                do {
                  do {
                    lVar9 = (longlong)local_70;
                    local_70 = local_70 + 1;
                    if (*(int *)(lVar8 + 0xc) <= local_70) goto LAB_01c9a850;
                    local_88 = *(longlong *)(*(longlong *)(lVar8 + 0x10) + 8 + lVar9 * 8);
                  } while ((lVar13 != local_88) || (plVar10 == (longlong *)0x0));
                  iVar18 = (int)plVar10[3];
                  iVar15 = iVar18 + 3;
                  if (-1 < iVar18) {
                    iVar15 = iVar18;
                  }
                  iVar18 = (int)plVar11[3];
                  iVar20 = iVar18 + 7;
                  if (-1 < iVar18) {
                    iVar20 = iVar18;
                  }
                } while (iVar15 >> 2 != iVar20 >> 3);
                iVar18 = *(int *)(plVar10[2] + (longlong)(int)pVar17 * 4);
                pvVar7 = _pthread_getspecific(pVar17);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                uVar12 = FUN_013d8eb0();
              } while (iVar18 != (int)uVar12);
              local_e8 = (uint)CONCAT71((int7)((ulonglong)uVar12 >> 8),1);
LAB_01c9a850:
              FUN_00115190();
              FUN_00d50b20();
            }
            if ((local_e8 & 1) != 0) {
              bVar21 = 1;
              goto LAB_01c9a599;
            }
            if (local_40._4_4_ != 0) {
              if (local_40._4_4_ < 1) {
                iVar18 = -local_40._4_4_;
              }
              else {
                local_40 = CONCAT44(local_40._4_4_,(int)local_40 - local_40._4_4_);
                FUN_00d23690();
                local_38 = local_38 + local_40._4_4_;
                iVar18 = 0;
              }
              local_40 = CONCAT44(iVar18,(int)local_40);
            }
          }
          bVar21 = (byte)local_e8 & 1;
LAB_01c9a599:
          uVar14 = FUN_00115e00();
          pVar17 = local_144;
        } while (bVar21 != 0);
        local_e4 = (undefined4)CONCAT71((int7)(uVar14 >> 8),1);
        cVar3 = '\x01';
        if (*(char *)(unaff_RSI + 0x2c) == '\0') {
          *(undefined1 *)(unaff_RDI + 1) = 0;
          *unaff_RDI = 0;
          local_e4 = 0;
          goto LAB_01c9a8bf;
        }
      }
      if (plVar10 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (plVar11 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (((char)local_f0 != '\0') && (local_a8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((char)local_e4 != '\0') {
        if (cVar3 != '\0') goto LAB_01c99ba3;
        goto LAB_01c99bb2;
      }
    }
    else {
LAB_01c99ba3:
      if (*(char *)(unaff_RSI + 0x28) != '\0') {
        cVar3 = '\0';
      }
LAB_01c99bb2:
      if (cVar3 != '\0') {
        FUN_01ca8220();
        plVar11 = DAT_027ed418;
        if (DAT_027ed418 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        local_58 = plVar11;
        local_50[0] = '\0';
        cVar4 = FUN_00d23d70();
        if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        cVar5 = '\x01';
        if (cVar4 != '\0') {
          FUN_01ca8220();
          plVar10 = DAT_027ed470;
          if (DAT_027ed470 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          local_58 = plVar10;
          local_50[0] = '\0';
          cVar5 = FUN_00d23d70();
          if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar10 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_c8 != '\0') && (CONCAT71(uStack_cf,local_d0) != 0)) {
            FUN_00d50b20();
          }
        }
        if (plVar11 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        if (cVar5 != '\0') goto LAB_01c99ccf;
      }
      if ((char)local_148 == '\0') {
        plVar11 = (longlong *)FUN_00e8fc40();
        FUN_01ca3a10();
        (**(code **)(*plVar11 + 0x18))();
        *unaff_RDI = plVar11;
        *(undefined1 *)(unaff_RDI + 1) = 1;
      }
      else {
        plVar10 = (longlong *)FUN_00e8fc40();
        FUN_0004b090();
        uVar23 = (**(code **)(*plVar10 + 0x18))();
        plVar11 = DAT_027ed418;
        if (cVar3 == '\0') {
          local_138 = 0;
          (**(code **)(*(longlong *)(unaff_RSI + 0x20) + 0x10))();
          FUN_00d50b00();
          local_138 = '\x01';
          local_140 = (longlong *)(unaff_RSI + 0x20);
          uVar23 = FUN_00d1fc70();
          if ((local_138 != '\0') && (local_140 != (longlong *)0x0)) {
            (**(code **)(*local_140 + 0x10))();
            uVar23 = FUN_00d50b20();
          }
          plVar11 = DAT_027ed420;
          if (DAT_027ed420 != (longlong *)0x0) {
            uVar23 = FUN_00d50b00();
          }
          local_178 = plVar11;
          local_170 = '\x01';
          uVar23 = FUN_01ca7f90(uVar23,&local_178);
          local_110 = 0;
          if (local_80 == '\0') {
            if (local_88 != 0) {
              uVar23 = FUN_00d50b00();
            }
          }
          else {
            local_80 = '\0';
          }
          local_110 = '\x01';
          local_118 = local_88;
          pplVar22 = &local_58;
          (**(code **)(*plVar10 + 0x5f8))(uVar23,&local_118);
          plVar11 = local_58;
          if ((DAT_027ed610 == '\0') && (iVar18 = ___cxa_guard_acquire(), iVar18 != 0)) {
            _DAT_027ed560 = FUN_00d4fe50();
            _DAT_027ed548 = "MUPasteboardElementsItem";
            _DAT_027ed550 = 0x30;
            _DAT_027ed558 = FUN_01ca39e0;
            _DAT_027ed568 = 0;
            uRam00000000027ed570 = 0;
            _DAT_027ed578 = 0;
            uRam00000000027ed580 = 0;
            _DAT_027ed588 = 0;
            uRam00000000027ed590 = 0;
            _DAT_027ed598 = 0;
            uRam00000000027ed5a0 = 0;
            _DAT_027ed5a8 = 0;
            uRam00000000027ed5b0 = 0;
            _DAT_027ed5b8 = 0;
            uRam00000000027ed5c0 = 0;
            _DAT_027ed5c8 = 0;
            uRam00000000027ed5d0 = 0;
            _DAT_027ed5d8 = 0;
            uRam00000000027ed5e0 = 0;
            _DAT_027ed5e8 = 0;
            uRam00000000027ed5f0 = 0;
            _DAT_027ed5f8 = 0;
            uRam00000000027ed600 = 0;
            _DAT_027ed608 = 0;
            ___cxa_guard_release();
          }
          if (plVar11 == (longlong *)0x0) {
LAB_01c9aa18:
            pplVar22 = (longlong **)&DAT_02802688;
          }
          else {
            (**(code **)(*plVar11 + 0x360))();
            cVar3 = FUN_00e85ea0();
            if (cVar3 == '\0') goto LAB_01c9aa18;
          }
          plVar11 = *pplVar22;
          if (plVar11 == (longlong *)0x0) {
            plVar11 = (longlong *)0x0;
            bVar2 = false;
          }
          else {
            if (*(char *)(pplVar22 + 1) == '\0') {
              FUN_00d50b00();
            }
            else {
              *(undefined1 *)(pplVar22 + 1) = 0;
            }
            bVar2 = true;
          }
          if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_110 != '\0') && (local_118 != 0)) {
            FUN_00d50b20();
          }
          if ((local_80 != '\0') && (local_88 != 0)) {
            FUN_00d50b20();
          }
          if ((local_170 != '\0') && (local_178 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (DAT_027ed418 != (longlong *)0x0) {
            uVar23 = FUN_00d50b00();
          }
          local_168 = plVar11;
          local_160 = '\x01';
          uVar23 = FUN_01ca7f90(uVar23,&local_168);
          local_100 = 0;
          if (local_80 == '\0') {
            if (local_88 != 0) {
              uVar23 = FUN_00d50b00();
            }
          }
          else {
            local_80 = '\0';
          }
          local_100 = '\x01';
          local_108 = local_88;
          pplVar22 = &local_58;
          (**(code **)(*plVar10 + 0x5f8))(uVar23,&local_108);
          plVar11 = local_58;
          if ((DAT_027ed610 == '\0') && (iVar18 = ___cxa_guard_acquire(), iVar18 != 0)) {
            _DAT_027ed560 = FUN_00d4fe50();
            _DAT_027ed548 = "MUPasteboardElementsItem";
            _DAT_027ed550 = 0x30;
            _DAT_027ed558 = FUN_01ca39e0;
            _DAT_027ed568 = 0;
            uRam00000000027ed570 = 0;
            _DAT_027ed578 = 0;
            uRam00000000027ed580 = 0;
            _DAT_027ed588 = 0;
            uRam00000000027ed590 = 0;
            _DAT_027ed598 = 0;
            uRam00000000027ed5a0 = 0;
            _DAT_027ed5a8 = 0;
            uRam00000000027ed5b0 = 0;
            _DAT_027ed5b8 = 0;
            uRam00000000027ed5c0 = 0;
            _DAT_027ed5c8 = 0;
            uRam00000000027ed5d0 = 0;
            _DAT_027ed5d8 = 0;
            uRam00000000027ed5e0 = 0;
            _DAT_027ed5e8 = 0;
            uRam00000000027ed5f0 = 0;
            _DAT_027ed5f8 = 0;
            uRam00000000027ed600 = 0;
            _DAT_027ed608 = 0;
            ___cxa_guard_release();
          }
          if (plVar11 == (longlong *)0x0) {
LAB_01c9a97d:
            pplVar22 = (longlong **)&DAT_02802688;
          }
          else {
            (**(code **)(*plVar11 + 0x360))();
            cVar3 = FUN_00e85ea0();
            if (cVar3 == '\0') goto LAB_01c9a97d;
          }
          plVar11 = *pplVar22;
          if (plVar11 == (longlong *)0x0) {
            plVar11 = (longlong *)0x0;
            bVar2 = false;
          }
          else {
            if (*(char *)(pplVar22 + 1) == '\0') {
              FUN_00d50b00();
            }
            else {
              *(undefined1 *)(pplVar22 + 1) = 0;
            }
            bVar2 = true;
          }
          if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_100 != '\0') && (local_108 != 0)) {
            FUN_00d50b20();
          }
          if ((local_80 != '\0') && (local_88 != 0)) {
            FUN_00d50b20();
          }
          if ((local_160 != '\0') && (local_168 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        if (plVar11 == (longlong *)0x0) {
          *(undefined1 *)(unaff_RDI + 1) = 0;
        }
        else {
          lVar13 = plVar11[2];
          if (lVar13 != 0) {
            FUN_00d50b00();
          }
          local_150 = '\x01';
          local_158 = lVar13;
          FUN_01298e30();
          if ((local_150 != '\0') && (local_158 != 0)) {
            FUN_00d50b20();
          }
          *(undefined1 *)(unaff_RDI + 1) = 0;
          if (!bVar2) {
            FUN_00d50b00();
          }
        }
        *unaff_RDI = plVar11;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        FUN_00d50b20();
      }
    }
  }
LAB_01c99ce1:
  if (((char)local_f8 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if (cVar1 == '\0' && local_d8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_01c99d17:
  if (((char)local_130 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


