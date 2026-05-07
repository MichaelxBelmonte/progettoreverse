// Function: FUN_00cd3610
// Address: 00cd3610
// Size: 771 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00cd3610(int *param_1,uint64_t param_2)

{
  int iVar1;
  int64_t lVar2;
  uint64_t uVar3;
  bool bVar4;
  int iVar5;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t lVar6;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_48;
  char local_40;
  
  if (*(int64_t *)(arg1 + 0x40) == 0) {
    FUN_00ccd040(param_1,param_2);
    return;
  }
  FUN_00cd4fc0();
  lVar2 = *(int64_t *)(*(int64_t *)(arg1 + 0x38) + 0x40);
  iVar1 = *param_1;
  uVar3 = *(uint64_t *)
           (*(int64_t *)(*(int64_t *)(lVar2 + 0x20) + 0x10) + 8 +
           (uint64_t)(*(int *)(*(int64_t *)(arg1 + 0x38) + 0x48) - 1) * 0x23c);
  if (uVar3 < (uint64_t)((int64_t)iVar1 + *(int64_t *)(arg1 + 0x48))) {
    *param_1 = (int)uVar3 - (int)*(int64_t *)(arg1 + 0x48);
  }
  lVar6 = local_48;
  if (*(char *)(arg1 + 0x50) == '\0') {
    (**(code **)(**(int64_t **)(arg1 + 0x40) + 0x380))(param_1,param_2);
    if (local_48 != 0) {
      bVar4 = true;
      if (local_40 == '\0') {
        FUN_00d50b00();
      }
      goto LAB_00cd380c;
    }
    bVar4 = false;
    iVar5 = *param_1;
    *(int64_t *)(arg1 + 0x48) = *(int64_t *)(arg1 + 0x48) + (int64_t)iVar5;
LAB_00cd384b:
    if ((0 < iVar5) && (iVar5 == iVar1)) {
      *(void*)(this_ptr + 1) = 0;
      lVar6 = 0;
      goto LAB_00cd38b2;
    }
    if (iVar5 < 0) {
      *param_1 = 0;
    }
    lVar2 = g_027816e8;
    if (g_027816e8 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc7970();
    if (local_48 == 0) {
      local_48 = 0;
    }
    else if (local_40 == '\0') {
      FUN_00d50b00();
      bVar4 = true;
    }
    else {
      bVar4 = true;
    }
    lVar6 = local_48;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    (**(code **)(**(int64_t **)(lVar2 + 0x30) + 0x368))();
    (**(code **)(**(int64_t **)(arg1 + 0x40) + 0x390))();
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(**(int64_t **)(arg1 + 0x40) + 0x3a0))();
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(**(int64_t **)(arg1 + 0x40) + 0x380))(param_1,param_2);
    if (local_48 == 0) {
      bVar4 = false;
      lVar6 = 0;
    }
    else {
      bVar4 = true;
      if (local_40 == '\0') {
        FUN_00d50b00();
      }
    }
    (**(code **)(**(int64_t **)(arg1 + 0x40) + 0x3a0))();
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(**(int64_t **)(*(int64_t *)(*(int64_t *)(arg1 + 0x38) + 0x40) + 0x30) +
                0x378))();
LAB_00cd380c:
    iVar5 = *param_1;
    *(int64_t *)(arg1 + 0x48) = *(int64_t *)(arg1 + 0x48) + (int64_t)iVar5;
    if (lVar6 == 0) goto LAB_00cd384b;
  }
  *(void*)(this_ptr + 1) = 0;
  if (!bVar4) {
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      FUN_00d50b00();
    }
  }
LAB_00cd38b2:
  *this_ptr = lVar6;
  *(void*)(this_ptr + 1) = 1;
  return;
}

