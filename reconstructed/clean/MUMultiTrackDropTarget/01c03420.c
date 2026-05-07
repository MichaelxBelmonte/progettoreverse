// Function: FUN_01c03420
// Address: 01c03420
// Size: 558 bytes
// Class: MUMultiTrackDropTarget

int64_t * FUN_01c03420(void)

{
  int64_t lVar1;
  char *pcVar2;
  uint64_t uVar3;
  int64_t *plVar4;
  int64_t *this_ptr;
  int64_t lVar5;
  int64_t lVar6;
  int64_t local_88;
  int64_t local_80 [2];
  uint64_t local_70;
  uint32_t local_68;
  int64_t local_60;
  char local_58;
  uint64_t local_50;
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  FUN_00ca1380();
  plVar4 = &local_48;
  if ((char)local_80[0] != '\0') {
    plVar4 = local_80;
  }
  local_48 = CONCAT71(local_48._1_7_,(char)local_80[0]);
  *(void*)plVar4 = 0;
  if (((char)local_80[0] != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((char)local_48 == '\0') {
    if (local_88 == 0) goto LAB_01c035fd;
    FUN_00d50b00();
LAB_01c03497:
    local_80[0]._0_1_ = 0;
    local_68 = 0;
    local_70 = 0;
    if (*(int *)(local_88 + 0xc) < 1) {
      local_50 = 0;
      lVar6 = 0;
    }
    else {
      lVar5 = 0;
      lVar6 = 0;
      local_50 = 0;
      do {
        lVar1 = *(int64_t *)(*(int64_t *)(local_88 + 0x10) + lVar5 * 8);
        if (lVar6 == 0) {
          FUN_00ca1380();
          local_38[0] = local_40[0];
          pcVar2 = local_40;
          if (local_40[0] == '\0') {
            pcVar2 = local_38;
          }
          *pcVar2 = '\0';
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          uVar3 = FUN_00d894f0();
          lVar6 = local_60;
          if (local_60 == 0) {
            lVar6 = 0;
          }
          else if (local_58 == '\0') {
            uVar3 = FUN_00d50b00();
            local_50 = CONCAT71((int7)((uint64_t)uVar3 >> 8),1);
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_58 = '\0';
            local_50 = CONCAT71((int7)((uint64_t)uVar3 >> 8),1);
          }
          if (local_38[0] != '\0') {
            FUN_00d50b20();
          }
        }
        lVar1 = *(int64_t *)(lVar1 + 0x20);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        local_40[0] = '\0';
        local_48 = lVar1;
        FUN_00d21140();
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        lVar5 = lVar5 + 1;
        local_70 = CONCAT44(local_70._4_4_,(int)lVar5);
      } while ((int)lVar5 < *(int *)(local_88 + 0xc));
    }
    FUN_01c051e0();
    FUN_00d50b20();
    *(void*)(this_ptr + 1) = 0;
    if ((char)local_50 != '\0') goto LAB_01c0363e;
    if (lVar6 != 0) {
      FUN_00d50b00();
      goto LAB_01c0363e;
    }
  }
  else {
    if (local_88 != 0) goto LAB_01c03497;
LAB_01c035fd:
    *(void*)(this_ptr + 1) = 0;
  }
  lVar6 = 0;
LAB_01c0363e:
  *this_ptr = lVar6;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

