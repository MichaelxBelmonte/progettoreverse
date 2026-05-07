// Function: FUN_00e8e380
// Address: 00e8e380
// Size: 1117 bytes
// Class: GNValue
// String references:
//   "GNValue"
//   "%I/%I"
//   "GNString"
//   "%s%I %I/%I"
//   "%s%I/%I"
//   "%s%I"

void FUN_00e8e380(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  void*puVar3;
  char cVar4;
  int iVar5;
  int64_t *plVar6;
  uint64_t uVar7;
  int64_t arg1;
  int64_t *this_ptr;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar8;
  void*local_68;
  uint32_t local_60;
  uint32_t uStack_5c;
  int local_58;
  uint32_t uStack_54;
  uint64_t local_50;
  uint32_t local_48;
  int local_3c;
  uint64_t local_38;
  
  plVar6 = (int64_t *)*param_2;
  if ((g_0270c850 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_026d4348 = FUN_00d4fe50();
    g_026d4330 = "GNValue";
    g_026d4338 = 0x18;
    g_026d4340 = FUN_00053cb0;
    g_026d4350 = 0;
    ram_00000000026d4358 = 0;
    g_026d4360 = 0;
    ram_00000000026d4368 = 0;
    g_026d4370 = 0;
    ram_00000000026d4378 = 0;
    g_026d4380 = 0;
    ram_00000000026d4388 = 0;
    g_026d4390 = 0;
    ram_00000000026d4398 = 0;
    g_026d43a0 = 0;
    ram_00000000026d43a8 = 0;
    g_026d43b0 = 0;
    ram_00000000026d43b8 = 0;
    g_026d43c0 = 0;
    ram_00000000026d43c8 = 0;
    g_026d43d0 = 0;
    ram_00000000026d43d8 = 0;
    g_026d43e0 = 0;
    ram_00000000026d43e8 = 0;
    g_026d43f0 = 0;
    ___cxa_guard_release();
  }
  if (plVar6 == (int64_t *)0x0) {
LAB_00e8e3d3:
    plVar6 = &g_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar4 = FUN_00e85ea0();
    plVar6 = param_2;
    if (cVar4 == '\0') goto LAB_00e8e3d3;
  }
  lVar1 = plVar6[1];
  if (((char)lVar1 != '\0') && (*plVar6 != 0)) {
    FUN_00d50b00();
LAB_00e8e3fe:
    local_38 = (void*)FUN_00dd6320();
    if ((uint64_t)local_38 >> 0x20 == 0) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
    }
    else {
      local_68 = (void*)((uint64_t)local_68 & 0xffffffff00000000);
      cVar4 = FUN_00e7c630();
      lVar2 = g_0276ce70;
      if (cVar4 == '\0') {
        if (*(char *)(arg1 + 0xc) == '\0') {
          local_60 = 2;
          uStack_5c = SUB84(local_38,0);
          local_68 = (void*)&g_024c3df0;
          local_58 = local_38._4_4_;
          FUN_00d8cb40(extraout_XMM0_Da,&local_68);
        }
        else {
          local_68 = (void*)((uint64_t)local_68 & 0xffffffff00000000);
          if (local_38._4_4_ == 0) {
            local_58 = 0x1ff0050;
            uVar7 = 0;
          }
          else {
            cVar4 = FUN_00e7c6b0();
            if (cVar4 == '\0') {
              local_38 = (void*)FUN_00e7bfe0();
              uVar7 = (uint64_t)local_38 >> 0x20;
              local_58 = 0x202fcc4;
            }
            else {
              local_58 = 0x1ff0050;
              uVar7 = (uint64_t)local_38 >> 0x20;
            }
          }
          local_3c = (int)local_38 / (int)uVar7;
          local_68 = local_38;
          uVar8 = FUN_00e7c280(uVar7,(int64_t)(int)local_38 % (int64_t)(int)uVar7 & 0xffffffff);
          puVar3 = local_68;
          uStack_54 = 0;
          if ((int)local_68 == 0) {
            local_60 = 2;
            local_68 = &g_024f6780;
            local_50 = (void*)CONCAT44(local_50._4_4_,local_3c);
            FUN_00d8cb40(uVar8,&local_68);
          }
          else if (local_3c == 0) {
            local_60 = 3;
            local_50 = local_38;
            local_68 = (void*)&g_024f6748;
            FUN_00d8cb40(0,&local_68);
          }
          else {
            local_60 = 4;
            local_50 = (void*)CONCAT44((int)local_68,local_3c);
            local_68 = (void*)&g_025914d0;
            local_48 = (uint32_t)((uint64_t)puVar3 >> 0x20);
            FUN_00d8cb40(local_3c,&local_68);
          }
        }
      }
      else {
        *(void*)(this_ptr + 1) = 0;
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        *this_ptr = lVar2;
        *(void*)(this_ptr + 1) = 1;
      }
    }
    if ((char)lVar1 != '\0') {
      FUN_00d50b20();
    }
    return;
  }
  if (*plVar6 != 0) goto LAB_00e8e3fe;
  plVar6 = (int64_t *)*param_2;
  if ((g_026fd0c0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_026d5e58 = FUN_00d4fe50();
    g_026d5e40 = "GNString";
    g_026d5e48 = 0x40;
    g_026d5e50 = FUN_0005d920;
    g_026d5e60 = 0;
    ram_00000000026d5e68 = 0;
    g_026d5e70 = 0;
    ram_00000000026d5e78 = 0;
    g_026d5e80 = 0;
    ram_00000000026d5e88 = 0;
    g_026d5e90 = 0;
    ram_00000000026d5e98 = 0;
    g_026d5ea0 = 0;
    ram_00000000026d5ea8 = 0;
    g_026d5eb0 = 0;
    ram_00000000026d5eb8 = 0;
    g_026d5ec0 = 0;
    ram_00000000026d5ec8 = 0;
    g_026d5ed0 = 0;
    ram_00000000026d5ed8 = 0;
    g_026d5ee0 = 0;
    ram_00000000026d5ee8 = 0;
    g_026d5ef0 = 0;
    ram_00000000026d5ef8 = 0;
    g_026d5f00 = 0;
    ___cxa_guard_release();
  }
  if (plVar6 != (int64_t *)0x0) {
    (**(code **)(*plVar6 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 != '\0') goto LAB_00e8e4ed;
  }
  param_2 = &g_02802688;
LAB_00e8e4ed:
  lVar1 = *param_2;
  lVar2 = param_2[1];
  if (((char)lVar2 == '\0') || (lVar1 == 0)) {
    if (lVar1 == 0) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      return;
    }
    *(void*)(this_ptr + 1) = 0;
    if ((char)lVar2 == '\0') {
      FUN_00d50b00();
    }
  }
  else {
    FUN_00d50b00();
    *(void*)(this_ptr + 1) = 0;
  }
  *this_ptr = lVar1;
  *(void*)(this_ptr + 1) = 1;
  return;
}

