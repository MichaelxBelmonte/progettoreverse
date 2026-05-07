// Function: FUN_01e9de00
// Address: 01e9de00
// Size: 704 bytes
// Class: GNMultipleValue

void FUN_01e9de00(void)

{
  uint32_t uVar1;
  int64_t lVar2;
  int64_t arg1;
  void*this_ptr;
  int64_t *plVar3;
  uint32_t uVar4;
  int64_t local_90;
  char local_88;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  int64_t *local_40;
  char local_38;
  
  if (*(int64_t *)(arg1 + 0x28) != 0) goto LAB_01e9dfbe;
  FUN_01cb4790();
  local_48 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01e9de3d;
    }
    if (*(int64_t *)(arg1 + 0x20) != 0) goto LAB_01e9dfbe;
LAB_01e9def8:
    lVar2 = *(int64_t *)(arg1 + 0x10);
    if (lVar2 == 0) {
      local_58 = 0;
    }
    else {
      FUN_00d50b00();
      local_58 = *(int64_t *)(arg1 + 0x20);
    }
    uVar1 = *(void*)(arg1 + 0x1c);
    uVar4 = *(void*)(arg1 + 0x18);
    local_50 = 0;
    if (local_58 != 0) {
      FUN_00d50b00();
    }
    local_50 = '\x01';
    FUN_01d43f00(uVar4,uVar1);
    plVar3 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (plVar3 == (int64_t *)0x0) {
      (**(code **)(*local_48 + 0x370))();
      FUN_01d44d80(*(void*)(arg1 + 0x18));
      if (local_40 != (int64_t *)0x0) {
        plVar3 = local_40;
        if (local_38 == '\0') {
          FUN_00d50b00();
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
    }
    *(int64_t **)(arg1 + 0x28) = plVar3;
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (local_48 == (int64_t *)0x0) goto LAB_01e9dfbe;
  }
  else {
LAB_01e9de3d:
    lVar2 = *(int64_t *)(arg1 + 0x20);
    if (lVar2 == 0) goto LAB_01e9def8;
    if (local_48 == (int64_t *)0x0) goto LAB_01e9dfbe;
    local_60 = 0;
    uVar4 = FUN_00d50b00();
    local_60 = '\x01';
    local_68 = lVar2;
    (**(code **)(*local_48 + 0x388))(uVar4,&local_68);
    plVar3 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    *(int64_t **)(arg1 + 0x28) = plVar3;
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
LAB_01e9dfbe:
  *this_ptr = *(void*)(arg1 + 0x28);
  *(void*)(this_ptr + 1) = 0;
  return;
}

