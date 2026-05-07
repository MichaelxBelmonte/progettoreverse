// Function: FUN_00decda0
// Address: 00decda0
// Size: 1643 bytes
// Class: GNString
// String references:
//   "sh"
//   "-c"
//   "/bin/sh"


void FUN_00decda0(int param_1,int param_2)

{
  longlong lVar1;
  pid_t pVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  char **ppcVar7;
  longlong lVar8;
  longlong unaff_RDI;
  char *local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  undefined8 *local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  undefined8 *local_a0;
  longlong local_98;
  char local_90;
  char *local_88;
  char *local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  *(undefined4 *)(unaff_RDI + 0x1c) = 0;
  *(undefined1 *)(unaff_RDI + 0x18) = 1;
  FUN_00d50b00();
  if (*(longlong *)(unaff_RDI + 0x38) != 0) {
    _pipe(param_1);
  }
  if (*(longlong *)(unaff_RDI + 0x40) != 0) {
    _pipe(param_1);
  }
  if (*(longlong *)(unaff_RDI + 0x48) != 0) {
    _pipe(param_1);
  }
  pVar2 = _fork();
  if (pVar2 != 0) {
    if (*(longlong *)(unaff_RDI + 0x38) != 0) {
      _close(param_1);
      **(undefined4 **)(*(longlong *)(unaff_RDI + 0x38) + 0x10) = 0;
    }
    if (*(longlong *)(unaff_RDI + 0x40) != 0) {
      _close(param_1);
      *(undefined4 *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x40) + 0x10) + 4) = 0;
    }
    if (*(longlong *)(unaff_RDI + 0x48) != 0) {
      _close(param_1);
      *(undefined4 *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x10) + 4) = 0;
    }
    **(pid_t **)(unaff_RDI + 0x10) = pVar2;
    FUN_00d50b20();
    if (*(longlong *)PTR____stack_chk_guard_024a9898 != local_38) {
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    return;
  }
  if ((*(longlong *)(unaff_RDI + 0x38) != 0) &&
     (_close(param_1), **(int **)(*(longlong *)(unaff_RDI + 0x38) + 0x10) != 0)) {
    _dup2(param_1,param_2);
    _close(param_1);
    **(undefined4 **)(*(longlong *)(unaff_RDI + 0x38) + 0x10) = 0;
  }
  if ((*(longlong *)(unaff_RDI + 0x40) != 0) &&
     (_close(param_1), *(int *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x40) + 0x10) + 4) != 1)) {
    _dup2(param_1,param_2);
    _close(param_1);
    *(undefined4 *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x40) + 0x10) + 4) = 0;
  }
  if ((*(longlong *)(unaff_RDI + 0x48) != 0) &&
     (_close(param_1), *(int *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x10) + 4) != 2)) {
    _dup2(param_1,param_2);
    _close(param_1);
    *(undefined4 *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x10) + 4) = 0;
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x20) + 0x368))();
  lVar8 = local_98;
  if ((((local_98 != 0) && (local_90 == '\0')) && (FUN_00d50b00(), local_90 != '\0')) &&
     (local_98 != 0)) {
    FUN_00d50b20();
  }
  local_b0 = 0;
  lVar1 = *(longlong *)(unaff_RDI + 0x28);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pcVar6 = DAT_027259e0;
  local_b0 = '\x01';
  local_b8 = lVar1;
  if (DAT_027259e0 != (char *)0x0) {
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
  local_a0 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  pcVar6 = &DAT_025795a8;
  *local_a0 = &DAT_025795a8;
  (*DAT_025795c0)();
  local_108 = DAT_027845f0;
  if (DAT_027845f0 != 0) {
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
  lVar8 = DAT_027845f8;
  if (DAT_027845f8 != 0) {
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
  if ((local_c0 != '\0') && (local_c8 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar8 == 0) {
    ppcVar7 = (char **)((longlong)&MACH_HEADER.cputype + 2);
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
  local_78 = *(undefined8 *)(lVar8 + 0x10);
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
                    /* WARNING: Subroutine does not return */
    _abort();
  }
                    /* WARNING: Subroutine does not return */
  _exit(iVar5);
}


