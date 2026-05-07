// Function: FUN_018bb840
// Address: 018bb840
// Size: 1177 bytes
// Class: GNString
// String references:
//   "%@%@"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_018bb840(void* param_1)

{
  int64_t *plVar1;
  char cVar2;
  int64_t **pplVar3;
  void *pvVar4;
  int64_t lVar5;
  void* pVar6;
  int64_t this_ptr;
  int64_t *plVar7;
  int64_t *plVar8;
  int64_t *local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  int64_t *local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  FUN_00d654d0();
  cVar2 = FUN_00d59e50();
  if ((cVar2 != '\0') || (cVar2 = FUN_00d59e50(), cVar2 != '\0')) {
    FUN_018bb4d0();
  }
  cVar2 = FUN_00d59e50();
  if (cVar2 == '\0') {
    return;
  }
  plVar7 = *(int64_t **)(this_ptr + 0x80);
  local_68 = '\0';
  local_70 = plVar7;
  FUN_01152ba0();
  if (plVar7 == (int64_t *)0x0) {
LAB_018bb8db:
    pplVar3 = &g_02802688;
    plVar8 = g_02802688;
    if (g_02802690 != '\0') goto LAB_018bb8eb;
LAB_018bb911:
    if (plVar8 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    (**(code **)(*plVar7 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_018bb8db;
    pplVar3 = &local_70;
    plVar8 = local_70;
    if (local_68 == '\0') goto LAB_018bb911;
LAB_018bb8eb:
    *(void*)(pplVar3 + 1) = 0;
    if ((local_68 != '\0') && (plVar7 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (plVar8 == (int64_t *)0x0) {
    return;
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_017d17d0();
  plVar7 = local_40;
  pvVar4 = _pthread_getspecific(param_1);
  plVar8 = local_40;
  if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), plVar7 = plVar8, lVar5 != 0)) {
    plVar7 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
  }
  lVar5 = g_027dc8f8;
  if (g_027dc8f8 != 0) {
    FUN_00d50b00();
  }
  local_b8 = lVar5;
  local_b0 = '\x01';
  (**(code **)(*plVar7 + 0x88))();
  plVar7 = local_70;
  if (local_68 == '\0') {
    if (((local_70 != (int64_t *)0x0) && (FUN_00d50b00(), local_68 != '\0')) &&
       (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_68 = '\0';
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar5 = g_027dc900;
  if (plVar7 == (int64_t *)0x0) goto LAB_018bbcb2;
  if (g_027dc900 != 0) {
    FUN_00d50b00();
  }
  local_a8 = lVar5;
  local_a0 = '\x01';
  cVar2 = FUN_00d90870();
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  lVar5 = g_027dc900;
  if (cVar2 != '\0') goto LAB_018bbcb2;
  if (g_027dc900 != 0) {
    FUN_00d50b00();
  }
  local_78 = lVar5;
  local_c0 = plVar7;
  pVar6 = 2;
  FUN_00083ea0(2,&local_c0);
  FUN_00d8cb40();
  plVar1 = local_40;
  lVar5 = local_78;
  plVar8 = plVar7;
  if (plVar7 == local_40) {
joined_r0x018bbb36:
    local_78 = lVar5;
    if ((local_38 != '\0') && (plVar8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      FUN_00d50b20();
      lVar5 = local_78;
      plVar7 = plVar1;
      plVar8 = local_40;
      goto joined_r0x018bbb36;
    }
    FUN_00d50b20();
    local_38 = '\0';
    plVar7 = local_40;
    lVar5 = local_78;
  }
  local_70 = (int64_t *)&g_0253d630;
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  local_70 = &g_024c5048;
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(pVar6);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_017d17d0();
  plVar8 = local_70;
  pvVar4 = _pthread_getspecific(pVar6);
  plVar1 = local_70;
  if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), plVar8 = plVar1, lVar5 != 0)) {
    plVar8 = (int64_t *)plVar1[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
  }
  lVar5 = g_027dc8f8;
  local_90 = '\0';
  local_98 = plVar7;
  if (g_027dc8f8 != 0) {
    FUN_00d50b00();
  }
  local_88 = lVar5;
  local_80 = '\x01';
  (**(code **)(*plVar8 + 0x1f0))(1,&local_88,1);
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_018bbcb2:
  if (plVar7 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}

