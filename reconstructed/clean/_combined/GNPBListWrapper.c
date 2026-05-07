// ===================================================================
// GNPBListWrapper — Complete reconstructed pseudocode
// 2 functions
// ===================================================================


// ============================================================
// 01cacbe0
// ============================================================
// Function: FUN_01cacbe0
// Address: 01cacbe0
// Size: 608 bytes
// Class: GNPBListWrapper
// String references:
//   "GNPBListWrapper"

void FUN_01cacbe0(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  int64_t *this_ptr;
  int64_t *plVar6;
  int64_t local_68;
  uint8_t local_60;
  int64_t *local_58;
  char local_50 [8];
  int64_t *local_48;
  char local_40;
  char local_38 [8];
  
  local_68 = *param_2;
  if (local_68 == 0) {
LAB_01caccd6:
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return;
  }
  local_60 = 0;
  FUN_01cac990(param_1,&local_68);
  if (local_50[0] == '\0') {
    if (local_58 == (int64_t *)0x0) goto LAB_01caccd6;
    FUN_00d50b00();
  }
  else if (local_58 == (int64_t *)0x0) goto LAB_01caccd6;
  FUN_00d23340();
  pcVar5 = local_38;
  if (local_50[0] != '\0') {
    pcVar5 = local_50;
  }
  local_38[0] = local_50[0];
  *pcVar5 = '\0';
  if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] == '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  local_48 = local_58;
  local_40 = '\x01';
  if ((g_026efdd0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_027f89a8 = FUN_00d4fe50();
    g_027f8990 = "GNPBListWrapper";
    g_027f8998 = 0x18;
    g_027f89a0 = FUN_001e3740;
    g_027f89b0 = 0;
    ram_00000000027f89b8 = 0;
    g_027f89c0 = 0;
    ram_00000000027f89c8 = 0;
    g_027f89d0 = 0;
    ram_00000000027f89d8 = 0;
    g_027f89e0 = 0;
    ram_00000000027f89e8 = 0;
    g_027f89f0 = 0;
    ram_00000000027f89f8 = 0;
    g_027f8a00 = 0;
    ram_00000000027f8a08 = 0;
    g_027f8a10 = 0;
    ram_00000000027f8a18 = 0;
    g_027f8a20 = 0;
    ram_00000000027f8a28 = 0;
    g_027f8a30 = 0;
    ram_00000000027f8a38 = 0;
    g_027f8a40 = 0;
    ram_00000000027f8a48 = 0;
    g_027f8a50 = 0;
    ___cxa_guard_release();
  }
  if (local_58 == (int64_t *)0x0) {
LAB_01caccc1:
    plVar6 = g_02802688;
    cVar3 = g_02802690;
    if (g_02802690 == '\0') goto LAB_01cacd06;
LAB_01caccf7:
    if (plVar6 == (int64_t *)0x0) goto LAB_01cacd06;
    FUN_00d50b00();
LAB_01cacd0b:
    lVar1 = plVar6[2];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *this_ptr = lVar1;
    *(void*)(this_ptr + 1) = 1;
    if (cVar3 != '\0') {
      FUN_00d50b20();
    }
  }
  else {
    (**(code **)(*local_58 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01caccc1;
    plVar6 = local_48;
    cVar3 = local_40;
    if (local_40 != '\0') goto LAB_01caccf7;
LAB_01cacd06:
    plVar2 = local_48;
    if (plVar6 != (int64_t *)0x0) goto LAB_01cacd0b;
    *(void*)(this_ptr + 1) = 0;
    if (local_40 != '\0') {
      *this_ptr = (int64_t)local_48;
      *(void*)(this_ptr + 1) = 1;
      goto LAB_01cacd5f;
    }
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    *this_ptr = (int64_t)plVar2;
    *(void*)(this_ptr + 1) = 1;
  }
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_01cacd5f:
  FUN_00d50b20();
  return;
}



// ============================================================
// 01cacee0
// ============================================================
// Function: FUN_01cacee0
// Address: 01cacee0
// Size: 756 bytes
// Class: GNPBListWrapper

void FUN_01cacee0(uint64_t param_1,int64_t *param_2)

{
  void*puVar1;
  uint64_t uVar2;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t *local_50;
  char local_48;
  
  local_c0 = *param_2;
  local_b8 = '\0';
  FUN_01cad410(param_1,&local_c0);
  if (local_48 == '\0') {
    if (local_50 != (int64_t *)0x0) {
      (**(code **)(*local_50 + 0x10))();
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if (local_50 != (int64_t *)0x0) {
    if (local_50 == (int64_t *)*arg1) {
      (**(code **)(*local_50 + 0x10))();
      FUN_00d50b20();
      return;
    }
    FUN_00d50b00();
    local_b0 = *param_2;
    local_a8 = '\0';
    (**(code **)(*local_50 + 0x20))();
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    (**(code **)(*local_50 + 0x10))();
    FUN_00d50b20();
  }
  local_a0 = (int64_t *)*arg1;
  local_98 = '\0';
  local_90 = *param_2;
  local_88 = '\0';
  FUN_01cad550();
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
    (**(code **)(*local_a0 + 0x10))();
    FUN_00d50b20();
  }
  _objc_alloc();
  (*PTR__objc_msgSend_024a9998)();
  local_80 = *param_2;
  local_78 = '\0';
  FUN_01ca74b0();
  if ((local_48 == '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  FUN_00e1cfc0();
  if (local_50 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (*(int64_t *)(*(int64_t *)(this_ptr + 0x10) + 0x18) == 0) {
    FUN_00d50b00();
    FUN_01f27160();
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
  }
  puVar1 = PTR__objc_msgSend_024a9998;
  uVar2 = (*PTR__objc_msgSend_024a9998)();
  (*puVar1)(*(void*)(*(int64_t *)(this_ptr + 0x10) + 0x18),uVar2);
  (*PTR__objc_release_024a99a0)();
  return;
}

