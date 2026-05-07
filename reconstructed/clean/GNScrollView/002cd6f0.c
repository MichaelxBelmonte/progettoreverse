// Function: FUN_002cd6f0
// Address: 002cd6f0
// Size: 792 bytes
// Class: GNScrollView
// === GNScrollView properties ===
//   GNBorderStyle   _borderStyle
//   GNRulerHeaderLocation _rulerHeaderLocation


uint64_t FUN_002cd6f0(uint64_t param_1,char param_2)

{
  int iVar1;
  void*puVar2;
  void *pvVar3;
  int64_t lVar4;
  void*puVar5;
  int64_t this_ptr;
  uint64_t unaff_R12;
  uint64_t uVar6;
  int64_t *plVar7;
  int64_t local_88;
  char local_80;
  int64_t local_40;
  char local_38;
  
  if (*(int64_t **)(this_ptr + 0xf8) == (int64_t *)0x0) {
    uVar6 = 0;
    goto LAB_002cda08;
  }
  (**(code **)(**(int64_t **)(this_ptr + 0xf8) + 0x3f8))();
  iVar1 = *(int *)(local_88 + 0xc);
  uVar6 = CONCAT71((int7)((uint64_t)unaff_R12 >> 8),iVar1 != 0);
  if (local_80 != '\0') {
    FUN_00d50b20();
  }
  if ((param_2 == '\0') || (iVar1 == 0)) goto LAB_002cda08;
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar5 = &g_02572358;
  *puVar2 = &g_02572358;
  (*g_02572370)();
  FUN_002cd3f0();
  if (local_80 == '\0') {
    if (local_88 != 0) {
      FUN_00d50b00();
      goto LAB_002cd7af;
    }
  }
  else if (local_88 != 0) {
LAB_002cd7af:
    if (0 < *(int *)(local_88 + 0xc)) {
      uVar6 = 0;
      do {
        lVar4 = *(int64_t *)(*(int64_t *)(local_88 + 0x10) + uVar6 * 8);
        if (*(int64_t *)(lVar4 + 0x10) == 0) {
          if (*(int64_t *)(lVar4 + 0x18) == 0) {
            pvVar3 = _pthread_getspecific((void*)puVar5);
            plVar7 = (int64_t *)0x0;
            if (pvVar3 != (void *)0x0) {
              plVar7 = *(int64_t **)(lVar4 + 0x10);
              lVar4 = FUN_00e8b990();
              if (lVar4 != 0) {
                plVar7 = (int64_t *)plVar7[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
              }
            }
            (**(code **)(*plVar7 + 0x478))();
          }
          else {
            FUN_00b88600();
          }
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          FUN_00d21140();
          if (local_40 != 0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          FUN_00d50b00();
          FUN_00d50b20();
          lVar4 = *(int64_t *)(lVar4 + 0x10);
          if (lVar4 != 0) {
            FUN_00d50b00();
          }
          pvVar3 = _pthread_getspecific((void*)puVar5);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0123abe0();
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          FUN_00d21140();
          if (local_40 != 0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
        }
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < *(int *)(local_88 + 0xc));
    }
    FUN_002d7300();
    FUN_00d50b20();
  }
  FUN_00ceb350();
  uVar6 = CONCAT71((int7)(uVar6 >> 8),1);
  if (puVar2 != (void*)0x0) {
    FUN_00d50b20();
  }
LAB_002cda08:
  return uVar6 & 0xffffffff;
}

