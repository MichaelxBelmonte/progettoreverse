// Function: FUN_00c29780
// Address: 00c29780
// Size: 629 bytes
// Class: GNOverloudConvolver

void FUN_00c29780(void)

{
  int *piVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int unaff_ESI;
  int64_t *this_ptr;
  int64_t local_f8;
  char local_f0;
  int64_t local_a0;
  int64_t local_98;
  int64_t local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  
  (**(code **)(*this_ptr + 0x5d0))();
  piVar1 = (int *)(*(int64_t *)
                    (*(int64_t *)(*(int64_t *)(local_f8 + 200) + 0x10) + (int64_t)unaff_ESI * 8)
                  + 0x2c);
  *piVar1 = *piVar1 + 1;
  if (local_f0 != '\0') {
    FUN_00d50b20();
  }
  lVar2 = g_0276ca98;
  if (g_0276ca98 != 0) {
    FUN_00d50b00();
  }
  lVar4 = g_0276cac8;
  if (g_0276cac8 != 0) {
    FUN_00d50b00();
  }
  lVar3 = g_0276caa0;
  if (g_0276caa0 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*this_ptr + 0x5d0))();
  local_a0 = lVar4;
  local_98 = lVar3;
  local_90 = local_88;
  FUN_002d73e0(&local_98,&local_a0,&local_90,4);
  FUN_0036bfe0();
  lVar5 = local_58;
  if (local_50 == '\0') {
    if (((local_58 != 0) && (FUN_00d50b00(), local_50 != '\0')) && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_50 = '\0';
  }
  FUN_002d10d0();
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  local_78 = g_0276caa8;
  if (g_0276caa8 != 0) {
    FUN_00d50b00();
  }
  local_70 = '\x01';
  FUN_00d50b00();
  local_68 = lVar5;
  local_60 = '\0';
  FUN_00d40470(&local_68,&stack0xffffffffffffffb8,3,3);
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  return;
}

