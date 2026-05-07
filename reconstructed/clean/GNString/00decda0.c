// Function: FUN_00decda0
// Address: 00decda0
// Size: 1643 bytes
// Class: GNString
// String references:
//   "sh"
//   "-c"
//   "/bin/sh"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00decda0(int param_1,int param_2)

{
  int64_t lVar1;
  pid_t pVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  char **ppcVar7;
  int64_t lVar8;
  int64_t this_ptr;
  char *local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  void*local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  void*local_a0;
  int64_t local_98;
  char local_90;
  char *local_88;
  char *local_80;
  uint64_t local_78;
  uint64_t local_70;
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  *(void*)(this_ptr + 0x1c) = 0;
  *(void*)(this_ptr + 0x18) = 1;
  FUN_00d50b00();
  if (*(int64_t *)(this_ptr + 0x38) != 0) {
    _pipe(param_1);
  }
  if (*(int64_t *)(this_ptr + 0x40) != 0) {
    _pipe(param_1);
  }
  if (*(int64_t *)(this_ptr + 0x48) != 0) {
    _pipe(param_1);
  }
  pVar2 = _fork();
  if (pVar2 != 0) {
    if (*(int64_t *)(this_ptr + 0x38) != 0) {
      _close(param_1);
      **(void**)(*(int64_t *)(this_ptr + 0x38) + 0x10) = 0;
    }
    if (*(int64_t *)(this_ptr + 0x40) != 0) {
      _close(param_1);
      *(void*)(*(int64_t *)(*(int64_t *)(this_ptr + 0x40) + 0x10) + 4) = 0;
    }
    if (*(int64_t *)(this_ptr + 0x48) != 0) {
      _close(param_1);
      *(void*)(*(int64_t *)(*(int64_t *)(this_ptr + 0x48) + 0x10) + 4) = 0;
    }
    **(pid_t **)(this_ptr + 0x10) = pVar2;
    FUN_00d50b20();
    if (*(int64_t *)PTR____stack_chk_guard_024a9898 != local_38) {
                          ___stack_chk_fail();
    }
    return;
  }
  if ((*(int64_t *)(this_ptr + 0x38) != 0) &&
     (_close(param_1), **(int **)(*(int64_t *)(this_ptr + 0x38) + 0x10) != 0)) {
    _dup2(param_1,param_2);
    _close(param_1);
    **(void**)(*(int64_t *)(this_ptr + 0x38) + 0x10) = 0;
  }
  if ((*(int64_t *)(this_ptr + 0x40) != 0) &&
     (_close(param_1), *(int *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x40) + 0x10) + 4) != 1)) {
    _dup2(param_1,param_2);
    _close(param_1);
    *(void*)(*(int64_t *)(*(int64_t *)(this_ptr + 0x40) + 0x10) + 4) = 0;
  }
  if ((*(int64_t *)(this_ptr + 0x48) != 0) &&
     (_close(param_1), *(int *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x48) + 0x10) + 4) != 2)) {
    _dup2(param_1,param_2);
    _close(param_1);
    *(void*)(*(int64_t *)(*(int64_t *)(this_ptr + 0x48) + 0x10) + 4) = 0;
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x20) + 0x368))();
  lVar8 = local_98;
  if ((((local_98 != 0) && (local_90 == '\0')) && (FUN_00d50b00(), local_90 != '\0')) &&
     (local_98 != 0)) {
    FUN_00d50b20();
  }
  local_b0 = 0;
  lVar1 = *(int64_t *)(this_ptr + 0x28);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pcVar6 = g_027259e0;
  local_b0 = '\x01';
  local_b8 = lVar1;
  if (g_027259e0 != (char *)0x0) {
    FUN_00d50b00();
  }
  local_118 = pcVar6;
  local_110 = '\x01';
  ppcVar7 = &local_118;
  FUN_00d95130();
  local_a8 = local_98;
  if (local_90 == '\0') {
    if (((local_98 != 0) && (FUN_00d50b00(), local_90 != '\0')) && (local_98 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_90 = '\0';
  }
  if ((local_110 != '\0') && (local_118 != (char *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  local_a0 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  pcVar6 = &g_025795a8;
  *local_a0 = &g_025795a8;
  (*g_025795c0)();
  local_108 = g_027845f0;
  if (g_027845f0 != 0) {
    FUN_00d50b00();
  }
  local_100 = '\x01';
  FUN_00d8dbf0();
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  local_f8 = lVar8;
  local_f0 = '\0';
  FUN_00d8dbf0();
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  lVar8 = g_027845f8;
  if (g_027845f8 != 0) {
    FUN_00d50b00();
  }
  local_e8 = lVar8;
  local_e0 = '\x01';
  FUN_00d8dbf0();
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  local_d8 = local_a8;
  local_d0 = '\0';
  FUN_00d8dbf0();
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  local_88 = "sh";
  local_80 = "-c";
  local_c8 = local_a0;
  local_c0 = '\0';
  FUN_00cde260();
  lVar8 = local_98;
  if (local_90 == '\0') {
    if (((local_98 != 0) && (FUN_00d50b00(), local_90 != '\0')) && (local_98 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_90 = '\0';
  }
  if ((local_c0 != '\0') && (local_c8 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (lVar8 == 0) {
    ppcVar7 = (char **)((int64_t)&MACH_HEADER.cputype + 2);
    FUN_00d8cf90();
    lVar1 = local_98;
    if (local_98 != 0) {
      lVar8 = local_98;
      if (local_90 != '\0') goto LAB_00ded389;
      FUN_00d50b00();
      lVar8 = lVar1;
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
  }
LAB_00ded389:
  local_78 = *(void*)(lVar8 + 0x10);
  local_70 = 0;
  piVar4 = ___error();
  *piVar4 = 0;
  iVar3 = _execv(pcVar6,ppcVar7);
  iVar5 = (int)pcVar6;
  if (iVar3 == 0) {
    piVar4 = ___error();
    iVar3 = 0;
    if (*piVar4 != 0) {
      piVar4 = ___error();
      iVar3 = *piVar4;
    }
  }
  FUN_00d50b20();
  FUN_00d50b20();
  if (local_a8 != 0) {
    FUN_00d50b20();
  }
  if (iVar3 != 0) {
                        _abort();
  }
                      _exit(iVar5);
}

