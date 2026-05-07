// ===================================================================
// MUTagOptionAttribute — Complete reconstructed pseudocode
// 6 functions
// ===================================================================

// Registered properties (8):
//                   _allowsMultipleOptions
//                   _allOptionsCache
//                   _virtualOptionType
//                   _isInstrumentTypeSeparated
//                   _titleRenamings
//                   _virtualParent
//                   _virtualRoot
//                   _virtualChilds


// ============================================================
// 018c2150
// ============================================================
// Function: FUN_018c2150
// Address: 018c2150
// Size: 741 bytes
// Class: MUTagOptionAttribute
// === MUTagOptionAttribute properties ===
//                   _allowsMultipleOptions
//                   _allOptionsCache
//                   _virtualOptionType
//                   _isInstrumentTypeSeparated
//                   _titleRenamings
//                   _virtualParent
//                   _virtualRoot
//                   _virtualChilds


int FUN_018c2150(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  void *pvVar3;
  int64_t lVar4;
  char *pcVar5;
  int64_t lVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  int64_t *arg1;
  int64_t this_ptr;
  int iVar10;
  int64_t *plVar11;
  int64_t *local_90;
  char local_88 [8];
  int64_t *local_70;
  char local_68 [8];
  int64_t local_60;
  uint64_t local_58;
  int local_50;
  uint local_44;
  char local_40 [8];
  char local_38 [8];
  
  lVar1 = *(int64_t *)(this_ptr + 0x48);
  if (lVar1 == 0) {
    iVar10 = 0;
  }
  else {
    if (*(int *)(lVar1 + 0xc) < 1) {
      iVar10 = 0;
    }
    else {
      uVar8 = 0;
      iVar10 = 0;
      do {
        plVar2 = local_70;
        plVar11 = *(int64_t **)(*(int64_t *)(lVar1 + 0x10) + (uint64_t)uVar8 * 8);
        pvVar3 = _pthread_getspecific(uVar8);
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          plVar11 = (int64_t *)plVar11[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
        }
        (**(code **)(*plVar11 + 0x368))();
        local_38[0] = local_68[0];
        pcVar7 = local_38;
        pcVar5 = local_68;
        if (local_68[0] == '\0') {
          pcVar5 = pcVar7;
        }
        local_44 = uVar8;
        *pcVar5 = '\0';
        if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        lVar4 = *arg1;
        pvVar3 = _pthread_getspecific((void*)pcVar7);
        if (pvVar3 != (void *)0x0) {
          lVar4 = *arg1;
          lVar6 = FUN_00e8b990();
          if (lVar6 != 0) {
            lVar4 = *(int64_t *)(lVar4 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
          }
        }
        lVar4 = *(int64_t *)(lVar4 + 0x48);
        uVar8 = local_44;
        if (lVar4 != 0) {
          FUN_00d50b00();
          local_68[0] = '\0';
          local_70 = (int64_t *)0x0;
          local_58 = 0xffffffff;
          local_50 = 0;
          local_58._4_4_ = 0;
          local_60 = lVar4;
          while( true ) {
            uVar8 = local_44;
            if (local_58._4_4_ != 0) {
              if (local_58._4_4_ < 1) {
                iVar9 = -local_58._4_4_;
              }
              else {
                iVar9 = (int)local_58 - local_58._4_4_;
                local_58 = CONCAT44(local_58._4_4_,iVar9);
                FUN_00d23690();
                local_50 = local_50 + local_58._4_4_;
                iVar9 = 0;
              }
              local_58 = CONCAT44(iVar9,(int)local_58);
            }
            lVar4 = (int64_t)(int)local_58;
            iVar9 = (int)local_58 + 1;
            local_58 = CONCAT44(local_58._4_4_,iVar9);
            if (*(int *)(local_60 + 0xc) <= iVar9) break;
            local_70 = *(int64_t **)(*(int64_t *)(local_60 + 0x10) + 8 + lVar4 * 8);
            pvVar3 = _pthread_getspecific((void*)*(int64_t *)(local_60 + 0x10));
            plVar11 = local_70;
            if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
              plVar11 = (int64_t *)local_70[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
            }
            (**(code **)(*plVar11 + 0x368))();
            local_40[0] = local_88[0];
            pcVar7 = local_88;
            if (local_88[0] == '\0') {
              pcVar7 = local_40;
            }
            *pcVar7 = '\0';
            if ((local_88[0] != '\0') && (local_90 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_40[0] != '\0') && (local_90 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            iVar10 = iVar10 + (uint)(local_90 == plVar2);
          }
          FUN_01894d60();
          FUN_00d50b20();
        }
        if ((local_38[0] != '\0') && (plVar2 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < *(int *)(lVar1 + 0xc));
    }
    FUN_01894d60();
  }
  return iVar10;
}



// ============================================================
// 018c28f0
// ============================================================
// Function: FUN_018c28f0
// Address: 018c28f0
// Size: 854 bytes
// Class: MUTagOptionAttribute
// === MUTagOptionAttribute properties ===
//                   _allowsMultipleOptions
//                   _allOptionsCache
//                   _virtualOptionType
//                   _isInstrumentTypeSeparated
//                   _titleRenamings
//                   _virtualParent
//                   _virtualRoot
//                   _virtualChilds


int64_t * FUN_018c28f0(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  void*puVar2;
  void *pvVar3;
  uint64_t uVar4;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t lVar5;
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
  uint64_t local_50;
  uint32_t local_48;
  int64_t local_40;
  char local_38;
  
  if (*(int *)(*(int64_t *)(arg1 + 0x48) + 0xc) == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else if (*(int64_t *)(arg1 + 0x50) == 0) {
    puVar2 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &g_0258a670;
    (*g_0258a688)();
    lVar1 = *(int64_t *)(arg1 + 0x50);
    *(void**)(arg1 + 0x50) = puVar2;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    uVar4 = 1;
    FUN_00e38130(1,0,1);
    lVar1 = *(int64_t *)(arg1 + 0x48);
    if (lVar1 != 0) {
      local_60 = '\0';
      local_68 = 0;
      local_48 = 0;
      local_50 = 0;
      local_58 = lVar1;
      if (0 < *(int *)(lVar1 + 0xc)) {
        lVar5 = 0;
        do {
          local_98 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + lVar5 * 8);
          local_90 = '\0';
          local_68 = local_98;
          pvVar3 = _pthread_getspecific((void*)uVar4);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_018909c0();
          local_40 = local_78;
          local_38 = 0;
          if (local_70 == '\0') {
            if (local_78 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_70 = '\0';
          }
          local_38 = '\x01';
          FUN_018c2840();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
          if ((local_90 != '\0') && (local_98 != 0)) {
            FUN_00d50b20();
          }
          lVar5 = lVar5 + 1;
          local_50 = CONCAT44(local_50._4_4_,(int)lVar5);
        } while ((int)lVar5 < *(int *)(lVar1 + 0xc));
      }
      FUN_017d9900();
    }
    local_88 = *param_2;
    local_80 = '\0';
    FUN_018c2db0();
    lVar1 = local_68;
    *(void*)(this_ptr + 1) = 0;
    if (local_60 == '\0') {
      if (local_68 == 0) {
        *this_ptr = 0;
        *(void*)(this_ptr + 1) = 1;
      }
      else {
        FUN_00d50b00();
        *this_ptr = lVar1;
        *(void*)(this_ptr + 1) = 1;
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      *this_ptr = local_68;
      *(void*)(this_ptr + 1) = 1;
      local_60 = '\0';
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_a8 = *param_2;
    local_a0 = '\0';
    FUN_018c2db0(param_1,&local_a8);
    lVar1 = local_68;
    *(void*)(this_ptr + 1) = 0;
    if (local_60 == '\0') {
      if (local_68 == 0) {
        *this_ptr = 0;
        *(void*)(this_ptr + 1) = 1;
      }
      else {
        FUN_00d50b00();
        *this_ptr = lVar1;
        *(void*)(this_ptr + 1) = 1;
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      *this_ptr = local_68;
      *(void*)(this_ptr + 1) = 1;
      local_60 = '\0';
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
  }
  return this_ptr;
}



// ============================================================
// 018c18e0
// ============================================================
// Function: FUN_018c18e0
// Address: 018c18e0
// Size: 884 bytes
// Class: MUTagOptionAttribute
// String references:
//   "MUTagOptionAttribute"
// === MUTagOptionAttribute properties ===
//                   _allowsMultipleOptions
//                   _allOptionsCache
//                   _virtualOptionType
//                   _isInstrumentTypeSeparated
//                   _titleRenamings
//                   _virtualParent
//                   _virtualRoot
//                   _virtualChilds


void FUN_018c18e0(uint64_t param_1,int64_t *param_2,uint8_t param_3)

{
  int64_t *plVar1;
  int iVar2;
  void *pvVar3;
  int64_t lVar4;
  void* pVar5;
  int64_t *arg1;
  int64_t *plVar6;
  uint32_t uVar7;
  int64_t local_c8;
  uint8_t local_c0;
  int64_t *local_b8;
  uint8_t local_b0;
  uint8_t local_a0;
  int64_t *local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  uint32_t local_4c;
  int64_t *local_48;
  char local_40;
  char local_38;
  
  local_4c = (uint32_t)param_1;
  local_c8 = *param_2;
  local_c0 = 0;
  FUN_018bf620(param_1,&local_c8);
  plVar1 = local_48;
  pVar5 = (void*)param_1;
  local_38 = local_40 != '\0';
  local_98 = local_48;
  if ((bool)local_38) {
    local_40 = '\0';
  }
  if (local_48 == (int64_t *)0x0) {
    local_70 = *arg1;
    local_68 = '\0';
    local_60 = *param_2;
    local_58 = '\0';
    FUN_00d61270(local_4c,&local_60,param_3);
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (local_68 == '\0') {
      return;
    }
    if (local_70 == 0) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  if ((g_027b5198 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
    g_027b50e8 = FUN_011b5ca0();
    g_027b50d0 = "MUTagOptionAttribute";
    g_027b50d8 = 0xe8;
    pVar5 = 0x11bbd10;
    g_027b50e0 = FUN_011bbd10;
    g_027b50f0 = 0;
    ram_00000000027b50f8 = 0;
    g_027b5100 = 0;
    ram_00000000027b5108 = 0;
    g_027b5110 = 0;
    ram_00000000027b5118 = 0;
    g_027b5120 = 0;
    ram_00000000027b5128 = 0;
    g_027b5130 = 0;
    ram_00000000027b5138 = 0;
    g_027b5140 = 0;
    ram_00000000027b5148 = 0;
    g_027b5150 = 0;
    ram_00000000027b5158 = 0;
    g_027b5160 = 0;
    ram_00000000027b5168 = 0;
    g_027b5170 = 0;
    ram_00000000027b5178 = 0;
    g_027b5180 = 0;
    ram_00000000027b5188 = 0;
    g_027b5190 = 0;
    ___cxa_guard_release();
  }
  (**(code **)(*plVar1 + 0x360))();
  uVar7 = FUN_00e85ea0();
  plVar1 = local_98;
  local_b8 = local_98;
  local_b0 = 0;
  FUN_018bf6f0(uVar7,&local_b8);
  if (local_40 == '\0') {
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_018c1a43;
    }
  }
  else if (local_48 != (int64_t *)0x0) {
LAB_018c1a43:
    pvVar3 = _pthread_getspecific(pVar5);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_90 = *arg1;
    local_88 = '\0';
    FUN_01883820();
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    goto LAB_018c1b85;
  }
  pvVar3 = _pthread_getspecific(pVar5);
  plVar6 = plVar1;
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    plVar6 = (int64_t *)plVar1[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
  }
  local_80 = *arg1;
  local_78 = '\0';
  (**(code **)(*plVar6 + 0x368))();
  plVar6 = local_48;
  if (local_40 == '\0') {
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  local_a0 = 1;
  FUN_018bfc40();
  if (plVar6 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
LAB_018c1b85:
  if ((local_38 != '\0') && (plVar1 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 018c1400
// ============================================================
// Function: FUN_018c1400
// Address: 018c1400
// Size: 866 bytes
// Class: MUTagOptionAttribute
// String references:
//   "MUTagOptionAttribute"
// === MUTagOptionAttribute properties ===
//                   _allowsMultipleOptions
//                   _allOptionsCache
//                   _virtualOptionType
//                   _isInstrumentTypeSeparated
//                   _titleRenamings
//                   _virtualParent
//                   _virtualRoot
//                   _virtualChilds


void FUN_018c1400(uint64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  int iVar2;
  void *pvVar3;
  int64_t lVar4;
  void* pVar5;
  uint64_t uVar6;
  int64_t *arg1;
  int64_t *plVar7;
  uint32_t uVar8;
  int64_t local_c0;
  uint8_t local_b8;
  int64_t *local_b0;
  uint8_t local_a8;
  uint8_t local_98;
  int64_t *local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  char local_40;
  char local_38;
  
  local_c0 = *param_2;
  local_b8 = 0;
  uVar6 = param_1;
  FUN_018bf620(param_1,&local_c0);
  plVar1 = local_48;
  pVar5 = (void*)uVar6;
  local_38 = local_40 != '\0';
  local_90 = local_48;
  if ((bool)local_38) {
    local_40 = '\0';
  }
  if (local_48 == (int64_t *)0x0) {
    local_68 = *arg1;
    local_60 = '\0';
    local_58 = *param_2;
    local_50 = '\0';
    FUN_00d61130(param_1 & 0xff,&local_58);
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (local_60 == '\0') {
      return;
    }
    if (local_68 == 0) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  if ((g_027b5198 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
    g_027b50e8 = FUN_011b5ca0();
    g_027b50d0 = "MUTagOptionAttribute";
    g_027b50d8 = 0xe8;
    pVar5 = 0x11bbd10;
    g_027b50e0 = FUN_011bbd10;
    g_027b50f0 = 0;
    ram_00000000027b50f8 = 0;
    g_027b5100 = 0;
    ram_00000000027b5108 = 0;
    g_027b5110 = 0;
    ram_00000000027b5118 = 0;
    g_027b5120 = 0;
    ram_00000000027b5128 = 0;
    g_027b5130 = 0;
    ram_00000000027b5138 = 0;
    g_027b5140 = 0;
    ram_00000000027b5148 = 0;
    g_027b5150 = 0;
    ram_00000000027b5158 = 0;
    g_027b5160 = 0;
    ram_00000000027b5168 = 0;
    g_027b5170 = 0;
    ram_00000000027b5178 = 0;
    g_027b5180 = 0;
    ram_00000000027b5188 = 0;
    g_027b5190 = 0;
    ___cxa_guard_release();
  }
  (**(code **)(*plVar1 + 0x360))();
  uVar8 = FUN_00e85ea0();
  plVar1 = local_90;
  local_b0 = local_90;
  local_a8 = 0;
  FUN_018bf6f0(uVar8,&local_b0);
  if (local_40 == '\0') {
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_018c155d;
    }
  }
  else if (local_48 != (int64_t *)0x0) {
LAB_018c155d:
    pvVar3 = _pthread_getspecific(pVar5);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_88 = *arg1;
    local_80 = '\0';
    FUN_018836f0();
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    goto LAB_018c1693;
  }
  pvVar3 = _pthread_getspecific(pVar5);
  plVar7 = plVar1;
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    plVar7 = (int64_t *)plVar1[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
  }
  local_78 = *arg1;
  local_70 = '\0';
  (**(code **)(*plVar7 + 0x368))();
  plVar7 = local_48;
  if (local_40 == '\0') {
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  local_98 = 1;
  FUN_018bfc40();
  if (plVar7 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
LAB_018c1693:
  if ((local_38 != '\0') && (plVar1 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 018c1dd0
// ============================================================
// Function: FUN_018c1dd0
// Address: 018c1dd0
// Size: 641 bytes
// Class: MUTagOptionAttribute
// String references:
//   "MUTagOptionAttribute"
// === MUTagOptionAttribute properties ===
//                   _allowsMultipleOptions
//                   _allOptionsCache
//                   _virtualOptionType
//                   _isInstrumentTypeSeparated
//                   _titleRenamings
//                   _virtualParent
//                   _virtualRoot
//                   _virtualChilds


void FUN_018c1dd0(uint64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  int iVar2;
  void *pvVar3;
  void* pVar4;
  uint64_t uVar5;
  int64_t *arg1;
  uint32_t uVar6;
  int64_t local_a0;
  uint8_t local_98;
  int64_t *local_90;
  uint8_t local_88;
  int64_t *local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  char local_40;
  char local_38;
  
  local_a0 = *param_2;
  local_98 = 0;
  uVar5 = param_1;
  FUN_018bf620(param_1,&local_a0);
  plVar1 = local_48;
  pVar4 = (void*)uVar5;
  local_38 = local_40 != '\0';
  local_80 = local_48;
  if ((bool)local_38) {
    local_40 = '\0';
  }
  if (local_48 == (int64_t *)0x0) {
    local_68 = *arg1;
    local_60 = '\0';
    local_58 = *param_2;
    local_50 = '\0';
    FUN_00d61730(param_1 & 0xff,&local_58);
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (local_60 == '\0') {
      return;
    }
    if (local_68 == 0) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  if ((g_027b5198 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
    g_027b50e8 = FUN_011b5ca0();
    g_027b50d0 = "MUTagOptionAttribute";
    g_027b50d8 = 0xe8;
    pVar4 = 0x11bbd10;
    g_027b50e0 = FUN_011bbd10;
    g_027b50f0 = 0;
    ram_00000000027b50f8 = 0;
    g_027b5100 = 0;
    ram_00000000027b5108 = 0;
    g_027b5110 = 0;
    ram_00000000027b5118 = 0;
    g_027b5120 = 0;
    ram_00000000027b5128 = 0;
    g_027b5130 = 0;
    ram_00000000027b5138 = 0;
    g_027b5140 = 0;
    ram_00000000027b5148 = 0;
    g_027b5150 = 0;
    ram_00000000027b5158 = 0;
    g_027b5160 = 0;
    ram_00000000027b5168 = 0;
    g_027b5170 = 0;
    ram_00000000027b5178 = 0;
    g_027b5180 = 0;
    ram_00000000027b5188 = 0;
    g_027b5190 = 0;
    ___cxa_guard_release();
  }
  (**(code **)(*plVar1 + 0x360))();
  uVar6 = FUN_00e85ea0();
  plVar1 = local_80;
  local_90 = local_80;
  local_88 = 0;
  FUN_018bf6f0(uVar6,&local_90);
  if (local_40 == '\0') {
    if (local_48 == (int64_t *)0x0) goto LAB_018c1f85;
    FUN_00d50b00();
  }
  else if (local_48 == (int64_t *)0x0) goto LAB_018c1f85;
  pvVar3 = _pthread_getspecific(pVar4);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_78 = *arg1;
  local_70 = '\0';
  FUN_01883960();
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_018c1f85:
  if ((local_38 != '\0') && (plVar1 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 011bbe70
// ============================================================
// Function: FUN_011bbe70
// Address: 011bbe70
// Size: 878 bytes
// Class: MUTagOptionAttribute
// String references:
//   "MUTagOptionAttribute"
// === MUTagOptionAttribute properties ===
//                   _allowsMultipleOptions
//                   _allOptionsCache
//                   _virtualOptionType
//                   _isInstrumentTypeSeparated
//                   _titleRenamings
//                   _virtualParent
//                   _virtualRoot
//                   _virtualChilds


void FUN_011bbe70(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_011b5fd0();
  *this_ptr = &g_0260e720;
  *(void*)(this_ptr + 0x14) = 0;
  // [STATIC_INIT: property registration]
  if (g_027b518b == '\0') {
    FUN_011bc290();
    FUN_00e87980();
  }
  FUN_011bc400();
  FUN_011bc680();
  FUN_011bc970();
  *(void*)(this_ptr + 0x18) = 0;
  // [STATIC_INIT: property registration]
  if (g_027b518b == '\0') {
    FUN_011bcc60();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xc4) = 0;
  // [STATIC_INIT: property registration]
  if (g_027b518b == '\0') {
    FUN_011bcdd0();
    FUN_00e87980();
  }
  FUN_011bcf40();
  FUN_011bd1c0();
  FUN_011bd4a0();
  FUN_011bd780();
  return;
}

