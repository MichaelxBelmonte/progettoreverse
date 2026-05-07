// Function: FUN_012d8cd0
// Address: 012d8cd0
// Size: 2078 bytes
// Class: GNList
// String references:
//   "P_%02i.%02i.%02i_%02i.%02i.%02i.%02i.wav"
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_012d8cd0(void)

{
  char cVar1;
  uint32_t uVar2;
  void*puVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  int64_t *arg1;
  int64_t this_ptr;
  uint64_t uVar6;
  int64_t local_120;
  char local_118;
  int64_t *local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t *local_f0;
  char local_e8;
  void*local_e0;
  char local_d8;
  int64_t *local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  uint32_t local_b0;
  uint32_t local_ac;
  int64_t local_a8;
  char local_a0;
  int64_t *local_98;
  int64_t local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  void*local_70;
  int64_t *local_68;
  int64_t *local_60;
  int64_t *local_58;
  uint local_50;
  uint32_t local_4c;
  uint32_t local_48;
  uint32_t local_44;
  uint32_t local_40;
  uint32_t local_3c;
  uint32_t local_38;
  int local_34;
  
  if (g_028ac87a == '\0') goto LAB_012d9446;
  uVar6 = FUN_00ce6e90();
  plVar5 = local_80;
  local_120 = g_027bedd8;
  if (g_027bedd8 != 0) {
    uVar6 = FUN_00d50b00();
  }
  local_118 = '\x01';
  (**(code **)(*plVar5 + 0x400))(uVar6,&local_120);
  plVar5 = local_58;
  if ((char)local_50 == '\0') {
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b00();
      if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_50 = local_50 & 0xffffff00;
  }
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar5 == (int64_t *)0x0) goto LAB_012d9446;
  cVar1 = (**(code **)(*plVar5 + 0x3a0))();
  if (cVar1 == '\0') {
    (**(code **)(*plVar5 + 0x420))();
  }
  cVar1 = (**(code **)(*plVar5 + 0x3a0))();
  if ((cVar1 != '\0') && (*(int *)(*(int64_t *)(this_ptr + 0x108) + 0xc) != 0)) {
    plVar4 = (int64_t *)*arg1;
    FUN_00540c00();
    if (plVar4 == (int64_t *)0x0) {
LAB_012d8df9:
      plVar4 = &g_02802688;
    }
    else {
      (**(code **)(*plVar4 + 0x360))();
      cVar1 = FUN_00e85ea0();
      plVar4 = arg1;
      if (cVar1 == '\0') goto LAB_012d8df9;
    }
    if (*plVar4 != 0) {
      FUN_01311d20();
      plVar4 = local_58;
      if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar4 == (int64_t *)0x0) {
        uVar6 = (**(code **)(*plVar5 + 1000))();
        plVar4 = local_58;
        if (((char)local_50 == '\0') && (local_58 != (int64_t *)0x0)) {
          uVar6 = FUN_00d50b00();
          if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
            uVar6 = FUN_00d50b20();
          }
        }
        if (0x1f < *(int *)((int64_t)plVar4 + 0xc)) {
          FUN_00d242c0(uVar6,0);
        }
        while( true ) {
          if (*(int *)((int64_t)plVar4 + 0xc) < 0x20) break;
          (**(code **)(**(int64_t **)plVar4[2] + 0x408))();
          FUN_00d23620();
        }
        FUN_00e31650();
        FUN_00c94880();
        local_98 = local_58;
        if (((char)local_50 == '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b00();
          if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        uVar2 = FUN_00c938c0();
        local_70 = (void*)CONCAT44(local_70._4_4_,uVar2);
        uVar2 = FUN_00c938a0();
        local_60 = (int64_t *)CONCAT44(local_60._4_4_,uVar2);
        uVar2 = FUN_00c93880();
        local_68 = (int64_t *)CONCAT44(local_68._4_4_,uVar2);
        local_b0 = FUN_00c938f0();
        local_ac = FUN_00c93910();
        local_38 = FUN_00c93930();
        local_34 = (g_028ac87c % 100 >> 0x1f & 100U) + g_028ac87c % 100;
        local_50 = 7;
        local_4c = local_70._0_4_;
        local_48 = local_60._0_4_;
        local_44 = local_68._0_4_;
        local_40 = local_b0;
        local_3c = local_ac;
        local_58 = (int64_t *)&g_025df2e0;
        uVar6 = FUN_00d8cb40(local_ac,&local_58);
        local_90 = local_a8;
        local_88 = 0;
        if (local_a0 == '\0') {
          if (local_a8 != 0) {
            uVar6 = FUN_00d50b00();
          }
        }
        else {
          local_a0 = '\0';
        }
        local_88 = '\x01';
        (**(code **)(*plVar5 + 0x400))(uVar6,&local_90);
        local_68 = local_80;
        if (local_78 == '\0') {
          if (((local_80 != (int64_t *)0x0) && (FUN_00d50b00(), local_78 != '\0')) &&
             (local_80 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_78 = '\0';
        }
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          FUN_00d50b20();
        }
        local_110 = local_68;
        local_108 = '\0';
        uVar2 = FUN_00b33590();
        FUN_00b335d0();
        local_f8 = '\0';
        local_100 = 0;
        FUN_00b82410(uVar2,2,0x40,0);
        local_60 = local_58;
        if ((char)local_50 == '\0') {
          if (local_58 != (int64_t *)0x0) {
            FUN_00d50b00();
            if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        else {
          local_50 = local_50 & 0xffffff00;
        }
        if ((local_f8 != '\0') && (local_100 != 0)) {
          FUN_00d50b20();
        }
        if ((local_108 != '\0') && (local_110 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        puVar3 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar3 = &g_025c8348;
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        *(void*)(puVar3 + 6) = 0;
        (*g_025c8360)();
        local_70 = puVar3;
        FUN_00b335d0();
        FUN_011edd50();
        FUN_011edcc0();
        FUN_00b86c20();
        FUN_011edd90();
        plVar5 = (int64_t *)FUN_00e8fc40();
        FUN_00d4ff40();
        *plVar5 = (int64_t)&g_025de318;
        plVar5[2] = 0;
        plVar5[3] = 0;
        plVar5[4] = 0;
        plVar5[5] = 0;
        *(void*)((int64_t)plVar5 + 0x2a) = 0;
        *(void*)((int64_t)plVar5 + 0x32) = 0;
        plVar5[8] = 0;
        plVar5[9] = 0;
        plVar5[10] = 0;
        (*g_025de330)();
        local_f0 = local_60;
        local_e8 = '\0';
        (**(code **)(*plVar5 + 0x368))();
        if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        local_e0 = local_70;
        local_d8 = '\0';
        FUN_013fba30();
        if ((local_d8 != '\0') && (local_e0 != (void*)0x0)) {
          FUN_00d50b20();
        }
        FUN_013fb690();
        FUN_00b335d0();
        FUN_013fbb90();
        local_c8 = '\0';
        local_d0 = plVar5;
        FUN_01311cc0();
        if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        (**(code **)(*plVar5 + 0x398))();
        FUN_00d50b20();
        FUN_00d50b20();
        if (local_60 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if (local_68 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if (local_98 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        goto LAB_012d943e;
      }
    }
    plVar5 = (int64_t *)*arg1;
    FUN_0119a990();
    if (plVar5 == (int64_t *)0x0) {
LAB_012d8e6c:
      plVar5 = &g_02802688;
    }
    else {
      (**(code **)(*plVar5 + 0x360))();
      cVar1 = FUN_00e85ea0();
      plVar5 = arg1;
      if (cVar1 == '\0') goto LAB_012d8e6c;
    }
    if (*plVar5 != 0) {
      FUN_01311d20();
      plVar5 = local_58;
      if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar5 != (int64_t *)0x0) {
        FUN_01311d20();
        FUN_013fb6a0();
        if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        local_b8 = '\0';
        local_c0 = 0;
        FUN_01311cc0();
        if ((local_b8 != '\0') && (local_c0 != 0)) {
          FUN_00d50b20();
        }
      }
    }
  }
LAB_012d943e:
  FUN_00d50b20();
LAB_012d9446:
  local_58 = (int64_t *)*arg1;
  local_50 = local_50 & 0xffffff00;
  FUN_00e323f0();
  if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}

