// Function: FUN_01b041e0
// Address: 01b041e0
// Size: 1919 bytes
// Class: Unknown

void FUN_01b041e0(uint64_t param_1)

{
  bool bVar1;
  int64_t lVar2;
  int64_t *plVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  int64_t lVar8;
  void* pVar9;
  int64_t *this_ptr;
  int64_t *plVar10;
  uint64_t uVar11;
  float extraout_XMM0_Db;
  uint64_t in_XMM0_Qb;
  uint extraout_XMM0_Dd;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar12 [16];
  uint8_t auVar13 [16];
  uint8_t auVar14 [16];
  uint8_t auVar15 [16];
  float fVar16;
  float local_178;
  uint uStack_174;
  uint uStack_170;
  uint uStack_16c;
  uint8_t local_168 [16];
  int64_t local_148;
  char local_140;
  int64_t *local_138;
  char local_130;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t *local_c8;
  char local_c0;
  int64_t *local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t *local_88;
  char local_80;
  int64_t *local_68;
  char local_60;
  int local_50;
  int64_t *local_40;
  char local_38;
  
  plVar3 = local_68;
  lVar8 = g_027e3c80;
  local_168._8_8_ = in_XMM0_Qb;
  local_168._0_8_ = param_1;
  if (g_027e3c80 != 0) {
    FUN_00d50b00();
  }
  lVar2 = g_027e3d18;
  if (g_027e3d18 != 0) {
    FUN_00d50b00();
  }
  FUN_01d61e70();
  if (local_60 == '\0') {
    if (local_68 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x34] != 0) {
    iVar5 = FUN_01b18590();
    if (iVar5 != -1) {
      FUN_01d5e2b0();
      if (local_60 == '\0') {
        if (local_68 != (int64_t *)0x0) {
          FUN_00d50b00();
          goto LAB_01b04355;
        }
      }
      else if (local_68 != (int64_t *)0x0) {
LAB_01b04355:
        local_60 = '\0';
        local_68 = (int64_t *)0x0;
        local_50 = -1;
        do {
          lVar8 = (int64_t)local_50;
          local_50 = local_50 + 1;
          if (*(int *)((int64_t)plVar3 + 0xc) <= local_50) break;
          local_68 = *(int64_t **)(plVar3[2] + 8 + lVar8 * 8);
          FUN_01d65460();
          lVar8 = g_027e3d20;
          if (g_027e3d20 != 0) {
            FUN_00d50b00();
          }
          cVar4 = (**(code **)(*local_40 + 0x50))();
          if (lVar8 != 0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        } while ((cVar4 == '\0') || (iVar6 = FUN_01d654a0(), iVar6 != iVar5));
        FUN_002a0a30();
        FUN_00d50b20();
      }
    }
    FUN_01ad3cb0();
    if (local_60 == '\0') {
      if (local_68 != (int64_t *)0x0) {
        FUN_00d50b00();
        goto LAB_01b044c8;
      }
    }
    else if (local_68 != (int64_t *)0x0) {
LAB_01b044c8:
      uVar11 = (**(code **)(*this_ptr + 0x640))();
      FUN_01d5b240(uVar11,0);
      FUN_01d65230();
      local_a0 = 0;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_a0 = '\x01';
      local_a8 = local_40;
      (**(code **)(*this_ptr + 0x640))();
      (**(code **)(*local_138 + 0x370))();
      local_98 = local_d8;
      local_90 = 0;
      if (local_d0 == '\0') {
        if (local_d8 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_d0 = '\0';
      }
      local_90 = '\x01';
      pVar9 = 0;
      (**(code **)(*local_68 + 0x5d0))(0,&local_98);
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_130 != '\0') && (local_138 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_140 != '\0') && (local_148 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      pvVar7 = _pthread_getspecific(pVar9);
      plVar10 = local_68;
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        plVar10 = (int64_t *)local_68[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
      }
      (**(code **)(*plVar10 + 0x3a0))();
      uVar11 = (**(code **)(*this_ptr + 0x918))();
      FUN_00d50b20();
      local_178 = (float)uVar11;
      uStack_174 = (uint)((uint64_t)uVar11 >> 0x20);
      uStack_170 = (uint)extraout_XMM0_Qb;
      uStack_16c = (uint)((uint64_t)extraout_XMM0_Qb >> 0x20);
      auVar13._0_4_ = (uint)local_178 & g_023945e0;
      auVar13._4_4_ = uStack_174 & _UNK_023945e4;
      auVar13._8_4_ = uStack_170 & _UNK_023945e8;
      auVar13._12_4_ = uStack_16c & _UNK_023945ec;
      auVar14._4_12_ = SUB1612(auVar13 | ZEXT416(g_02394dc8),4);
      auVar14._0_4_ = SUB164(auVar13 | ZEXT416(g_02394dc8),0) + local_178;
      auVar15 = roundss(auVar14,auVar14,0xb);
      fVar16 = extraout_XMM0_Db * g_02390118 + auVar15._0_4_;
      auVar15._0_4_ = g_023945e0 & (uint)fVar16;
      auVar15._4_4_ = _UNK_023945e4 & (uint)extraout_XMM0_Db;
      auVar15._8_4_ = _UNK_023945e8 & extraout_XMM0_Dd;
      auVar15._12_4_ = _UNK_023945ec & extraout_XMM0_Dd;
      auVar12._4_12_ = SUB1612(auVar15 | ZEXT416(g_02394dc8),4);
      auVar12._0_4_ = SUB164(auVar15 | ZEXT416(g_02394dc8),0) + fVar16;
      auVar15 = roundss(auVar12,auVar12,0xb);
      insertps(local_168,auVar15,0x10);
      goto LAB_01b04769;
    }
    if (this_ptr == (int64_t *)0x0) {
      bVar1 = true;
      goto LAB_01b04777;
    }
  }
LAB_01b04769:
  local_b0 = 0;
  FUN_00d50b00();
  bVar1 = false;
LAB_01b04777:
  local_b0 = '\x01';
  local_b8 = this_ptr;
  FUN_01d62b10();
  if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01e42030();
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_68 != (int64_t *)0x0) {
    FUN_01e4ac90();
    FUN_01e42030();
    FUN_01e4ace0();
    local_80 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_80 = '\x01';
    local_88 = local_40;
    (**(code **)(*local_68 + 0x920))();
    if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  local_c0 = 0;
  if (!bVar1) {
    FUN_00d50b00();
  }
  local_c0 = '\x01';
  local_e8 = 0;
  local_e0 = '\0';
  local_c8 = this_ptr;
  FUN_01d5ef60(&local_e8,g_023dcce4);
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d62b80();
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

