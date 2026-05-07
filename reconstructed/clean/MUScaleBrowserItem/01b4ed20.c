// Function: FUN_01b4ed20
// Address: 01b4ed20
// Size: 5208 bytes
// Class: MUScaleBrowserItem
// String references:
//   "%@.%@"
//   "MUScaleBrowserItem"

uint32_t FUN_01b4ed20(uint32_t param_1,int param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  void* pVar7;
  int64_t **pplVar8;
  int64_t *plVar9;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t *unaff_R12;
  uint64_t uVar10;
  int64_t *unaff_R13;
  undefined7 uVar12;
  int64_t *plVar11;
  bool bVar13;
  uint32_t uVar14;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  int64_t *local_1d8;
  int64_t local_198;
  char local_190;
  int64_t *local_188;
  char local_180;
  int64_t *local_178;
  char local_170;
  int64_t *local_168;
  char local_160;
  int64_t *local_158;
  char local_150;
  int64_t local_148;
  char local_140;
  int64_t *local_138;
  char local_130;
  int64_t *local_128;
  char local_120;
  int64_t *local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int local_f4;
  int64_t *local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t *local_d0;
  char local_c8;
  int64_t *local_c0;
  char local_b8;
  int64_t *local_b0;
  int64_t *local_a8;
  int64_t *local_a0;
  int64_t *local_98;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  int64_t *local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  char local_40;
  uint64_t local_38;
  
  local_f4 = param_2;
  if ((param_2 == 0) || (*(int64_t *)(this_ptr + 0x70) == 0)) goto LAB_01b4ffc6;
  FUN_01e56750();
  if (local_78 == (int64_t *)0x0) {
    bVar13 = false;
  }
  else {
    FUN_01e56750();
    FUN_01e5ca90();
    bVar13 = local_48 != (int64_t *)0x0;
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar13) {
    FUN_01e56750();
    FUN_01e5ca90();
    FUN_01d88f70();
    if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_01e53c20();
    if (local_78 == (int64_t *)0x0) {
      bVar13 = false;
    }
    else {
      FUN_01e53c20();
      FUN_01e42030();
      bVar13 = local_48 != (int64_t *)0x0;
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar13) {
      FUN_01e53c20();
      FUN_01e42030();
      FUN_01d88f70();
      if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  pplVar8 = &local_78;
  FUN_01ceb020();
  plVar9 = local_78;
  if ((g_02737920 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_027e2e88 = FUN_00d4fe50();
    g_027e2e70 = "MUScaleBrowserItem";
    g_027e2e78 = 0x20;
    g_027e2e80 = FUN_00841ad0;
    g_027e2e90 = 0;
    ram_00000000027e2e98 = 0;
    g_027e2ea0 = 0;
    ram_00000000027e2ea8 = 0;
    g_027e2eb0 = 0;
    ram_00000000027e2eb8 = 0;
    g_027e2ec0 = 0;
    ram_00000000027e2ec8 = 0;
    g_027e2ed0 = 0;
    ram_00000000027e2ed8 = 0;
    g_027e2ee0 = 0;
    ram_00000000027e2ee8 = 0;
    g_027e2ef0 = 0;
    ram_00000000027e2ef8 = 0;
    g_027e2f00 = 0;
    ram_00000000027e2f08 = 0;
    g_027e2f10 = 0;
    ram_00000000027e2f18 = 0;
    g_027e2f20 = 0;
    ram_00000000027e2f28 = 0;
    g_027e2f30 = 0;
    ___cxa_guard_release();
  }
  if (plVar9 == (int64_t *)0x0) {
LAB_01b4ef48:
    pplVar8 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar9 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_01b4ef48;
  }
  plVar9 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar9 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar8 + 1) = 0;
  }
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar9 != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(this_ptr + 0x98) + 0x970))();
    unaff_R12 = local_78;
    if (local_70 == '\0') {
      if (local_78 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_70 = '\0';
    }
    FUN_01aa3f90();
    unaff_R13 = local_48;
    if (local_40 == '\0') {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    cVar4 = FUN_01b4cd30();
    if (unaff_R13 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (unaff_R12 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      (**(code **)(**(int64_t **)(this_ptr + 0x98) + 0x970))();
      lVar1 = g_027e47f0;
      if (g_027e47f0 != 0) {
        FUN_00d50b00();
      }
      local_f0 = local_90;
      local_e0 = lVar1;
      FUN_00083ea0(2,&local_e0);
      uVar14 = FUN_000b4da0();
      unaff_R12 = local_48;
      if (local_40 == '\0') {
        if (((local_48 != (int64_t *)0x0) && (uVar14 = FUN_00d50b00(), local_40 != '\0')) &&
           (local_48 != (int64_t *)0x0)) {
          uVar14 = FUN_00d50b20();
        }
      }
      else {
        local_40 = '\0';
      }
      local_78 = (int64_t *)&g_0253d630;
      if ((local_50 != '\0') && (local_58 != 0)) {
        uVar14 = FUN_00d50b20();
      }
      local_78 = &g_024c5048;
      if ((local_60 != '\0') && (local_68 != 0)) {
        uVar14 = FUN_00d50b20();
      }
      if (lVar1 != 0) {
        uVar14 = FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
        uVar14 = FUN_00d50b20();
      }
      lVar1 = g_027e47e0;
      if (g_027e47e0 != 0) {
        uVar14 = FUN_00d50b00();
      }
      lVar2 = g_027e47f8;
      if (g_027e47f8 != 0) {
        uVar14 = FUN_00d50b00();
      }
      local_198 = lVar2;
      local_190 = '\x01';
      FUN_01f6ca30(uVar14,&local_198);
      local_188 = unaff_R12;
      local_180 = '\0';
      iVar5 = (**(code **)(*local_78 + 0x5d8))();
      if ((local_180 != '\0') && (local_188 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_190 != '\0') && (local_198 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (unaff_R12 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (iVar5 == 1) {
        FUN_00d50b20();
        return 0;
      }
    }
    FUN_00d50b20();
  }
  pplVar8 = &local_78;
  FUN_01ceb020();
  plVar9 = local_78;
  if ((g_02737920 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_027e2e88 = FUN_00d4fe50();
    g_027e2e70 = "MUScaleBrowserItem";
    g_027e2e78 = 0x20;
    g_027e2e80 = FUN_00841ad0;
    g_027e2e90 = 0;
    ram_00000000027e2e98 = 0;
    g_027e2ea0 = 0;
    ram_00000000027e2ea8 = 0;
    g_027e2eb0 = 0;
    ram_00000000027e2eb8 = 0;
    g_027e2ec0 = 0;
    ram_00000000027e2ec8 = 0;
    g_027e2ed0 = 0;
    ram_00000000027e2ed8 = 0;
    g_027e2ee0 = 0;
    ram_00000000027e2ee8 = 0;
    g_027e2ef0 = 0;
    ram_00000000027e2ef8 = 0;
    g_027e2f00 = 0;
    ram_00000000027e2f08 = 0;
    g_027e2f10 = 0;
    ram_00000000027e2f18 = 0;
    g_027e2f20 = 0;
    ram_00000000027e2f28 = 0;
    g_027e2f30 = 0;
    ___cxa_guard_release();
  }
  if (plVar9 == (int64_t *)0x0) {
LAB_01b4f2a6:
    pplVar8 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar9 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_01b4f2a6;
  }
  plVar9 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar9 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar8 + 1) = 0;
  }
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_b0 = plVar9;
  (**(code **)(**(int64_t **)(this_ptr + 0x98) + 0x970))();
  local_a8 = local_78;
  if ((((local_70 == '\0') && (local_78 != (int64_t *)0x0)) && (FUN_00d50b00(), local_70 != '\0'))
     && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  uVar12 = (undefined7)((uint64_t)unaff_R13 >> 8);
  if (plVar9 == (int64_t *)0x0) {
    FUN_017bf2e0();
    local_80 = local_78;
    if (local_78 == (int64_t *)0x0) goto LAB_01b4f3c3;
    uVar10 = CONCAT71(uVar12,1);
    if (((local_70 == '\0') && (FUN_00d50b00(), local_70 != '\0')) && (local_78 != (int64_t *)0x0))
    {
      FUN_00d50b20();
    }
  }
  else {
    FUN_01aa3f90();
    local_80 = local_78;
    if (local_78 == (int64_t *)0x0) {
LAB_01b4f3c3:
      uVar10 = 0;
      local_80 = (int64_t *)0x0;
    }
    else {
      uVar10 = CONCAT71(uVar12,1);
      if (((local_70 == '\0') && (FUN_00d50b00(), local_70 != '\0')) &&
         (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  (**(code **)(*local_80 + 0x368))();
  plVar9 = local_78;
  FUN_017bf050();
  (**(code **)(*local_90 + 0x368))();
  local_d0 = local_48;
  local_c8 = 0;
  if (local_40 == '\0') {
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  local_c8 = '\x01';
  cVar4 = FUN_00d90870();
  if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 != '\0') {
    local_38 = uVar10;
    (**(code **)(*local_80 + 0x368))();
    plVar11 = local_78;
    if ((((local_70 == '\0') && (local_78 != (int64_t *)0x0)) && (FUN_00d50b00(), local_70 != '\0')
        ) && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_017bf050();
    (**(code **)(*local_90 + 0x368))();
    iVar5 = FUN_00d8c7a0();
    FUN_00d8f140(extraout_XMM0_Da,iVar5 + 1);
    plVar9 = plVar11;
    if (plVar11 == local_78) {
LAB_01b4f5a9:
      if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      plVar9 = local_78;
      if (local_70 == '\0') {
        if (local_78 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        if (plVar11 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        goto LAB_01b4f5a9;
      }
      if (plVar11 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      local_70 = '\0';
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    uVar14 = FUN_017bf2e0();
    plVar11 = local_78;
    if ((((local_70 == '\0') && (local_78 != (int64_t *)0x0)) &&
        (uVar14 = FUN_00d50b00(), local_70 != '\0')) && (local_78 != (int64_t *)0x0)) {
      uVar14 = FUN_00d50b20();
    }
    local_170 = '\0';
    local_178 = plVar9;
    (**(code **)(*plVar11 + 0x400))(uVar14,&local_178);
    plVar11 = local_78;
    uVar12 = (undefined7)((uint64_t)unaff_R12 >> 8);
    if (local_78 == local_80) {
      if (((char)local_38 == '\0') && (local_78 != (int64_t *)0x0)) {
        if (local_70 != '\0') goto LAB_01b4f6b8;
        uVar10 = CONCAT71(uVar12,1);
        FUN_00d50b00();
      }
      else {
        uVar10 = local_38 & 0xffffffff;
      }
LAB_01b4f6c5:
      if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_70 == '\0') {
        if (local_78 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        uVar10 = CONCAT71(uVar12,1);
        if ((char)local_38 == '\0') {
          local_80 = plVar11;
        }
        else {
          local_80 = plVar11;
          FUN_00d50b20();
        }
        goto LAB_01b4f6c5;
      }
      if ((char)local_38 == '\0') {
        local_80 = local_78;
      }
      else {
        local_80 = local_78;
        FUN_00d50b20();
      }
LAB_01b4f6b8:
      local_70 = '\0';
      uVar10 = CONCAT71(uVar12,1);
    }
    if ((local_170 != '\0') && (local_178 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (plVar9 == (int64_t *)0x0) {
      uVar10 = uVar10 & 0xffffffff;
    }
    else {
      FUN_00d50b20();
      uVar10 = uVar10 & 0xffffffff;
    }
  }
  FUN_017a9f30();
  FUN_00df1af0();
  local_1d8 = local_f0;
  pVar7 = 2;
  uVar14 = FUN_00083ea0(2,&local_1d8);
  uVar14 = FUN_00d8cb40(uVar14,&local_78);
  local_c0 = local_90;
  local_b8 = 0;
  if (local_88 == '\0') {
    if (local_90 != (int64_t *)0x0) {
      uVar14 = FUN_00d50b00();
    }
  }
  else {
    local_88 = '\0';
  }
  plVar11 = local_80;
  local_b8 = '\x01';
  (**(code **)(*local_80 + 0x400))(uVar14,&local_c0);
  plVar3 = local_48;
  cVar4 = (char)uVar10;
  uVar12 = (undefined7)((uint64_t)plVar9 >> 8);
  if (local_48 == plVar11) {
    if ((cVar4 == '\0') && (local_48 != (int64_t *)0x0)) {
      if (local_40 != '\0') goto LAB_01b4f87a;
      uVar10 = CONCAT71(uVar12,1);
      FUN_00d50b00();
    }
    else {
      uVar10 = uVar10 & 0xffffffff;
    }
joined_r0x01b4fd36:
    if ((local_40 == '\0') || (local_48 == (int64_t *)0x0)) {
      uVar10 = uVar10 & 0xffffffff;
    }
    else {
      FUN_00d50b20();
      uVar10 = uVar10 & 0xffffffff;
    }
  }
  else {
    if (local_40 == '\0') {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      uVar10 = CONCAT71(uVar12,1);
      local_80 = plVar3;
      if (cVar4 != '\0') {
        FUN_00d50b20();
      }
      goto joined_r0x01b4fd36;
    }
    if (cVar4 == '\0') {
      local_80 = local_48;
    }
    else {
      local_80 = local_48;
      FUN_00d50b20();
    }
LAB_01b4f87a:
    local_40 = '\0';
    uVar10 = CONCAT71((int7)((uint64_t)plVar3 >> 8),1);
  }
  if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_78 = (int64_t *)&g_0253d630;
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  local_78 = &g_024c5048;
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*local_80 + 0x3f0))();
  cVar4 = FUN_00ce6e30();
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 == '\0') {
    (**(code **)(*local_80 + 0x3f0))();
    (**(code **)(*local_78 + 0x428))();
    if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*local_80 + 0x3f0))();
  cVar4 = FUN_00ce6e30();
  param_1 = extraout_XMM0_Da_00;
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    param_1 = FUN_00d50b20();
  }
  plVar9 = local_b0;
  if (cVar4 != '\0') {
    param_1 = FUN_01d2ac30();
    if (local_70 == '\0') {
      if (local_78 != (int64_t *)0x0) {
        FUN_00d50b00();
        if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01b4fa12;
      }
    }
    else if (local_78 != (int64_t *)0x0) {
LAB_01b4fa12:
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_168 = local_a8;
      local_160 = '\0';
      FUN_017aaae0();
      if ((local_160 != '\0') && (local_168 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_017bf2e0();
      plVar11 = local_78;
      if ((((local_70 == '\0') && (local_78 != (int64_t *)0x0)) &&
          (FUN_00d50b00(), local_70 != '\0')) && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*local_80 + 0x3f0))();
      local_158 = plVar11;
      local_150 = '\0';
      cVar4 = (**(code **)(*local_78 + 0x50))();
      if ((local_150 != '\0') && (local_158 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar4 == '\0') {
        (**(code **)(*local_80 + 0x3f0))();
        (**(code **)(*local_48 + 0x388))();
        plVar9 = local_78;
        if (local_70 == '\0') {
          if (((local_78 != (int64_t *)0x0) && (FUN_00d50b00(), local_70 != '\0')) &&
             (local_78 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_70 = '\0';
        }
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        local_138 = plVar9;
        local_130 = '\0';
        FUN_01aaed70();
        local_a0 = local_78;
        if (plVar9 == local_78) {
          local_a0 = plVar9;
LAB_01b4fdb6:
          if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_70 == '\0') {
            if (local_78 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            if (plVar9 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            goto LAB_01b4fdb6;
          }
          if (plVar9 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          local_70 = '\0';
        }
        if ((local_130 != '\0') && (local_138 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_017aa5e0();
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0173b6f0();
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_128 = local_a0;
        local_120 = '\0';
        FUN_01735120();
        plVar9 = local_b0;
        if ((local_120 != '\0') && (local_128 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (local_a0 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      else {
        local_98 = plVar11;
        local_38 = uVar10;
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_017aa5e0();
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0173b6f0();
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        lVar1 = g_027e3c20;
        if (g_027e3c20 != 0) {
          FUN_00d50b00();
        }
        local_148 = lVar1;
        local_140 = '\x01';
        FUN_01735120();
        uVar10 = local_38;
        plVar11 = local_98;
        plVar9 = local_b0;
        if ((local_140 != '\0') && (local_148 != 0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_118 = local_80;
      local_110 = '\0';
      FUN_017bea90();
      if ((local_110 != '\0') && (local_118 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar11 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      param_1 = FUN_00d50b20();
    }
  }
  if ((char)uVar10 != '\0') {
    param_1 = FUN_00d50b20();
  }
  if (local_a8 != (int64_t *)0x0) {
    param_1 = FUN_00d50b20();
  }
  if (plVar9 != (int64_t *)0x0) {
    param_1 = FUN_00d50b20();
  }
LAB_01b4ffc6:
  local_108 = *arg1;
  local_100 = '\0';
  uVar14 = FUN_01ad0160(param_1,(uint8_t)local_f4);
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  return uVar14;
}

