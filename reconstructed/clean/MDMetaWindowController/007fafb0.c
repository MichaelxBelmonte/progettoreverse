// Function: FUN_007fafb0
// Address: 007fafb0
// Size: 585 bytes
// Class: MDMetaWindowController

void FUN_007fafb0(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t lVar4;
  char *pcVar5;
  int64_t this_ptr;
  int64_t local_38;
  char local_30 [8];
  char local_28 [8];
  
  FUN_01e57e80();
  *(void*)(this_ptr + 0xd2) = 1;
  *(void*)(this_ptr + 0xe8) = 0x3f800000;
  *(void*)(this_ptr + 0xd8) = 0xffffffff;
  *(void*)(this_ptr + 0xd4) = 0;
  lVar3 = g_0272fae0;
  if (g_0272fae0 != 0) {
    FUN_00d50b00();
  }
  FUN_00d50b00();
  FUN_01e1ea80(g_023934c8,&stack0xffffffffffffffa8);
  lVar1 = *(int64_t *)(this_ptr + 0x90);
  lVar4 = lVar1;
  if (lVar1 == local_38) goto LAB_007fb09e;
  lVar4 = local_38;
  if (local_30[0] == '\0') {
    if (local_38 == 0) {
      lVar4 = 0;
      goto LAB_007fb053;
    }
    FUN_00d50b00();
    lVar1 = *(int64_t *)(this_ptr + 0x90);
    *(int64_t *)(this_ptr + 0x90) = local_38;
  }
  else {
    local_30[0] = '\0';
LAB_007fb053:
    *(int64_t *)(this_ptr + 0x90) = lVar4;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar4 = local_38;
  }
LAB_007fb09e:
  if ((local_30[0] != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  FUN_00c9fe20();
  pcVar5 = local_28;
  if (local_30[0] != '\0') {
    pcVar5 = local_30;
  }
  local_28[0] = local_30[0];
  *pcVar5 = '\0';
  if ((local_30[0] != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 0xdc) = *(void*)(local_38 + 0xc);
  if (local_28[0] != '\0') {
    FUN_00d50b20();
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x78) + 0x928))(0);
  plVar2 = *(int64_t **)(this_ptr + 0x80);
  FUN_00d8ede0();
  if (local_30[0] == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30[0] = '\0';
  }
  (**(code **)(*plVar2 + 0x968))();
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  if ((local_30[0] != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr + 0x18) != 0) {
    FUN_01e5bfa0();
  }
  return;
}

