// Function: FUN_00cb1490
// Address: 00cb1490
// Size: 1663 bytes
// Class: Unknown

void* FUN_00cb1490(code *param_1,void*param_2,int64_t *param_3)

{
  code *pcVar1;
  int64_t lVar2;
  int64_t *plVar3;
  char cVar4;
  int extraout_var;
  int64_t lVar5;
  void*puVar6;
  uint64_t uVar7;
  char *pcVar8;
  code *pcVar9;
  int iVar10;
  int64_t *arg1;
  void*this_ptr;
  uint uVar11;
  int64_t local_118;
  char local_110;
  int64_t *local_108;
  char local_100;
  int64_t *local_f8;
  char local_f0;
  int64_t *local_e8;
  char local_e0;
  int64_t *local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0 [8];
  int64_t local_b8;
  uint64_t local_b0;
  uint32_t local_a8;
  void*local_a0;
  int64_t local_98;
  int64_t *local_90;
  int64_t local_88;
  int64_t *local_80;
  char local_78 [8];
  int64_t *local_70;
  uint64_t local_68;
  int local_60;
  uint64_t local_58;
  void*local_50;
  char local_48 [8];
  char local_40 [8];
  char local_38 [8];
  
  local_a0 = param_2;
  local_90 = param_3;
  FUN_00d4efa0();
  lVar5 = local_c8;
  local_48[0] = local_c0[0];
  pcVar8 = local_48;
  if (local_c0[0] != '\0') {
    pcVar8 = local_c0;
  }
  *pcVar8 = '\0';
  if ((local_c0[0] != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  FUN_00c820a0();
  lVar2 = local_c8;
  pcVar8 = local_c0;
  if (local_c0[0] == '\0') {
    pcVar8 = local_40;
  }
  local_40[0] = local_c0[0];
  *pcVar8 = '\0';
  if ((local_c0[0] != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  pcVar1 = g_02578b18;
  if (lVar2 == 0) {
    *(void*)(this_ptr + 1) = 0;
LAB_00cb1ab5:
    *this_ptr = 0;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    local_98 = lVar5;
    local_c0[0] = '\0';
    local_c8 = 0;
    local_b8 = lVar2;
    local_a8 = 0;
    local_b0 = 0;
    uVar11 = 0;
    local_88 = lVar2;
    if (*(int *)(lVar2 + 0xc) < 1) {
      local_58 = 0;
      local_50 = (void*)0x0;
    }
    else {
      local_90 = (int64_t *)((int64_t)local_90 + (int64_t)arg1);
      local_50 = (void*)0x0;
      local_58 = 0;
      do {
        local_118 = *(int64_t *)(*(int64_t *)(local_88 + 0x10) + (uint64_t)uVar11 * 8);
        local_110 = '\0';
        local_c8 = local_118;
        cVar4 = (**(code **)(*arg1 + 0x408))((uint64_t)uVar11,&local_118);
        if ((local_110 != '\0') && (local_118 != 0)) {
          FUN_00d50b20();
        }
        if (cVar4 != '\0') {
          FUN_00d77bd0();
          if (extraout_var < 2) {
            (**(code **)(*(int64_t *)*local_a0 + 0x210))();
            plVar3 = local_80;
            local_38[0] = local_78[0];
            pcVar8 = local_78;
            if (local_78[0] == '\0') {
              pcVar8 = local_38;
            }
            *pcVar8 = '\0';
            if ((local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar3 != (int64_t *)0x0) {
              cVar4 = (**(code **)(*plVar3 + 0x70))();
              if ((cVar4 == '\0') && (cVar4 = (**(code **)(*plVar3 + 0x140))(), cVar4 != '\0')) {
                if (param_1 == 0x0) {
                  if (local_50 == (void*)0x0) {
                    puVar6 = (void*)FUN_00e8fc40();
                    FUN_00d4ff40();
                    *puVar6 = &g_02578b00;
                    (*pcVar1)();
                    local_50 = puVar6;
                    uVar7 = FUN_00d7a0f0(1,1);
                    local_58 = CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
                  }
                  local_d8 = plVar3;
                  local_d0 = '\0';
                  FUN_00d7a410();
                  if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  pcVar9 = param_1;
                  if (((uint64_t)param_1 & 1) != 0) {
                    pcVar9 = *(code **)(param_1 + *local_90 + -1);
                  }
                  local_e8 = plVar3;
                  local_e0 = '\0';
                  (*pcVar9)();
                  if ((local_e0 != '\0') && (local_e8 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                }
              }
              if (local_38[0] != '\0') {
                FUN_00d50b20();
              }
            }
          }
          else {
            (**(code **)(*(int64_t *)*local_a0 + 0x210))();
            plVar3 = local_80;
            local_38[0] = local_78[0];
            pcVar8 = local_78;
            if (local_78[0] == '\0') {
              pcVar8 = local_38;
            }
            *pcVar8 = '\0';
            if ((local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar3 != (int64_t *)0x0) {
              local_78[0] = '\0';
              local_80 = (int64_t *)0x0;
              local_70 = plVar3;
              local_68 = 0xffffffff;
              local_60 = 0;
              local_68._4_4_ = 0;
              if (param_1 == 0x0) {
                while( true ) {
                  if (local_68._4_4_ != 0) {
                    if (local_68._4_4_ < 1) {
                      iVar10 = -local_68._4_4_;
                    }
                    else {
                      iVar10 = (int)local_68 - local_68._4_4_;
                      local_68 = CONCAT44(local_68._4_4_,iVar10);
                      FUN_00d23690();
                      local_60 = local_60 + local_68._4_4_;
                      iVar10 = 0;
                    }
                    local_68 = CONCAT44(iVar10,(int)local_68);
                  }
                  lVar5 = (int64_t)(int)local_68;
                  iVar10 = (int)local_68 + 1;
                  local_68 = CONCAT44(local_68._4_4_,iVar10);
                  if (*(int *)((int64_t)local_70 + 0xc) <= iVar10) break;
                  local_80 = *(int64_t **)(local_70[2] + 8 + lVar5 * 8);
                  cVar4 = (**(code **)(*local_80 + 0x70))();
                  if ((cVar4 == '\0') && (cVar4 = (**(code **)(*local_80 + 0x140))(), cVar4 != '\0')
                     ) {
                    if (local_50 == (void*)0x0) {
                      puVar6 = (void*)FUN_00e8fc40();
                      FUN_00d4ff40();
                      *puVar6 = &g_02578b00;
                      (*pcVar1)();
                      local_50 = puVar6;
                      uVar7 = FUN_00d7a0f0(1,1);
                      local_58 = CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
                    }
                    local_f8 = local_80;
                    local_f0 = '\0';
                    FUN_00d7a410();
                    if ((local_f0 != '\0') && (local_f8 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                }
              }
              else {
                while( true ) {
                  if (local_68._4_4_ != 0) {
                    if (local_68._4_4_ < 1) {
                      iVar10 = -local_68._4_4_;
                    }
                    else {
                      iVar10 = (int)local_68 - local_68._4_4_;
                      local_68 = CONCAT44(local_68._4_4_,iVar10);
                      FUN_00d23690();
                      local_60 = local_60 + local_68._4_4_;
                      iVar10 = 0;
                    }
                    local_68 = CONCAT44(iVar10,(int)local_68);
                  }
                  lVar5 = (int64_t)(int)local_68;
                  iVar10 = (int)local_68 + 1;
                  local_68 = CONCAT44(local_68._4_4_,iVar10);
                  if (*(int *)((int64_t)local_70 + 0xc) <= iVar10) break;
                  local_80 = *(int64_t **)(local_70[2] + 8 + lVar5 * 8);
                  cVar4 = (**(code **)(*local_80 + 0x70))();
                  if ((cVar4 == '\0') && (cVar4 = (**(code **)(*local_80 + 0x140))(), cVar4 != '\0')
                     ) {
                    pcVar9 = param_1;
                    if (((uint64_t)param_1 & 1) != 0) {
                      pcVar9 = *(code **)(param_1 + *local_90 + -1);
                    }
                    local_108 = local_80;
                    local_100 = '\0';
                    (*pcVar9)();
                    if ((local_100 != '\0') && (local_108 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                }
              }
              FUN_00083b20();
              if (local_38[0] != '\0') {
                FUN_00d50b20();
              }
            }
          }
        }
        uVar11 = uVar11 + 1;
        local_b0 = CONCAT44(local_b0._4_4_,uVar11);
      } while ((int)uVar11 < *(int *)(local_88 + 0xc));
    }
    FUN_00559a70();
    if (local_40[0] != '\0') {
      FUN_00d50b20();
    }
    puVar6 = local_50;
    lVar5 = local_98;
    *(void*)(this_ptr + 1) = 0;
    if ((char)local_58 == '\0') {
      if (local_50 == (void*)0x0) goto LAB_00cb1ab5;
      FUN_00d50b00();
    }
    *this_ptr = puVar6;
    *(void*)(this_ptr + 1) = 1;
  }
  if ((local_48[0] != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}

