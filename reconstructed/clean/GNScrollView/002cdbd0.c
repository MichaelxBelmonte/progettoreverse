// Function: FUN_002cdbd0
// Address: 002cdbd0
// Size: 1108 bytes
// Class: GNScrollView
// String references:
//   "\r\n%@"
//   "%@"
// === GNScrollView properties ===
//   GNBorderStyle   _borderStyle
//   GNRulerHeaderLocation _rulerHeaderLocation


uint64_t FUN_002cdbd0(uint64_t param_1,char param_2)

{
  int iVar1;
  uint64_t uVar2;
  void* pVar3;
  void*puVar4;
  void *pvVar5;
  int64_t lVar6;
  int64_t *plVar7;
  int64_t this_ptr;
  uint64_t unaff_R12;
  uint64_t uVar8;
  int64_t local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  uint64_t local_58;
  char local_50;
  void* local_40;
  
  uVar2 = local_58;
  if (*(int64_t **)(this_ptr + 0xf8) == (int64_t *)0x0) {
    uVar8 = 0;
    goto LAB_002ce03a;
  }
  (**(code **)(**(int64_t **)(this_ptr + 0xf8) + 0x3f8))();
  iVar1 = *(int *)(local_58 + 0xc);
  uVar8 = CONCAT71((int7)((uint64_t)unaff_R12 >> 8),0 < iVar1);
  if (local_50 != '\0') {
    FUN_00d50b20();
  }
  if ((param_2 == '\0') || (iVar1 < 1)) goto LAB_002ce03a;
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_025795a8;
  (*g_025795c0)();
  FUN_002cd3f0();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      goto LAB_002cdc93;
    }
  }
  else if (local_58 != 0) {
LAB_002cdc93:
    local_50 = '\0';
    local_58 = 0;
    local_40 = 0xffffffff;
    while( true ) {
      pVar3 = local_40 + 1;
      if (*(int *)(uVar2 + 0xc) <= (int)pVar3) break;
      uVar8 = *(uint64_t *)(*(int64_t *)(uVar2 + 0x10) + 8 + (int64_t)(int)local_40 * 8);
      local_58 = uVar8;
      if (pVar3 == 0) {
        if (*(int64_t *)(uVar8 + 0x18) == 0) {
          plVar7 = *(int64_t **)(uVar8 + 0x10);
          pvVar5 = _pthread_getspecific(local_40);
          if (pvVar5 != (void *)0x0) {
            plVar7 = *(int64_t **)(uVar8 + 0x10);
            lVar6 = FUN_00e8b990();
            if (lVar6 != 0) {
              plVar7 = (int64_t *)plVar7[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
            }
          }
          (**(code **)(*plVar7 + 0x478))();
        }
        else {
          FUN_00b88600();
        }
        (**(code **)(*local_68 + 0x470))();
        if (local_78 != 0) {
          FUN_00d50b00();
        }
        FUN_00d94d80();
        if (local_78 != 0) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        local_40 = pVar3;
        if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (*(int64_t *)(uVar8 + 0x18) == 0) {
          plVar7 = *(int64_t **)(uVar8 + 0x10);
          pvVar5 = _pthread_getspecific(local_40);
          if (pvVar5 != (void *)0x0) {
            plVar7 = *(int64_t **)(uVar8 + 0x10);
            lVar6 = FUN_00e8b990();
            if (lVar6 != 0) {
              plVar7 = (int64_t *)plVar7[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
            }
          }
          (**(code **)(*plVar7 + 0x478))();
        }
        else {
          FUN_00b88600();
        }
        (**(code **)(*local_68 + 0x470))();
        if (local_78 != 0) {
          FUN_00d50b00();
        }
        FUN_00d94d80();
        if (local_78 != 0) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        local_40 = pVar3;
        if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_002d7300();
    FUN_00d50b20();
  }
  FUN_00d8c7d0();
  FUN_01ca6970();
  FUN_01ca5d90();
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  FUN_01ca6970();
  lVar6 = g_026fceb8;
  if (g_026fceb8 != 0) {
    FUN_00d50b00();
  }
  FUN_01ca93d0();
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  uVar8 = CONCAT71((int7)(uVar8 >> 8),1);
  if (puVar4 != (void*)0x0) {
    FUN_00d50b20();
  }
LAB_002ce03a:
  return uVar8 & 0xffffffff;
}

