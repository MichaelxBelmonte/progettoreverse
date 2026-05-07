// Function: FUN_00d2ebb0
// Address: 00d2ebb0
// Size: 664 bytes
// Class: Unknown

void FUN_00d2ebb0(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t lVar3;
  char cVar4;
  int64_t *plVar5;
  int64_t **pplVar6;
  int64_t this_ptr;
  int64_t lVar7;
  int64_t *local_90;
  char local_88;
  int64_t local_80;
  uint64_t local_78;
  uint32_t local_70;
  int64_t *local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  int64_t local_40;
  char local_38;
  
  plVar5 = (int64_t *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar5 = (int64_t)&g_02572358;
  (*g_02572370)();
  lVar1 = *(int64_t *)(this_ptr + 0x10);
  if (lVar1 != 0) {
    local_88 = 0;
    local_90 = (int64_t *)0x0;
    local_70 = 0;
    local_78 = 0;
    local_80 = lVar1;
    local_48 = plVar5;
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar7 = 0;
      do {
        plVar5 = *(int64_t **)(*(int64_t *)(lVar1 + 0x10) + lVar7 * 8);
        local_90 = plVar5;
        FUN_00051000();
        pplVar6 = (int64_t **)&g_02802688;
        if (plVar5 != (int64_t *)0x0) {
          (**(code **)(*plVar5 + 0x360))();
          cVar4 = FUN_00e85ea0();
          pplVar6 = &local_90;
          if (cVar4 == '\0') {
            pplVar6 = (int64_t **)&g_02802688;
          }
        }
        plVar2 = *pplVar6;
        if (*(char *)(pplVar6 + 1) == '\0') {
          if (plVar2 == (int64_t *)0x0) goto LAB_00d2ecf0;
          FUN_00d50b00();
LAB_00d2eccd:
          (**(code **)(*plVar2 + 0x3d8))();
          lVar3 = local_40;
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          local_58 = lVar3;
          local_50 = '\0';
          FUN_00d21140();
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          if (lVar3 != 0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        else {
          *(void*)(pplVar6 + 1) = 0;
          if (plVar2 != (int64_t *)0x0) goto LAB_00d2eccd;
LAB_00d2ecf0:
          local_60 = '\0';
          local_68 = plVar5;
          FUN_00d428c0();
          lVar3 = local_40;
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          local_58 = lVar3;
          local_50 = '\0';
          FUN_00d21140();
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          if (lVar3 != 0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        lVar7 = lVar7 + 1;
        local_78 = CONCAT44(local_78._4_4_,(int)lVar7);
      } while ((int)lVar7 < *(int *)(lVar1 + 0xc));
    }
    FUN_00c6f7c0();
    plVar5 = local_48;
  }
  local_88 = '\0';
  local_90 = plVar5;
  FUN_00d243f0();
  if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar5 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

