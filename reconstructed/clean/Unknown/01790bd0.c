// Function: FUN_01790bd0
// Address: 01790bd0
// Size: 1094 bytes
// Class: Unknown

void FUN_01790bd0(uint64_t param_1,int64_t *param_2)

{
  void*puVar1;
  code *pcVar2;
  char cVar3;
  int64_t *plVar4;
  void*puVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int iVar8;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_100;
  char local_f8;
  int iStack_9c;
  int local_98;
  uint64_t local_70;
  int64_t *local_68;
  char local_60;
  int64_t local_58;
  uint64_t local_50;
  int local_48;
  uint64_t local_40;
  char local_31;
  
  local_70 = *(void*)(*arg1 + 0xc);
  local_68 = *(int64_t **)(*arg1 + 0x14);
  local_40 = local_68;
  FUN_00e7b970();
  plVar4 = local_68;
  local_68._0_4_ = 1;
  if (((((uint64_t)plVar4 >> 0x20 != 0) && (cVar3 = FUN_00e7c650(), cVar3 != '\0')) &&
      (local_70._4_4_ == 1)) && (local_40._4_4_ == 1)) {
    local_98 = (int)plVar4;
    if ((((uint64_t)plVar4 & 1) == 0) || (local_98 * -0x55555555 + 0x2aaaaaaaU < 0x55555555)) {
      local_68 = plVar4;
      FUN_00e7c3c0();
    }
    else {
      local_68 = (int64_t *)CONCAT44(local_68._4_4_,1);
      FUN_00e7c240();
    }
    local_40 = (int64_t *)local_70;
    FUN_00e7b820();
    pcVar2 = g_02572370;
    do {
      plVar4 = (int64_t *)FUN_00e8fc40();
      FUN_01794ea0();
      (**(code **)(*plVar4 + 0x18))();
      *(void*)((int64_t)plVar4 + 0xc) = local_70;
      *(int64_t **)((int64_t)plVar4 + 0x14) = local_40;
      puVar5 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar5 = &g_02572358;
      (*pcVar2)();
      if (*param_2 != 0) {
        local_60 = '\0';
        local_68 = (int64_t *)0x0;
        local_50 = 0xffffffff;
        local_48 = 0;
        local_50._4_4_ = 0;
        local_58 = *param_2;
        while( true ) {
          if (local_50._4_4_ != 0) {
            if (local_50._4_4_ < 1) {
              iVar8 = -local_50._4_4_;
            }
            else {
              iVar8 = (int)local_50 - local_50._4_4_;
              local_50 = CONCAT44(local_50._4_4_,iVar8);
              FUN_00d23690();
              local_48 = local_48 + local_50._4_4_;
              iVar8 = 0;
            }
            local_50 = CONCAT44(iVar8,(int)local_50);
          }
          lVar6 = (int64_t)(int)local_50;
          iVar8 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,iVar8);
          if (*(int *)(local_58 + 0xc) <= iVar8) break;
          local_68 = *(int64_t **)(*(int64_t *)(local_58 + 0x10) + 8 + lVar6 * 8);
          uVar7 = FUN_0178c570(*(int64_t *)(local_58 + 0x10),&local_70);
          if (((local_31 != '\0') && (uVar7 >> 0x20 != 0)) && (local_70._4_4_ != 0)) {
            cVar3 = FUN_00e7c020();
            iStack_9c = (int)(uVar7 >> 0x20);
            if (((cVar3 == '\0' && iStack_9c != 0) && (local_40._4_4_ != 0)) &&
               (cVar3 = FUN_00e7c020(), cVar3 != '\0')) {
              FUN_00d21140();
            }
          }
        }
        FUN_0015ed50();
      }
      puVar1 = *(void**)(this_ptr + 0x50);
      if (puVar1 != puVar5) {
        if (puVar5 != (void*)0x0) {
          FUN_00d50b00();
        }
        *(void**)(this_ptr + 0x50) = puVar5;
        if (puVar1 != (void*)0x0) {
          FUN_00d50b20();
        }
      }
      FUN_0178c910();
      if ((local_f8 != '\0') && (local_100 != 0)) {
        FUN_00d50b20();
      }
      local_60 = '\0';
      local_68 = plVar4;
      FUN_00d21140();
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01790bd0();
      FUN_00e7b820();
      FUN_00e7b820();
      if (puVar5 != (void*)0x0) {
        FUN_00d50b20();
      }
      if (plVar4 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    } while (((local_40._4_4_ != 0) && (*(int *)(*arg1 + 0x18) != 0)) &&
            (cVar3 = FUN_00e7c020(), cVar3 == '\0'));
  }
  return;
}

