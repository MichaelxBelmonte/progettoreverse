// Function: FUN_0025ece0
// Address: 0025ece0
// Size: 641 bytes
// Class: MDEditorScrollView
// === MDEditorScrollView properties ===
//   MUScaleRulerViewDisplayMode _scaleRulerViewDisplayMode


uint64_t FUN_0025ece0(uint64_t param_1,char param_2)

{
  char *pcVar1;
  byte bVar2;
  uint64_t uVar3;
  int64_t this_ptr;
  int64_t *plVar5;
  int64_t local_70;
  char local_68;
  int64_t *local_58;
  char local_50 [32];
  int64_t *plVar4;
  
  FUN_01caeae0();
  local_50[0x10] = local_50[0];
  pcVar1 = local_50 + 0x10;
  if (local_50[0] != '\0') {
    pcVar1 = local_50;
  }
  *pcVar1 = '\0';
  if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (*(int *)(this_ptr + 0x198) == 1) {
    FUN_01d66ab0();
    uVar3 = 0;
    goto LAB_0025ef3d;
  }
  if (*(int *)(this_ptr + 0x198) == 2) {
    uVar3 = 0;
    FUN_01d66ab0();
    goto LAB_0025ef3d;
  }
  plVar4 = *(int64_t **)(this_ptr + 0x90);
  (**(code **)(&UNK_00001550 + *plVar4))();
  local_50[0x18] = local_50[0];
  pcVar1 = local_50;
  if (local_50[0] == '\0') {
    pcVar1 = local_50 + 0x18;
  }
  *pcVar1 = '\0';
  if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_58 == (int64_t *)0x0) {
    plVar5 = *(int64_t **)(this_ptr + 0x90);
LAB_0025edc1:
    FUN_00d50b00();
  }
  else {
    plVar5 = local_58;
    if (local_50[0x18] == '\0') goto LAB_0025edc1;
  }
  (**(code **)(&UNK_00001670 + *plVar5))();
  local_50[0xf] = FUN_000bdcd0();
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (param_2 != '\0') {
    plVar4 = *(int64_t **)(this_ptr + 0x90);
    (**(code **)(&UNK_00001550 + *plVar4))();
    pcVar1 = local_50;
    if (local_50[0] == '\0') {
      pcVar1 = local_50 + 0x18;
    }
    local_50[0x18] = local_50[0];
    *pcVar1 = '\0';
    if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_58 == (int64_t *)0x0) {
      plVar5 = *(int64_t **)(this_ptr + 0x90);
LAB_0025ee6c:
      FUN_00d50b00();
    }
    else {
      plVar5 = local_58;
      if (local_50[0x18] == '\0') goto LAB_0025ee6c;
    }
    (**(code **)(&UNK_00001670 + *plVar5))();
    bVar2 = local_50[0xf] ^ 1;
    FUN_000bdcb0();
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if (plVar4 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    *(byte *)(this_ptr + 0x1a0) = bVar2;
    FUN_00d6f370();
    plVar4 = g_026f6dc8;
    if (g_026f6dc8 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    FUN_00d707b0();
    if (plVar4 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_0022ee90();
  }
  uVar3 = CONCAT71((int7)((uint64_t)plVar4 >> 8),1);
  FUN_01d66ab0();
LAB_0025ef3d:
  if ((local_50[0x10] != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return uVar3 & 0xffffffff;
}

