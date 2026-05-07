// Function: FUN_00d49aa0
// Address: 00d49aa0
// Size: 2899 bytes
// Class: GNList
// String references:
//   "%@%@"
//   "%s %@"
//   "%s"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d49aa0(undefined4 param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  longlong **pplVar9;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar10;
  bool bVar11;
  float fVar12;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar13;
  float fVar14;
  longlong local_198;
  char local_190;
  longlong local_188;
  char local_180;
  longlong local_178;
  char local_170;
  longlong local_168;
  char local_160;
  longlong local_158;
  char local_150;
  longlong local_148;
  char local_140;
  longlong local_138;
  char local_130;
  undefined4 local_128;
  undefined2 local_124;
  longlong local_120;
  longlong *local_118;
  longlong *local_110;
  char local_108;
  longlong *local_100;
  uint local_f8;
  longlong **local_f0;
  longlong local_e8;
  char local_e0;
  undefined7 uStack_df;
  char local_d8;
  longlong *local_d0;
  longlong *local_c8;
  char local_c0;
  char cStack_b9;
  longlong *local_b8;
  char local_b0;
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  local_d0 = (longlong *)CONCAT44(local_d0._4_4_,param_1);
  FUN_00d4ab90();
  lVar1 = DAT_02727800;
  if (local_b0 == '\0') {
    if (local_b8 == (longlong *)0x0) goto LAB_00d49b37;
    FUN_00d50b00();
    *unaff_RDI = local_b8;
  }
  else if (local_b8 == (longlong *)0x0) {
LAB_00d49b37:
    if ((local_d0._0_4_ == DAT_02391074) && (!NAN(local_d0._0_4_) && !NAN(DAT_02391074))) {
      if (DAT_02727800 != 0) {
        FUN_00d50b00();
      }
      lVar2 = DAT_0277dca8;
      if (DAT_0277dca8 != 0) {
        FUN_00d50b00();
      }
      local_198 = lVar2;
      local_190 = '\x01';
      local_188 = 0;
      local_180 = '\0';
      FUN_00d31230(&local_188,&local_198);
      if ((local_180 != '\0') && (local_188 != 0)) {
        FUN_00d50b20();
      }
      if ((local_190 != '\0') && (local_198 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      goto LAB_00d49b0e;
    }
    if ((local_d0._0_4_ == DAT_02391078) && (!NAN(local_d0._0_4_) && !NAN(DAT_02391078))) {
      if (DAT_02727800 != 0) {
        FUN_00d50b00();
      }
      lVar2 = DAT_0277dcb0;
      local_178 = lVar1;
      local_170 = '\x01';
      if (DAT_0277dcb0 != 0) {
        FUN_00d50b00();
      }
      local_168 = lVar2;
      local_160 = '\x01';
      local_158 = 0;
      local_150 = '\0';
      FUN_00d31230(&local_158,&local_168);
      if ((local_150 != '\0') && (local_158 != 0)) {
        FUN_00d50b20();
      }
      if ((local_160 != '\0') && (local_168 != 0)) {
        FUN_00d50b20();
      }
      if ((local_170 != '\0') && (local_178 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_00d49b0e;
    }
    fVar12 = *(float *)(unaff_RSI + 0x10);
    if (*(float *)(unaff_RSI + 0x10) <= local_d0._0_4_) {
      fVar12 = local_d0._0_4_;
    }
    fVar14 = *(float *)(unaff_RSI + 0x14);
    if (fVar12 <= *(float *)(unaff_RSI + 0x14)) {
      fVar14 = fVar12;
    }
    uVar5 = *(uint *)(unaff_RSI + 0xc);
    if (*(char *)(unaff_RSI + 0x21) == '\0') {
LAB_00d49d3c:
      pcVar8 = (char *)(ulonglong)uVar5;
    }
    else {
      if ((fVar14 == 0.0) && (!NAN(fVar14))) {
        uVar5 = uVar5 - 1;
        goto LAB_00d49d3c;
      }
      for (fVar12 = (float)(_DAT_02390140 & (uint)fVar14); fVar12 <= DAT_02394254;
          fVar12 = fVar12 * DAT_023908ec) {
        uVar5 = uVar5 + 1;
      }
      if ((fVar12 < DAT_02390124) || (uVar5 == 0)) goto LAB_00d49d3c;
      do {
        fVar12 = fVar12 / DAT_023908ec;
        pcVar8 = (char *)(ulonglong)(uVar5 - 1);
        if (fVar12 < DAT_02390124) break;
        bVar11 = uVar5 != 1;
        uVar5 = uVar5 - 1;
      } while (bVar11);
    }
    pcVar7 = (char *)0x0;
    if (-1 < (int)pcVar8) {
      pcVar7 = pcVar8;
    }
    local_124 = 0x66;
    local_128 = 0x392e3025;
    if ((int)pcVar7 < 9) {
      local_128 = CONCAT13((char)pcVar7 + '0',0x2e3025);
    }
    pplVar9 = &local_b8;
    iVar6 = (int)&local_128;
    FUN_00e7df20(SUB84((double)(float)(~-(uint)(fVar14 < 0.0) & (uint)fVar14 |
                                      (_DAT_023945e0 ^ (uint)fVar14) & -(uint)(fVar14 < 0.0)),0));
    if (((*(char *)(unaff_RSI + 0x20) != '\0') && (*(int *)(unaff_RSI + 0xc) != 0)) &&
       (pcVar8 = _strchr(pcVar8,iVar6), pcVar8 != (char *)0x0)) {
      while( true ) {
        iVar6 = FUN_00e7dde0();
        if ((iVar6 < 2) ||
           ((iVar6 = FUN_00e7dde0(), (&cStack_b9)[iVar6] != '0' &&
            (iVar6 = FUN_00e7dde0(), (&cStack_b9)[iVar6] != '.')))) goto LAB_00d49ed0;
        iVar6 = FUN_00e7dde0();
        if ((&cStack_b9)[iVar6] == '.') break;
        iVar6 = FUN_00e7dde0();
        (&cStack_b9)[iVar6] = '\0';
      }
      iVar6 = FUN_00e7dde0();
      (&cStack_b9)[iVar6] = '\0';
    }
LAB_00d49ed0:
    do {
      cVar4 = *(char *)pplVar9;
      if (cVar4 == '\0') break;
      pplVar9 = (longlong **)((longlong)pplVar9 + 1);
    } while (8 < (byte)(cVar4 - 0x31U));
    if ((*(longlong *)(unaff_RSI + 0x18) == 0) || (iVar6 = FUN_00d8c7a0(), iVar6 == 0)) {
      local_f8 = 1;
      local_100 = (longlong *)&DAT_02576520;
      local_f0 = &local_b8;
      FUN_00d8cb40();
      local_d0 = local_c8;
      if (local_c8 == (longlong *)0x0) {
        local_d0 = local_b8;
      }
      else if (((local_c0 == '\0') && (FUN_00d50b00(), local_c0 != '\0')) &&
              (local_c8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      lVar1 = *(longlong *)(unaff_RSI + 0x18);
      local_f8 = 2;
      local_f0 = &local_b8;
      local_100 = (longlong *)&DAT_025764e8;
      local_e0 = 0;
      uVar13 = extraout_XMM0_Da;
      if (lVar1 != 0) {
        uVar13 = FUN_00d50b00();
      }
      local_e0 = '\x01';
      local_e8 = lVar1;
      FUN_00d8cb40(uVar13,&local_100);
      local_d0 = local_c8;
      if (local_c8 == (longlong *)0x0) {
        local_d0 = local_b8;
      }
      else if (local_c0 == '\0') {
        FUN_00d50b00();
        if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_c0 = '\0';
      }
      local_100 = (longlong *)&DAT_025764e8;
      if ((local_e0 != '\0') && (local_e8 != 0)) {
        FUN_00d50b20();
      }
    }
    plVar3 = local_d0;
    if (((*(longlong *)(unaff_RSI + 0x28) == 0) || (fVar14 <= 0.0)) || (cVar4 == '\0')) {
      if (((*(longlong *)(unaff_RSI + 0x30) != 0) && (fVar14 < 0.0)) && (cVar4 != '\0')) {
        local_118 = local_d0;
        local_120 = *(longlong *)(unaff_RSI + 0x30);
        uVar13 = FUN_00083ea0(2,&local_118);
        FUN_00d8cb40(uVar13,&local_100);
        plVar10 = plVar3;
        if (local_c8 == plVar3) {
LAB_00d4a29b:
          if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          plVar10 = local_c8;
          if (local_c0 == '\0') {
            if (local_c8 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            if (plVar3 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            goto LAB_00d4a29b;
          }
          if (plVar3 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          local_c0 = '\0';
        }
        local_100 = (longlong *)&DAT_0253d630;
        if ((local_d8 != '\0') && (CONCAT71(uStack_df,local_e0) != 0)) {
          FUN_00d50b20();
        }
        local_100 = &DAT_024c5048;
        local_d0 = plVar10;
        if (((char)local_e8 != '\0') && (local_f0 != (longlong **)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_118 = local_d0;
      local_120 = *(longlong *)(unaff_RSI + 0x28);
      uVar13 = FUN_00083ea0(2,&local_118);
      FUN_00d8cb40(uVar13,&local_100);
      plVar10 = plVar3;
      if (local_c8 == plVar3) {
LAB_00d4a221:
        if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        plVar10 = local_c8;
        if (local_c0 == '\0') {
          if (local_c8 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          if (plVar3 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          goto LAB_00d4a221;
        }
        if (plVar3 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        local_c0 = '\0';
      }
      local_100 = (longlong *)&DAT_0253d630;
      if ((local_d8 != '\0') && (CONCAT71(uStack_df,local_e0) != 0)) {
        FUN_00d50b20();
      }
      local_100 = &DAT_024c5048;
      local_d0 = plVar10;
      if (((char)local_e8 != '\0') && (local_f0 != (longlong **)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d4acc0();
    plVar10 = local_d0;
    plVar3 = local_100;
    local_148 = DAT_02774da0;
    if (DAT_02774da0 != 0) {
      FUN_00d50b00();
    }
    local_140 = '\x01';
    cVar4 = (**(code **)(*plVar3 + 0x50))();
    if ((local_140 != '\0') && (local_148 != 0)) {
      FUN_00d50b20();
    }
    if ((char)local_f8 != '\0') {
      FUN_00d50b20();
    }
    lVar1 = DAT_02774da0;
    if (cVar4 == '\0') {
      if (DAT_02774da0 != 0) {
        FUN_00d50b00();
      }
      local_138 = lVar1;
      local_130 = '\x01';
      FUN_00d4acc0();
      local_110 = local_c8;
      local_108 = 0;
      if (local_c0 == '\0') {
        if (local_c8 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_c0 = '\0';
      }
      local_108 = '\x01';
      FUN_00d98db0(&local_110,&local_138,0);
      plVar3 = local_100;
      if (local_100 == plVar10) {
LAB_00d4a47e:
        if (((char)local_f8 != '\0') && (local_100 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if ((char)local_f8 == '\0') {
          if (local_100 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          bVar11 = plVar10 != (longlong *)0x0;
          plVar10 = plVar3;
          if (bVar11) {
            FUN_00d50b20();
          }
          goto LAB_00d4a47e;
        }
        if (plVar10 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        local_f8 = local_f8 & 0xffffff00;
        plVar10 = plVar3;
      }
      if ((local_108 != '\0') && (local_110 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_130 != '\0') && (local_138 != 0)) {
        FUN_00d50b20();
      }
    }
    if (plVar10 == (longlong *)0x0) {
      plVar10 = (longlong *)0x0;
    }
    else if (*(longlong *)(unaff_RSI + 0x48) != 0) {
      local_120 = *(longlong *)(unaff_RSI + 0x48);
      local_118 = plVar10;
      uVar13 = FUN_00083ea0(2,&local_118);
      FUN_00d8cb40(uVar13,&local_100);
      plVar3 = local_c8;
      if (local_c8 == plVar10) {
LAB_00d4a57f:
        if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_c0 == '\0') {
          if (local_c8 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          FUN_00d50b20();
          plVar10 = plVar3;
          goto LAB_00d4a57f;
        }
        FUN_00d50b20();
        local_c0 = '\0';
        plVar10 = local_c8;
      }
      local_100 = (longlong *)&DAT_0253d630;
      if ((local_d8 != '\0') && (CONCAT71(uStack_df,local_e0) != 0)) {
        FUN_00d50b20();
      }
      local_100 = &DAT_024c5048;
      if (((char)local_e8 != '\0') && (local_f0 != (longlong **)0x0)) {
        FUN_00d50b20();
      }
    }
    *unaff_RDI = plVar10;
  }
  else {
    *unaff_RDI = local_b8;
  }
  *(undefined1 *)(unaff_RDI + 1) = 1;
LAB_00d49b0e:
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}


