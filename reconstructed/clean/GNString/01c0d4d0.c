// Function: FUN_01c0d4d0
// Address: 01c0d4d0
// Size: 2370 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01c0d4d0(void)

{
  char cVar1;
  void*puVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int64_t **pplVar6;
  int iVar7;
  int64_t *arg1;
  int64_t this_ptr;
  bool bVar8;
  int64_t local_1b0;
  int64_t local_178;
  char local_170;
  int64_t *local_168;
  char local_160;
  void*local_158;
  char local_150;
  int64_t local_148;
  char local_140;
  int64_t *local_138;
  char local_130;
  int64_t local_128;
  char local_120;
  int64_t *local_118;
  char local_110;
  int64_t local_108;
  char local_100;
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
  int64_t *local_a8;
  char local_a0;
  int64_t *local_98;
  uint64_t local_90;
  int local_88;
  int64_t local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t *local_60;
  uint64_t local_58;
  int local_50;
  uint32_t uStack_4c;
  char local_48;
  void*local_40;
  int64_t *local_38;
  
  FUN_01c1a2a0();
  local_38 = local_70;
  if ((((local_68 == '\0') && (local_70 != (int64_t *)0x0)) && (FUN_00d50b00(), local_68 != '\0'))
     && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &g_02572358;
  (*g_02572370)();
  local_40 = puVar2;
  FUN_01c1a2d0();
  plVar5 = local_70;
  if (local_68 == '\0') {
    if (local_70 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01c0d59d;
    }
  }
  else if (local_70 != (int64_t *)0x0) {
LAB_01c0d59d:
    local_68 = '\0';
    local_70 = (int64_t *)0x0;
    local_60 = plVar5;
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
      lVar3 = (int64_t)(int)local_58;
      iVar7 = (int)local_58 + 1;
      local_58 = CONCAT44(local_58._4_4_,iVar7);
      if (*(int *)((int64_t)local_60 + 0xc) <= iVar7) break;
      plVar5 = *(int64_t **)(local_60[2] + 8 + lVar3 * 8);
      local_a8 = plVar5;
      local_70 = plVar5;
      FUN_01c28c50();
      pplVar6 = (int64_t **)&g_02802688;
      if (plVar5 != (int64_t *)0x0) {
        (**(code **)(*plVar5 + 0x360))();
        cVar1 = FUN_00e85ea0();
        pplVar6 = &local_a8;
        if (cVar1 == '\0') {
          pplVar6 = (int64_t **)&g_02802688;
        }
      }
      if (*pplVar6 != (int64_t *)0x0) {
        FUN_01c10db0();
        plVar5 = local_a8;
        if (local_a0 == '\0') {
          if (local_a8 != (int64_t *)0x0) {
            FUN_00d50b00();
            if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_01c0d70e;
          }
        }
        else if (local_a8 != (int64_t *)0x0) {
LAB_01c0d70e:
          local_a0 = '\0';
          local_a8 = (int64_t *)0x0;
          local_98 = plVar5;
          local_90 = 0xffffffff;
          local_88 = 0;
          local_90._4_4_ = 0;
          while( true ) {
            if (local_90._4_4_ != 0) {
              if (local_90._4_4_ < 1) {
                iVar7 = -local_90._4_4_;
              }
              else {
                iVar7 = (int)local_90 - local_90._4_4_;
                local_90 = CONCAT44(local_90._4_4_,iVar7);
                FUN_00d23690();
                local_88 = local_88 + local_90._4_4_;
                iVar7 = 0;
              }
              local_90 = CONCAT44(iVar7,(int)local_90);
            }
            lVar3 = g_027e8d78;
            lVar4 = (int64_t)(int)local_90;
            iVar7 = (int)local_90 + 1;
            local_90 = CONCAT44(local_90._4_4_,iVar7);
            if (*(int *)((int64_t)local_98 + 0xc) <= iVar7) break;
            local_a8 = *(int64_t **)(local_98[2] + 8 + lVar4 * 8);
            if (g_027e8d78 != 0) {
              FUN_00d50b00();
            }
            lVar4 = g_0277cbb0;
            if (g_0277cbb0 != 0) {
              FUN_00d50b00();
            }
            local_178 = lVar4;
            local_170 = '\x01';
            local_168 = local_a8;
            local_160 = '\0';
            FUN_00d14780(&local_168,&local_178);
            lVar4 = local_b8;
            if (local_b0 == '\0') {
              if (local_b8 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_b0 = '\0';
            }
            local_80 = lVar4;
            local_78 = '\0';
            FUN_00d21140();
            if ((local_78 != '\0') && (local_80 != 0)) {
              FUN_00d50b20();
            }
            if (lVar4 != 0) {
              FUN_00d50b20();
            }
            if ((local_b0 != '\0') && (local_b8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_160 != '\0') && (local_168 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_170 != '\0') && (local_178 != 0)) {
              FUN_00d50b20();
            }
            if (lVar3 != 0) {
              FUN_00d50b20();
            }
          }
          FUN_00136a40();
          FUN_00d50b20();
        }
      }
    }
    FUN_01c106c0();
    FUN_00d50b20();
    puVar2 = local_40;
  }
  local_150 = '\0';
  local_158 = puVar2;
  FUN_00d68760();
  local_1b0 = local_b8;
  FUN_00083ea0(2,&local_1b0);
  FUN_01c0fd60();
  local_c8 = local_80;
  local_c0 = 0;
  if (local_78 == '\0') {
    if (local_80 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_78 = '\0';
  }
  local_c0 = '\x01';
  FUN_00c6d890();
  plVar5 = local_a8;
  puVar2 = local_40;
  if (local_38 != local_a8) {
    if (local_a0 != '\0') {
      if (local_38 != (int64_t *)0x0) {
        local_38 = local_a8;
        FUN_00d50b20();
      }
      local_a0 = '\0';
      local_38 = plVar5;
      puVar2 = local_40;
      goto joined_r0x01c0da83;
    }
    if (local_a8 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    bVar8 = local_38 != (int64_t *)0x0;
    puVar2 = local_40;
    local_38 = plVar5;
    if (bVar8) {
      FUN_00d50b20();
      puVar2 = local_40;
    }
  }
  local_40 = puVar2;
  if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
joined_r0x01c0da83:
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  local_70 = (int64_t *)&g_0253d630;
  if ((local_48 != '\0') && (CONCAT44(uStack_4c,local_50) != 0)) {
    FUN_00d50b20();
  }
  local_70 = &g_024c5048;
  if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_150 != '\0') && (local_158 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (puVar2 != (void*)0x0) {
    FUN_00d50b20();
  }
  plVar5 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar5 + 0x18))();
  lVar3 = g_027e8d68;
  local_148 = *arg1;
  local_140 = '\0';
  if (g_027e8d68 != 0) {
    FUN_00d50b00();
  }
  local_70 = (int64_t *)lVar3;
  local_68 = '\0';
  FUN_00ca0840();
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_140 != '\0') && (local_148 != 0)) {
    FUN_00d50b20();
  }
  local_e0 = 0;
  if (this_ptr != 0) {
    FUN_00d50b00();
  }
  lVar3 = g_027e8d60;
  local_e0 = '\x01';
  local_e8 = this_ptr;
  if (g_027e8d60 != 0) {
    FUN_00d50b00();
  }
  local_70 = (int64_t *)lVar3;
  local_68 = '\0';
  FUN_00ca0840();
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  lVar3 = g_027e8d58;
  local_138 = local_38;
  local_130 = '\0';
  if (g_027e8d58 != 0) {
    FUN_00d50b00();
  }
  local_128 = lVar3;
  local_120 = '\x01';
  local_110 = '\0';
  local_118 = plVar5;
  FUN_00ceab40();
  if ((local_110 != '\0') && (local_118 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  if ((local_130 != '\0') && (local_138 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  iVar7 = *(int *)(this_ptr + 0x28);
  *(int *)(this_ptr + 0x28) = iVar7 + 1;
  if (iVar7 == 0) {
    FUN_00d403d0();
    local_108 = g_027e9278;
    if (g_027e9278 != 0) {
      FUN_00d50b00();
    }
    local_100 = '\x01';
    local_d0 = 0;
    FUN_00d50b00();
    local_d0 = '\x01';
    local_f8 = 0;
    local_f0 = '\0';
    local_d8 = this_ptr;
    FUN_00d40470(&local_f8,&local_d8,1,3);
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_100 != '\0') && (local_108 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  if (local_38 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

