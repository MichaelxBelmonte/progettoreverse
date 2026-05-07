// Function: FUN_00cd91f0
// Address: 00cd91f0
// Size: 531 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00cd91f0(void)

{
  int64_t lVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  void*puVar5;
  int64_t arg1;
  void*this_ptr;
  uint32_t uVar6;
  int64_t local_60;
  char local_58;
  
  (**(code **)(**(int64_t **)(*(int64_t *)(arg1 + 0x40) + 0x30) + 0x368))();
  bVar3 = true;
  if (*(int64_t *)(*(int64_t *)(arg1 + 0x40) + 0x38) != 0) {
    FUN_00cd4fc0();
    iVar4 = *(int *)(arg1 + 0x48);
    if (iVar4 != 0) {
      lVar1 = *(int64_t *)(arg1 + 0x40);
      if (lVar1 == 0) {
LAB_00cd9257:
        bVar2 = true;
        if (*(int64_t *)
             (*(int64_t *)(*(int64_t *)(lVar1 + 0x20) + 0x10) + 8 + (uint64_t)(iVar4 - 1) * 0x23c
             ) < 1) goto LAB_00cd9274;
      }
      else {
        FUN_00d50b00();
        iVar4 = *(int *)(arg1 + 0x48);
        if (iVar4 != 0) goto LAB_00cd9257;
LAB_00cd9274:
        bVar2 = false;
      }
      FUN_00d50b20();
      if (bVar2) {
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
        if (*(char *)(*(int64_t *)(arg1 + 0x40) + 0x40) == '\0') {
          uVar6 = FUN_00d50b00();
          FUN_00cd94d0(uVar6,*(void*)(arg1 + 0x48));
          if ((local_58 == '\0') && (local_60 != 0)) {
            FUN_00d50b00();
          }
          FUN_00cccfe0();
          if (local_60 != 0) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        else {
          lVar1 = *(int64_t *)(*(int64_t *)(arg1 + 0x40) + 0x38);
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          FUN_00cd3420();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
        }
        bVar3 = false;
        goto LAB_00cd934d;
      }
    }
  }
  puVar5 = (void*)0x0;
LAB_00cd934d:
  (**(code **)(**(int64_t **)(*(int64_t *)(arg1 + 0x40) + 0x30) + 0x378))();
  *(void*)(this_ptr + 1) = 0;
  if ((bVar3) && (puVar5 != (void*)0x0)) {
    FUN_00d50b00();
  }
  *this_ptr = puVar5;
  *(void*)(this_ptr + 1) = 1;
  return;
}

