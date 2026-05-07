// Function: FUN_00dadeb0
// Address: 00dadeb0
// Size: 1157 bytes
// Class: GNForeignThreadPool
// === GNForeignThreadPool properties ===
//   GNThreadPriorityGroup _priority
//                   _threadPool
//                   _allocCount
//                   _allocLock
//                   _allocThread
//                   _indexHint


uint64_t FUN_00dadeb0(void*param_1)

{
  int64_t *plVar1;
  bool bVar2;
  bool bVar3;
  int64_t lVar4;
  char cVar5;
  uint64_t uVar6;
  int64_t this_ptr;
  int64_t *plVar7;
  int iVar8;
  int64_t lVar9;
  int64_t local_d8;
  char local_d0;
  int64_t *local_c8;
  char local_c0;
  int64_t *local_b8;
  char local_b0;
  int local_a4;
  int64_t local_a0;
  char local_98;
  int local_4c;
  int64_t *local_40;
  char local_38;
  
  cVar5 = FUN_00dab660();
  *(char *)(this_ptr + 0x48) = cVar5;
  if (cVar5 == '\0') {
LAB_00dae34b:
    uVar6 = 0;
  }
  else {
    FUN_00d21370();
    if (0 < local_4c) {
      iVar8 = 0;
      do {
        cVar5 = FUN_00dab660();
        *(char *)(this_ptr + 0x48) = cVar5;
        if (cVar5 == '\0') goto LAB_00dae34b;
        param_1 = *(void**)(*(int64_t *)(this_ptr + 0x30) + 0x10);
        lVar9 = *(int64_t *)(param_1 + (int64_t)local_a4 * 8 + -8);
        if (lVar9 != 0) {
          FUN_00d50b00();
        }
        plVar1 = *(int64_t **)(this_ptr + 0x60);
        plVar7 = local_40;
        if (plVar1 == (int64_t *)0x0) {
          FUN_00c7e7b0();
          lVar4 = local_a0;
          if (local_98 == '\0') {
            if (local_a0 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_98 = '\0';
          }
          FUN_00c82360();
          if (local_38 == '\0') {
            if (local_40 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          if ((local_98 != '\0') && (local_a0 != 0)) {
            FUN_00d50b20();
          }
          if (local_40 != (int64_t *)0x0) {
            FUN_00c811e0();
            if (local_40 == (int64_t *)0x0) {
              plVar7 = (int64_t *)0x0;
              bVar3 = false;
            }
            else {
              bVar3 = true;
              if (local_38 == '\0') {
                FUN_00d50b00();
              }
            }
            (**(code **)(*plVar7 + 0x20))();
            FUN_00d50b20();
            goto LAB_00dae156;
          }
          bVar3 = false;
          plVar7 = (int64_t *)0x0;
          bVar2 = false;
        }
        else {
          local_d0 = '\0';
          local_d8 = lVar9;
          FUN_00d50b00();
          param_1 = &stack0xffffffffffffff70;
          (**(code **)(*plVar1 + 0x18))(param_1,&local_d8);
          if (local_40 == (int64_t *)0x0) {
            plVar7 = (int64_t *)0x0;
            bVar3 = false;
          }
          else if (local_38 == '\0') {
            FUN_00d50b00();
            bVar3 = true;
          }
          else {
            local_38 = '\0';
            bVar3 = true;
          }
          if (this_ptr != 0) {
            FUN_00d50b20();
          }
          if ((local_d0 != '\0') && (local_d8 != 0)) {
            FUN_00d50b20();
          }
LAB_00dae156:
          local_c0 = '\0';
          local_c8 = plVar7;
          FUN_00d21140();
          bVar2 = true;
          if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        if (lVar9 != 0) {
          FUN_00d50b20();
        }
        if ((bVar3) && (plVar7 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (!bVar2) goto LAB_00dae34b;
        iVar8 = iVar8 + 1;
      } while (iVar8 < local_4c);
    }
    uVar6 = CONCAT71((int7)((uint64_t)param_1 >> 8),1);
    if (0 < local_4c) {
      lVar9 = 0;
      do {
        plVar1 = *(int64_t **)(*(int64_t *)(*(int64_t *)(this_ptr + 0x28) + 0x10) + lVar9 * 8);
        if (plVar1 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        plVar7 = *(int64_t **)(this_ptr + 0x60);
        if (plVar7 == (int64_t *)0x0) {
          FUN_00d50b00();
          (**(code **)(*plVar1 + 0x118))();
          if (this_ptr != 0) {
            FUN_00d50b20();
          }
        }
        else {
          local_b0 = '\0';
          local_b8 = plVar1;
          FUN_00d50b00();
          (**(code **)(*plVar7 + 0x20))();
          if (this_ptr != 0) {
            FUN_00d50b20();
          }
          if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        if (*(char *)(this_ptr + 0x48) == '\0') {
          if (plVar1 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          goto LAB_00dae34b;
        }
        FUN_00d4efa0();
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
            goto LAB_00dae320;
          }
        }
        else if (local_40 != (int64_t *)0x0) {
LAB_00dae320:
          FUN_00d50b20();
        }
        if (plVar1 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < local_4c);
      uVar6 = CONCAT71((int7)(uVar6 >> 8),1);
    }
  }
  return uVar6 & 0xffffffff;
}

