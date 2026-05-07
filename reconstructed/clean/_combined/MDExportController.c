// ===================================================================
// MDExportController — Complete reconstructed pseudocode
// 8 functions
// ===================================================================

// Registered properties (1):
//   MDPlaybackSetup _lastSetup


// ============================================================
// 0011c470
// ============================================================
// Function: FUN_0011c470
// Address: 0011c470
// Size: 4164 bytes
// Class: MDExportController
// === MDExportController properties ===
//   MDPlaybackSetup _lastSetup


void FUN_0011c470(void)

{
  int64_t lVar1;
  int64_t lVar2;
  byte bVar3;
  int64_t lVar4;
  uint64_t uVar5;
  int iVar6;
  int64_t unaff_R12;
  double dVar7;
  uint64_t uVar8;
  int64_t local_250;
  char local_248;
  int64_t local_240;
  char local_238;
  int64_t local_230;
  char local_228;
  int64_t local_220;
  char local_218;
  int64_t local_210;
  char local_208;
  int64_t local_200;
  char local_1f8;
  int64_t local_1f0;
  char local_1e8;
  int64_t local_1e0;
  char local_1d8;
  int64_t local_1d0;
  char local_1c8;
  int64_t local_1c0;
  char local_1b8;
  int64_t local_1b0;
  char local_1a8;
  int64_t local_1a0;
  char local_198;
  int64_t local_190;
  char local_188;
  int64_t local_180;
  char local_178;
  int64_t local_170;
  char local_168;
  int64_t local_160;
  char local_158;
  int64_t local_150;
  char local_148;
  int64_t local_140;
  char local_138;
  int64_t local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  uint64_t uStack_60;
  int64_t local_58;
  uint64_t local_50;
  int local_48;
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
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
    lVar4 = (int64_t)(int)local_50;
    iVar6 = (int)local_50 + 1;
    local_50 = CONCAT44(local_50._4_4_,iVar6);
    if (*(int *)(local_58 + 0xc) <= iVar6) break;
    local_130 = *(int64_t *)(*(int64_t *)(local_58 + 0x10) + 8 + lVar4 * 8);
    local_128 = '\0';
    local_68 = local_130;
    iVar6 = FUN_00b7f240();
    if ((local_128 != '\0') && (local_130 != 0)) {
      FUN_00d50b20();
    }
    lVar4 = g_026e1810;
    if (iVar6 != 1) {
      if ((iVar6 == 6) || (iVar6 == 9)) {
        if (g_026e1810 != 0) {
          FUN_00d50b00();
        }
        dVar7 = (double)FUN_00e7d6f0();
        uVar5 = (uint64_t)(dVar7 * g_023907c0);
        dVar7 = dVar7 * g_023907c0 - g_023907c8;
        uVar8 = FUN_0071a120();
        if ((((local_70 == '\0') && (local_78 != 0)) && (uVar8 = FUN_00d50b00(), local_70 != '\0'))
           && (local_78 != 0)) {
          uVar8 = FUN_00d50b20();
        }
        bVar3 = (byte)(((int64_t)dVar7 & (int64_t)uVar5 >> 0x3f | uVar5) / 3);
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
        lVar4 = g_026e1818;
        local_f0 = '\x01';
        local_250 = local_68;
        local_248 = '\0';
        if (g_026e1818 != 0) {
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
  lVar4 = g_026e1820;
  if (g_026e1820 != 0) {
    FUN_00d50b00();
  }
  dVar7 = (double)FUN_00e7d6f0();
  uVar5 = (uint64_t)(dVar7 * g_023907c0);
  dVar7 = dVar7 * g_023907c0 - g_023907c8;
  uVar8 = FUN_0071a120();
  if (((char)uStack_60 == '\0') && (local_68 != 0)) {
    uVar8 = FUN_00d50b00();
    if (((char)uStack_60 != '\0') && (local_68 != 0)) {
      uVar8 = FUN_00d50b20();
    }
  }
  bVar3 = (byte)(((int64_t)dVar7 & (int64_t)uVar5 >> 0x3f | uVar5) / 3);
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
  lVar4 = g_026e1828;
  if ((lVar1 != 0 & bVar3) != 0) {
    if (g_026e1828 != 0) {
      FUN_00d50b00();
    }
    local_220 = lVar4;
    local_218 = '\x01';
    FUN_00b5dfe0();
    local_c8 = local_88;
    local_c0 = 0;
    local_210 = g_026e1830;
    if (local_80 == '\0') {
      if (local_88 != 0) {
        FUN_00d50b00();
        local_210 = g_026e1830;
      }
    }
    else {
      local_80 = '\0';
    }
    local_c0 = '\x01';
    g_026e1830 = local_210;
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
  local_58 = CONCAT44(local_58._4_4_,g_02393960);
  local_68 = g_02393950;
  uStack_60 = _UNK_02393958;
  FUN_00c8e2b0(g_02393950,0x14);
  lVar4 = local_78;
  if ((((local_70 == '\0') && (local_78 != 0)) && (FUN_00d50b00(), local_70 != '\0')) &&
     (local_78 != 0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  lVar1 = g_026e1838;
  if (g_026e1838 != 0) {
    FUN_00d50b00();
  }
  dVar7 = (double)FUN_00e7d6f0();
  uVar5 = (uint64_t)(dVar7 * g_023907c0);
  dVar7 = dVar7 * g_023907c0 - g_023907c8;
  uVar8 = FUN_0071a120();
  if (((local_70 == '\0') && (local_78 != 0)) &&
     ((uVar8 = FUN_00d50b00(), local_70 != '\0' && (local_78 != 0)))) {
    uVar8 = FUN_00d50b20();
  }
  bVar3 = (byte)(((int64_t)dVar7 & (int64_t)uVar5 >> 0x3f | uVar5) / 3);
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
  lVar1 = g_026e1840;
  if ((lVar2 != 0 & bVar3) != 0) {
    if (g_026e1840 != 0) {
      FUN_00d50b00();
    }
    local_1d0 = lVar1;
    local_1c8 = '\x01';
    FUN_00b5dfe0();
    local_b8 = local_98;
    local_b0 = 0;
    local_1c0 = g_026e1830;
    if (local_90 == '\0') {
      if (local_98 != 0) {
        FUN_00d50b00();
        local_1c0 = g_026e1830;
      }
    }
    else {
      local_90 = '\0';
    }
    local_b0 = '\x01';
    g_026e1830 = local_1c0;
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
  lVar1 = g_026e1848;
  if (g_026e1848 != 0) {
    FUN_00d50b00();
  }
  local_180 = lVar1;
  local_178 = '\x01';
  FUN_00b5dfe0();
  local_a8 = local_98;
  local_a0 = 0;
  local_170 = g_026e1830;
  if (local_90 == '\0') {
    if (local_98 != 0) {
      FUN_00d50b00();
      local_170 = g_026e1830;
    }
  }
  else {
    local_90 = '\0';
  }
  local_a0 = '\x01';
  g_026e1830 = local_170;
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
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != local_38) {
                        ___stack_chk_fail();
  }
  return;
}



// ============================================================
// 0011a370
// ============================================================
// Function: FUN_0011a370
// Address: 0011a370
// Size: 3044 bytes
// Class: MDExportController
// === MDExportController properties ===
//   MDPlaybackSetup _lastSetup


void FUN_0011a370(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  uint8_t uVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  int64_t lVar9;
  int64_t this_ptr;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t extraout_XMM0_Qa;
  int64_t local_210;
  uint8_t local_208;
  int64_t local_200;
  uint8_t local_1f8;
  int64_t local_1f0;
  uint8_t local_1e8;
  int64_t local_1e0;
  uint8_t local_1d8;
  int64_t local_1d0;
  uint8_t local_1c8;
  uint64_t local_1c0;
  uint8_t local_1b8;
  uint64_t local_1b0;
  uint8_t local_1a8;
  int64_t local_1a0;
  uint8_t local_198;
  int64_t local_190;
  uint8_t local_188;
  int64_t local_180;
  uint8_t local_178;
  int64_t local_170;
  uint8_t local_168;
  int64_t local_160;
  uint8_t local_158;
  int64_t local_150;
  uint8_t local_148;
  uint64_t local_140;
  uint8_t local_138;
  uint64_t local_130;
  uint8_t local_128;
  int64_t local_120;
  uint8_t local_118;
  int64_t local_110;
  uint8_t local_108;
  uint64_t local_100;
  uint8_t local_f8;
  uint64_t local_f0;
  uint8_t local_e8;
  int64_t local_e0;
  uint8_t local_d8;
  int64_t local_d0;
  uint8_t local_c8;
  uint64_t local_c0;
  uint8_t local_b8;
  uint64_t local_b0;
  uint8_t local_a8;
  uint64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  uint64_t local_50;
  uint64_t local_48;
  int64_t *local_40;
  char local_38;
  
  uVar7 = FUN_01d70da0();
  if ((int)uVar7 < 0) {
    return;
  }
  lVar9 = *(int64_t *)(this_ptr + 0x108);
  if (lVar9 != 0) {
    FUN_00d50b00();
  }
  local_50 = (uint64_t)uVar7;
  local_48 = lVar9;
  uVar4 = FUN_003b9040();
  lVar9 = g_026e1868;
  if (g_026e1868 != 0) {
    FUN_00d50b00();
  }
  local_210 = lVar9;
  local_208 = 1;
  lVar1 = *(int64_t *)(this_ptr + 0xa0);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_1f8 = 1;
  lVar2 = *(int64_t *)(this_ptr + 0x80);
  local_200 = lVar1;
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_1e8 = 1;
  local_1f0 = lVar2;
  FUN_0011f440(&local_210,uVar4,&local_200,&local_1f0);
  uVar10 = local_48;
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (lVar9 != 0) {
    FUN_00d50b20();
  }
  if (uVar10 != 0) {
    FUN_00d50b20();
  }
  lVar9 = *(int64_t *)(this_ptr + 0x118);
  if (lVar9 != 0) {
    FUN_00d50b00();
  }
  local_1d8 = 1;
  local_1e0 = lVar9;
  uVar4 = FUN_003b9060();
  lVar1 = g_026e1870;
  if (g_026e1870 != 0) {
    FUN_00d50b00();
  }
  local_1d0 = lVar1;
  local_1c8 = 1;
  local_1c0 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  FUN_0011f440(&local_1d0,uVar4,&local_1c0,&local_1b0);
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (lVar9 != 0) {
    FUN_00d50b20();
  }
  lVar9 = *(int64_t *)(this_ptr + 0x110);
  if (lVar9 != 0) {
    FUN_00d50b00();
  }
  local_198 = 1;
  local_1a0 = lVar9;
  local_48 = lVar9;
  uVar4 = FUN_003b9050();
  lVar9 = g_026e1878;
  if (g_026e1878 != 0) {
    FUN_00d50b00();
  }
  local_190 = lVar9;
  local_188 = 1;
  lVar1 = *(int64_t *)(this_ptr + 0xa8);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_178 = 1;
  lVar2 = *(int64_t *)(this_ptr + 0x88);
  local_180 = lVar1;
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_168 = 1;
  local_170 = lVar2;
  FUN_0011f440(&local_190,uVar4,&local_180,&local_170);
  uVar10 = local_48;
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (lVar9 != 0) {
    FUN_00d50b20();
  }
  if (uVar10 != 0) {
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr + 0x148) != 0) {
    FUN_01d70da0();
    iVar8 = FUN_004f0440();
    if (iVar8 == 0) {
      uVar11 = FUN_00d6f370();
      local_90 = g_026e1880;
      if (g_026e1880 != 0) {
        uVar11 = FUN_00d50b00();
      }
      local_88 = '\x01';
      FUN_00d70ea0(uVar11,&local_90);
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      lVar9 = **(int64_t **)(this_ptr + 0x148);
LAB_0011a7c2:
      (**(code **)(lVar9 + 0x918))();
      lVar9 = **(int64_t **)(this_ptr + 0x148);
    }
    else {
      cVar5 = FUN_003b9150();
      plVar3 = *(int64_t **)(this_ptr + 0x148);
      if (cVar5 == '\0') {
        lVar9 = *plVar3;
        goto LAB_0011a7c2;
      }
      uVar11 = FUN_00d6f370();
      local_80 = g_026e1880;
      if (g_026e1880 != 0) {
        uVar11 = FUN_00d50b00();
      }
      local_78 = '\x01';
      FUN_00d70f90(uVar11,0);
      (**(code **)(*plVar3 + 0x918))();
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      lVar9 = **(int64_t **)(this_ptr + 0x148);
    }
    (**(code **)(lVar9 + 0x998))();
  }
  uVar10 = g_026e1800;
  if (g_026e1800 != 0) {
    FUN_00d50b00();
  }
  local_48 = uVar10;
  FUN_00e7d6f0();
  uVar11 = FUN_0071a120();
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
      (uVar11 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
    uVar11 = FUN_00d50b20();
  }
  local_a0 = uVar10;
  local_98 = '\0';
  FUN_000175c0(uVar11,&local_a0);
  plVar3 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if (plVar3 != (int64_t *)0x0) {
    local_38 = '\0';
    local_40 = plVar3;
    uVar7 = FUN_00c70bc0();
    uVar10 = (uint64_t)uVar7;
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  if ((plVar3 != (int64_t *)0x0 & (byte)uVar10) == 0) {
    lVar9 = *(int64_t *)(this_ptr + 0x120);
    if (lVar9 != 0) {
      FUN_00d50b00();
    }
    lVar1 = g_026e1888;
    local_158 = 1;
    local_160 = lVar9;
    if (g_026e1888 != 0) {
      FUN_00d50b00();
    }
    local_150 = lVar1;
    local_148 = 1;
    local_140 = 0;
    local_138 = 0;
    local_130 = 0;
    local_128 = 0;
    FUN_0011f440(&local_150,0,&local_140,&local_130);
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (lVar9 != 0) {
      FUN_00d50b20();
    }
    goto LAB_0011aae5;
  }
  iVar8 = FUN_01d6fde0();
  if (0 < iVar8) {
    lVar9 = 0;
    do {
      FUN_004f0440();
      bVar6 = FUN_003b9160();
      FUN_01d70db0(extraout_XMM0_Qa,bVar6 ^ 1);
      lVar9 = lVar9 + 1;
      iVar8 = FUN_01d6fde0();
    } while (lVar9 < iVar8);
  }
  iVar8 = FUN_01d70da0();
  if (-1 < iVar8) {
    FUN_01d70da0();
    cVar5 = FUN_01d70e30();
    if (cVar5 == '\0') {
      iVar8 = FUN_01d6fde0();
      while ((iVar8 != 0 && (cVar5 = FUN_01d70e30(), cVar5 == '\0'))) {
        iVar8 = FUN_01d6fde0();
      }
      FUN_01d6ed40();
    }
  }
  cVar5 = FUN_003b9060();
  if ((cVar5 == '\0') || (iVar8 = FUN_01d70da0(), iVar8 < 0)) {
    FUN_0011b6f0();
    (**(code **)(**(int64_t **)(this_ptr + 0xd0) + 0x998))();
    (**(code **)(**(int64_t **)(this_ptr + 0xd8) + 0x998))();
    lVar9 = *(int64_t *)(this_ptr + 0x120);
    if (lVar9 != 0) {
      FUN_00d50b00();
    }
    lVar1 = g_026e1888;
    local_d8 = 1;
    local_e0 = lVar9;
    if (g_026e1888 != 0) {
      FUN_00d50b00();
    }
    local_d0 = lVar1;
    local_c8 = 1;
    local_c0 = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_a8 = 0;
    FUN_0011f440(&local_d0,0,&local_c0,&local_b0);
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (lVar9 != 0) {
      FUN_00d50b20();
    }
    goto LAB_0011ad5e;
  }
  lVar9 = *(int64_t *)(this_ptr + 0x120);
  if (lVar9 != 0) {
    FUN_00d50b00();
  }
  local_118 = 1;
  local_120 = lVar9;
  FUN_01d70da0();
  uVar4 = FUN_004ef6f0();
  lVar1 = g_026e1888;
  if (g_026e1888 != 0) {
    FUN_00d50b00();
  }
  local_110 = lVar1;
  local_108 = 1;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  FUN_0011f440(&local_110,uVar4,&local_100,&local_f0);
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (lVar9 != 0) {
    FUN_00d50b20();
  }
  cVar5 = FUN_003b9080();
  if (cVar5 == '\0') {
LAB_0011aae5:
    FUN_0011b6f0();
    uVar11 = 0;
  }
  else {
    FUN_01d70da0();
    cVar5 = FUN_004ef710();
    uVar11 = 1;
    if (cVar5 != '\0') goto LAB_0011aae5;
  }
  (**(code **)(**(int64_t **)(this_ptr + 0xd0) + 0x998))(uVar11);
  (**(code **)(**(int64_t **)(this_ptr + 0xd8) + 0x998))();
LAB_0011ad5e:
  cVar5 = (**(code **)(**(int64_t **)(this_ptr + 0xd0) + 0x9a0))();
  if (cVar5 == '\0') {
    FUN_01e40eb0();
    plVar3 = local_40;
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar3 != (int64_t *)0x0) {
      (**(code **)(**(int64_t **)(this_ptr + 0xd0) + 0x478))();
    }
  }
  else {
    FUN_01e40eb0();
    plVar3 = local_40;
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar3 == (int64_t *)0x0) {
      FUN_01e40eb0();
      plVar3 = local_40;
      local_58 = 0;
      local_60 = *(int64_t *)(this_ptr + 0xd0);
      if (local_60 != 0) {
        FUN_00d50b00();
      }
      local_58 = '\x01';
      (**(code **)(*plVar3 + 0x450))();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  cVar5 = (**(code **)(**(int64_t **)(this_ptr + 0xd8) + 0x9a0))();
  if (cVar5 == '\0') {
    FUN_01e40eb0();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40 != (int64_t *)0x0) {
      (**(code **)(**(int64_t **)(this_ptr + 0xd8) + 0x478))();
    }
  }
  else {
    FUN_01e40eb0();
    plVar3 = local_40;
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar3 == (int64_t *)0x0) {
      FUN_01e40eb0();
      plVar3 = local_40;
      local_68 = 0;
      local_70 = *(int64_t *)(this_ptr + 0xd8);
      if (local_70 != 0) {
        FUN_00d50b00();
      }
      local_68 = '\x01';
      (**(code **)(*plVar3 + 0x450))();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  return;
}



// ============================================================
// 00119af0
// ============================================================
// Function: FUN_00119af0
// Address: 00119af0
// Size: 1444 bytes
// Class: MDExportController
// String references:
//   "%0.3f kHz"
// === MDExportController properties ===
//   MDPlaybackSetup _lastSetup


void FUN_00119af0(void)

{
  int64_t *plVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t this_ptr;
  uint32_t uVar7;
  void*local_c0;
  uint32_t local_b8;
  float local_b4;
  uint64_t local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  uint64_t local_40;
  int local_38;
  
  uVar3 = FUN_01d70da0();
  if ((int)uVar3 < 0) {
    iVar4 = *(int *)(*(int64_t *)(this_ptr + 0x150) + 0xc);
    if (0 < iVar4) {
      uVar3 = 0;
    }
  }
  else {
    iVar4 = *(int *)(*(int64_t *)(this_ptr + 0x150) + 0xc);
  }
  uVar2 = iVar4 - 1;
  if ((int)uVar3 < iVar4) {
    uVar2 = uVar3;
  }
  uVar3 = FUN_01d70da0();
  if (uVar2 != uVar3) {
    FUN_01d6ed40();
  }
  FUN_01d6f8d0();
  FUN_01d6f8d0();
  if ((int)uVar2 < 0) {
    return;
  }
  local_b0 = (uint64_t)uVar2;
  iVar4 = FUN_003b9070();
  if (iVar4 == 0) goto LAB_00119faa;
  FUN_003b9120();
  lVar5 = *(int64_t *)(this_ptr + 0x80);
  lVar6 = lVar5;
  if (lVar5 != local_58) {
    if (local_50 == '\0') {
      if (local_58 == 0) {
        lVar6 = 0;
        goto LAB_00119be1;
      }
      FUN_00d50b00();
      lVar5 = *(int64_t *)(this_ptr + 0x80);
      *(int64_t *)(this_ptr + 0x80) = local_58;
      lVar6 = local_58;
    }
    else {
      local_50 = '\0';
      lVar6 = local_58;
LAB_00119be1:
      *(int64_t *)(this_ptr + 0x80) = lVar6;
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
      lVar6 = local_58;
    }
  }
  if ((local_50 != '\0') && (lVar6 != 0)) {
    FUN_00d50b20();
  }
  FUN_003b90f0();
  lVar5 = *(int64_t *)(this_ptr + 0x88);
  lVar6 = lVar5;
  if (lVar5 != local_58) {
    if (local_50 == '\0') {
      if (local_58 == 0) {
        lVar6 = 0;
        goto LAB_00119c7a;
      }
      FUN_00d50b00();
      lVar5 = *(int64_t *)(this_ptr + 0x88);
      *(int64_t *)(this_ptr + 0x88) = local_58;
      lVar6 = local_58;
    }
    else {
      local_50 = '\0';
      lVar6 = local_58;
LAB_00119c7a:
      *(int64_t *)(this_ptr + 0x88) = lVar6;
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
      lVar6 = local_58;
    }
  }
  if ((local_50 != '\0') && (lVar6 != 0)) {
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr + 0x80) != 0) {
    local_50 = '\0';
    local_58 = 0;
    local_40 = 0xffffffff;
    local_38 = 0;
    local_40._4_4_ = 0;
    local_48 = *(int64_t *)(this_ptr + 0x80);
    while( true ) {
      if (local_40._4_4_ != 0) {
        if (local_40._4_4_ < 1) {
          iVar4 = -local_40._4_4_;
        }
        else {
          iVar4 = (int)local_40 - local_40._4_4_;
          local_40 = CONCAT44(local_40._4_4_,iVar4);
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          iVar4 = 0;
        }
        local_40 = CONCAT44(iVar4,(int)local_40);
      }
      lVar5 = (int64_t)(int)local_40;
      iVar4 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar4);
      if (*(int *)(local_48 + 0xc) <= iVar4) break;
      local_58 = *(int64_t *)(*(int64_t *)(local_48 + 0x10) + 8 + lVar5 * 8);
      local_b4 = (float)FUN_00d459e0();
      local_b4 = local_b4 / g_02393944;
      local_b8 = 1;
      local_c0 = &g_024d0b28;
      FUN_00d8cb40(local_b4,&local_c0);
      local_a8 = local_68;
      local_a0 = 0;
      if (local_60 == '\0') {
        if (local_68 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      local_a0 = '\x01';
      FUN_01d6f990();
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00136b80();
  }
  if (*(int64_t *)(this_ptr + 0x88) != 0) {
    local_50 = '\0';
    local_58 = 0;
    local_40 = 0xffffffff;
    local_38 = 0;
    local_40._4_4_ = 0;
    local_48 = *(int64_t *)(this_ptr + 0x88);
    while( true ) {
      if (local_40._4_4_ != 0) {
        if (local_40._4_4_ < 1) {
          iVar4 = -local_40._4_4_;
        }
        else {
          iVar4 = (int)local_40 - local_40._4_4_;
          local_40 = CONCAT44(local_40._4_4_,iVar4);
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          iVar4 = 0;
        }
        local_40 = CONCAT44(iVar4,(int)local_40);
      }
      lVar5 = (int64_t)(int)local_40;
      iVar4 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar4);
      if (*(int *)(local_48 + 0xc) <= iVar4) break;
      local_58 = *(int64_t *)(*(int64_t *)(local_48 + 0x10) + 8 + lVar5 * 8);
      FUN_00d45870();
      FUN_00ae7020();
      local_98 = local_68;
      local_90 = 0;
      if (local_60 == '\0') {
        if (local_68 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      local_90 = '\x01';
      FUN_01d6f990();
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00136b80();
  }
LAB_00119faa:
  plVar1 = *(int64_t **)(this_ptr + 0xd0);
  uVar7 = FUN_003b9090();
  local_78 = local_68;
  local_70 = 0;
  if (local_60 == '\0') {
    if (local_68 != 0) {
      uVar7 = FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  local_70 = '\x01';
  FUN_00e427c0(uVar7,&local_78);
  local_88 = local_58;
  local_80 = 0;
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  local_80 = '\x01';
  (**(code **)(*plVar1 + 0x958))();
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 0070b860
// ============================================================
// Function: FUN_0070b860
// Address: 0070b860
// Size: 1286 bytes
// Class: MDExportController
// === MDExportController properties ===
//   MDPlaybackSetup _lastSetup


void FUN_0070b860(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  void *pvVar3;
  void* pVar4;
  int64_t *plVar5;
  int64_t *arg1;
  int64_t *plVar6;
  int64_t *local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  uint64_t local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  char local_41;
  int64_t *local_40;
  char local_38;
  
  FUN_007f2390();
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) {
      return;
    }
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_40 == (int64_t *)0x0) {
    return;
  }
  local_80 = 0;
  local_41 = '\0';
  FUN_01e561b0();
  local_78 = local_68;
  local_70 = 0;
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  local_70 = '\x01';
  plVar5 = &local_78;
  FUN_007f3210(plVar5,&local_80,&local_41);
  plVar6 = local_40;
  pVar4 = (void*)plVar5;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (plVar6 == (int64_t *)0x0) {
    FUN_007f32f0();
    goto LAB_0070bd3f;
  }
  if (local_41 != '\0') {
    FUN_01f27fe0();
    (**(code **)(*local_40 + 0x560))();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((int64_t *)*arg1 != (int64_t *)0x0) {
    (**(code **)(&UNK_00001668 + *(int64_t *)*arg1))();
    plVar5 = local_40;
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar5 != (int64_t *)0x0) {
      FUN_016cbba0();
      plVar5 = local_40;
      plVar2 = plVar6;
      if (plVar6 == local_40) {
joined_r0x0070bb4d:
        plVar5 = plVar2;
        if ((local_38 != '\0') && (plVar6 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          FUN_00d50b20();
          plVar2 = plVar5;
          plVar6 = local_40;
          goto joined_r0x0070bb4d;
        }
        FUN_00d50b20();
        local_38 = '\0';
      }
      pvVar3 = _pthread_getspecific(pVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_016ea7c0(local_80);
      (**(code **)(&UNK_00001668 + *(int64_t *)*arg1))();
      pvVar3 = _pthread_getspecific(pVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0132d960();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d403d0();
      lVar1 = g_027ebe30;
      if (g_027ebe30 != 0) {
        FUN_00d50b00();
      }
      local_a8 = '\0';
      local_a0 = 0;
      local_98 = '\0';
      local_b0 = plVar5;
      FUN_00d40470(&local_a0,&local_b0,3,3);
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      plVar6 = plVar5;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_0070bd3f;
    }
  }
  local_90 = plVar6;
  local_88 = '\0';
  FUN_006f3f00();
  FUN_00757c60();
  local_58 = local_40;
  local_50 = 0;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_50 = '\x01';
  FUN_01c77060(local_80,1);
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_0070bd3f:
  if (plVar6 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 0070b120
// ============================================================
// Function: FUN_0070b120
// Address: 0070b120
// Size: 894 bytes
// Class: MDExportController
// String references:
//   "MDExportController"
// === MDExportController properties ===
//   MDPlaybackSetup _lastSetup


void FUN_0070b120(void)

{
  int64_t *plVar1;
  bool bVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  int64_t *plVar6;
  int64_t **pplVar7;
  uint32_t uVar8;
  uint32_t uVar9;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  char local_40;
  int64_t *local_38;
  char local_30;
  
  lVar3 = g_02727af8;
  if (g_0280c948 == (int64_t *)0x0) {
    if (g_02727af8 != 0) {
      FUN_00d50b00();
    }
    local_78 = 0;
    local_70 = '\0';
    local_68 = 0;
    local_60 = '\0';
    pplVar7 = &local_38;
    FUN_01e4fcf0(&local_68,&local_78);
    plVar1 = local_38;
    if ((g_026e1988 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
      g_026e18d8 = FUN_00015ff0();
      g_026e18c0 = "MDExportController";
      g_026e18c8 = 0x168;
      g_026e18d0 = FUN_0012b3d0;
      g_026e18e0 = 0;
      ram_00000000026e18e8 = 0;
      g_026e18f0 = 0;
      ram_00000000026e18f8 = 0;
      g_026e1900 = 0;
      ram_00000000026e1908 = 0;
      g_026e1910 = 0;
      ram_00000000026e1918 = 0;
      g_026e1920 = 0;
      ram_00000000026e1928 = 0;
      g_026e1930 = 0;
      ram_00000000026e1938 = 0;
      g_026e1940 = 0;
      ram_00000000026e1948 = 0;
      g_026e1950 = 0;
      ram_00000000026e1958 = 0;
      g_026e1960 = 0;
      ram_00000000026e1968 = 0;
      g_026e1970 = 0;
      ram_00000000026e1978 = 0;
      g_026e1980 = 0;
      ___cxa_guard_release();
    }
    if (plVar1 == (int64_t *)0x0) {
LAB_0070b1c2:
      pplVar7 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 == '\0') goto LAB_0070b1c2;
    }
    plVar1 = *pplVar7;
    plVar6 = g_0280c948;
    if (g_0280c948 != plVar1) {
      if (*(char *)(pplVar7 + 1) == '\0') {
        if (plVar1 == (int64_t *)0x0) {
          plVar6 = (int64_t *)0x0;
        }
        else {
          FUN_00d50b00();
          plVar6 = *pplVar7;
        }
      }
      else {
        *(void*)(pplVar7 + 1) = 0;
        plVar6 = plVar1;
      }
      bVar2 = g_0280c948 != (int64_t *)0x0;
      g_0280c948 = plVar6;
      if (bVar2) {
        FUN_00d50b20();
        plVar6 = *pplVar7;
      }
    }
    if ((plVar6 != (int64_t *)0x0) && (g_0280c950 == '\0')) {
      g_0280c950 = '\x01';
      FUN_00e8cb90();
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (g_0280c948 == (int64_t *)0x0) {
      return;
    }
  }
  FUN_006f3f00();
  plVar1 = local_38;
  if (local_30 == '\0') {
    if (local_38 == (int64_t *)0x0) goto LAB_0070b2f0;
    FUN_00d50b00();
  }
  else if (local_38 == (int64_t *)0x0) {
LAB_0070b2f0:
    local_30 = '\0';
    local_38 = (int64_t *)0x0;
    bVar2 = true;
    goto LAB_0070b367;
  }
  FUN_00756eb0();
  plVar6 = local_38;
  if (local_30 == '\0') {
    if (local_38 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_0070b322;
    }
  }
  else if (local_38 != (int64_t *)0x0) {
LAB_0070b322:
    uVar8 = (**(code **)(*plVar6 + 0x408))();
    uVar9 = (**(code **)(*plVar6 + 0x418))();
    FUN_00116890(uVar8,uVar9);
    FUN_00d50b20();
  }
  bVar2 = false;
LAB_0070b367:
  local_58 = plVar1;
  local_50 = '\0';
  FUN_001168b0();
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar1 = g_0280c948;
  local_40 = 0;
  if (g_0280c948 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_48 = plVar1;
  local_40 = '\x01';
  FUN_01d83990();
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (!bVar2) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 0011b850
// ============================================================
// Function: FUN_0011b850
// Address: 0011b850
// Size: 3053 bytes
// Class: MDExportController
// String references:
//   "handleExportMix"
//   "handleExport"
//   "handleCancel"
//   "handleExportIndividuals"
//   "handleSelectFormat"
//   "handleSelectSampleRate"
//   "handleSelectSampleFormat"
//   "handleSelectRegion"
//   "handleSelectReferenceTrack"
//   "MDExportController"
// === MDExportController properties ===
//   MDPlaybackSetup _lastSetup


void FUN_0011b850(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
      g_02804050 = "handleExportMix";
      g_02804058 = &g_026e18c0;
      g_02804060 = 0;
      g_02804068 = &g_026e3218;
      g_02804070 = FUN_001369b0;
      g_02804078 = 0x5d1;
      g_02804080 = 0;
      ram_0000000002804088 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02804098 = "handleExport";
      g_028040a0 = &g_026e18c0;
      g_028040a8 = 0;
      g_028040b0 = &g_026e3218;
      g_028040b8 = FUN_001369b0;
      g_028040c0 = 0x5c9;
      g_028040c8 = 0;
      ram_00000000028040d0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028040e0 = "handleCancel";
      g_028040e8 = &g_026e18c0;
      g_028040f0 = 0;
      g_028040f8 = &g_026e3218;
      g_02804100 = FUN_001369b0;
      g_02804108 = 0x5d9;
      g_02804110 = 0;
      ram_0000000002804118 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02804128 = "handleExportIndividuals";
      g_02804130 = &g_026e18c0;
      g_02804138 = 0;
      g_02804140 = &g_026e3218;
      g_02804148 = FUN_001369b0;
      g_02804150 = 0x5e1;
      g_02804158 = 0;
      ram_0000000002804160 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02804170 = "handleSelectFormat";
      g_02804178 = &g_026e18c0;
      g_02804180 = 0;
      g_02804188 = &g_026e3218;
      g_02804190 = FUN_001369b0;
      g_02804198 = 0x5e9;
      g_028041a0 = 0;
      ram_00000000028041a8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028041b8 = "handleSelectSampleRate";
      g_028041c0 = &g_026e18c0;
      g_028041c8 = 0;
      g_028041d0 = &g_026e3218;
      g_028041d8 = FUN_001369b0;
      g_028041e0 = 0x5f1;
      g_028041e8 = 0;
      ram_00000000028041f0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02804200 = "handleSelectSampleFormat";
      g_02804208 = &g_026e18c0;
      g_02804210 = 0;
      g_02804218 = &g_026e3218;
      g_02804220 = FUN_001369b0;
      g_02804228 = 0x5f9;
      g_02804230 = 0;
      ram_0000000002804238 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02804248 = "handleSelectRegion";
      g_02804250 = &g_026e18c0;
      g_02804258 = 0;
      g_02804260 = &g_026e3218;
      g_02804268 = FUN_001369b0;
      g_02804270 = 0x601;
      g_02804278 = 0;
      ram_0000000002804280 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02804290 = "handleSelectReferenceTrack";
      g_02804298 = &g_026e18c0;
      g_028042a0 = 0;
      g_028042a8 = &g_026e3218;
      g_028042b0 = FUN_001369b0;
      g_028042b8 = 0x609;
      g_028042c0 = 0;
      ram_00000000028042c8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}



// ============================================================
// 007954a0
// ============================================================
// Function: FUN_007954a0
// Address: 007954a0
// Size: 1963 bytes
// Class: MDExportController
// String references:
//   "MDExportController"
//   "MDExportAudioDelegate"
// === MDExportController properties ===
//   MDPlaybackSetup _lastSetup


void FUN_007954a0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_0005aa20();
  this_ptr[0xe] = &g_025127c0;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_024cf690;
  this_ptr[0xe] = &g_024cfce8;
  FUN_00795fd0();
  FUN_00796250();
  FUN_007964d0();
  this_ptr[0x12] = 0;
  // [STATIC_INIT: property registration]
  if (g_026e197b == '\0') {
    FUN_00796750();
    FUN_00e87980();
  }
  this_ptr[0x13] = 0;
  // [STATIC_INIT: property registration]
  if (g_026e197b == '\0') {
    FUN_007968c0();
    FUN_00e87980();
  }
  FUN_00796a30();
  FUN_00796cb0();
  *(void*)(this_ptr + 0x16) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e197b == '\0') {
    FUN_00796f30();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xb1) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e197b == '\0') {
    FUN_007970a0();
    FUN_00e87980();
  }
  FUN_00797210();
  FUN_00797500();
  FUN_007977f0();
  FUN_00797ae0();
  FUN_00797dd0();
  FUN_007980c0();
  FUN_007983b0();
  FUN_007986a0();
  FUN_00798990();
  FUN_00798c80();
  FUN_00798f70();
  FUN_00799260();
  FUN_00799550();
  FUN_00799840();
  FUN_00799b30();
  FUN_00799e20();
  FUN_0079a110();
  FUN_0079a400();
  FUN_0079a6f0();
  FUN_0079a9e0();
  FUN_0079acd0();
  *(void*)(this_ptr + 0x2c) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e197b == '\0') {
    FUN_0079afc0();
    FUN_00e87980();
  }
  return;
}



// ============================================================
// 0079afc0
// ============================================================
// Function: FUN_0079afc0
// Address: 0079afc0
// Size: 532 bytes
// Class: MDExportController
// String references:
//   "MDExportController"
//   "MDPlaybackSetup"
//   "_lastSetup"
// === MDExportController properties ===
//   MDPlaybackSetup _lastSetup


void* FUN_0079afc0(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_0272a028 = "_lastSetup";
      g_0272a030 = &g_026e18c0;
      g_0272a038 = 0;
      g_0272a040 = 0x6500;
      g_0272a048 = "MDPlaybackSetup";
      g_0272a050 = &g_0271cca8;
      g_0272a058 = 0;
      ram_000000000272a060 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_0272a028;
}

