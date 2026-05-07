// Function: FUN_0192cfb0
// Address: 0192cfb0
// Size: 1479 bytes
// Class: MUDetectionEditorView
// === MUDetectionEditorView properties ===
//   MUDetectionEditorRenderStyle _renderStyle


void FUN_0192cfb0(uint32_t param_1,uint32_t param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  void* in_ECX;
  int64_t lVar5;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t *plVar6;
  uint32_t uVar7;
  uint32_t uVar8;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  int64_t *local_40;
  char local_38;
  
  FUN_01a58dc0();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_40 == (int64_t *)0x0) {
LAB_0192d4e9:
    FUN_01a58d00(param_1);
  }
  else {
    FUN_01a58dc0();
    (**(code **)(&UNK_00001668 + *local_58))();
    pvVar4 = _pthread_getspecific(in_ECX);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar3 = FUN_01326de0();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01a58dc0();
    FUN_0199f460();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01a58dc0();
    (**(code **)(*local_58 + 0xad8))(param_1);
    if (local_40 == (int64_t *)0x0) {
      bVar1 = true;
      plVar6 = (int64_t *)0x0;
    }
    else {
      plVar6 = local_40;
      if (local_38 == '\0') {
        FUN_00d50b00();
        bVar1 = false;
      }
      else {
        local_38 = '\0';
        bVar1 = false;
      }
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (!bVar1) {
      FUN_01a58dc0();
      FUN_0199f460();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01a58dc0();
      (**(code **)(&UNK_000017f0 + *local_40))(param_1);
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      *(void*)(this_ptr + 1) = 0;
      lVar5 = *(int64_t *)(arg1 + 0x40);
      if (lVar5 != 0) {
        FUN_00d50b00();
      }
      *this_ptr = lVar5;
      *(void*)(this_ptr + 1) = 1;
      if (plVar6 == (int64_t *)0x0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
    FUN_01a58dc0();
    (**(code **)(*local_58 + 0xab8))(param_1);
    local_48 = local_40;
    if (local_40 == (int64_t *)0x0) {
      bVar1 = true;
      local_48 = (int64_t *)0x0;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar1 = false;
    }
    else {
      local_38 = '\0';
      bVar1 = false;
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (!bVar1) {
      FUN_01a58dc0();
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      uVar7 = FUN_01e437f0(param_1);
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      uVar8 = FUN_019764d0();
      cVar2 = FUN_00d05410(uVar7,uVar8,param_2);
      if (cVar2 != '\0') {
        FUN_01a58dc0();
        FUN_0199f460();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01a58dc0();
        (**(code **)(&UNK_000017f0 + *local_40))(param_1);
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        *(void*)(this_ptr + 1) = 0;
        lVar5 = *(int64_t *)(arg1 + 0x40);
        if (lVar5 != 0) {
          FUN_00d50b00();
        }
        *this_ptr = lVar5;
        *(void*)(this_ptr + 1) = 1;
        if (local_48 == (int64_t *)0x0) {
          return;
        }
        FUN_00d50b20();
        return;
      }
      if ((iVar3 == 2) || (iVar3 == 4)) {
        *(void*)(this_ptr + 1) = 0;
        lVar5 = *(int64_t *)(arg1 + 0x40);
        if (lVar5 != 0) {
          FUN_00d50b00();
        }
        *this_ptr = lVar5;
        *(void*)(this_ptr + 1) = 1;
        if (local_48 == (int64_t *)0x0) {
          return;
        }
        FUN_00d50b20();
        return;
      }
      *(void*)(this_ptr + 1) = 0;
      lVar5 = *(int64_t *)(arg1 + 0x38);
      if (lVar5 != 0) {
        FUN_00d50b00();
      }
      *this_ptr = lVar5;
      *(void*)(this_ptr + 1) = 1;
      if (local_48 == (int64_t *)0x0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
    FUN_01a58dc0();
    (**(code **)(&UNK_000016c8 + *local_58))(param_1);
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40 == (int64_t *)0x0) {
      FUN_01a58dc0();
      cVar2 = FUN_01944ee0();
      if (cVar2 == '\0') goto LAB_0192d4e9;
      if ((iVar3 == 2) || (iVar3 == 4)) {
        *(void*)(this_ptr + 1) = 0;
        lVar5 = *(int64_t *)(arg1 + 0x40);
        if (lVar5 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        *(void*)(this_ptr + 1) = 0;
        lVar5 = *(int64_t *)(arg1 + 0x38);
        if (lVar5 != 0) {
          FUN_00d50b00();
        }
      }
    }
    else {
      FUN_01a58dc0();
      (**(code **)(&UNK_000017f0 + *local_40))(param_1);
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((iVar3 == 2) || (iVar3 == 4)) {
        *(void*)(this_ptr + 1) = 0;
        lVar5 = *(int64_t *)(arg1 + 0x40);
        if (lVar5 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        *(void*)(this_ptr + 1) = 0;
        lVar5 = *(int64_t *)(arg1 + 0x38);
        if (lVar5 != 0) {
          FUN_00d50b00();
        }
      }
    }
    *this_ptr = lVar5;
    *(void*)(this_ptr + 1) = 1;
  }
  return;
}

