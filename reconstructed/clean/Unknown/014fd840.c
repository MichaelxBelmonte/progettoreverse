// Function: FUN_014fd840
// Address: 014fd840
// Size: 613 bytes
// Class: Unknown

uint32_t FUN_014fd840(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t lVar4;
  uint32_t uVar5;
  int *arg1;
  int64_t *this_ptr;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_50;
  char local_48;
  int local_40;
  uint32_t uStack_3c;
  char local_38;
  
  lVar1 = g_027c2140;
  if (g_027c2140 != 0) {
    FUN_00d50b00();
  }
  local_98 = lVar1;
  local_90 = '\x01';
  FUN_00d8ede0();
  local_50 = local_68;
  local_48 = 0;
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  local_48 = '\x01';
  FUN_00d997b0(&local_50,&local_98);
  lVar2 = CONCAT44(uStack_3c,local_40);
  lVar1 = *this_ptr;
  if (lVar1 == lVar2) {
    if (((char)this_ptr[1] != '\0') || (lVar2 == 0)) goto LAB_014fd960;
    if (local_38 == '\0') {
      FUN_00d50b00();
      goto LAB_014fd957;
    }
  }
  else {
    lVar4 = this_ptr[1];
    if (local_38 == '\0') {
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      *this_ptr = lVar2;
      if (((char)lVar4 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
LAB_014fd957:
      *(void*)(this_ptr + 1) = 1;
LAB_014fd960:
      if ((local_38 != '\0') && (CONCAT44(uStack_3c,local_40) != 0)) {
        FUN_00d50b20();
      }
      goto LAB_014fd974;
    }
    *this_ptr = lVar2;
    if (((char)lVar4 != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
  }
  *(void*)(this_ptr + 1) = 1;
  local_38 = '\0';
LAB_014fd974:
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  local_88 = *this_ptr;
  local_80 = '\0';
  FUN_00ddb860();
  plVar3 = (int64_t *)CONCAT44(uStack_3c,local_40);
  if (local_38 == '\0') {
    if (((plVar3 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (CONCAT44(uStack_3c,local_40) != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_027c2140;
  if (g_027c2140 != 0) {
    FUN_00d50b00();
  }
  local_78 = lVar1;
  local_70 = '\x01';
  (**(code **)(*plVar3 + 0x3c8))();
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  uVar5 = (**(code **)(*plVar3 + 0x410))();
  if (((char)uVar5 != '\0') && (arg1 != (int *)0x0)) {
    *arg1 = local_40 + 1;
  }
  FUN_00d50b20();
  return uVar5;
}

