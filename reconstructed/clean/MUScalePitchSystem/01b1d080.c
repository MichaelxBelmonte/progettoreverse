// Function: FUN_01b1d080
// Address: 01b1d080
// Size: 1647 bytes
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


uint64_t FUN_01b1d080(uint64_t param_1,char param_2)

{
  uint32_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  void*puVar5;
  void *pvVar6;
  int64_t lVar7;
  int64_t *plVar8;
  void* pVar9;
  uint64_t uVar10;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t *local_138;
  char local_130;
  int64_t local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  void*local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t *local_b8;
  char local_b0;
  int64_t *in_stack_ffffffffffffffa0;
  char local_58;
  
  lVar2 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  if ((*(char *)(this_ptr + 0x315) == '\0') || (*(char *)(this_ptr + 0x316) == '\0')) {
LAB_01b1d1e1:
    uVar10 = 0;
  }
  else {
    FUN_01ad3cb0();
    if (local_58 == '\0') {
      if (in_stack_ffffffffffffffa0 == (int64_t *)0x0) goto LAB_01b1d1e1;
      FUN_00d50b00();
      if (*arg1 != 0) goto LAB_01b1d0f4;
LAB_01b1d1da:
      uVar10 = 0;
    }
    else {
      if (in_stack_ffffffffffffffa0 == (int64_t *)0x0) goto LAB_01b1d1e1;
      if (*arg1 == 0) goto LAB_01b1d1da;
LAB_01b1d0f4:
      if (param_2 == '\0') {
        FUN_01caeae0();
        local_138 = arg1;
        if (local_58 == '\0') {
          if (in_stack_ffffffffffffffa0 != (int64_t *)0x0) {
            FUN_00d50b00();
            goto LAB_01b1d223;
          }
        }
        else if (in_stack_ffffffffffffffa0 != (int64_t *)0x0) {
LAB_01b1d223:
          puVar5 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          pVar9 = 0x25795a8;
          *puVar5 = &g_025795a8;
          (*g_025795c0)();
          if (*(int *)(this_ptr + 0x194) == -1000000) {
            pvVar6 = _pthread_getspecific(pVar9);
            plVar8 = in_stack_ffffffffffffffa0;
            if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
              plVar8 = (int64_t *)
                       in_stack_ffffffffffffffa0[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
            }
            lVar7 = g_027e45c8;
            if (g_027e45c8 != 0) {
              FUN_00d50b00();
            }
            local_128 = lVar7;
            local_120 = '\x01';
            local_118 = 0;
            local_110 = '\0';
            (**(code **)(*plVar8 + 0x3c0))(&local_128,0x3c,&local_118);
            if (local_58 == '\0') {
              if (in_stack_ffffffffffffffa0 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_58 = '\0';
            }
            FUN_00d8dbf0();
            if (in_stack_ffffffffffffffa0 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (in_stack_ffffffffffffffa0 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_110 != '\0') && (local_118 != 0)) {
              FUN_00d50b20();
            }
            if ((local_120 != '\0') && (local_128 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            pvVar6 = _pthread_getspecific(pVar9);
            plVar8 = in_stack_ffffffffffffffa0;
            if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
              plVar8 = (int64_t *)
                       in_stack_ffffffffffffffa0[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
            }
            lVar7 = g_027e45c8;
            uVar1 = *(void*)(this_ptr + 0x194);
            if (g_027e45c8 != 0) {
              FUN_00d50b00();
            }
            local_108 = lVar7;
            local_100 = '\x01';
            local_f8 = 0;
            local_f0 = '\0';
            (**(code **)(*plVar8 + 0x3c8))(&local_108,uVar1,&local_f8);
            if (local_58 == '\0') {
              if (in_stack_ffffffffffffffa0 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_58 = '\0';
            }
            FUN_00d8dbf0();
            if (in_stack_ffffffffffffffa0 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (in_stack_ffffffffffffffa0 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_f0 != '\0') && (local_f8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_100 != '\0') && (local_108 != 0)) {
              FUN_00d50b20();
            }
          }
          plVar8 = (int64_t *)FUN_00e8fc40();
          FUN_00022d50();
          (**(code **)(*plVar8 + 0x18))();
          lVar7 = g_027e3ce0;
          local_e0 = '\0';
          local_e8 = puVar5;
          if (g_027e3ce0 != 0) {
            FUN_00d50b00();
          }
          FUN_00ca0840();
          if (lVar7 != 0) {
            FUN_00d50b20();
          }
          if ((local_e0 != '\0') && (local_e8 != (void*)0x0)) {
            FUN_00d50b20();
          }
          lVar4 = g_027e4590;
          if (g_027e4590 != 0) {
            FUN_00d50b00();
          }
          lVar3 = g_027e3d50;
          local_d8 = lVar4;
          local_d0 = '\x01';
          if (g_027e3d50 != 0) {
            FUN_00d50b00();
          }
          local_c8 = lVar3;
          local_c0 = '\x01';
          local_b0 = '\0';
          local_b8 = plVar8;
          FUN_00d31230(&local_b8,&local_c8);
          if (lVar7 != 0) {
            FUN_00d50b00();
          }
          FUN_01d64eb0();
          if (lVar7 != 0) {
            FUN_00d50b20();
          }
          if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_c0 != '\0') && (local_c8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_d0 != '\0') && (local_d8 != 0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          FUN_00d50b20();
          uVar10 = CONCAT71((int7)((uint64_t)lVar7 >> 8),1);
          FUN_00d50b20();
          goto LAB_01b1d6be;
        }
      }
      else {
        FUN_00d50b00();
        *(int *)(this_ptr + 0x2fc) = *(int *)(this_ptr + 0x2fc) + 1;
        FUN_01b40210();
        FUN_00d50b00();
        FUN_01acf890();
        if (this_ptr != 0) {
          FUN_00d50b20();
        }
        if ((local_130 != '\0') && (local_138 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01af6500();
        FUN_00d50b20();
      }
      uVar10 = CONCAT71((int7)((uint64_t)local_138 >> 8),1);
    }
LAB_01b1d6be:
    FUN_00d50b20();
  }
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != lVar2) {
                        ___stack_chk_fail();
  }
  return uVar10 & 0xffffffff;
}

