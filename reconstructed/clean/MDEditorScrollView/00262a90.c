// Function: FUN_00262a90
// Address: 00262a90
// Size: 688 bytes
// Class: MDEditorScrollView
// === MDEditorScrollView properties ===
//   MUScaleRulerViewDisplayMode _scaleRulerViewDisplayMode


uint64_t FUN_00262a90(uint64_t param_1,char param_2)

{
  int64_t *plVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  uint64_t uVar5;
  int64_t this_ptr;
  bool bVar6;
  uint64_t local_58;
  uint64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (*(int64_t **)(this_ptr + 0x90) == (int64_t *)0x0) {
    uVar5 = 0;
  }
  else {
    (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
    pcVar4 = local_38;
    if (local_40[0] != '\0') {
      pcVar4 = local_40;
    }
    local_38[0] = local_40[0];
    *pcVar4 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (local_48 == 0) {
      uVar5 = *(uint64_t *)(this_ptr + 0x90);
      if (*(uint64_t *)(this_ptr + 0x90) != 0) goto LAB_00262b17;
      uVar5 = 0;
    }
    else {
      uVar5 = local_48;
      if (local_38[0] == '\0') {
LAB_00262b17:
        FUN_00d50b00();
      }
    }
  }
  cVar2 = FUN_00262e30();
  if (cVar2 == '\0') {
    if (*(int64_t **)(this_ptr + 0x90) == (int64_t *)0x0) {
      bVar6 = false;
    }
    else {
      (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
      bVar6 = local_48 != 0;
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    if (uVar5 != 0) {
      FUN_00d50b20();
    }
    if (bVar6) goto LAB_00262bab;
  }
  else {
    if (uVar5 != 0) {
      FUN_00d50b20();
    }
LAB_00262bab:
    if (*(int64_t **)(this_ptr + 0x90) == (int64_t *)0x0) {
      local_58 = 0;
    }
    else {
      (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
      pcVar4 = local_38;
      if (local_40[0] != '\0') {
        pcVar4 = local_40;
      }
      local_38[0] = local_40[0];
      *pcVar4 = '\0';
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 == 0) {
        local_58 = *(uint64_t *)(this_ptr + 0x90);
        if (*(uint64_t *)(this_ptr + 0x90) != 0) goto LAB_00262c17;
        local_58 = 0;
      }
      else {
        local_58 = local_48;
        if (local_38[0] == '\0') {
LAB_00262c17:
          FUN_00d50b00();
        }
      }
    }
    uVar3 = FUN_01b71a90();
    uVar5 = (uint64_t)uVar3;
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    if ((char)uVar3 != '\0') {
      if ((param_2 == '\0') || (*(int64_t *)(this_ptr + 0xa0) != 0)) {
        plVar1 = *(int64_t **)(this_ptr + 0xa0);
      }
      else {
        if (*(int64_t *)(this_ptr + 0xd8) != 0) {
          FUN_00637870();
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          uVar5 = local_48;
          if (local_48 != 0) {
            FUN_00637870();
            FUN_006e64a0();
            if ((local_40[0] != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        FUN_00249a80();
        plVar1 = *(int64_t **)(this_ptr + 0xa0);
      }
      if (plVar1 == (int64_t *)0x0) {
        uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
      }
      else {
        uVar3 = (**(code **)(*plVar1 + 0xb48))();
        uVar5 = (uint64_t)uVar3;
      }
      goto LAB_00262ca5;
    }
  }
  uVar5 = 0;
LAB_00262ca5:
  return uVar5 & 0xffffffff;
}

