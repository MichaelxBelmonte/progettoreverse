// Function: FUN_00cb8850
// Address: 00cb8850
// Size: 1634 bytes
// Class: Unknown
// String references:
//   "Remove %@"

void FUN_00cb8850(int64_t *param_1,int64_t *param_2)

{
  char cVar1;
  int64_t *plVar2;
  int64_t lVar3;
  void *pvVar4;
  int64_t *plVar5;
  int iVar6;
  int64_t *arg1;
  int64_t *this_ptr;
  bool bVar7;
  int64_t local_148;
  char local_140;
  int64_t local_128;
  uint8_t local_120;
  int64_t local_118;
  uint8_t local_110;
  int64_t local_108;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  void*local_68;
  uint local_60;
  int64_t local_58;
  uint64_t local_50;
  int local_48;
  int64_t *local_40;
  char local_38;
  
  local_100 = *arg1;
  local_f8 = '\0';
  local_f0 = *param_1;
  local_e8 = '\0';
  local_70 = param_2;
  cVar1 = (**(code **)(*this_ptr + 0x408))(param_1,&local_f0);
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if (cVar1 != '\0') {
    local_e0 = *local_70;
    local_d8 = '\0';
    (**(code **)(*this_ptr + 0x3e0))();
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
  }
  if (((this_ptr[0x12] != 0) && ((char)this_ptr[0x1c] != '\0')) && ((int)this_ptr[0x1a] == 0)) {
    FUN_00cb6da0(2);
    plVar2 = (int64_t *)(**(code **)(*(int64_t *)*arg1 + 0x188))();
    if ((plVar2 != (int64_t *)0x0) && (*plVar2 != 0)) {
      local_d0 = *param_1;
      local_c8 = '\0';
      cVar1 = (**(code **)(*(int64_t *)*arg1 + 0x2b8))();
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      if (((cVar1 != '\0') && (*local_70 != 0)) && (lVar3 = *plVar2, lVar3 != 0)) {
        FUN_00d50b00();
        local_60 = local_60 & 0xffffff00;
        local_68 = (void*)0x0;
        local_50 = 0xffffffff;
        local_48 = 0;
        local_50._4_4_ = 0;
        local_108 = lVar3;
        local_58 = lVar3;
        while( true ) {
          if (local_50._4_4_ != 0) {
            if (local_50._4_4_ < 1) {
              iVar6 = -local_50._4_4_;
            }
            else {
              iVar6 = (int)local_50 - local_50._4_4_;
              local_50 = CONCAT44(local_50._4_4_,iVar6);
              FUN_00d23690();
              local_48 = local_48 + local_50._4_4_;
              iVar6 = 0;
            }
            local_50 = CONCAT44(iVar6,(int)local_50);
          }
          lVar3 = (int64_t)(int)local_50;
          iVar6 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,iVar6);
          if (*(int *)(local_58 + 0xc) <= iVar6) break;
          local_68 = *(void**)(*(int64_t *)(local_58 + 0x10) + 8 + lVar3 * 8);
          FUN_00e17bc0();
          if (local_40 == (int64_t *)0x0) {
            bVar7 = true;
          }
          else {
            FUN_00e17bc0();
            if (local_90 == 0) {
              bVar7 = false;
            }
            else {
              FUN_00e17bc0();
              bVar7 = local_148 == *param_1;
              if ((local_140 != '\0') && (local_148 != 0)) {
                FUN_00d50b20();
              }
            }
            if ((local_88 != '\0') && (local_90 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (bVar7) {
            plVar2 = (int64_t *)*local_70;
            FUN_00e8b690();
            plVar5 = &g_02802688;
            if (plVar2 != (int64_t *)0x0) {
              (**(code **)(*plVar2 + 0x360))();
              cVar1 = FUN_00e85ea0();
              plVar5 = local_70;
              if (cVar1 == '\0') {
                plVar5 = &g_02802688;
              }
            }
            if (*plVar5 != 0) {
              pvVar4 = _pthread_getspecific((void*)plVar5);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_00e17ba0();
              local_c0 = 0;
              local_b8 = '\0';
              FUN_00e8c420();
              if ((local_b8 != '\0') && (local_c0 != 0)) {
                FUN_00d50b20();
              }
              if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                (**(code **)(*local_40 + 0x10))();
                FUN_00d50b20();
              }
            }
          }
        }
        FUN_00cc12b0();
        FUN_00d50b20();
      }
    }
  }
  if ((((*(char *)((int64_t)this_ptr + 0xe1) != '\0') && (this_ptr[8] != 0)) &&
      (cVar1 = FUN_00db3680(), cVar1 == '\0')) &&
     ((cVar1 = FUN_00db3920(), cVar1 != '\0' && (cVar1 = FUN_00d74560(), cVar1 == '\0')))) {
    local_b0 = *param_1;
    local_a8 = '\0';
    cVar1 = (**(code **)(*(int64_t *)*arg1 + 0x358))();
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if (cVar1 != '\0') {
      FUN_00d74470();
      lVar3 = local_90;
      local_60 = 1;
      local_68 = &g_024c5048;
      local_50 = local_50 & 0xffffffffffffff00;
      if (local_90 != 0) {
        FUN_00d50b00();
      }
      local_58 = lVar3;
      local_50 = CONCAT71(local_50._1_7_,1);
      FUN_00d8cb40();
      local_80 = local_40;
      local_78 = 0;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_78 = '\x01';
      FUN_00db31b0();
      if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_68 = &g_024c5048;
      if (((char)local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  cVar1 = FUN_00d74560();
  if (cVar1 == '\0') {
    local_a0 = *param_1;
    local_98 = '\0';
    cVar1 = (**(code **)(*(int64_t *)*arg1 + 0x350))();
    if ((cVar1 == '\0') || (this_ptr[0x26] == 0)) {
      bVar7 = false;
    }
    else {
      bVar7 = *(char *)((int64_t)this_ptr + 0xe1) != '\0';
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if (bVar7) {
      local_128 = *local_70;
      local_120 = 0;
      local_118 = *param_1;
      local_110 = 0;
      FUN_00cb91c0(&local_118,&local_128);
    }
  }
  return;
}

