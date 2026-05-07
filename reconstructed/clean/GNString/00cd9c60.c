// Function: FUN_00cd9c60
// Address: 00cd9c60
// Size: 625 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00cd9c60(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  void*puVar5;
  int64_t arg1;
  void*this_ptr;
  void*local_70;
  char local_68;
  void*local_40;
  
  (**(code **)(**(int64_t **)(*(int64_t *)(arg1 + 0x40) + 0x30) + 0x368))();
  if (*(int64_t *)(*(int64_t *)(arg1 + 0x40) + 0x38) == 0) {
LAB_00cd9d5f:
    bVar2 = false;
    puVar5 = (void*)0x0;
  }
  else {
    FUN_00cd4fc0();
    iVar4 = *(int *)(arg1 + 0x48);
    if (iVar4 == 0) {
LAB_00cd9d6a:
      local_40 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *local_40 = &g_025683c0;
      (*g_025683d8)();
      FUN_00c92170();
      bVar3 = true;
    }
    else {
      lVar1 = *(int64_t *)(arg1 + 0x40);
      if (lVar1 == 0) {
LAB_00cd9cd0:
        bVar2 = true;
        if (*(int64_t *)
             (*(int64_t *)(*(int64_t *)(lVar1 + 0x20) + 0x10) + 8 + (uint64_t)(iVar4 - 1) * 0x23c
             ) < 1) goto LAB_00cd9ced;
      }
      else {
        FUN_00d50b00();
        iVar4 = *(int *)(arg1 + 0x48);
        if (iVar4 != 0) goto LAB_00cd9cd0;
LAB_00cd9ced:
        bVar2 = false;
      }
      FUN_00d50b20();
      if (!bVar2) goto LAB_00cd9d5f;
      iVar4 = *(int *)(arg1 + 0x48);
      if (iVar4 == 0) goto LAB_00cd9d6a;
      lVar1 = *(int64_t *)(arg1 + 0x40);
      if (lVar1 != 0) {
        FUN_00d50b00();
        iVar4 = *(int *)(arg1 + 0x48);
      }
      FUN_00cd94d0(iVar4,iVar4,param_3,param_4,1);
      local_40 = local_70;
      if (local_70 == (void*)0x0) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
        if (local_68 == '\0') {
          FUN_00d50b00();
        }
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    puVar5 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    puVar5[2] = 0;
    *(void*)((int64_t)puVar5 + 0x1c) = 0;
    *(void*)((int64_t)puVar5 + 0x24) = 0;
    *(void*)((int64_t)puVar5 + 0x2c) = 0;
    *puVar5 = &g_0256e828;
    *(void*)(puVar5 + 6) = 0;
    puVar5[7] = 0;
    puVar5[8] = 0;
    *(void*)((int64_t)puVar5 + 0x41) = 0;
    *(void*)((int64_t)puVar5 + 0x49) = 0;
    FUN_00d500e0();
    lVar1 = puVar5[7];
    if (lVar1 != arg1) {
      FUN_00d50b00();
      puVar5[7] = arg1;
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    *(void*)(puVar5 + 6) = 1;
    FUN_00cccf30();
    bVar2 = true;
    if ((bVar3) && (local_40 != (void*)0x0)) {
      FUN_00d50b20();
      bVar2 = true;
    }
  }
  (**(code **)(**(int64_t **)(*(int64_t *)(arg1 + 0x40) + 0x30) + 0x378))();
  *(void*)(this_ptr + 1) = 0;
  if (!bVar2 && puVar5 != (void*)0x0) {
    FUN_00d50b00();
  }
  *this_ptr = puVar5;
  *(void*)(this_ptr + 1) = 1;
  return;
}

