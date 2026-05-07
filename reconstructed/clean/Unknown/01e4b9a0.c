// Function: FUN_01e4b9a0
// Address: 01e4b9a0
// Size: 639 bytes
// Class: Unknown

void FUN_01e4b9a0(void)

{
  uint uVar1;
  char *pcVar2;
  int64_t *plVar3;
  uint32_t unaff_ESI;
  int64_t *this_ptr;
  int64_t *plVar4;
  int64_t *plVar5;
  int64_t lVar6;
  bool bVar7;
  int64_t *local_98;
  char local_90 [8];
  int64_t *local_88;
  char local_80;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  uint32_t local_44;
  char local_38 [8];
  
  uVar1 = *(uint *)(*this_ptr + 0xc);
  if (1 < (int)uVar1) {
    lVar6 = 0;
    plVar5 = (int64_t *)0x0;
    plVar3 = (int64_t *)0x0;
    plVar4 = (int64_t *)**(int64_t **)(*this_ptr + 0x10);
    local_44 = unaff_ESI;
    if (plVar4 != (int64_t *)0x0) goto LAB_01e4ba1e;
    while( true ) {
      plVar4 = *(int64_t **)(*(int64_t *)(*this_ptr + 0x10) + 8 + lVar6 * 8);
      if (plVar3 != plVar4) {
        if (plVar4 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        bVar7 = plVar3 != (int64_t *)0x0;
        plVar3 = plVar4;
        if (bVar7) {
          FUN_00d50b20();
        }
      }
      local_80 = '\0';
      local_88 = plVar3;
      (**(code **)(*plVar5 + 0x8a0))();
      if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_70 = '\0';
      local_78 = plVar5;
      (**(code **)(*plVar3 + 0x8a8))();
      if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((uint64_t)uVar1 - 2 == lVar6) break;
      lVar6 = lVar6 + 1;
      plVar4 = *(int64_t **)(*(int64_t *)(*this_ptr + 0x10) + lVar6 * 8);
      if (plVar5 != plVar4) {
LAB_01e4ba1e:
        if (plVar4 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        bVar7 = plVar5 != (int64_t *)0x0;
        plVar5 = plVar4;
        if (bVar7) {
          FUN_00d50b20();
        }
      }
    }
    if ((1 < (int)uVar1) && ((char)local_44 != '\0')) {
      FUN_00d23340();
      pcVar2 = local_38;
      if (local_90[0] != '\0') {
        pcVar2 = local_90;
      }
      local_38[0] = local_90[0];
      *pcVar2 = '\0';
      if ((local_90[0] != '\0') && (local_98 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_98 == plVar5) {
        if ((local_38[0] != '\0') && (local_98 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        plVar5 = local_98;
        if (local_38[0] == '\0') {
          if (local_98 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          FUN_00d50b20();
        }
        else {
          FUN_00d50b20();
        }
      }
      plVar4 = (int64_t *)**(void**)(*this_ptr + 0x10);
      if (plVar3 != plVar4) {
        if (plVar4 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        FUN_00d50b20();
        plVar3 = plVar4;
      }
      local_60 = '\0';
      local_68 = plVar3;
      (**(code **)(*plVar5 + 0x8a0))();
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_50 = '\0';
      local_58 = plVar5;
      (**(code **)(*plVar3 + 0x8a8))();
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return;
}

