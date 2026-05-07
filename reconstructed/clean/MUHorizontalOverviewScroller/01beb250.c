// Function: FUN_01beb250
// Address: 01beb250
// Size: 1101 bytes
// Class: MUHorizontalOverviewScroller

void FUN_01beb250(void)

{
  void*puVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  void*puVar4;
  int64_t lVar5;
  int iVar6;
  int64_t *arg1;
  int64_t this_ptr;
  bool bVar7;
  int64_t *local_c0;
  uint8_t local_b8;
  uint64_t local_b0;
  uint8_t local_a8;
  void*local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  int64_t local_80;
  uint64_t local_78;
  int local_70;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  void*local_48;
  int local_40;
  int iStack_3c;
  int local_38;
  
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_02572358;
  (*g_02572370)();
  if ((*arg1 != 0) && (0 < *(int *)(*arg1 + 0xc))) {
    FUN_00d21370();
    if ((void*)*arg1 != (void*)0x0) {
      local_50 = 0;
      local_58 = (int64_t *)0x0;
      local_40 = -1;
      iStack_3c = 0;
      local_38 = 0;
      local_48 = (void*)*arg1;
LAB_01beb325:
      lVar5 = (int64_t)local_40;
      local_40 = local_40 + 1;
      if (local_40 < *(int *)((int64_t)local_48 + 0xc)) {
        local_58 = *(int64_t **)(local_48[2] + 8 + lVar5 * 8);
        if (*(int64_t *)(this_ptr + 0x160) != 0) {
          local_88 = '\0';
          local_90 = (int64_t *)0x0;
          local_78 = 0xffffffff;
          local_70 = 0;
          local_80 = *(int64_t *)(this_ptr + 0x160);
          while( true ) {
            lVar5 = (int64_t)(int)local_78;
            iVar6 = (int)local_78 + 1;
            local_78 = CONCAT44(local_78._4_4_,iVar6);
            if (*(int *)(local_80 + 0xc) <= iVar6) break;
            local_90 = *(int64_t **)(*(int64_t *)(local_80 + 0x10) + 8 + lVar5 * 8);
            (**(code **)(*local_90 + 0x378))();
            plVar3 = local_58;
            plVar2 = local_68;
            if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar2 == plVar3) {
              local_68 = local_90;
              local_60 = '\0';
              FUN_00d21140();
              if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              FUN_01bc1260();
              (**(code **)(*local_68 + 0x5c0))();
              if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              FUN_002e0650();
              bVar7 = false;
              if (iStack_3c == 0) goto LAB_01beb325;
              goto LAB_01beb2f7;
            }
            if (local_78._4_4_ != 0) {
              if (local_78._4_4_ < 1) {
                iVar6 = -local_78._4_4_;
              }
              else {
                local_78 = CONCAT44(local_78._4_4_,(int)local_78 - local_78._4_4_);
                FUN_00d23690();
                local_70 = local_70 + local_78._4_4_;
                iVar6 = 0;
              }
              local_78 = CONCAT44(iVar6,(int)local_78);
            }
          }
          FUN_002e0650();
        }
        local_b8 = 0;
        local_b0 = 0;
        local_a8 = 0;
        local_c0 = local_58;
        FUN_01be75f0(&local_b0,&local_c0);
        plVar2 = local_68;
        if (local_60 == '\0') {
          if (local_68 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_60 = '\0';
        }
        local_90 = plVar2;
        local_88 = '\0';
        FUN_00d21140();
        if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar2 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        bVar7 = iStack_3c == 0;
        if (!bVar7) {
LAB_01beb2f7:
          if (bVar7 || iStack_3c < 0) {
            iStack_3c = -iStack_3c;
          }
          else {
            local_40 = local_40 - iStack_3c;
            FUN_00d23690();
            local_38 = local_38 + iStack_3c;
            iStack_3c = 0;
          }
        }
        goto LAB_01beb325;
      }
      FUN_00083b20();
    }
  }
  local_98 = '\0';
  local_a0 = puVar4;
  FUN_01d2a8f0();
  if ((local_98 != '\0') && (local_a0 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (puVar4 != (void*)0x0) {
    local_50 = 0;
    local_58 = (int64_t *)0x0;
    local_38 = 0;
    local_40 = 0;
    iStack_3c = 0;
    local_48 = puVar4;
    if (0 < *(int *)((int64_t)puVar4 + 0xc)) {
      lVar5 = 0;
      do {
        local_90 = *(int64_t **)(puVar4[2] + lVar5 * 8);
        local_88 = '\0';
        local_58 = local_90;
        FUN_00d23f50();
        if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        lVar5 = lVar5 + 1;
        local_40 = (int)lVar5;
      } while (local_40 < *(int *)((int64_t)puVar4 + 0xc));
    }
    FUN_002e0650();
  }
  puVar1 = *(void**)(this_ptr + 0x160);
  if (puVar1 != (void*)0x0) {
    local_50 = 0;
    local_58 = (int64_t *)0x0;
    iStack_3c = 0;
    local_38 = 0;
    local_48 = puVar1;
    for (lVar5 = 0; local_40 = (int)lVar5, local_40 < *(int *)((int64_t)puVar1 + 0xc);
        lVar5 = lVar5 + 1) {
      local_58 = *(int64_t **)(puVar1[2] + lVar5 * 8);
      FUN_00d50130();
    }
    FUN_002e0650();
  }
  local_50 = '\0';
  local_58 = puVar4;
  FUN_00d243f0();
  if ((local_50 != '\0') && (local_58 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (puVar4 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}

