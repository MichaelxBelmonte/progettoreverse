// Function: FUN_00c26b60
// Address: 00c26b60
// Size: 998 bytes
// Class: GNOverloudConvolver
// String references:
//   "ir%I_%@"

void FUN_00c26b60(int64_t *param_1,void*param_2)

{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  int64_t this_ptr;
  int64_t local_108;
  int64_t local_100;
  uint64_t local_f8;
  void*local_f0;
  void*local_e8;
  uint32_t local_e0;
  uint32_t local_dc;
  int64_t local_d8;
  char local_d0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t *local_68;
  int64_t local_60;
  char local_58;
  int64_t local_40;
  char local_38;
  
  lVar2 = g_0276ca90;
  local_f0 = param_2;
  if (g_0276ca90 != 0) {
    FUN_00d50b00();
  }
  local_60 = lVar2;
  local_58 = '\x01';
  cVar4 = FUN_00d90870();
  if (cVar4 == '\0') {
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    goto LAB_00c26d52;
  }
  iVar1 = *(int *)(this_ptr + 0xb0);
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (iVar1 == 0) goto LAB_00c26d52;
  FUN_00d8f140();
  local_d8 = local_78;
  local_e0 = 2;
  local_dc = *(void*)(this_ptr + 0xb0);
  local_e8 = &g_0263cdb0;
  local_d0 = 0;
  if (local_78 != 0) {
    FUN_00d50b00();
  }
  local_d0 = '\x01';
  FUN_00d8cb40();
  lVar2 = *param_1;
  if (lVar2 == local_40) {
    if (((char)param_1[1] == '\0') && (local_40 != 0)) {
      local_68 = param_1 + 1;
      if (local_38 != '\0') goto LAB_00c26cc1;
      FUN_00d50b00();
      goto LAB_00c26cfb;
    }
LAB_00c26d02:
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_68 = param_1 + 1;
    lVar3 = param_1[1];
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      *param_1 = local_40;
      if (((char)lVar3 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
LAB_00c26cfb:
      *(void*)local_68 = 1;
      goto LAB_00c26d02;
    }
    *param_1 = local_40;
    if (((char)lVar3 != '\0') && (lVar2 != 0)) {
      FUN_00d50b20();
    }
LAB_00c26cc1:
    *(void*)local_68 = 1;
    local_38 = '\0';
  }
  local_e8 = &g_0263cdb0;
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
LAB_00c26d52:
  lVar2 = g_0276ca98;
  if (g_0276ca98 != 0) {
    FUN_00d50b00();
  }
  lVar3 = g_0276caa0;
  if (g_0276caa0 != 0) {
    FUN_00d50b00();
  }
  local_78 = lVar2;
  local_108 = *param_1;
  local_100 = lVar3;
  local_f8 = *local_f0;
  FUN_002d73e0(&local_100,&local_108,&local_f8,4);
  FUN_0036bfe0();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_002d10d0();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  local_98 = g_0276caa8;
  if (g_0276caa8 != 0) {
    FUN_00d50b00();
  }
  local_90 = '\x01';
  if (this_ptr != 0) {
    FUN_00d50b00();
  }
  local_88 = local_40;
  local_80 = '\0';
  FUN_00d40470(&local_88,&stack0xffffffffffffffb0,3,3);
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if (((char)local_e0 != '\0') && (local_e8 != (void*)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d243a0();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  return;
}

