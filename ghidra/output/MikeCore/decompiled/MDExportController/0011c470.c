// Function: FUN_0011c470
// Address: 0011c470
// Size: 4164 bytes
// Class: MDExportController


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011c470(void)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  longlong unaff_R12;
  double dVar7;
  undefined8 uVar8;
  longlong local_250;
  char local_248;
  longlong local_240;
  char local_238;
  longlong local_230;
  char local_228;
  longlong local_220;
  char local_218;
  longlong local_210;
  char local_208;
  longlong local_200;
  char local_1f8;
  longlong local_1f0;
  char local_1e8;
  longlong local_1e0;
  char local_1d8;
  longlong local_1d0;
  char local_1c8;
  longlong local_1c0;
  char local_1b8;
  longlong local_1b0;
  char local_1a8;
  longlong local_1a0;
  char local_198;
  longlong local_190;
  char local_188;
  longlong local_180;
  char local_178;
  longlong local_170;
  char local_168;
  longlong local_160;
  char local_158;
  longlong local_150;
  char local_148;
  longlong local_140;
  char local_138;
  longlong local_130;
  char local_128;
  longlong local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  ulonglong uStack_60;
  longlong local_58;
  undefined8 local_50;
  int local_48;
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  FUN_00d50100();
  FUN_00b7cae0();
  lVar4 = local_68;
  if ((char)uStack_60 == '\0') {
    if (local_68 == 0) goto LAB_0011ca7f;
    FUN_00d50b00();
    if (((char)uStack_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_68 == 0) goto LAB_0011ca7f;
  uStack_60 = uStack_60 & 0xffffffffffffff00;
  local_68 = 0;
  local_58 = lVar4;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_50._4_4_ = 0;
  while( true ) {
    if (local_50._4_4_ != 0) {
      if (local_50._4_4_ < 1) {
        iVar6 = -local_50._4_4_;
      }
      else {
        iVar6 = (int)local_50 - local_50._4_4_;
        local_50 = CONCAT44(local_50._4_4_,iVar6);
        FUN_00d23690();
        local_48 = local_48 + local_50._4_4_;
        iVar6 = 0;
      }
      local_50 = CONCAT44(iVar6,(int)local_50);
    }
    lVar4 = (longlong)(int)local_50;
    iVar6 = (int)local_50 + 1;
    local_50 = CONCAT44(local_50._4_4_,iVar6);
    if (*(int *)(local_58 + 0xc) <= iVar6) break;
    local_130 = *(longlong *)(*(longlong *)(local_58 + 0x10) + 8 + lVar4 * 8);
    local_128 = '\0';
    local_68 = local_130;
    iVar6 = FUN_00b7f240();
    if ((local_128 != '\0') && (local_130 != 0)) {
      FUN_00d50b20();
    }
    lVar4 = DAT_026e1810;
    if (iVar6 != 1) {
      if ((iVar6 == 6) || (iVar6 == 9)) {
        if (DAT_026e1810 != 0) {
          FUN_00d50b00();
        }
        dVar7 = (double)FUN_00e7d6f0();
        uVar5 = (ulonglong)(dVar7 * DAT_023907c0);
        dVar7 = dVar7 * DAT_023907c0 - _DAT_023907c8;
        uVar8 = FUN_0071a120();
        if ((((local_70 == '\0') && (local_78 != 0)) && (uVar8 = FUN_00d50b00(), local_70 != '\0'))
           && (local_78 != 0)) {
          uVar8 = FUN_00d50b20();
        }
        bVar3 = (byte)(((longlong)dVar7 & (longlong)uVar5 >> 0x3f | uVar5) / 3);
        local_88 = lVar4;
        local_80 = '\0';
        FUN_000175c0(uVar8,&local_88);
        lVar1 = local_78;
        if (local_70 == '\0') {
          if (((local_78 != 0) && (FUN_00d50b00(), local_70 != '\0')) && (local_78 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_70 = '\0';
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          local_70 = '\0';
          local_78 = lVar1;
          bVar3 = FUN_00c70bc0();
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        FUN_00d50b20();
        bVar3 = lVar1 != 0 & bVar3 ^ 1;
        unaff_R12 = lVar4;
        if (iVar6 != 9) goto LAB_0011c708;
LAB_0011c70e:
        unaff_R12 = lVar4;
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
      }
      else {
        bVar3 = 0;
        lVar4 = unaff_R12;
        if (iVar6 == 9) goto LAB_0011c70e;
LAB_0011c708:
        lVar4 = unaff_R12;
        if (iVar6 == 6) goto LAB_0011c70e;
      }
      if (bVar3 == 0) {
        FUN_00df1990();
        local_f8 = local_98;
        local_f0 = 0;
        if (local_90 == '\0') {
          if (local_98 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_90 = '\0';
        }
        lVar4 = DAT_026e1818;
        local_f0 = '\x01';
        local_250 = local_68;
        local_248 = '\0';
        if (DAT_026e1818 != 0) {
          FUN_00d50b00();
        }
        local_240 = lVar4;
        local_238 = '\x01';
        FUN_00b89160();
        local_e8 = local_120;
        local_e0 = 0;
        if (local_118 == '\0') {
          if (local_120 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_118 = '\0';
        }
        local_e0 = '\x01';
        FUN_00b88680();
        local_d8 = local_110;
        local_d0 = 0;
        if (local_108 == '\0') {
          if (local_110 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_108 = '\0';
        }
        local_d0 = '\x01';
        local_228 = '\0';
        local_230 = 0;
        FUN_003b8e30(&local_250,&local_f8,&local_240,&local_e8,1,&local_230);
        lVar4 = local_88;
        if (local_80 == '\0') {
          if (local_88 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_80 = '\0';
        }
        local_78 = lVar4;
        local_70 = '\0';
        FUN_00d21140();
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        if ((local_228 != '\0') && (local_230 != 0)) {
          FUN_00d50b20();
        }
        if ((local_d0 != '\0') && (local_d8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_108 != '\0') && (local_110 != 0)) {
          FUN_00d50b20();
        }
        if ((local_e0 != '\0') && (local_e8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_118 != '\0') && (local_120 != 0)) {
          FUN_00d50b20();
        }
        if ((local_238 != '\0') && (local_240 != 0)) {
          FUN_00d50b20();
        }
        if ((local_248 != '\0') && (local_250 != 0)) {
          FUN_00d50b20();
        }
        if ((local_f0 != '\0') && (local_f8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  FUN_00136a40();
  FUN_00d50b20();
LAB_0011ca7f:
  lVar4 = DAT_026e1820;
  if (DAT_026e1820 != 0) {
    FUN_00d50b00();
  }
  dVar7 = (double)FUN_00e7d6f0();
  uVar5 = (ulonglong)(dVar7 * DAT_023907c0);
  dVar7 = dVar7 * DAT_023907c0 - _DAT_023907c8;
  uVar8 = FUN_0071a120();
  if (((char)uStack_60 == '\0') && (local_68 != 0)) {
    uVar8 = FUN_00d50b00();
    if (((char)uStack_60 != '\0') && (local_68 != 0)) {
      uVar8 = FUN_00d50b20();
    }
  }
  bVar3 = (byte)(((longlong)dVar7 & (longlong)uVar5 >> 0x3f | uVar5) / 3);
  local_78 = lVar4;
  local_70 = '\0';
  FUN_000175c0(uVar8,&local_78);
  lVar1 = local_68;
  if ((char)uStack_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
      if (((char)uStack_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    uStack_60 = uStack_60 & 0xffffffffffffff00;
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    uStack_60 = uStack_60 & 0xffffffffffffff00;
    local_68 = lVar1;
    bVar3 = FUN_00c70bc0();
    if (((char)uStack_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  lVar4 = DAT_026e1828;
  if ((lVar1 != 0 & bVar3) != 0) {
    if (DAT_026e1828 != 0) {
      FUN_00d50b00();
    }
    local_220 = lVar4;
    local_218 = '\x01';
    FUN_00b5dfe0();
    local_c8 = local_88;
    local_c0 = 0;
    local_210 = DAT_026e1830;
    if (local_80 == '\0') {
      if (local_88 != 0) {
        FUN_00d50b00();
        local_210 = DAT_026e1830;
      }
    }
    else {
      local_80 = '\0';
    }
    local_c0 = '\x01';
    DAT_026e1830 = local_210;
    if (local_210 != 0) {
      local_c0 = '\x01';
      FUN_00d50b00();
    }
    local_208 = '\x01';
    local_200 = 0;
    local_1f8 = '\0';
    local_1f0 = 0;
    local_1e8 = '\0';
    local_1e0 = 0;
    local_1d8 = '\0';
    FUN_003b8e30(&local_c8,&local_220,&local_210,&local_200,0,&local_1e0);
    lVar4 = local_78;
    if (local_70 == '\0') {
      if (local_78 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_70 = '\0';
    }
    local_68 = lVar4;
    uStack_60 = uStack_60 & 0xffffffffffffff00;
    FUN_00d21140();
    if (((char)uStack_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1d8 != '\0') && (local_1e0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1e8 != '\0') && (local_1f0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1f8 != '\0') && (local_200 != 0)) {
      FUN_00d50b20();
    }
    if ((local_208 != '\0') && (local_210 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_218 != '\0') && (local_220 != 0)) {
      FUN_00d50b20();
    }
  }
  local_58 = CONCAT44(local_58._4_4_,DAT_02393960);
  local_68 = _DAT_02393950;
  uStack_60 = _UNK_02393958;
  FUN_00c8e2b0(_DAT_02393950,0x14);
  lVar4 = local_78;
  if ((((local_70 == '\0') && (local_78 != 0)) && (FUN_00d50b00(), local_70 != '\0')) &&
     (local_78 != 0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  lVar1 = DAT_026e1838;
  if (DAT_026e1838 != 0) {
    FUN_00d50b00();
  }
  dVar7 = (double)FUN_00e7d6f0();
  uVar5 = (ulonglong)(dVar7 * DAT_023907c0);
  dVar7 = dVar7 * DAT_023907c0 - _DAT_023907c8;
  uVar8 = FUN_0071a120();
  if (((local_70 == '\0') && (local_78 != 0)) &&
     ((uVar8 = FUN_00d50b00(), local_70 != '\0' && (local_78 != 0)))) {
    uVar8 = FUN_00d50b20();
  }
  bVar3 = (byte)(((longlong)dVar7 & (longlong)uVar5 >> 0x3f | uVar5) / 3);
  local_88 = lVar1;
  local_80 = '\0';
  FUN_000175c0(uVar8,&local_88);
  lVar2 = local_78;
  if (local_70 == '\0') {
    if (((local_78 != 0) && (FUN_00d50b00(), local_70 != '\0')) && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_70 = '\0';
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    local_70 = '\0';
    local_78 = lVar2;
    bVar3 = FUN_00c70bc0();
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_026e1840;
  if ((lVar2 != 0 & bVar3) != 0) {
    if (DAT_026e1840 != 0) {
      FUN_00d50b00();
    }
    local_1d0 = lVar1;
    local_1c8 = '\x01';
    FUN_00b5dfe0();
    local_b8 = local_98;
    local_b0 = 0;
    local_1c0 = DAT_026e1830;
    if (local_90 == '\0') {
      if (local_98 != 0) {
        FUN_00d50b00();
        local_1c0 = DAT_026e1830;
      }
    }
    else {
      local_90 = '\0';
    }
    local_b0 = '\x01';
    DAT_026e1830 = local_1c0;
    if (local_1c0 != 0) {
      local_b0 = '\x01';
      FUN_00d50b00();
    }
    local_1b8 = '\x01';
    local_1b0 = 0;
    local_1a8 = '\0';
    local_1a0 = 0;
    local_198 = '\0';
    local_190 = lVar4;
    local_188 = '\0';
    FUN_003b8e30(&local_b8,&local_1d0,&local_1c0,&local_1b0,0,&local_190);
    lVar1 = local_88;
    if (local_80 == '\0') {
      if (local_88 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_80 = '\0';
    }
    local_78 = lVar1;
    local_70 = '\0';
    FUN_00d21140();
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_188 != '\0') && (local_190 != 0)) {
      FUN_00d50b20();
    }
    if ((local_198 != '\0') && (local_1a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1a8 != '\0') && (local_1b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1b8 != '\0') && (local_1c0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1c8 != '\0') && (local_1d0 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = DAT_026e1848;
  if (DAT_026e1848 != 0) {
    FUN_00d50b00();
  }
  local_180 = lVar1;
  local_178 = '\x01';
  FUN_00b5dfe0();
  local_a8 = local_98;
  local_a0 = 0;
  local_170 = DAT_026e1830;
  if (local_90 == '\0') {
    if (local_98 != 0) {
      FUN_00d50b00();
      local_170 = DAT_026e1830;
    }
  }
  else {
    local_90 = '\0';
  }
  local_a0 = '\x01';
  DAT_026e1830 = local_170;
  if (local_170 != 0) {
    local_a0 = '\x01';
    FUN_00d50b00();
  }
  local_168 = '\x01';
  local_160 = 0;
  local_158 = '\0';
  local_150 = 0;
  local_148 = '\0';
  local_140 = lVar4;
  local_138 = '\0';
  FUN_003b8e30(&local_a8,&local_180,&local_170,&local_160,0,&local_140);
  lVar1 = local_88;
  if (local_80 == '\0') {
    if (local_88 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_80 = '\0';
  }
  local_78 = lVar1;
  local_70 = '\0';
  FUN_00d21140();
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_138 != '\0') && (local_140 != 0)) {
    FUN_00d50b20();
  }
  if ((local_148 != '\0') && (local_150 != 0)) {
    FUN_00d50b20();
  }
  if ((local_158 != '\0') && (local_160 != 0)) {
    FUN_00d50b20();
  }
  if ((local_168 != '\0') && (local_170 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_178 != '\0') && (local_180 != 0)) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}


