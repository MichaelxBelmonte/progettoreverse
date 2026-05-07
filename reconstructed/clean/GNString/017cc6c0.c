// Function: FUN_017cc6c0
// Address: 017cc6c0
// Size: 758 bytes
// Class: GNString
// String references:
//   "%I"
//   "%@ (%I)"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_017cc6c0(void* param_1)

{
  char cVar1;
  void *pvVar2;
  int64_t lVar3;
  int64_t arg1;
  void*this_ptr;
  int64_t **pplVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  float fVar8;
  int64_t *local_68;
  uint32_t local_60;
  int64_t *local_58;
  char local_50;
  int local_48;
  int64_t *local_40;
  char local_38;
  
  FUN_017cb7f0();
  plVar6 = local_68;
  if ((char)local_60 == '\0') {
    if (local_68 == (int64_t *)0x0) goto LAB_017cc703;
    FUN_00d50b00();
  }
  else if (local_68 == (int64_t *)0x0) {
LAB_017cc703:
    FUN_017cb550();
    if ((local_68 != (int64_t *)0x0) && (plVar6 = local_68, (char)local_60 == '\0')) {
      FUN_00d50b00();
    }
  }
  if (plVar6 == (int64_t *)0x0) {
    local_58 = *(int64_t **)(arg1 + 0x40);
    local_60 = 1;
    param_1 = 0x24da828;
    local_68 = (int64_t *)&g_024da828;
    FUN_00d8cb40(&g_024da828,&local_68);
    plVar6 = local_40;
    if (local_40 == (int64_t *)0x0) {
      plVar6 = (int64_t *)0x0;
    }
    else if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) &&
            (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  plVar5 = *(int64_t **)(arg1 + 0x58);
  plVar7 = plVar6;
  if (plVar5 == (int64_t *)0x0) goto LAB_017cc991;
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    plVar5 = *(int64_t **)(arg1 + 0x58);
    lVar3 = FUN_00e8b990();
    if (lVar3 != 0) {
      plVar5 = (int64_t *)plVar5[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
    }
  }
  lVar3 = g_02725a40;
  if (g_02725a40 != 0) {
    FUN_00d50b00();
  }
  pplVar4 = &local_68;
  (**(code **)(*plVar5 + 0x88))();
  plVar5 = local_68;
  FUN_00053ac0();
  if (plVar5 == (int64_t *)0x0) {
LAB_017cc7d6:
    pplVar4 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar5 + 0x360))();
    cVar1 = FUN_00e85ea0();
    if (cVar1 == '\0') goto LAB_017cc7d6;
  }
  plVar5 = *pplVar4;
  if (*(char *)(pplVar4 + 1) == '\0') {
    if (plVar5 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar4 + 1) = 0;
  }
  if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (plVar5 == (int64_t *)0x0) goto LAB_017cc991;
  fVar8 = (float)FUN_00d459e0();
  FUN_00d50b20();
  if ((fVar8 == 0.0) && (!NAN(fVar8))) goto LAB_017cc991;
  local_60 = 2;
  local_68 = &g_024c5048;
  local_50 = 0;
  if (plVar6 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_48 = (int)fVar8;
  local_50 = '\x01';
  local_68 = (int64_t *)&g_025df2a0;
  local_58 = plVar6;
  FUN_00d8cb40(&g_025df2a0,&local_68);
  plVar7 = local_40;
  if (local_40 == plVar6) {
LAB_017cc965:
    plVar7 = plVar6;
    if (local_38 != '\0') {
LAB_017cc96b:
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  else {
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      if (plVar6 != (int64_t *)0x0) {
        FUN_00d50b20();
        plVar6 = plVar7;
        goto LAB_017cc965;
      }
      if (local_38 == '\0') goto LAB_017cc979;
      goto LAB_017cc96b;
    }
    if (plVar6 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    local_38 = '\0';
  }
LAB_017cc979:
  local_68 = &g_024c5048;
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_017cc991:
  *this_ptr = plVar7;
  *(void*)(this_ptr + 1) = 1;
  return;
}

