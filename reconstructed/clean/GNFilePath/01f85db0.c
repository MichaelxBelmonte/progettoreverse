// Function: FUN_01f85db0
// Address: 01f85db0
// Size: 3109 bytes
// Class: GNFilePath
// String references:
//   "GNFilePath"

uint64_t FUN_01f85db0(uint64_t param_1,int param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  bool bVar3;
  int64_t lVar4;
  int64_t *plVar5;
  char cVar6;
  int iVar7;
  char *pcVar8;
  int64_t *plVar9;
  int64_t *this_ptr;
  int64_t **pplVar10;
  bool bVar11;
  uint32_t uVar12;
  uint32_t extraout_XMM0_Da;
  int64_t local_188;
  char local_180;
  int64_t local_178;
  char local_170;
  int64_t local_168;
  char local_160;
  int64_t local_158;
  char local_150;
  int64_t *local_148;
  char local_140;
  int64_t local_138;
  char local_130;
  int64_t local_128;
  char local_120;
  int64_t *local_118;
  char local_110;
  int64_t *local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t *local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t *local_80;
  char local_78;
  char local_58;
  undefined7 uStack_57;
  char local_50;
  int64_t *local_48;
  int64_t *local_40;
  char local_38 [8];
  
  if (param_2 == 0) {
    return 1;
  }
  FUN_01caeae0();
  if (local_38[0] == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01f85e18;
    }
LAB_01f85eba:
    bVar3 = false;
LAB_01f85fd1:
    local_48 = (int64_t *)0x0;
  }
  else {
    if (local_40 == (int64_t *)0x0) goto LAB_01f85eba;
LAB_01f85e18:
    uVar12 = FUN_01d66da0();
    local_188 = g_02800fe8;
    if (g_02800fe8 != 0) {
      uVar12 = FUN_00d50b00();
    }
    local_180 = '\x01';
    pplVar10 = &local_40;
    FUN_000175c0(uVar12,&local_188);
    plVar9 = local_40;
    if ((g_026fde10 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
      g_026d1818 = FUN_00d4fe50();
      g_026d1800 = "GNFilePath";
      g_026d1808 = 0x40;
      g_026d1810 = FUN_00041050;
      g_026d1820 = 0;
      ram_00000000026d1828 = 0;
      g_026d1830 = 0;
      ram_00000000026d1838 = 0;
      g_026d1840 = 0;
      ram_00000000026d1848 = 0;
      g_026d1850 = 0;
      ram_00000000026d1858 = 0;
      g_026d1860 = 0;
      ram_00000000026d1868 = 0;
      g_026d1870 = 0;
      ram_00000000026d1878 = 0;
      g_026d1880 = 0;
      ram_00000000026d1888 = 0;
      g_026d1890 = 0;
      ram_00000000026d1898 = 0;
      g_026d18a0 = 0;
      ram_00000000026d18a8 = 0;
      g_026d18b0 = 0;
      ram_00000000026d18b8 = 0;
      g_026d18c0 = 0;
      ___cxa_guard_release();
    }
    if (plVar9 == (int64_t *)0x0) {
LAB_01f85e96:
      pplVar10 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar9 + 0x360))();
      cVar6 = FUN_00e85ea0();
      if (cVar6 == '\0') goto LAB_01f85e96;
    }
    local_48 = *pplVar10;
    if (local_48 == (int64_t *)0x0) {
      bVar3 = false;
      local_48 = (int64_t *)0x0;
    }
    else {
      if (*(char *)(pplVar10 + 1) == '\0') {
        FUN_00d50b00();
      }
      else {
        *(void*)(pplVar10 + 1) = 0;
      }
      bVar3 = true;
    }
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_180 != '\0') && (local_188 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (local_48 == (int64_t *)0x0) goto LAB_01f85fd1;
    cVar6 = (**(code **)(*local_48 + 0x398))();
    if (cVar6 != '\0') {
      (**(code **)(*local_48 + 0x370))();
      plVar9 = local_40;
      local_178 = g_028bb250;
      if (g_028bb250 != 0) {
        FUN_00d50b00();
      }
      local_170 = '\x01';
      cVar6 = (**(code **)(*plVar9 + 0x50))();
      if ((local_170 != '\0') && (local_178 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar6 != '\0') goto LAB_01f8658b;
    }
  }
  FUN_00ce6e90();
  plVar9 = local_40;
  if ((((local_38[0] == '\0') && (local_40 != (int64_t *)0x0)) &&
      (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d6f370();
  local_168 = g_02801040;
  if (g_02801040 != 0) {
    FUN_00d50b00();
  }
  local_160 = '\x01';
  local_158 = 0;
  local_150 = '\0';
  FUN_00d710b0(&local_158,&local_168);
  plVar5 = local_40;
  if (local_38[0] == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38[0] != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38[0] = '\0';
  }
  if ((local_150 != '\0') && (local_158 != 0)) {
    FUN_00d50b20();
  }
  if ((local_160 != '\0') && (local_168 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
    FUN_00d50b20();
  }
  if (plVar5 != (int64_t *)0x0) {
    local_148 = plVar5;
    local_140 = '\0';
    FUN_00cddf30();
    plVar5 = local_40;
    if (plVar9 == local_40) {
LAB_01f86173:
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_38[0] == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        bVar11 = plVar9 != (int64_t *)0x0;
        plVar9 = plVar5;
        if (bVar11) {
          FUN_00d50b20();
        }
        goto LAB_01f86173;
      }
      if (plVar9 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      local_38[0] = '\0';
      plVar9 = plVar5;
    }
    if ((local_140 != '\0') && (local_148 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  lVar1 = g_028bb250;
  if (g_028bb250 != 0) {
    FUN_00d50b00();
  }
  local_138 = lVar1;
  local_130 = '\x01';
  FUN_001220c0();
  plVar5 = local_40;
  if (local_38[0] == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38[0] != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38[0] = '\0';
  }
  if ((local_130 != '\0') && (local_138 != 0)) {
    FUN_00d50b20();
  }
  uVar12 = FUN_00d6f370();
  local_128 = g_02800fd0;
  if (g_02800fd0 != 0) {
    uVar12 = FUN_00d50b00();
  }
  local_120 = '\x01';
  cVar6 = FUN_00d70f90(uVar12,0);
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar6 != '\0') {
    FUN_00cac150();
    plVar2 = (int64_t *)CONCAT71(uStack_57,local_58);
    if (local_50 == '\0') {
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    local_38[0] = '\0';
    local_40 = plVar2;
    FUN_00d21140();
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_01f27fe0();
  local_110 = '\0';
  local_108 = plVar5;
  local_100 = '\0';
  local_f8 = 0;
  local_f0 = '\0';
  local_118 = plVar9;
  FUN_01f2a980(&local_108,&local_118,0,0);
  plVar2 = local_40;
  if (local_38[0] == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38[0] != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38[0] = '\0';
  }
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_100 != '\0') && (local_108 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_110 != '\0') && (local_118 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (int64_t *)0x0) {
    if (*(int *)((int64_t)plVar2 + 0xc) != 0) {
      FUN_00d23340();
      plVar2 = local_40;
      pcVar8 = local_38;
      if (local_38[0] == '\0') {
        pcVar8 = &local_58;
      }
      local_58 = local_38[0];
      *pcVar8 = '\0';
      if ((local_38[0] != '\0') && (plVar2 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar2 == local_48) {
        if ((bVar3) || (plVar2 == (int64_t *)0x0)) {
          if ((local_58 != '\0') && (plVar2 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          bVar3 = true;
          if (local_58 == '\0') {
            FUN_00d50b00();
          }
        }
      }
      else if (local_58 == '\0') {
        if (plVar2 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        if ((!bVar3) || (local_48 == (int64_t *)0x0)) goto LAB_01f86530;
        local_48 = plVar2;
        FUN_00d50b20();
        bVar3 = true;
      }
      else if ((bVar3) && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
        local_48 = plVar2;
        bVar3 = true;
      }
      else {
LAB_01f86530:
        local_48 = plVar2;
        bVar3 = true;
      }
    }
    FUN_00d50b20();
  }
  if (plVar5 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar9 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_48 == (int64_t *)0x0) {
    return 1;
  }
LAB_01f8658b:
  FUN_00d6f370();
  (**(code **)(*local_48 + 0x3f0))();
  uVar12 = (**(code **)(*local_80 + 0x368))();
  lVar1 = CONCAT71(uStack_57,local_58);
  local_e8 = g_02801040;
  if (local_50 == '\0') {
    if (lVar1 != 0) {
      uVar12 = FUN_00d50b00();
      local_e8 = g_02801040;
    }
  }
  else {
    local_50 = '\0';
  }
  g_02801040 = local_e8;
  if (local_e8 != 0) {
    uVar12 = FUN_00d50b00();
  }
  local_e0 = '\x01';
  FUN_00d6f570(uVar12,&local_e8);
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01da4890();
  local_d8 = local_48;
  local_d0 = '\0';
  cVar6 = (**(code **)(*local_40 + 0x450))();
  uVar12 = extraout_XMM0_Da;
  if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
    uVar12 = FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    uVar12 = FUN_00d50b20();
  }
  lVar1 = g_027f1fc8;
  if (cVar6 == '\0') {
    if (g_027f1fc8 != 0) {
      uVar12 = FUN_00d50b00();
    }
    lVar4 = g_02801048;
    local_c8 = lVar1;
    local_c0 = '\x01';
    if (g_02801048 != 0) {
      uVar12 = FUN_00d50b00();
    }
    local_b8 = lVar4;
    local_b0 = '\x01';
    FUN_01f6ca30(uVar12,&local_b8);
    (**(code **)(*local_40 + 0x5e0))();
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    (**(code **)(*(int64_t *)this_ptr[0x10] + 0x920))();
    FUN_01da4890();
    FUN_01f27fe0();
    FUN_01f28c30();
    lVar1 = CONCAT71(uStack_57,local_58);
    if (local_50 == '\0') {
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    FUN_01da8a40();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_a0 = 0;
    lVar1 = this_ptr[0x10];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_a0 = '\x01';
    local_a8 = lVar1;
    (**(code **)(*this_ptr + 0x5e8))();
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(int64_t *)this_ptr[0x10] + 0x620))();
  }
  if (bVar3) {
    FUN_00d50b20();
  }
  return 1;
}

