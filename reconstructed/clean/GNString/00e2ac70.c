// Function: FUN_00e2ac70
// Address: 00e2ac70
// Size: 1498 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00e2ac70(int64_t *param_1,int64_t *param_2)

{
  char cVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int iVar4;
  int64_t *this_ptr;
  int64_t *local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t *local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t *local_90;
  uint64_t local_88;
  int local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  uint64_t local_50;
  int local_48;
  int64_t *local_40;
  int64_t local_38;
  
  if (*param_2 != 0) {
    (**(code **)(*this_ptr + 0x388))();
    lVar2 = local_68;
    if (local_60 == '\0') {
      if (local_68 == 0) goto LAB_00e2afc5;
      FUN_00d50b00();
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
    else if (local_68 == 0) goto LAB_00e2afc5;
    local_60 = '\0';
    local_68 = 0;
    local_38 = lVar2;
    local_58 = lVar2;
    local_50 = 0xffffffff;
    local_48 = 0;
    local_50._4_4_ = 0;
    while( true ) {
      if (local_50._4_4_ != 0) {
        if (local_50._4_4_ < 1) {
          iVar4 = -local_50._4_4_;
        }
        else {
          iVar4 = (int)local_50 - local_50._4_4_;
          local_50 = CONCAT44(local_50._4_4_,iVar4);
          FUN_00d23690();
          local_48 = local_48 + local_50._4_4_;
          iVar4 = 0;
        }
        local_50 = CONCAT44(iVar4,(int)local_50);
      }
      lVar2 = (int64_t)(int)local_50;
      iVar4 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,iVar4);
      if (*(int *)(local_58 + 0xc) <= iVar4) break;
      local_68 = *(int64_t *)(*(int64_t *)(local_58 + 0x10) + 8 + lVar2 * 8);
      FUN_00c81c60();
      plVar3 = local_a0;
      if (local_98 == '\0') {
        if (local_a0 != (int64_t *)0x0) {
          FUN_00d50b00();
          if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_00e2adea;
        }
      }
      else if (local_a0 != (int64_t *)0x0) {
LAB_00e2adea:
        local_98 = '\0';
        local_a0 = (int64_t *)0x0;
        local_40 = plVar3;
        local_90 = plVar3;
        local_88 = 0xffffffff;
        local_80 = 0;
        local_88._4_4_ = 0;
        while( true ) {
          if (local_88._4_4_ != 0) {
            if (local_88._4_4_ < 1) {
              iVar4 = -local_88._4_4_;
            }
            else {
              iVar4 = (int)local_88 - local_88._4_4_;
              local_88 = CONCAT44(local_88._4_4_,iVar4);
              FUN_00d23690();
              local_80 = local_80 + local_88._4_4_;
              iVar4 = 0;
            }
            local_88 = CONCAT44(iVar4,(int)local_88);
          }
          lVar2 = (int64_t)(int)local_88;
          iVar4 = (int)local_88 + 1;
          local_88 = CONCAT44(local_88._4_4_,iVar4);
          if (*(int *)((int64_t)local_90 + 0xc) <= iVar4) break;
          local_a0 = *(int64_t **)(local_90[2] + 8 + lVar2 * 8);
          plVar3 = (int64_t *)*param_2;
          FUN_00d76a90();
          local_78 = local_c0;
          local_70 = 0;
          if (local_b8 == '\0') {
            if (local_c0 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_b8 = '\0';
          }
          local_70 = '\x01';
          cVar1 = (**(code **)(*plVar3 + 0x50))();
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
          if ((local_b8 != '\0') && (local_c0 != 0)) {
            FUN_00d50b20();
          }
          plVar3 = local_a0;
          lVar2 = g_02785c60;
          if (cVar1 != '\0') {
            if (g_02785c60 != 0) {
              FUN_00d50b00();
            }
            (**(code **)(*plVar3 + 0x80))();
            if (lVar2 != 0) {
              FUN_00d50b20();
            }
          }
        }
        FUN_00559a70();
        FUN_00d50b20();
      }
    }
    FUN_00e2c740();
    FUN_00d50b20();
  }
LAB_00e2afc5:
  plVar3 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar3 + 0x18))();
  lVar2 = g_02785c68;
  if (g_02785c68 != 0) {
    FUN_00d50b00();
  }
  local_68 = lVar2;
  local_60 = '\0';
  FUN_00ca0840();
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = g_0277e650;
  if (*param_2 != 0) {
    if (g_0277e650 != 0) {
      FUN_00d50b00();
    }
    local_68 = lVar2;
    local_60 = '\0';
    FUN_00ca0840();
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  lVar2 = g_027f38c0;
  if (*param_1 != 0) {
    if (g_027f38c0 != 0) {
      FUN_00d50b00();
    }
    local_68 = lVar2;
    local_60 = '\0';
    FUN_00ca0840();
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d403d0();
  lVar2 = g_02785c70;
  if (g_02785c70 != 0) {
    FUN_00d50b00();
  }
  local_a8 = 0;
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_a8 = '\x01';
  local_c8 = '\0';
  local_d0 = plVar3;
  local_b0 = this_ptr;
  FUN_00d40470(&local_d0,&local_b0,3,3);
  if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}

