// Function: FUN_01501fc0
// Address: 01501fc0
// Size: 1121 bytes
// Class: GNString
// String references:
//   "GNString"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


int64_t * FUN_01501fc0(uint32_t param_1,void*param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t *plVar4;
  char cVar5;
  uint8_t uVar6;
  int iVar7;
  int64_t *in_RCX;
  int64_t **pplVar8;
  int64_t lVar9;
  int64_t *arg1;
  int64_t *this_ptr;
  uint32_t uVar10;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  int64_t local_88;
  char local_80;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  int64_t *local_50;
  int64_t *local_48;
  int64_t *local_40;
  char local_38;
  
  lVar3 = g_0270b838;
  local_58 = in_RCX;
  if (g_0270b838 != 0) {
    param_1 = FUN_00d50b00();
  }
  local_88 = lVar3;
  local_80 = '\x01';
  pplVar8 = &local_40;
  FUN_000175c0(param_1,&local_88);
  plVar1 = local_40;
  uVar10 = FUN_00053ac0();
  if (plVar1 == (int64_t *)0x0) {
LAB_01502041:
    pplVar8 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar5 = FUN_00e85ea0();
    uVar10 = extraout_XMM0_Da;
    if (cVar5 == '\0') goto LAB_01502041;
  }
  plVar1 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      uVar10 = FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar8 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    uVar10 = FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    uVar10 = FUN_00d50b20();
  }
  local_50 = plVar1;
  if (plVar1 == (int64_t *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_00d45ad0();
    uVar10 = extraout_XMM0_Da_00;
  }
  *param_2 = uVar6;
  plVar1 = g_027c2530;
  if (g_027c2530 != (int64_t *)0x0) {
    uVar10 = FUN_00d50b00();
  }
  local_78 = plVar1;
  local_70 = '\x01';
  pplVar8 = &local_40;
  FUN_000175c0(uVar10,&local_78);
  plVar1 = local_40;
  // [STATIC_INIT: property registration]
  if (plVar1 == (int64_t *)0x0) {
LAB_0150210e:
    pplVar8 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 == '\0') goto LAB_0150210e;
  }
  plVar1 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar8 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar2 = g_027c2530;
  local_48 = plVar1;
  if (g_027c2530 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_40 = plVar2;
  local_38 = '\0';
  uVar10 = FUN_00ca13a0();
  plVar4 = local_58;
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    uVar10 = FUN_00d50b20();
  }
  if (plVar2 != (int64_t *)0x0) {
    uVar10 = FUN_00d50b20();
  }
  if (plVar4 != (int64_t *)0x0) {
    plVar2 = (int64_t *)*plVar4;
    lVar3 = plVar4[1];
    if (plVar2 == plVar1) {
      if (((char)lVar3 != '\0') || (plVar1 == (int64_t *)0x0)) goto LAB_01502202;
      uVar10 = FUN_00d50b00();
    }
    else {
      if (plVar1 != (int64_t *)0x0) {
        uVar10 = FUN_00d50b00();
      }
      *local_58 = (int64_t)plVar1;
      if (((char)lVar3 != '\0') && (plVar2 != (int64_t *)0x0)) {
        uVar10 = FUN_00d50b20();
      }
    }
    *(void*)(local_58 + 1) = 1;
  }
LAB_01502202:
  plVar1 = g_02709968;
  if (g_02709968 != (int64_t *)0x0) {
    uVar10 = FUN_00d50b00();
  }
  local_68 = plVar1;
  local_60 = '\x01';
  pplVar8 = &local_40;
  FUN_000175c0(uVar10,&local_68);
  plVar1 = local_40;
  FUN_002771e0();
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 != '\0') goto LAB_01502267;
  }
  pplVar8 = (int64_t **)&g_02802688;
LAB_01502267:
  plVar2 = local_48;
  plVar1 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar8 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar4 = g_02709968;
  if (g_02709968 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_40 = plVar4;
  local_38 = '\0';
  FUN_00ca13a0();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (*arg1 != 0) {
    lVar3 = *(int64_t *)(*arg1 + 0x10);
    for (lVar9 = 0; lVar9 < *(int *)(lVar3 + 0xc); lVar9 = lVar9 + 1) {
      FUN_00d50130();
    }
  }
  *this_ptr = (int64_t)plVar1;
  *(void*)(this_ptr + 1) = 1;
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_50 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

