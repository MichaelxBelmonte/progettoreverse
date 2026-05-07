// Function: FUN_01a495b0
// Address: 01a495b0
// Size: 4909 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01a4a62e) */
/* WARNING: Removing unreachable block (ram,0x01a4a63e) */
/* WARNING: Removing unreachable block (ram,0x01a4a1ec) */
/* WARNING: Removing unreachable block (ram,0x01a4a1f8) */
/* WARNING: Removing unreachable block (ram,0x01a4a232) */
/* WARNING: Removing unreachable block (ram,0x01a4a242) */

void FUN_01a495b0(double param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  void *pvVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong **pplVar8;
  longlong *plVar9;
  undefined4 in_ECX;
  pthread_key_t pVar10;
  undefined *puVar11;
  longlong lVar12;
  longlong *plVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined7 uVar17;
  bool bVar18;
  undefined8 uVar19;
  undefined8 extraout_XMM0_Qa;
  double dVar20;
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
  longlong *local_158;
  char local_150;
  longlong *local_148;
  char local_140;
  undefined4 local_134;
  longlong local_130;
  char local_128;
  double local_120;
  longlong *local_118;
  char local_110;
  code *local_108;
  undefined8 *local_100;
  undefined8 local_f8;
  longlong *local_f0;
  longlong *local_e8;
  longlong *local_d8;
  longlong *local_b8;
  char local_b0;
  longlong local_a8;
  undefined8 local_a0;
  int local_98;
  ulonglong local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  undefined8 local_70;
  int local_68;
  longlong *local_60;
  longlong *local_58;
  char local_50 [8];
  longlong *local_48;
  undefined8 local_40;
  int local_38;
  
  local_134 = in_ECX;
  local_120 = param_1;
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar11 = &DAT_02572358;
  *puVar4 = &DAT_02572358;
  local_108 = DAT_02572370;
  (*DAT_02572370)();
  local_100 = puVar4;
  FUN_01a46820(local_120);
  pVar10 = (pthread_key_t)puVar11;
  uVar15 = *(uint *)(*param_2 + 0xc);
  uVar16 = (ulonglong)uVar15;
  if (0 < (int)uVar15) {
    while( true ) {
      uVar15 = uVar15 - 1;
      pvVar5 = _pthread_getspecific((pthread_key_t)puVar11);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01266fe0();
      pvVar5 = _pthread_getspecific((pthread_key_t)puVar11);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar7 = *(longlong *)(*(longlong *)(*param_2 + 0x10) + (ulonglong)uVar15 * 8);
      local_128 = 0;
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      local_128 = '\x01';
      local_130 = lVar7;
      FUN_012ebc80();
      plVar6 = local_88;
      if ((char)local_80 == '\0') {
        if (((local_88 != (longlong *)0x0) && (FUN_00d50b00(), (char)local_80 != '\0')) &&
           (local_88 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_80._0_1_ = '\0';
      }
      if ((local_128 != '\0') && (local_130 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar6 != (longlong *)0x0) {
        if (*(int *)((longlong)plVar6 + 0xc) != 0) {
          FUN_00d23620();
        }
        FUN_00d50b20();
      }
      pVar10 = (pthread_key_t)puVar11;
      if ((longlong)uVar16 < 2) break;
      uVar16 = uVar16 - 1;
    }
  }
  FUN_01a47310(local_120);
  plVar6 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  uVar19 = (**(code **)(*plVar6 + 0x18))();
  local_e8 = plVar6;
  if (local_100 == (undefined8 *)0x0) {
    local_90 = 0;
    local_60 = (longlong *)0x0;
  }
  else {
    local_80._0_1_ = '\0';
    local_88 = (longlong *)0x0;
    local_78 = local_100;
    local_70 = 0xffffffff;
    local_68 = 0;
    local_90 = 0;
    local_60 = (longlong *)0x0;
    local_70._4_4_ = 0;
    while( true ) {
      if (local_70._4_4_ != 0) {
        if (local_70._4_4_ < 1) {
          iVar14 = -local_70._4_4_;
        }
        else {
          iVar14 = (int)local_70 - local_70._4_4_;
          local_70 = CONCAT44(local_70._4_4_,iVar14);
          uVar19 = FUN_00d23690();
          local_68 = local_68 + local_70._4_4_;
          iVar14 = 0;
        }
        local_70 = CONCAT44(iVar14,(int)local_70);
      }
      lVar7 = (longlong)(int)local_70;
      iVar14 = (int)local_70 + 1;
      local_70 = CONCAT44(local_70._4_4_,iVar14);
      if (*(int *)((longlong)local_78 + 0xc) <= iVar14) break;
      local_88 = *(longlong **)(local_78[2] + 8 + lVar7 * 8);
      local_b8 = (longlong *)((ulonglong)local_b8 & 0xffffffffffffff00);
      pVar10 = (pthread_key_t)local_78[2];
      if (local_88[2] == 0) {
        if (local_88[3] == 0) {
          plVar6 = (longlong *)0x0;
        }
        else {
          pvVar5 = _pthread_getspecific(pVar10);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar19 = FUN_013df480();
          plVar6 = local_58;
          if (local_58 != (longlong *)0x0) {
            pplVar8 = &local_b8;
            if (local_50[0] != '\0') {
              local_b8 = (longlong *)CONCAT71(local_b8._1_7_,1);
              pplVar8 = (longlong **)local_50;
            }
            *(undefined1 *)pplVar8 = 0;
            if (local_50[0] != '\0') {
              uVar19 = FUN_00d50b20();
            }
          }
        }
      }
      else {
        pvVar5 = _pthread_getspecific(pVar10);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar19 = FUN_013df480();
        plVar6 = local_58;
        if (local_58 != (longlong *)0x0) {
          pplVar8 = &local_b8;
          if (local_50[0] != '\0') {
            local_b8 = (longlong *)CONCAT71(local_b8._1_7_,1);
            pplVar8 = (longlong **)local_50;
          }
          *(undefined1 *)pplVar8 = 0;
          if (local_50[0] != '\0') {
            uVar19 = FUN_00d50b20();
          }
        }
      }
      local_1b0 = '\0';
      local_1b8 = plVar6;
      FUN_01a4b3b0(uVar19,&local_1b8);
      plVar9 = local_60;
      uVar17 = (undefined7)(uVar16 >> 8);
      if (local_58 == local_60) {
        if (((char)local_90 == '\0') && (local_58 != (longlong *)0x0)) {
          if (local_50[0] != '\0') goto LAB_01a49a58;
          uVar16 = CONCAT71(uVar17,1);
          FUN_00d50b00();
        }
        else {
          uVar16 = local_90 & 0xffffffff;
        }
LAB_01a49ac0:
        if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        plVar9 = local_58;
        if (local_50[0] == '\0') {
          if (local_58 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          uVar16 = CONCAT71(uVar17,1);
          if (((char)local_90 != '\0') && (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01a49ac0;
        }
        if (((char)local_90 != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_01a49a58:
        local_50[0] = '\0';
        uVar16 = CONCAT71(uVar17,1);
      }
      if ((local_1b0 != '\0') && (local_1b8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar9 == (longlong *)0x0) {
        plVar9 = (longlong *)FUN_00e8fc40();
        FUN_00d4ff40();
        *plVar9 = (longlong)&DAT_02572358;
        uVar19 = (*local_108)();
        local_1a0 = '\0';
        local_190 = '\0';
        local_1a8 = plVar9;
        local_198 = plVar6;
        local_60 = plVar9;
        uVar19 = FUN_01a4b460(uVar19,&local_198);
        if ((local_190 != '\0') && (local_198 != (longlong *)0x0)) {
          uVar19 = FUN_00d50b20();
        }
        local_90 = CONCAT71((int7)((ulonglong)uVar19 >> 8),1);
        if ((local_1a0 != '\0') && (local_1a8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_90 = uVar16 & 0xffffffff;
        local_60 = plVar9;
      }
      local_58 = local_88;
      local_50[0] = '\0';
      uVar19 = FUN_00d21140();
      if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
        uVar19 = FUN_00d50b20();
      }
      if (((char)local_b8 != '\0') && (plVar6 != (longlong *)0x0)) {
        uVar19 = FUN_00d50b20();
      }
    }
    plVar6 = local_78;
    FUN_01954b60();
    pVar10 = (pthread_key_t)plVar6;
  }
  FUN_01a58dc0();
  cVar2 = FUN_019a9840();
  if (((char)local_80 != '\0') && (local_88 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 == '\0') {
    local_f8 = 0;
    local_d8 = (longlong *)0x0;
  }
  else {
    FUN_01a58dc0();
    (**(code **)(*local_58 + 0xe58))();
    local_d8 = local_88;
    plVar6 = local_88;
    if (local_88 == (longlong *)0x0) {
      local_d8 = (longlong *)0x0;
      local_f8 = 0;
    }
    else if ((char)local_80 == '\0') {
      uVar19 = FUN_00d50b00();
      local_f8 = CONCAT71((int7)((ulonglong)uVar19 >> 8),1);
      if (((char)local_80 != '\0') && (local_88 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_80._0_1_ = '\0';
      local_f8 = CONCAT71((int7)((ulonglong)local_88 >> 8),1);
    }
    pVar10 = (pthread_key_t)plVar6;
    if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00c9fe20();
  plVar6 = local_88;
  local_58 = (longlong *)CONCAT71(local_58._1_7_,(char)local_80);
  pplVar8 = &local_58;
  if ((char)local_80 != '\0') {
    pplVar8 = &local_80;
  }
  *(undefined1 *)pplVar8 = 0;
  if (((char)local_80 != '\0') && (local_88 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_f0 = plVar6;
  if (((char)local_58 == '\0') && (plVar6 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  plVar9 = (longlong *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar9 = (longlong)&DAT_02572358;
  (*local_108)();
  FUN_01a58dc0();
  uVar19 = (**(code **)(*local_b8 + 0xe10))();
  plVar6 = local_58;
  if (local_50[0] == '\0') {
    if (local_58 != (longlong *)0x0) {
      uVar19 = FUN_00d50b00();
    }
  }
  else {
    local_50[0] = '\0';
  }
  local_88 = plVar6;
  local_80._0_1_ = '\0';
  uVar19 = FUN_00d214d0(uVar19,*(undefined4 *)((longlong)plVar9 + 0xc));
  if (((char)local_80 != '\0') && (local_88 != (longlong *)0x0)) {
    uVar19 = FUN_00d50b20();
  }
  if (plVar6 != (longlong *)0x0) {
    uVar19 = FUN_00d50b20();
  }
  if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
    uVar19 = FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
    uVar19 = FUN_00d50b20();
  }
  local_108 = (code *)0x0;
  if (*(int *)((longlong)local_f0 + 0xc) == 1) {
    FUN_00d23310();
    plVar6 = local_88;
    pplVar8 = &local_80;
    if ((char)local_80 == '\0') {
      pplVar8 = &local_58;
    }
    local_58 = (longlong *)CONCAT71(local_58._1_7_,(char)local_80);
    *(undefined1 *)pplVar8 = 0;
    if (((char)local_80 != '\0') && (local_88 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific(pVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar19 = FUN_01326de0();
    local_108 = (code *)CONCAT71((int7)((ulonglong)uVar19 >> 8),(int)uVar19 != 3);
    uVar19 = extraout_XMM0_Qa;
    if (((char)local_58 != '\0') && (plVar6 != (longlong *)0x0)) {
      uVar19 = FUN_00d50b20();
    }
  }
  local_80._0_1_ = '\0';
  local_88 = (longlong *)0x0;
  local_78 = local_f0;
  local_70._0_4_ = -1;
  local_70._4_4_ = 0;
  local_68 = 0;
  while( true ) {
    if (local_70._4_4_ != 0) {
      if (local_70._4_4_ < 1) {
        local_70._4_4_ = -local_70._4_4_;
      }
      else {
        local_70._0_4_ = (int)local_70 - local_70._4_4_;
        FUN_00d23690(uVar19,local_70._4_4_);
        local_68 = local_68 + local_70._4_4_;
        local_70._4_4_ = 0;
      }
    }
    lVar7 = (longlong)(int)local_70;
    local_70._0_4_ = (int)local_70 + 1;
    if (*(int *)((longlong)local_78 + 0xc) <= (int)local_70) break;
    lVar12 = local_78[2];
    local_88 = *(longlong **)(lVar12 + 8 + lVar7 * 8);
    FUN_01a58dc0();
    pVar10 = (pthread_key_t)lVar12;
    cVar2 = (**(code **)((longlong)&dylib_command_00001220.dylib.current_version + *local_58))();
    bVar18 = true;
    if (cVar2 == '\0') {
      pvVar5 = _pthread_getspecific(pVar10);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar14 = FUN_01326de0();
      bVar18 = iVar14 != 3;
    }
    if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_188 = local_88;
    local_180 = '\0';
    FUN_01a4b3b0();
    plVar6 = local_58;
    if (local_50[0] == '\0') {
      if (((local_58 != (longlong *)0x0) && (FUN_00d50b00(), local_50[0] != '\0')) &&
         (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_50[0] = '\0';
    }
    if ((local_180 != '\0') && (local_188 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar6 != (longlong *)0x0) {
      local_50[0] = '\0';
      local_58 = (longlong *)0x0;
      local_48 = plVar6;
      local_40 = 0xffffffff;
      local_38 = 0;
      iVar14 = 0;
      while( true ) {
        iVar3 = 0;
        if (iVar14 != 0) {
          if (iVar14 < 1) {
            iVar3 = -iVar14;
          }
          else {
            local_40 = CONCAT44(local_40._4_4_,(int)local_40 - iVar14);
            FUN_00d23690();
            local_38 = local_38 + local_40._4_4_;
            iVar3 = 0;
          }
          local_40 = CONCAT44(iVar3,(int)local_40);
        }
        lVar7 = (longlong)(int)local_40;
        iVar14 = (int)local_40 + 1;
        local_40 = CONCAT44(local_40._4_4_,iVar14);
        if (*(int *)((longlong)local_48 + 0xc) <= iVar14) break;
        local_58 = *(longlong **)(local_48[2] + 8 + lVar7 * 8);
        iVar14 = iVar3;
        if (local_58[5] != 0) {
          local_b0 = '\0';
          local_b8 = (longlong *)0x0;
          local_a0 = 0xffffffff;
          local_98 = 0;
          local_a0._4_4_ = 0;
          local_a8 = local_58[5];
          while( true ) {
            if (local_a0._4_4_ != 0) {
              if (local_a0._4_4_ < 1) {
                iVar14 = -local_a0._4_4_;
              }
              else {
                iVar14 = (int)local_a0 - local_a0._4_4_;
                local_a0 = CONCAT44(local_a0._4_4_,iVar14);
                FUN_00d23690();
                local_98 = local_98 + local_a0._4_4_;
                iVar14 = 0;
              }
              local_a0 = CONCAT44(iVar14,(int)local_a0);
            }
            lVar7 = (longlong)(int)local_a0;
            iVar14 = (int)local_a0 + 1;
            local_a0 = CONCAT44(local_a0._4_4_,iVar14);
            if (*(int *)(local_a8 + 0xc) <= iVar14) break;
            local_b8 = *(longlong **)(*(longlong *)(local_a8 + 0x10) + 8 + lVar7 * 8);
            cVar2 = FUN_00d23d70();
            if (cVar2 != '\0') {
              FUN_00d23f50();
            }
          }
          FUN_001159b0();
          iVar14 = local_40._4_4_;
        }
      }
      FUN_01954b60();
      pVar10 = (pthread_key_t)lVar7;
    }
    pvVar5 = _pthread_getspecific(pVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_178 = local_88;
    local_170 = '\0';
    FUN_01a4b3b0();
    plVar13 = local_58;
    local_110 = 0;
    if (local_50[0] == '\0') {
      if (local_58 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50[0] = '\0';
    }
    local_110 = '\x01';
    local_118 = plVar13;
    uVar19 = FUN_01388130(bVar18);
    if ((local_110 != '\0') && (local_118 != (longlong *)0x0)) {
      uVar19 = FUN_00d50b20();
    }
    if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
      uVar19 = FUN_00d50b20();
    }
    if ((local_170 != '\0') && (local_178 != (longlong *)0x0)) {
      uVar19 = FUN_00d50b20();
    }
    if (plVar6 != (longlong *)0x0) {
      local_50[0] = '\0';
      local_58 = (longlong *)0x0;
      local_48 = plVar6;
      local_40 = 0xffffffff;
      local_38 = 0;
      local_40._4_4_ = 0;
      while( true ) {
        if (local_40._4_4_ != 0) {
          if (local_40._4_4_ < 1) {
            iVar14 = -local_40._4_4_;
          }
          else {
            iVar14 = (int)local_40 - local_40._4_4_;
            local_40 = CONCAT44(local_40._4_4_,iVar14);
            FUN_00d23690();
            local_38 = local_38 + local_40._4_4_;
            iVar14 = 0;
          }
          local_40 = CONCAT44(iVar14,(int)local_40);
        }
        lVar7 = (longlong)(int)local_40;
        iVar14 = (int)local_40 + 1;
        local_40 = CONCAT44(local_40._4_4_,iVar14);
        if (*(int *)((longlong)local_48 + 0xc) <= iVar14) break;
        local_58 = *(longlong **)(local_48[2] + 8 + lVar7 * 8);
        if ((char)local_108 == '\0') {
          plVar13 = (longlong *)local_58[5];
          if (plVar13 != (longlong *)0x0) goto LAB_01a4a4e9;
          bVar18 = true;
          plVar13 = (longlong *)0x0;
LAB_01a4a4fb:
          local_b0 = '\0';
          local_b8 = plVar13;
          FUN_00d23480();
          if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (!bVar18) {
            FUN_00d50b20();
          }
          if (local_58[5] != 0) {
            local_b0 = '\0';
            local_b8 = (longlong *)0x0;
            local_a0 = 0xffffffff;
            local_98 = 0;
            local_a0._4_4_ = 0;
            local_a8 = local_58[5];
            while( true ) {
              if (local_a0._4_4_ != 0) {
                if (local_a0._4_4_ < 1) {
                  iVar14 = -local_a0._4_4_;
                }
                else {
                  iVar14 = (int)local_a0 - local_a0._4_4_;
                  local_a0 = CONCAT44(local_a0._4_4_,iVar14);
                  FUN_00d23690();
                  local_98 = local_98 + local_a0._4_4_;
                  iVar14 = 0;
                }
                local_a0 = CONCAT44(iVar14,(int)local_a0);
              }
              lVar7 = (longlong)(int)local_a0;
              iVar14 = (int)local_a0 + 1;
              local_a0 = CONCAT44(local_a0._4_4_,iVar14);
              if (*(int *)(local_a8 + 0xc) <= iVar14) break;
              local_b8 = *(longlong **)(*(longlong *)(local_a8 + 0x10) + 8 + lVar7 * 8);
              FUN_00d23f50();
            }
            FUN_001159b0();
          }
        }
        else {
          plVar13 = (longlong *)local_58[5];
          if ((*(int *)((longlong)plVar13 + 0xc) != 2) || (*(int *)((longlong)plVar6 + 0xc) != 1)) {
LAB_01a4a4e9:
            FUN_00d50b00();
            bVar18 = false;
            goto LAB_01a4a4fb;
          }
          puVar4 = (undefined8 *)plVar13[2];
          plVar13 = (longlong *)*puVar4;
          if (plVar13 != (longlong *)0x0) {
            FUN_00d50b00();
            puVar4 = *(undefined8 **)(local_58[5] + 0x10);
          }
          plVar1 = (longlong *)puVar4[1];
          if (plVar1 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          pVar10 = (pthread_key_t)puVar4;
          FUN_00d216c0();
          pvVar5 = _pthread_getspecific(pVar10);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_120 = (double)FUN_0125a280();
          pvVar5 = _pthread_getspecific(pVar10);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar20 = (double)FUN_0125a280();
          if (dVar20 <= local_120) {
            local_b0 = '\0';
            local_b8 = plVar1;
            FUN_00d21140();
            if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_b0 = '\0';
            local_b8 = plVar13;
            FUN_00d21140();
            if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          if (plVar1 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if (plVar13 != (longlong *)0x0) {
            FUN_00d50b20();
          }
        }
      }
      FUN_01954b60();
      uVar19 = FUN_00d50b20();
    }
  }
  FUN_00115190();
  plVar6 = plVar9;
  if (local_d8 == (longlong *)0x0) goto LAB_01a4a83c;
  FUN_01a58dc0();
  local_160 = '\0';
  local_158 = local_d8;
  local_150 = '\0';
  local_168 = plVar9;
  (**(code **)(*local_58 + 0xe50))(&local_158,&local_168);
  plVar6 = local_88;
  if (plVar9 == local_88) {
LAB_01a4a7e0:
    plVar6 = plVar9;
    if ((char)local_80 != '\0') {
LAB_01a4a7e6:
      if (local_88 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  else {
    if ((char)local_80 == '\0') {
      if (local_88 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      if (plVar9 != (longlong *)0x0) {
        FUN_00d50b20();
        plVar9 = plVar6;
        goto LAB_01a4a7e0;
      }
      if ((char)local_80 == '\0') goto LAB_01a4a7f4;
      goto LAB_01a4a7e6;
    }
    if (plVar9 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    local_80._0_1_ = '\0';
  }
LAB_01a4a7f4:
  if ((local_150 != '\0') && (local_158 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_160 != '\0') && (local_168 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_01a4a83c:
  FUN_01a58dc0();
  (**(code **)(*local_88 + 0xda0))();
  if (((char)local_80 != '\0') && (local_88 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  uVar19 = FUN_01a58dc0();
  local_140 = '\0';
  local_148 = plVar6;
  (**(code **)(*local_88 + 0xdb8))(uVar19,1);
  if ((local_140 != '\0') && (local_148 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_80 != '\0') && (local_88 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (local_f0 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_f8 != '\0') && (local_d8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_90 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_e8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (local_100 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}


