// Function: FUN_01b195d0
// Address: 01b195d0
// Size: 1538 bytes
// Class: MUScalePitchSystem
// === MUScalePitchSystem properties ===
//   bool            _tuningIsSuggestedRelevant
//   bool            _modeIsSuggestedRelevant
//   bool            _tuningPitchAnchorIsSuggestedRelevant
//   bool            _modeFundamentalOffsetIsSuggestedRelevant
//   bool            _stretchingIsSuggestedRelevant
//   double          _startPulse
//   double          _startTime
//   double          _width
//   double          _scope


void FUN_01b195d0(void* param_1)

{
  uint uVar1;
  uint uVar2;
  int64_t *plVar3;
  void *pvVar4;
  int64_t lVar5;
  int64_t lVar6;
  int iVar7;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  uint local_8c;
  int64_t *local_88;
  int64_t *local_80;
  int64_t *local_78;
  int64_t *local_70;
  char local_68;
  int64_t *local_60;
  uint64_t local_58;
  int local_50;
  int64_t *local_48;
  int64_t local_40;
  char local_38;
  
  lVar5 = g_027e3df8;
  if (*arg1 == 0) {
    return;
  }
  if (g_027e3df8 != 0) {
    FUN_00d50b00();
  }
  FUN_01d5e6e0();
  local_88 = local_70;
  if (local_68 == '\0') {
    if (((local_70 != (int64_t *)0x0) && (FUN_00d50b00(), local_68 != '\0')) &&
       (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_68 = '\0';
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if (local_88 == (int64_t *)0x0) {
    return;
  }
  FUN_01d654e0();
  if (((*(int *)(this_ptr + 0x194) != -1000000) || (*(int *)(this_ptr + 400) != -1000000)) &&
     (*(int64_t *)(this_ptr + 0x1a0) != 0)) {
    FUN_01ad3cb0();
    plVar3 = local_70;
    if (local_68 == '\0') {
      if (local_70 == (int64_t *)0x0) goto LAB_01b19ba1;
      FUN_00d50b00();
    }
    else if (local_70 == (int64_t *)0x0) goto LAB_01b19ba1;
    local_80 = plVar3;
    plVar3 = (int64_t *)FUN_00e8fc40();
    FUN_001d7da0();
    (**(code **)(*plVar3 + 0x18))();
    local_48 = plVar3;
    FUN_01d5e5a0();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173b790();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_017753d0(&local_8c);
    plVar3 = local_48;
    local_78 = local_70;
    if (local_68 == '\0') {
      if (((local_70 != (int64_t *)0x0) && (FUN_00d50b00(), local_68 != '\0')) &&
         (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_68 = '\0';
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_78 != (int64_t *)0x0) {
      local_68 = '\0';
      local_70 = (int64_t *)0x0;
      local_60 = local_78;
      local_58 = 0xffffffff;
      local_50 = 0;
      local_58._4_4_ = 0;
      while( true ) {
        if (local_58._4_4_ != 0) {
          if (local_58._4_4_ < 1) {
            iVar7 = -local_58._4_4_;
          }
          else {
            iVar7 = (int)local_58 - local_58._4_4_;
            local_58 = CONCAT44(local_58._4_4_,iVar7);
            FUN_00d23690();
            local_50 = local_50 + local_58._4_4_;
            iVar7 = 0;
          }
          local_58 = CONCAT44(iVar7,(int)local_58);
        }
        lVar5 = (int64_t)(int)local_58;
        iVar7 = (int)local_58 + 1;
        local_58 = CONCAT44(local_58._4_4_,iVar7);
        if (*(int *)((int64_t)local_60 + 0xc) <= iVar7) break;
        lVar6 = local_60[2];
        local_70 = *(int64_t **)(lVar6 + 8 + lVar5 * 8);
        uVar2 = FUN_00d45870();
        uVar1 = -uVar2;
        if (0 < (int)uVar2) {
          uVar1 = uVar2;
        }
        pvVar4 = _pthread_getspecific((void*)lVar6);
        lVar5 = g_026e3bc8;
        plVar3 = local_80;
        if ((pvVar4 != (void *)0x0) &&
           (lVar6 = FUN_00e8b990(), lVar5 = g_026e3bc8, plVar3 = local_80, lVar6 != 0)) {
          plVar3 = (int64_t *)local_80[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
        g_026e3bc8 = lVar5;
        if (lVar5 != 0) {
          FUN_00d50b00();
        }
        local_d8 = '\x01';
        local_d0 = 0;
        local_c8 = '\0';
        local_e0 = lVar5;
        (**(code **)(*plVar3 + 0x3c0))(&local_e0,uVar1 % 0xc,&local_d0);
        lVar5 = local_40;
        if (local_38 == '\0') {
          if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_c8 != '\0') && (local_d0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_d8 != '\0') && (local_e0 != 0)) {
          FUN_00d50b20();
        }
        lVar6 = g_027e3e00;
        local_c0 = lVar5;
        local_b8 = '\0';
        if (g_027e3e00 != 0) {
          FUN_00d50b00();
        }
        local_b0 = lVar6;
        local_a8 = '\x01';
        FUN_01d5d9b0();
        if ((local_a8 != '\0') && (local_b0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_b8 != '\0') && (local_c0 != 0)) {
          FUN_00d50b20();
        }
        FUN_01d5e230();
        lVar6 = local_40;
        if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
           (local_40 != 0)) {
          FUN_00d50b20();
        }
        plVar3 = local_48;
        if (local_8c == uVar1 % 0xc) {
          FUN_01d66ab0();
        }
        FUN_01d65260();
        iVar7 = local_50 + (int)local_58;
        if (iVar7 == 2) {
          FUN_01d65490();
        }
        else if (iVar7 == 1) {
          FUN_01d65490();
        }
        else if (iVar7 == 0) {
          FUN_01d65490();
        }
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
      }
      FUN_00136b80();
    }
    local_98 = '\0';
    local_a0 = plVar3;
    FUN_01d654e0();
    if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_78 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
LAB_01b19ba1:
  FUN_00d50b20();
  return;
}

