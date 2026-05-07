// Function: FUN_01f98990
// Address: 01f98990
// Size: 772 bytes
// Class: GNColor
// String references:
//   "GNColor"

void FUN_01f98990(double param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  int64_t arg1;
  int64_t *this_ptr;
  float fVar6;
  int64_t local_38;
  char local_30;
  
  plVar1 = *(int64_t **)(arg1 + 0x20);
  if ((g_026e9ce0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_026fd0e8 = FUN_00d4fe50();
    g_026fd0d0 = "GNColor";
    g_026fd0d8 = 0x30;
    g_026fd0e0 = FUN_001b8c30;
    g_026fd0f0 = 0;
    ram_00000000026fd0f8 = 0;
    g_026fd100 = 0;
    ram_00000000026fd108 = 0;
    g_026fd110 = 0;
    ram_00000000026fd118 = 0;
    g_026fd120 = 0;
    ram_00000000026fd128 = 0;
    g_026fd130 = 0;
    ram_00000000026fd138 = 0;
    g_026fd140 = 0;
    ram_00000000026fd148 = 0;
    g_026fd150 = 0;
    ram_00000000026fd158 = 0;
    g_026fd160 = 0;
    ram_00000000026fd168 = 0;
    g_026fd170 = 0;
    ram_00000000026fd178 = 0;
    g_026fd180 = 0;
    ram_00000000026fd188 = 0;
    g_026fd190 = 0;
    ___cxa_guard_release();
  }
  lVar2 = g_02802688;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    lVar2 = g_02802688;
    if (cVar4 != '\0') {
      lVar2 = *(int64_t *)(arg1 + 0x20);
    }
  }
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  plVar1 = *(int64_t **)(arg1 + 0x28);
  if ((g_026e9ce0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_026fd0e8 = FUN_00d4fe50();
    g_026fd0d0 = "GNColor";
    g_026fd0d8 = 0x30;
    g_026fd0e0 = FUN_001b8c30;
    g_026fd0f0 = 0;
    ram_00000000026fd0f8 = 0;
    g_026fd100 = 0;
    ram_00000000026fd108 = 0;
    g_026fd110 = 0;
    ram_00000000026fd118 = 0;
    g_026fd120 = 0;
    ram_00000000026fd128 = 0;
    g_026fd130 = 0;
    ram_00000000026fd138 = 0;
    g_026fd140 = 0;
    ram_00000000026fd148 = 0;
    g_026fd150 = 0;
    ram_00000000026fd158 = 0;
    g_026fd160 = 0;
    ram_00000000026fd168 = 0;
    g_026fd170 = 0;
    ram_00000000026fd178 = 0;
    g_026fd180 = 0;
    ram_00000000026fd188 = 0;
    g_026fd190 = 0;
    ___cxa_guard_release();
  }
  lVar3 = g_02802688;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    lVar3 = g_02802688;
    if (cVar4 != '\0') {
      lVar3 = *(int64_t *)(arg1 + 0x28);
    }
  }
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  fVar6 = (float)param_1;
  FUN_01cfcdc0((*(float *)(lVar3 + 0x10) - *(float *)(lVar2 + 0x10)) * fVar6 +
               *(float *)(lVar2 + 0x10),
               (*(float *)(lVar3 + 0x14) - *(float *)(lVar2 + 0x14)) * fVar6 +
               *(float *)(lVar2 + 0x14),
               (*(float *)(lVar3 + 0x18) - *(float *)(lVar2 + 0x18)) * fVar6 +
               *(float *)(lVar2 + 0x18),
               (*(float *)(lVar3 + 0x1c) - *(float *)(lVar2 + 0x1c)) * fVar6 +
               *(float *)(lVar2 + 0x1c));
  *(void*)(this_ptr + 1) = 0;
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
      *this_ptr = local_38;
      *(void*)(this_ptr + 1) = 1;
      goto LAB_01f98af1;
    }
    local_38 = 0;
  }
  *this_ptr = local_38;
  *(void*)(this_ptr + 1) = 1;
LAB_01f98af1:
  FUN_00d50b20();
  FUN_00d50b20();
  return;
}

