// Function: FUN_01c21130
// Address: 01c21130
// Size: 514 bytes
// Class: Unknown

void FUN_01c21130(void)

{
  int iVar1;
  char *pcVar2;
  int64_t *this_ptr;
  int64_t local_98;
  char local_90;
  int64_t *local_88;
  char local_80 [8];
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  char local_38 [8];
  
  if (this_ptr[0x31] != 0) {
    local_70 = '\0';
    local_78 = 0;
    FUN_01ceb930();
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    local_60 = '\0';
    local_68 = 0;
    FUN_01cebab0();
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  if (this_ptr[0x30] != 0) {
    local_50 = '\0';
    local_58 = 0;
    FUN_01ddf190();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    local_40 = '\0';
    local_48 = 0;
    FUN_01ddf2f0();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  while( true ) {
    (**(code **)(*this_ptr + 0x4a0))();
    iVar1 = *(int *)((int64_t)local_88 + 0xc);
    if ((local_80[0] != '\0') && (local_88 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (iVar1 == 0) break;
    (**(code **)(*this_ptr + 0x4a0))();
    FUN_00d23340();
    local_38[0] = local_80[0];
    pcVar2 = local_80;
    if (local_80[0] == '\0') {
      pcVar2 = local_38;
    }
    *pcVar2 = '\0';
    if ((local_80[0] != '\0') && (local_88 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] == '\0') && (local_88 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*local_88 + 0x478))();
    FUN_00d50130();
    FUN_00d50b20();
  }
  if (this_ptr[0x31] != 0) {
    this_ptr[0x31] = 0;
    FUN_00d50b20();
  }
  if (this_ptr[0x30] != 0) {
    this_ptr[0x30] = 0;
    FUN_00d50b20();
  }
  return;
}

