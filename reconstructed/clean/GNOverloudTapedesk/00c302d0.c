// Function: FUN_00c302d0
// Address: 00c302d0
// Size: 717 bytes
// Class: GNOverloudTapedesk
// String references:
//   "GNOverloudTapedesk"

void FUN_00c302d0(int64_t *param_1,int64_t *param_2,int64_t *param_3)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  int64_t this_ptr;
  int64_t **pplVar4;
  uint32_t uVar5;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  int64_t local_b8;
  uint8_t local_b0;
  int64_t local_a8;
  uint8_t local_a0;
  int64_t *local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  if (*(char *)(this_ptr + 0xb0) == '\0') goto LAB_00c304a9;
  pplVar4 = &local_40;
  local_98 = param_1;
  uVar5 = FUN_00b37610();
  plVar1 = local_40;
  // [STATIC_INIT: property registration]
  if (plVar1 == (int64_t *)0x0) {
LAB_00c30349:
    pplVar4 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    uVar5 = extraout_XMM0_Da;
    if (cVar2 == '\0') goto LAB_00c30349;
  }
  plVar1 = *pplVar4;
  if (*(char *)(pplVar4 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      uVar5 = FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar4 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    uVar5 = FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    local_90 = *param_3;
    local_88 = '\0';
    local_80 = *local_98;
    local_78 = '\0';
    (**(code **)(*plVar1 + 0x80))(uVar5,&local_80);
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d403d0();
  local_70 = g_0276cb38;
  if (g_0276cb38 != 0) {
    FUN_00d50b00();
  }
  local_68 = '\x01';
  local_60 = *param_2;
  local_58 = '\0';
  local_50 = 0;
  local_48 = '\0';
  FUN_00d40470(&local_50,&local_60,3,3);
  param_1 = local_98;
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_00c304a9:
  local_b8 = *param_2;
  local_b0 = 0;
  local_a8 = *param_1;
  local_a0 = 0;
  FUN_00c2bb50(&local_a8,&local_b8);
  return;
}

