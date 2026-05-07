// ===================================================================
// MDMetaDocumentController — Complete reconstructed pseudocode
// 5 functions
// ===================================================================


// ============================================================
// 00366040
// ============================================================
// Function: FUN_00366040
// Address: 00366040
// Size: 3857 bytes
// Class: MDMetaDocumentController
// String references:
//   "MDMetaDocumentController"

void FUN_00366040(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  char cVar6;
  int iVar7;
  int64_t **pplVar8;
  char *pcVar9;
  int64_t *this_ptr;
  int64_t **pplVar10;
  bool bVar11;
  uint32_t uVar12;
  uint32_t uVar13;
  int64_t local_1d8;
  char local_1d0;
  int64_t *local_1c8;
  char local_1c0;
  int64_t local_1b8;
  char local_1b0;
  int64_t local_1a8;
  char local_1a0;
  int64_t local_198;
  char local_190;
  int64_t local_188;
  char local_180;
  int64_t local_178;
  char local_170;
  int64_t local_168;
  char local_160;
  int64_t local_158;
  char local_150;
  int64_t local_148;
  char local_140;
  int64_t local_138;
  char local_130;
  int64_t local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  char local_108;
  undefined7 uStack_107;
  char local_100;
  int64_t *local_f8;
  char local_f0;
  int64_t *local_68;
  char local_60;
  char local_58 [8];
  int64_t *local_50;
  bool local_48;
  int64_t *local_40;
  char local_38 [8];
  
  FUN_0028b3b0();
  FUN_00365f50();
  FUN_00bebd80();
  FUN_00d6f370();
  plVar4 = local_40;
  if ((((local_38[0] == '\0') && (local_40 != (int64_t *)0x0)) &&
      (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_013933d0();
  plVar3 = local_40;
  if (local_38[0] == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38[0] = '\0';
  }
  uVar12 = FUN_00b7b830();
  if (plVar3 != (int64_t *)0x0) {
    uVar12 = FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    uVar12 = FUN_00d50b20();
  }
  lVar2 = g_026f6e78;
  if (g_026f6e78 != 0) {
    uVar12 = FUN_00d50b00();
  }
  cVar6 = FUN_00d70f90(uVar12,0);
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (cVar6 != '\0') {
    uVar12 = FUN_01f28c30();
    local_1d8 = g_026dea80;
    if (g_026dea80 != 0) {
      uVar12 = FUN_00d50b00();
    }
    local_1d0 = '\x01';
    FUN_01d5e6e0(uVar12,&local_1d8);
    plVar3 = local_40;
    if (local_38[0] == '\0') {
      if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38[0] != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38[0] = '\0';
    }
    if ((local_1d0 != '\0') && (local_1d8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != false) && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar3 != (int64_t *)0x0) {
      FUN_01d65ea0();
      local_1c8 = plVar3;
      local_1c0 = '\0';
      uVar12 = FUN_01d5e2e0();
      if ((local_1c0 != '\0') && (local_1c8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      uVar13 = FUN_01d65ea0();
      local_1b8 = g_026fb800;
      if (g_026fb800 != 0) {
        uVar13 = FUN_00d50b00();
      }
      lVar2 = g_026fb808;
      local_1b0 = '\x01';
      if (g_026fb808 != 0) {
        uVar13 = FUN_00d50b00();
      }
      local_1a8 = lVar2;
      local_1a0 = '\x01';
      uVar13 = FUN_01d64ce0(uVar13,&local_1a8);
      plVar3 = local_50;
      if (local_48 == false) {
        if (local_50 != (int64_t *)0x0) {
          uVar13 = FUN_00d50b00();
        }
      }
      else {
        local_48 = false;
      }
      FUN_01d5d7f0(uVar13,uVar12);
      if (plVar3 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_48 != false) && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_1a0 != '\0') && (local_1a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_1b0 != '\0') && (local_1b8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  FUN_01da4890();
  FUN_01f28c30();
  plVar3 = local_50;
  if (local_48 == false) {
    if (local_50 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = false;
  }
  FUN_01da8a40();
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_48 != false) && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x720))();
  plVar3 = local_40;
  uVar12 = FUN_01f28c30();
  local_198 = g_026fb838;
  if (g_026fb838 != 0) {
    uVar12 = FUN_00d50b00();
  }
  local_190 = '\x01';
  FUN_01d5e6e0(uVar12,&local_198);
  pplVar10 = &local_50;
  FUN_01d64cb0();
  plVar1 = local_50;
  if (local_48 == false) {
    if (local_50 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = false;
  }
  (**(code **)(*plVar3 + 0x638))();
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_48 != false) && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (CONCAT71(local_68._1_7_,(char)local_68) != 0)) {
    FUN_00d50b20();
  }
  if ((local_190 != '\0') && (local_198 != 0)) {
    FUN_00d50b20();
  }
  if ((local_100 != '\0') && (CONCAT71(uStack_107,local_108) != 0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar2 = g_02703ad8;
  if (g_02703ad8 != 0) {
    FUN_00d50b00();
  }
  local_188 = lVar2;
  local_180 = '\x01';
  local_178 = 0;
  local_170 = '\0';
  FUN_00d704d0(&local_178,&local_188);
  plVar3 = local_40;
  if (local_38[0] == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38[0] != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38[0] = '\0';
  }
  if ((local_170 != '\0') && (local_178 != 0)) {
    FUN_00d50b20();
  }
  if ((local_180 != '\0') && (local_188 != 0)) {
    FUN_00d50b20();
  }
  FUN_00b160d0();
  plVar1 = local_40;
  if (local_38[0] == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38[0] = '\0';
  }
  FUN_00367bf0();
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00b160d0();
  (**(code **)(*local_40 + 0x368))();
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  uVar12 = (**(code **)(*this_ptr + 0x4b0))();
  lVar2 = g_02703ae0;
  if (*(int *)(this_ptr[0xd] + 0xc) != 0) {
    if (g_02703ae0 != 0) {
      uVar12 = FUN_00d50b00();
    }
    local_168 = lVar2;
    local_160 = '\x01';
    cVar6 = FUN_00d70f90(uVar12,0);
    if (cVar6 == '\0') {
      cVar6 = '\0';
    }
    else {
      FUN_00d23310();
      plVar1 = local_40;
      pplVar8 = (int64_t **)local_38;
      if (local_38[0] == '\0') {
        pplVar8 = pplVar10;
      }
      local_50 = (int64_t *)CONCAT71(local_50._1_7_,local_38[0]);
      *(void*)pplVar8 = 0;
      if ((local_38[0] != '\0') && (plVar1 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      cVar6 = (**(code **)(*plVar1 + 0x398))();
      if (((char)local_50 != '\0') && (plVar1 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_160 != '\0') && (local_168 != 0)) {
      FUN_00d50b20();
    }
    if (cVar6 != '\0') {
      FUN_00d23310();
      plVar1 = local_40;
      pplVar8 = (int64_t **)local_38;
      if (local_38[0] == '\0') {
        pplVar8 = pplVar10;
      }
      local_50 = (int64_t *)CONCAT71(local_50._1_7_,local_38[0]);
      *(void*)pplVar8 = 0;
      if ((local_38[0] != '\0') && (plVar1 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_50 == '\0') && (plVar1 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      (**(code **)(*this_ptr + 0x528))();
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  (**(code **)(*this_ptr + 0x628))();
  FUN_01f30840();
  FUN_00d23310();
  plVar1 = local_40;
  bVar11 = local_38[0] == '\0';
  local_50 = local_40;
  if (bVar11) {
    local_48 = false;
  }
  else {
    local_48 = true;
    local_38[0] = '\0';
  }
  local_48 = !bVar11;
  if ((g_026fbe40 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
    g_0271be08 = FUN_000838a0();
    g_0271bdf0 = "MDMetaDocumentController";
    g_0271bdf8 = 0x60;
    g_0271be00 = FUN_002a0ad0;
    g_0271be10 = 0;
    ram_000000000271be18 = 0;
    g_0271be20 = 0;
    g_0271be98 = 0;
    ram_000000000271bea0 = 0;
    g_0271bea8 = 0;
    g_0271beaa = 1;
    g_0271be28 = 0;
    ram_000000000271be30 = 0;
    g_0271be38 = 0;
    ram_000000000271be40 = 0;
    g_0271be48 = 0;
    ram_000000000271be50 = 0;
    g_0271be58 = 0;
    ram_000000000271be60 = 0;
    g_0271be68 = 0;
    ram_000000000271be70 = 0;
    g_0271be78 = 0;
    ram_000000000271be80 = 0;
    g_0271be88 = 0;
    ram_000000000271be90 = 0;
    g_0271beb3 = 0;
    g_0271beab = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (int64_t *)0x0) {
    pplVar10 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar6 = FUN_00e85ea0();
    if (cVar6 == '\0') {
      pplVar10 = (int64_t **)&g_02802688;
    }
  }
  plVar1 = *pplVar10;
  local_108 = *(char *)(pplVar10 + 1);
  pplVar10 = pplVar10 + 1;
  if (local_108 == '\0') {
    pplVar10 = (int64_t **)&local_108;
  }
  *(void*)pplVar10 = 0;
  if ((local_48 != false) && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (CONCAT71(local_68._1_7_,(char)local_68) != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x5e8))();
    if (local_50 == (int64_t *)0x0) {
      bVar11 = false;
    }
    else {
      (**(code **)(*plVar1 + 0x5e8))();
      FUN_00d23310();
      plVar5 = local_40;
      pcVar9 = local_58;
      if (local_38[0] != '\0') {
        pcVar9 = local_38;
      }
      local_58[0] = local_38[0];
      *pcVar9 = '\0';
      if ((local_38[0] != '\0') && (plVar5 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      bVar11 = plVar5 != (int64_t *)0x0;
      if ((local_58[0] != '\0') && (plVar5 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (CONCAT71(local_68._1_7_,(char)local_68) != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_48 != false) && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar11) {
      (**(code **)(*plVar1 + 0x5e8))();
      FUN_00d23310();
      plVar5 = local_40;
      pplVar10 = (int64_t **)local_38;
      if (local_38[0] == '\0') {
        pplVar10 = &local_68;
      }
      local_68._0_1_ = local_38[0];
      *(void*)pplVar10 = 0;
      if ((local_38[0] != '\0') && (plVar5 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00654ff0();
      if (((char)local_68 != '\0') && (plVar5 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48 != false) && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  FUN_013fd5b0();
  local_f0 = 0;
  (**(code **)(this_ptr[0x29] + 0x10))();
  FUN_00d50b00();
  local_f0 = '\x01';
  local_f8 = this_ptr + 0x29;
  FUN_013fdae0();
  if ((local_f0 != '\0') && (local_f8 != (int64_t *)0x0)) {
    (**(code **)(*local_f8 + 0x10))();
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00b160d0();
    (**(code **)(*local_50 + 0x5e0))();
    plVar5 = local_40;
    if (local_38[0] == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38[0] = '\0';
    }
    cVar6 = (**(code **)(*plVar3 + 0x50))();
    if (plVar5 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != false) && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar6 == '\0') {
      uVar12 = FUN_00d6f370();
      local_158 = g_02703ae8;
      if (g_02703ae8 != 0) {
        uVar12 = FUN_00d50b00();
      }
      local_150 = '\x01';
      cVar6 = FUN_00d70f90(uVar12,1);
      if ((local_150 != '\0') && (local_158 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar6 != '\0') {
        FUN_00d403d0();
        local_148 = g_02703af0;
        if (g_02703af0 != 0) {
          FUN_00d50b00();
        }
        local_140 = '\x01';
        FUN_00d50b00();
        local_138 = 0;
        local_130 = '\0';
        FUN_00d40470(&local_138,&stack0xffffffffffffff18,1,3);
        if ((local_130 != '\0') && (local_138 != 0)) {
          FUN_00d50b20();
        }
        if (this_ptr != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_140 != '\0') && (local_148 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        uVar12 = FUN_00d6f370();
        local_128 = g_02703ae8;
        if (g_02703ae8 != 0) {
          uVar12 = FUN_00d50b00();
        }
        local_120 = '\x01';
        FUN_00d70ea0(uVar12,&local_128);
        if ((local_120 != '\0') && (local_128 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      uVar12 = FUN_00d6f370();
      local_118 = g_02703ae8;
      if (g_02703ae8 != 0) {
        uVar12 = FUN_00d50b00();
      }
      local_110 = '\x01';
      FUN_00d70ea0(uVar12,&local_118);
      if ((local_110 != '\0') && (local_118 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  if ((local_108 != '\0') && (plVar1 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00368120
// ============================================================
// Function: FUN_00368120
// Address: 00368120
// Size: 2107 bytes
// Class: MDMetaDocumentController

void FUN_00368120(void)

{
  uint uVar1;
  int64_t *plVar2;
  bool bVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  char cVar7;
  uint32_t uVar8;
  uint uVar9;
  int64_t lVar10;
  void *pvVar11;
  void* pVar12;
  int64_t lVar13;
  int iVar14;
  void *in_R9;
  int64_t **pplVar15;
  int64_t *local_148;
  uint8_t local_140;
  int64_t *local_138;
  uint8_t local_130;
  int64_t *in_stack_fffffffffffffed8;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_b8;
  char local_b0;
  int64_t *local_80;
  char local_78;
  int64_t *local_60;
  int64_t *local_58;
  code *local_50;
  int64_t *local_48;
  uint64_t local_40;
  int local_38;
  
  FUN_00b160d0();
  plVar4 = local_58;
  if ((char)local_50 == '\0') {
    if (local_58 == (int64_t *)0x0) {
      return;
    }
    FUN_00d50b00();
    if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_58 == (int64_t *)0x0) {
    return;
  }
  pplVar15 = &local_58;
  FUN_01f27fe0();
  plVar2 = local_58;
  FUN_003708c0();
  if (plVar2 == (int64_t *)0x0) {
LAB_003681ae:
    pplVar15 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar2 + 0x360))();
    cVar7 = FUN_00e85ea0();
    if (cVar7 == '\0') goto LAB_003681ae;
  }
  plVar2 = *pplVar15;
  if (*(char *)(pplVar15 + 1) == '\0') {
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar15 + 1) = 0;
  }
  if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar2 == (int64_t *)0x0) goto LAB_00368969;
  FUN_00c8e710();
  plVar5 = local_58;
  local_60 = local_58;
  if (((char)local_50 == '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b00();
    if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00c92170();
  FUN_00c92160();
  FUN_00c8e710();
  plVar6 = local_58;
  if (((char)local_50 == '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b00();
    if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00c92170();
  FUN_00c92160();
  uVar8 = (**(code **)(*plVar4 + 0x698))();
  uVar9 = (**(code **)(*plVar4 + 0x690))();
  (**(code **)(*plVar2 + 0x720))();
  (**(code **)(*local_80 + 0x618))();
  plVar2 = local_58;
  if ((char)local_50 == '\0') {
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b00();
      if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_50 = ((uint64_t)local_50 & 0xffffffffffffff00);
  }
  if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (int64_t *)0x0) {
    local_50 = ((uint64_t)local_50 & 0xffffffffffffff00);
    local_58 = (int64_t *)0x0;
    local_48 = plVar2;
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
      lVar10 = (int64_t)(int)local_40;
      iVar14 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar14);
      if (*(int *)((int64_t)local_48 + 0xc) <= iVar14) break;
      lVar13 = local_48[2];
      local_58 = *(int64_t **)(lVar13 + 8 + lVar10 * 8);
      FUN_00757c60();
      pVar12 = (void*)lVar13;
      pvVar11 = _pthread_getspecific(pVar12);
      if (pvVar11 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cb110();
      if (local_78 == '\0') {
        if (local_80 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_78 = '\0';
      }
      in_stack_fffffffffffffed8 = local_80;
      FUN_00757c60();
      pvVar11 = _pthread_getspecific(pVar12);
      if (pvVar11 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cb450();
      if (local_b0 == '\0') {
        if (local_b8 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_b0 = '\0';
      }
      local_148 = plVar5;
      local_140 = 0;
      local_138 = plVar6;
      local_130 = 0;
      in_R9 = (void *)(uint64_t)uVar9;
      FUN_00368ec0(&local_138,&local_148,uVar8);
      if (local_b8 != 0) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_e8 != '\0') && (local_f0 != 0)) {
        FUN_00d50b20();
      }
      if (local_80 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_f8 != '\0') && (local_100 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_002b3090();
    FUN_00d50b20();
  }
  uVar9 = (int)plVar5[3] + 3;
  if (uVar9 < 7) {
    local_60 = (int64_t *)0x0;
    FUN_00d50b20();
  }
  else {
    local_58 = (int64_t *)0x0;
    local_50 = FUN_00e8b540;
    _qsort_r(&local_58,4,0x370b80,in_R9,(int *)in_stack_fffffffffffffed8);
  }
  uVar1 = (int)plVar6[3] + 3;
  if (uVar1 < 7) {
    FUN_00d50b20();
    (**(code **)(*plVar4 + 0x6b0))();
    plVar2 = local_58;
    if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar2 != (int64_t *)0x0) goto LAB_00368875;
LAB_003687a2:
    if (local_60 == (int64_t *)0x0) {
      (**(code **)(*plVar4 + 0x6b8))();
      plVar2 = local_58;
      if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar2 != (int64_t *)0x0) goto LAB_00368875;
    }
    else {
      (**(code **)(*plVar4 + 0x6b8))();
      plVar2 = local_58;
      if ((char)local_50 == '\0') {
        if (local_58 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = ((uint64_t)local_50 & 0xffffffffffffff00);
      }
      cVar7 = (**(code **)(*local_60 + 0x50))();
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar7 == '\0') goto LAB_00368875;
    }
  }
  else {
    local_58 = (int64_t *)0x0;
    local_50 = FUN_00e8b540;
    _qsort_r(&local_58,4,0x370b80,in_R9,(int *)in_stack_fffffffffffffed8);
    (**(code **)(*plVar4 + 0x6b0))();
    plVar2 = local_58;
    if ((char)local_50 == '\0') {
      if (local_58 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = ((uint64_t)local_50 & 0xffffffffffffff00);
    }
    cVar7 = (**(code **)(*plVar6 + 0x50))();
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar7 != '\0') goto LAB_003687a2;
LAB_00368875:
    cVar7 = (**(code **)(*plVar4 + 0x390))();
    if ((cVar7 == '\0') || (cVar7 = (**(code **)(*plVar4 + 0x6c0))(), cVar7 == '\0')) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
      (**(code **)(*plVar4 + 0x370))();
    }
    (**(code **)(*plVar4 + 0x6a0))();
    (**(code **)(*plVar4 + 0x6a8))();
    if (bVar3) {
      (**(code **)(*plVar4 + 0x368))();
    }
  }
  if (6 < uVar1) {
    FUN_00d50b20();
  }
  if ((6 < uVar9) && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_00368969:
  FUN_00d50b20();
  return;
}



// ============================================================
// 00368ec0
// ============================================================
// Function: FUN_00368ec0
// Address: 00368ec0
// Size: 1514 bytes
// Class: MDMetaDocumentController

void FUN_00368ec0(int64_t *param_1,int64_t *param_2,int param_3,int param_4)

{
  uint uVar1;
  int64_t lVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  void *pvVar6;
  void* pVar7;
  int64_t lVar8;
  int64_t lVar9;
  int iVar10;
  int64_t lVar11;
  int64_t local_c8;
  uint8_t local_c0;
  int64_t local_b8;
  uint8_t local_b0;
  int64_t *local_a8;
  int64_t *local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int local_78;
  int local_74;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  int local_58;
  uint64_t local_54;
  
  local_a8 = param_2;
  local_a0 = param_1;
  local_78 = param_3;
  local_74 = param_4;
  pvVar6 = _pthread_getspecific((void*)param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e8a60();
  lVar2 = local_70;
  if (local_70 == 0) {
    bVar4 = false;
    lVar9 = 0;
  }
  else {
    if (((local_68 == '\0') && (FUN_00d50b00(), local_68 != '\0')) && (local_70 != 0)) {
      FUN_00d50b20();
    }
    iVar10 = 0;
    while( true ) {
      pvVar6 = _pthread_getspecific((void*)param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar5 = FUN_0124a860();
      if (iVar5 <= iVar10) break;
      pvVar6 = _pthread_getspecific((void*)param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_98 = lVar2;
      local_90 = '\0';
      iVar5 = FUN_01240ab0();
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if (iVar5 < local_78) {
        lVar9 = *local_a8;
        uVar1 = *(uint *)(lVar9 + 0x18);
        lVar11 = (int64_t)(int)uVar1;
        uVar3 = uVar1 + 3;
        if (-1 < lVar11) {
          uVar3 = uVar1;
        }
        param_1 = (int64_t *)(uint64_t)uVar3;
        if (3 < lVar11) {
          param_1 = (int64_t *)(uint64_t)(uint)((int)uVar3 >> 2);
          lVar8 = 0;
          do {
            if (*(int *)(*(int64_t *)(lVar9 + 0x10) + lVar8 * 4) == iVar5) goto LAB_00368f70;
            lVar8 = lVar8 + 1;
          } while ((int)uVar3 >> 2 != (uint)lVar8);
        }
        FUN_00c8e340(param_1,1);
        *(int *)(*(int64_t *)(lVar9 + 0x10) + lVar11) = iVar5;
      }
LAB_00368f70:
      iVar10 = iVar10 + 1;
    }
    bVar4 = true;
    lVar9 = lVar2;
  }
  pvVar6 = _pthread_getspecific((void*)param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e8b20();
  lVar11 = local_70;
  if (local_70 == lVar9) {
    lVar11 = lVar9;
    if ((lVar2 != 0) || (local_70 == 0)) goto joined_r0x003694c1;
    bVar4 = true;
    if (local_68 == '\0') {
      FUN_00d50b00();
      goto LAB_003691a8;
    }
  }
  else if (local_68 == '\0') {
    if (local_70 != 0) {
      FUN_00d50b00();
    }
    bVar4 = true;
    if (lVar2 != 0 && lVar9 != 0) {
      FUN_00d50b20();
      lVar9 = lVar11;
LAB_003691a8:
      bVar4 = true;
      lVar11 = lVar9;
    }
joined_r0x003694c1:
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    bVar4 = true;
    if (lVar2 != 0 && lVar9 != 0) {
      FUN_00d50b20();
    }
  }
  pVar7 = (void*)param_1;
  if (lVar11 != 0) {
    iVar10 = 0;
    while( true ) {
      pvVar6 = _pthread_getspecific((void*)param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar5 = FUN_0124a860();
      pVar7 = (void*)param_1;
      if (iVar5 <= iVar10) break;
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_80 = '\0';
      local_88 = lVar11;
      iVar5 = FUN_01240ab0();
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if (iVar5 < local_74) {
        lVar2 = *local_a0;
        uVar1 = *(uint *)(lVar2 + 0x18);
        lVar9 = (int64_t)(int)uVar1;
        uVar3 = uVar1 + 3;
        if (-1 < lVar9) {
          uVar3 = uVar1;
        }
        param_1 = (int64_t *)(uint64_t)uVar3;
        if (3 < lVar9) {
          param_1 = (int64_t *)(uint64_t)(uint)((int)uVar3 >> 2);
          lVar8 = 0;
          do {
            if (*(int *)(*(int64_t *)(lVar2 + 0x10) + lVar8 * 4) == iVar5) goto LAB_003691e0;
            lVar8 = lVar8 + 1;
          } while ((int)uVar3 >> 2 != (uint)lVar8);
        }
        FUN_00c8e340(param_1,1);
        *(int *)(*(int64_t *)(lVar2 + 0x10) + lVar9) = iVar5;
      }
LAB_003691e0:
      iVar10 = iVar10 + 1;
    }
  }
  pvVar6 = _pthread_getspecific(pVar7);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  lVar2 = local_70;
  if (local_68 == '\0') {
    if (local_70 == 0) goto LAB_00369458;
    FUN_00d50b00();
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_70 == 0) goto LAB_00369458;
  local_68 = '\0';
  local_70 = 0;
  local_60 = lVar2;
  local_54 = 0;
  for (lVar9 = 0; local_58 = (int)lVar9, local_58 < *(int *)(lVar2 + 0xc); lVar9 = lVar9 + 1) {
    local_70 = *(int64_t *)(*(int64_t *)(lVar2 + 0x10) + lVar9 * 8);
    local_c8 = *local_a8;
    local_c0 = 0;
    local_b8 = *local_a0;
    local_b0 = 0;
    FUN_00368ec0(&local_b8,&local_c8,local_78,local_74);
  }
  FUN_000be170();
  FUN_00d50b20();
LAB_00369458:
  if ((bVar4) && (lVar11 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 0036ef90
// ============================================================
// Function: FUN_0036ef90
// Address: 0036ef90
// Size: 1266 bytes
// Class: MDMetaDocumentController
// String references:
//   "MDMetaDocumentController"

uint64_t FUN_0036ef90(void)

{
  int64_t *plVar1;
  bool bVar2;
  int64_t *plVar3;
  char cVar4;
  int iVar5;
  int64_t **pplVar6;
  void*puVar7;
  uint64_t uVar8;
  int64_t *this_ptr;
  int64_t *plVar9;
  int64_t lVar10;
  int64_t local_98;
  char local_90;
  int64_t *local_68;
  char local_60;
  int local_50;
  int64_t *local_40;
  char local_38;
  
  FUN_01f30840();
  iVar5 = *(int *)((int64_t)local_68 + 0xc);
  if (local_60 != '\0') {
    FUN_00d50b20();
  }
  if (iVar5 == 0) {
    uVar8 = 1;
    goto LAB_0036f3ba;
  }
  FUN_01f30840();
  FUN_00d23310();
  local_38 = local_60 != '\0';
  local_40 = local_68;
  if ((bool)local_38) {
    local_60 = '\0';
  }
  if ((g_026fbe40 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_0271be08 = FUN_000838a0();
    g_0271bdf0 = "MDMetaDocumentController";
    g_0271bdf8 = 0x60;
    g_0271be00 = FUN_002a0ad0;
    g_0271be10 = 0;
    ram_000000000271be18 = 0;
    g_0271be20 = 0;
    g_0271be98 = 0;
    ram_000000000271bea0 = 0;
    g_0271bea8 = 0;
    g_0271beaa = 1;
    g_0271be28 = 0;
    ram_000000000271be30 = 0;
    g_0271be38 = 0;
    ram_000000000271be40 = 0;
    g_0271be48 = 0;
    ram_000000000271be50 = 0;
    g_0271be58 = 0;
    ram_000000000271be60 = 0;
    g_0271be68 = 0;
    ram_000000000271be70 = 0;
    g_0271be78 = 0;
    ram_000000000271be80 = 0;
    g_0271be88 = 0;
    ram_000000000271be90 = 0;
    g_0271beb3 = 0;
    g_0271beab = 0;
    ___cxa_guard_release();
  }
  if (local_68 == (int64_t *)0x0) {
LAB_0036f05d:
    pplVar6 = &g_02802688;
    plVar9 = g_02802688;
    if (g_02802690 != '\0') goto LAB_0036f06d;
LAB_0036f080:
    if (plVar9 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    (**(code **)(*local_68 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_0036f05d;
    pplVar6 = &local_40;
    plVar9 = local_40;
    if (local_38 == '\0') goto LAB_0036f080;
LAB_0036f06d:
    *(void*)(pplVar6 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &g_02572358;
  (*g_02572370)();
  (**(code **)(*plVar9 + 0x618))();
  if (local_60 == '\0') {
    if (local_68 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_0036f136;
    }
  }
  else if (local_68 != (int64_t *)0x0) {
LAB_0036f136:
    local_50 = -1;
    while( true ) {
      lVar10 = (int64_t)local_50;
      local_50 = local_50 + 1;
      if (*(int *)((int64_t)local_68 + 0xc) <= local_50) break;
      plVar1 = *(int64_t **)(local_68[2] + 8 + lVar10 * 8);
      cVar4 = (**(code **)(*plVar1 + 0x478))();
      if (cVar4 != '\0') {
        local_38 = '\0';
        local_40 = plVar1;
        FUN_00d21140();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_002b3090();
    FUN_00d50b20();
  }
  if (*(int *)((int64_t)puVar7 + 0xc) < 1) {
LAB_0036f3a2:
    uVar8 = CONCAT71((int7)((uint64_t)puVar7 >> 8),1);
  }
  else {
    if (*(int *)((int64_t)puVar7 + 0xc) == 1) {
LAB_0036f234:
      if (0 < *(int *)((int64_t)puVar7 + 0xc)) {
        lVar10 = 0;
        do {
          plVar1 = *(int64_t **)(puVar7[2] + lVar10 * 8);
          (**(code **)(*plVar1 + 0x4c8))();
          FUN_01f27fe0();
          iVar5 = (**(code **)(*local_40 + 0x5b8))();
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (iVar5 == 0) {
            (**(code **)(*plVar1 + 0x498))();
            plVar3 = local_40;
            if (local_38 == '\0') {
              if (local_40 != (int64_t *)0x0) {
                FUN_00d50b00();
                if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_0036f350;
              }
LAB_0036f361:
              bVar2 = true;
            }
            else {
              if (local_40 == (int64_t *)0x0) goto LAB_0036f361;
LAB_0036f350:
              bVar2 = false;
              FUN_00cafd20();
            }
            (**(code **)(*plVar1 + 0x4f8))();
            if (!bVar2) {
              (**(code **)(*plVar3 + 0x3c8))();
              FUN_00d50b20();
            }
          }
          else if (iVar5 == 1) {
            FUN_002b3090();
            goto LAB_0036f3d4;
          }
          lVar10 = lVar10 + 1;
        } while ((int)lVar10 < *(int *)((int64_t)puVar7 + 0xc));
      }
      FUN_002b3090();
      goto LAB_0036f3a2;
    }
    iVar5 = (**(code **)(*this_ptr + 0x5c8))();
    if (iVar5 != 1) {
      if (iVar5 != 0) goto LAB_0036f3a2;
      goto LAB_0036f234;
    }
LAB_0036f3d4:
    uVar8 = 0;
  }
  FUN_00d50b20();
  if (plVar9 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_0036f3ba:
  return uVar8 & 0xffffffff;
}



// ============================================================
// 00367bf0
// ============================================================
// Function: FUN_00367bf0
// Address: 00367bf0
// Size: 521 bytes
// Class: MDMetaDocumentController

void FUN_00367bf0(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  void*arg1;
  int64_t *this_ptr;
  int64_t local_88;
  char local_80;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  
  (**(code **)(*(int64_t *)this_ptr[0x2a] + 0x518))();
  plVar1 = (int64_t *)*arg1;
  local_40 = 0;
  local_48 = this_ptr[0x2a];
  if (local_48 != 0) {
    FUN_00d50b00();
  }
  local_40 = '\x01';
  (**(code **)(*plVar1 + 0x528))();
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  cVar3 = (**(code **)(*(int64_t *)this_ptr[0x2a] + 0x390))();
  if (cVar3 != '\0') {
    (**(code **)(*(int64_t *)this_ptr[0x2a] + 0x370))();
  }
  plVar1 = (int64_t *)this_ptr[0x2a];
  FUN_00b335d0();
  (**(code **)(*plVar1 + 0x398))();
  (**(code **)(*(int64_t *)*arg1 + 0x660))();
  FUN_00b33530();
  (**(code **)(*(int64_t *)*arg1 + 0x668))();
  FUN_00b335a0();
  if (cVar3 != '\0') {
    (**(code **)(*(int64_t *)*arg1 + 0x368))();
  }
  (**(code **)(*this_ptr + 0x770))();
  g_028077a0 = (**(code **)(*(int64_t *)*arg1 + 0x6d0))();
  FUN_00d403d0();
  lVar2 = g_027294a0;
  if (g_027294a0 != 0) {
    FUN_00d50b00();
  }
  FUN_00d50b00();
  local_58 = 0;
  local_50 = '\0';
  FUN_00d40470(&local_58,&stack0xffffffffffffffc8,1,3);
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  return;
}

