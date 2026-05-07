// Function: FUN_00e29d50
// Address: 00e29d50
// Size: 2111 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00e29d50(int64_t *param_1,int64_t *param_2)

{
  int64_t *plVar1;
  char cVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int iVar5;
  int64_t *this_ptr;
  int64_t *local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t *local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t *local_90;
  uint64_t local_88;
  int local_80;
  int64_t local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  uint64_t local_50;
  int local_48;
  int64_t *local_40;
  int64_t *local_38;
  
  (**(code **)(*this_ptr + 0x388))();
  local_38 = local_68;
  if ((((local_60 == '\0') && (local_68 != (int64_t *)0x0)) && (FUN_00d50b00(), local_60 != '\0'))
     && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d216c0();
  if ((*param_2 != 0) && (local_38 != (int64_t *)0x0)) {
    local_60 = '\0';
    local_68 = (int64_t *)0x0;
    local_58 = local_38;
    local_50 = 0xffffffff;
    local_48 = 0;
    local_50._4_4_ = 0;
    while( true ) {
      if (local_50._4_4_ != 0) {
        if (local_50._4_4_ < 1) {
          iVar5 = -local_50._4_4_;
        }
        else {
          iVar5 = (int)local_50 - local_50._4_4_;
          local_50 = CONCAT44(local_50._4_4_,iVar5);
          FUN_00d23690();
          local_48 = local_48 + local_50._4_4_;
          iVar5 = 0;
        }
        local_50 = CONCAT44(iVar5,(int)local_50);
      }
      lVar3 = (int64_t)(int)local_50;
      iVar5 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,iVar5);
      if (*(int *)((int64_t)local_58 + 0xc) <= iVar5) break;
      local_68 = *(int64_t **)(local_58[2] + 8 + lVar3 * 8);
      plVar4 = (int64_t *)*param_2;
      FUN_00c7e7e0();
      plVar1 = local_a0;
      local_c8 = 0;
      if (local_98 == '\0') {
        if (local_a0 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_98 = '\0';
      }
      local_c8 = '\x01';
      local_d0 = plVar1;
      cVar2 = (**(code **)(*plVar4 + 0x50))();
      if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      plVar4 = local_68;
      lVar3 = g_02785c40;
      if (cVar2 != '\0') {
        if (g_02785c40 != 0) {
          FUN_00d50b00();
        }
        (**(code **)(*plVar4 + 0x80))();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
      }
      FUN_00c81c60();
      plVar4 = local_a0;
      if (local_98 == '\0') {
        if (local_a0 != (int64_t *)0x0) {
          FUN_00d50b00();
          if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_00e2a00e;
        }
      }
      else if (local_a0 != (int64_t *)0x0) {
LAB_00e2a00e:
        local_98 = '\0';
        local_a0 = (int64_t *)0x0;
        local_40 = plVar4;
        local_90 = plVar4;
        local_88 = 0xffffffff;
        local_80 = 0;
        local_88._4_4_ = 0;
        while( true ) {
          if (local_88._4_4_ != 0) {
            if (local_88._4_4_ < 1) {
              iVar5 = -local_88._4_4_;
            }
            else {
              iVar5 = (int)local_88 - local_88._4_4_;
              local_88 = CONCAT44(local_88._4_4_,iVar5);
              FUN_00d23690();
              local_80 = local_80 + local_88._4_4_;
              iVar5 = 0;
            }
            local_88 = CONCAT44(iVar5,(int)local_88);
          }
          lVar3 = (int64_t)(int)local_88;
          iVar5 = (int)local_88 + 1;
          local_88 = CONCAT44(local_88._4_4_,iVar5);
          if (*(int *)((int64_t)local_90 + 0xc) <= iVar5) break;
          local_a0 = *(int64_t **)(local_90[2] + 8 + lVar3 * 8);
          plVar4 = (int64_t *)*param_2;
          FUN_00d76ac0();
          local_c0 = local_78;
          local_b8 = 0;
          if (local_70 == '\0') {
            if (local_78 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_70 = '\0';
          }
          local_b8 = '\x01';
          cVar2 = (**(code **)(*plVar4 + 0x50))();
          if ((local_b8 != '\0') && (local_c0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
          plVar4 = local_a0;
          lVar3 = g_02785c48;
          if (cVar2 != '\0') {
            if (g_02785c48 != 0) {
              FUN_00d50b00();
            }
            (**(code **)(*plVar4 + 0x80))();
            if (lVar3 != 0) {
              FUN_00d50b20();
            }
          }
          plVar4 = (int64_t *)*param_2;
          FUN_00d76b90();
          local_b0 = local_78;
          local_a8 = 0;
          if (local_70 == '\0') {
            if (local_78 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_70 = '\0';
          }
          local_a8 = '\x01';
          cVar2 = (**(code **)(*plVar4 + 0x50))();
          if ((local_a8 != '\0') && (local_b0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
          plVar4 = local_a0;
          lVar3 = g_02785c50;
          if (cVar2 != '\0') {
            if (g_02785c50 != 0) {
              FUN_00d50b00();
            }
            (**(code **)(*plVar4 + 0x80))();
            if (lVar3 != 0) {
              FUN_00d50b20();
            }
          }
        }
        FUN_00559a70();
        FUN_00d50b20();
      }
    }
    FUN_00e2c740();
  }
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar4 + 0x18))();
  lVar3 = g_02785c58;
  if (g_02785c58 != 0) {
    FUN_00d50b00();
  }
  local_68 = (int64_t *)lVar3;
  local_60 = '\0';
  FUN_00ca0840();
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  plVar1 = local_38;
  lVar3 = g_0277e650;
  if (*param_2 != 0) {
    if (g_0277e650 != 0) {
      FUN_00d50b00();
    }
    local_68 = (int64_t *)lVar3;
    local_60 = '\0';
    FUN_00ca0840();
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  lVar3 = g_027f38c0;
  if (*param_1 != 0) {
    if (g_027f38c0 != 0) {
      FUN_00d50b00();
    }
    local_68 = (int64_t *)lVar3;
    local_60 = '\0';
    FUN_00ca0840();
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d403d0();
  lVar3 = g_027f3858;
  if (g_027f3858 != 0) {
    FUN_00d50b00();
  }
  local_d8 = 0;
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_d8 = '\x01';
  local_e8 = '\0';
  local_f0 = plVar4;
  local_e0 = this_ptr;
  FUN_00d40470(&local_f0,&local_e0,3,3);
  if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

