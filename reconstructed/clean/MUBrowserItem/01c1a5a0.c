// Function: FUN_01c1a5a0
// Address: 01c1a5a0
// Size: 756 bytes
// Class: MUBrowserItem

uint64_t FUN_01c1a5a0(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  void*puVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int iVar5;
  int64_t *arg1;
  uint64_t this_ptr;
  uint uVar6;
  int64_t *local_b8;
  int64_t local_b0;
  int64_t local_a8;
  uint64_t local_a0;
  uint32_t local_98;
  int64_t *local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  uint64_t local_40;
  int local_38;
  
  local_90 = param_2;
  if ((*arg1 == 0) || (*(int *)(*arg1 + 0xc) != 1)) {
    puVar2 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &g_02578b00;
    (*g_02578b18)();
    FUN_00d7a0f0(1,0);
    lVar1 = *arg1;
    if (lVar1 != 0) {
      local_b0._0_1_ = '\0';
      local_98 = 0;
      local_a0 = 0;
      local_a8 = lVar1;
      if (0 < *(int *)(lVar1 + 0xc)) {
        uVar6 = 0;
        do {
          local_68 = *local_90;
          local_60 = '\0';
          (**(code **)(**(int64_t **)(*(int64_t *)(lVar1 + 0x10) + (uint64_t)uVar6 * 8) + 0x368))
                    ();
          lVar3 = local_58;
          if (local_50 == '\0') {
            if (local_58 != 0) {
              FUN_00d50b00();
              if ((local_50 != '\0') && (local_58 != 0)) {
                FUN_00d50b20();
              }
            }
          }
          else {
            local_50 = '\0';
          }
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
          if (lVar3 != 0) {
            local_50 = '\0';
            local_58 = 0;
            local_48 = lVar3;
            local_40 = 0xffffffff;
            local_38 = 0;
            local_40._4_4_ = 0;
            while( true ) {
              if (local_40._4_4_ != 0) {
                if (local_40._4_4_ < 1) {
                  iVar5 = -local_40._4_4_;
                }
                else {
                  iVar5 = (int)local_40 - local_40._4_4_;
                  local_40 = CONCAT44(local_40._4_4_,iVar5);
                  FUN_00d23690();
                  local_38 = local_38 + local_40._4_4_;
                  iVar5 = 0;
                }
                local_40 = CONCAT44(iVar5,(int)local_40);
              }
              lVar3 = (int64_t)(int)local_40;
              iVar5 = (int)local_40 + 1;
              local_40 = CONCAT44(local_40._4_4_,iVar5);
              if (*(int *)(local_48 + 0xc) <= iVar5) break;
              local_88 = *(int64_t *)(*(int64_t *)(local_48 + 0x10) + 8 + lVar3 * 8);
              local_80 = '\0';
              local_58 = local_88;
              FUN_00d7a410();
              if ((local_80 != '\0') && (local_88 != 0)) {
                FUN_00d50b20();
              }
            }
            FUN_0038d420();
            FUN_00d50b20();
          }
          uVar6 = uVar6 + 1;
          local_a0 = CONCAT44(local_a0._4_4_,uVar6);
        } while ((int)uVar6 < *(int *)(lVar1 + 0xc));
      }
      FUN_01c2d1e0();
    }
    FUN_01c1a9e0();
    if (puVar2 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d23310();
    plVar4 = &local_58;
    if ((char)local_b0 != '\0') {
      plVar4 = &local_b0;
    }
    local_58 = CONCAT71(local_58._1_7_,(char)local_b0);
    *(void*)plVar4 = 0;
    if (((char)local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_78 = *local_90;
    local_70 = '\0';
    (**(code **)(*local_b8 + 0x368))();
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((char)local_58 != '\0') {
      FUN_00d50b20();
    }
  }
  return this_ptr;
}

