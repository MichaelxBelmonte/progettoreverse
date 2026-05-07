// Function: FUN_01db4190
// Address: 01db4190
// Size: 2036 bytes
// Class: GNScrollView
// === GNScrollView properties ===
//   GNBorderStyle   _borderStyle
//   GNRulerHeaderLocation _rulerHeaderLocation


void FUN_01db4190(void)

{
  dword dVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t lVar4;
  char cVar5;
  int iVar6;
  void*puVar7;
  int64_t lVar8;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar9;
  bool bVar10;
  float fVar11;
  uint64_t uVar12;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dc_00;
  uint32_t extraout_XMM0_Dd;
  uint32_t extraout_XMM0_Dd_00;
  float fVar13;
  float fVar14;
  float fVar15;
  uint32_t uVar16;
  uint32_t uVar17;
  int64_t local_128;
  char local_120;
  float local_f8;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t *local_88;
  char local_80;
  int64_t *local_78;
  char local_70;
  uint64_t local_68;
  uint32_t uStack_60;
  uint32_t uStack_5c;
  void*local_58;
  int64_t local_50;
  int64_t local_40;
  char local_38;
  
  iVar6 = FUN_01d3a5a0();
  if ((iVar6 == 1) && (iVar6 = FUN_01d3b630(), iVar6 == 1)) {
    FUN_01d3abf0();
    local_68 = FUN_01e466c0();
    fVar11 = (float)local_68;
    if ((char)this_ptr[0x27] == '\0') {
      fVar11 = (float)((uint64_t)local_68 >> 0x20);
    }
    uStack_60 = extraout_XMM0_Dc;
    uStack_5c = extraout_XMM0_Dd;
    FUN_01db2340();
    if (local_40 == 0) {
      local_50 = 0;
      dVar1 = MACH_HEADER.filetype;
    }
    else {
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
      dVar1 = *(dword *)(local_40 + 0xc);
      local_50 = local_40;
    }
    if ((int)dVar1 < 2) goto LAB_01db4229;
    lVar9 = 0;
    lVar8 = 0;
    do {
      lVar2 = *(int64_t *)(*(int64_t *)(local_50 + 0x10) + lVar9 * 8);
      if (lVar8 != lVar2) {
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        bVar10 = lVar8 != 0;
        lVar8 = lVar2;
        if (bVar10) {
          FUN_00d50b20();
        }
      }
      local_f8 = (float)*(void*)(lVar8 + 0x28);
      fVar14 = (float)((uint64_t)*(void*)(lVar8 + 0x28) >> 0x20);
      uVar16 = 0;
      uVar17 = 0;
      cVar5 = FUN_00d05410((float)local_68,local_f8,*(void*)(lVar8 + 0x30));
      if (cVar5 != '\0') {
        puVar7 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar7 = &g_02572358;
        (*g_02572370)();
        local_58 = puVar7;
        FUN_00d21140();
        plVar3 = *(int64_t **)(lVar8 + 0x20);
        if (plVar3 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        (**(code **)(*plVar3 + 0x4d8))();
        bVar10 = (char)this_ptr[0x27] == '\0';
        local_68._0_4_ = local_f8;
        uStack_60 = uVar16;
        if (bVar10) {
          local_68._0_4_ = fVar14;
          uStack_60 = uVar17;
        }
        fVar13 = (float)*(void*)(lVar8 + 0x10);
        if (bVar10) {
          fVar13 = (float)((uint64_t)*(void*)(lVar8 + 0x10) >> 0x20);
        }
        local_68._4_4_ = fVar14;
        uStack_5c = uVar17;
        FUN_00d50b20();
        lVar2 = *(int64_t *)(*(int64_t *)(local_50 + 0x10) + 8 + lVar9 * 8);
        if (lVar8 == lVar2) {
          plVar3 = *(int64_t **)(lVar8 + 0x20);
        }
        else {
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          FUN_00d50b20();
          plVar3 = *(int64_t **)(lVar2 + 0x20);
          lVar8 = lVar2;
        }
        if (plVar3 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        (**(code **)(*plVar3 + 0x4d8))();
        bVar10 = (char)this_ptr[0x27] == '\0';
        if (bVar10) {
          local_f8 = fVar14;
        }
        fVar14 = (float)*(void*)(lVar8 + 0x10);
        if (bVar10) {
          fVar14 = (float)((uint64_t)*(void*)(lVar8 + 0x10) >> 0x20);
        }
        FUN_00d50b20();
        lVar9 = *(int64_t *)(*(int64_t *)(local_50 + 0x10) + 8 + lVar9 * 8);
        if (lVar9 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar9 != 0) {
          FUN_00d50b20();
        }
        fVar13 = (fVar11 - (float)local_68) + fVar13;
        fVar14 = (local_f8 + fVar11) - fVar14;
        bVar10 = true;
        goto LAB_01db451e;
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < (int64_t)*(int *)(local_50 + 0xc) + -1);
  }
  else {
    local_50 = 0;
LAB_01db4229:
    lVar8 = 0;
  }
  local_98 = *arg1;
  local_90 = '\0';
  FUN_01e459c0();
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
LAB_01db4267:
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  return;
LAB_01db451e:
  local_68._0_4_ = fVar11;
  (**(code **)(*this_ptr + 0x658))();
  lVar2 = *arg1;
  if (lVar2 == lVar9) {
    if (((char)arg1[1] == '\0') && (lVar9 != 0)) {
      FUN_00d50b00();
      goto LAB_01db45cc;
    }
    lVar2 = *arg1;
  }
  else {
    lVar4 = arg1[1];
    if (lVar9 != 0) {
      FUN_00d50b00();
    }
    *arg1 = lVar9;
    if (((char)lVar4 != '\0') && (lVar2 != 0)) {
      FUN_00d50b20();
    }
LAB_01db45cc:
    *(void*)(arg1 + 1) = 1;
    lVar2 = *arg1;
  }
  if ((lVar2 == 0) || (iVar6 = FUN_01d3a5a0(), iVar6 == 6)) goto LAB_01db4820;
  FUN_01d3abf0();
  uVar12 = FUN_01e466c0();
  fVar11 = (float)uVar12;
  if ((char)this_ptr[0x27] == '\0') {
    fVar11 = (float)((uint64_t)uVar12 >> 0x20);
  }
  fVar15 = fVar14;
  if (fVar11 <= fVar14) {
    fVar15 = fVar11;
  }
  fVar11 = fVar13;
  if (fVar13 <= fVar15) {
    fVar11 = fVar15;
  }
  local_68._0_4_ = fVar11 - (float)local_68;
  if (((float)local_68 != g_0239424c) || (NAN((float)local_68) || NAN(g_0239424c))) {
    lVar2 = *(int64_t *)local_58[2];
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    local_68 = FUN_01db3040((float)local_68);
    uStack_60 = extraout_XMM0_Dc_00;
    uStack_5c = extraout_XMM0_Dd_00;
    uVar12 = local_68;
    if (lVar2 != 0) {
      FUN_00d50b20();
      uVar12 = local_68;
    }
    local_68._4_4_ = (float)((uint64_t)uVar12 >> 0x20);
    local_68._0_4_ = (float)uVar12;
    if (((float)local_68 != g_0239424c) || (NAN((float)local_68) || NAN(g_0239424c))) {
      lVar2 = *(int64_t *)(local_58[2] + 8);
      local_68 = uVar12;
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      FUN_01db3040((uint)(float)local_68 ^ g_023945e0);
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      FUN_01db28c0();
      (**(code **)(*this_ptr + 0x620))();
      FUN_00d403d0();
      lVar2 = g_027f22b8;
      if (g_027f22b8 != 0) {
        FUN_00d50b00();
      }
      local_80 = 0;
      FUN_00d50b00();
      local_80 = '\x01';
      local_c8 = 0;
      local_c0 = '\0';
      local_88 = this_ptr;
      FUN_00d40470(&local_c8,&local_88,1,3);
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
      uVar12 = local_68;
      if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
        FUN_00d50b20();
        uVar12 = local_68;
      }
      local_68._4_4_ = (float)((uint64_t)uVar12 >> 0x20);
      if (lVar2 != 0) {
        local_68 = uVar12;
        FUN_00d50b20();
      }
      bVar10 = false;
    }
  }
  goto LAB_01db451e;
LAB_01db4820:
  if (!bVar10) {
    FUN_00d403d0();
    local_b8 = g_027f22c0;
    if (g_027f22c0 != 0) {
      FUN_00d50b00();
    }
    local_b0 = '\x01';
    local_70 = 0;
    FUN_00d50b00();
    local_70 = '\x01';
    local_a8 = 0;
    local_a0 = '\0';
    local_78 = this_ptr;
    FUN_00d40470(&local_a8,&local_78,1,3);
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    FUN_01e42030();
    if (lVar9 == 0) {
      bVar10 = false;
    }
    else {
      FUN_01e4c160();
      bVar10 = local_128 != 0;
      if ((local_120 != '\0') && (local_128 != 0)) {
        FUN_00d50b20();
      }
    }
    if (bVar10) {
      FUN_01e42030();
      FUN_01d86b20();
    }
  }
  if (local_58 != (void*)0x0) {
    FUN_00d50b20();
  }
  goto LAB_01db4267;
}

