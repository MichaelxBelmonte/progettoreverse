// Function: FUN_0033fef0
// Address: 0033fef0
// Size: 2201 bytes
// Class: MDEditorViewController
// String references:
//   "MDEditorViewController"
//   "MDEditorView"


/* WARNING: Removing unreachable block (ram,0x0033ff2d) */
/* WARNING: Removing unreachable block (ram,0x0033ff39) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0033fef0(pthread_key_t param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  char *pcVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *unaff_RDI;
  longlong **pplVar10;
  longlong *plVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  undefined4 extraout_XMM0_Da;
  longlong in_stack_ffffffffffffff80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  longlong *local_58;
  char local_49;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  FUN_019383e0();
  FUN_00d6f370();
  lVar1 = DAT_02702d40;
  if (DAT_02702d40 != 0) {
    FUN_00d50b00();
  }
  FUN_01bfdcc0(DAT_02390124);
  uVar12 = FUN_00d70af0();
  local_60 = (longlong *)CONCAT44(local_60._4_4_,uVar12);
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  fVar13 = (float)FUN_013c8a60();
  fVar14 = local_60._0_4_;
  if (DAT_02390124 < fVar13 * local_60._0_4_) {
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    fVar14 = (float)FUN_013c8a60();
    fVar14 = DAT_02390124 / fVar14;
  }
  local_60 = (longlong *)CONCAT44(local_60._4_4_,fVar14);
  (**(code **)(&DAT_00001790 + *unaff_RDI))();
  (**(code **)(&DAT_000017a0 + *unaff_RDI))(local_60._0_4_);
  plVar9 = (longlong *)unaff_RDI[0xaa];
  if ((DAT_0271a0b0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_0272a1e8 = FUN_000914a0();
    _DAT_0272a1d0 = "MDEditorView";
    _DAT_0272a1d8 = 0x560;
    param_1 = 0x34df50;
    _DAT_0272a1e0 = FUN_0034df50;
    _DAT_0272a1f0 = 0;
    uRam000000000272a1f8 = 0;
    _DAT_0272a200 = 0;
    _DAT_0272a278 = 0;
    uRam000000000272a280 = 0;
    _DAT_0272a288 = 0;
    DAT_0272a28a = 1;
    _DAT_0272a208 = 0;
    uRam000000000272a210 = 0;
    _DAT_0272a218 = 0;
    uRam000000000272a220 = 0;
    _DAT_0272a228 = 0;
    uRam000000000272a230 = 0;
    _DAT_0272a238 = 0;
    uRam000000000272a240 = 0;
    _DAT_0272a248 = 0;
    uRam000000000272a250 = 0;
    _DAT_0272a258 = 0;
    uRam000000000272a260 = 0;
    _DAT_0272a268 = 0;
    uRam000000000272a270 = 0;
    DAT_0272a293 = 0;
    _DAT_0272a28b = 0;
    ___cxa_guard_release();
  }
  plVar11 = DAT_02802688;
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x360))();
    cVar3 = FUN_00e85ea0();
    plVar11 = DAT_02802688;
    if (cVar3 != '\0') {
      plVar11 = (longlong *)unaff_RDI[0xaa];
    }
  }
  if (plVar11 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  (**(code **)(&UNK_00001670 + *plVar11))();
  local_60 = local_48;
  if ((((local_40[0] == '\0') && (local_48 != (longlong *)0x0)) &&
      (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_000bda90();
  FUN_000bda90();
  pplVar10 = &local_70;
  uVar12 = FUN_00108380();
  plVar9 = local_70;
  if (local_68 == '\0') {
    if (local_70 != (longlong *)0x0) {
      uVar12 = FUN_00d50b00();
    }
  }
  else {
    local_68 = '\0';
  }
  FUN_00108e20(uVar12,0);
  if (plVar9 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (in_stack_ffffffffffffff80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x970))();
  FUN_0197c0e0();
  plVar9 = local_48;
  local_70 = local_48;
  if (local_40[0] == '\0') {
    if (local_48 == (longlong *)0x0) {
      local_70 = (longlong *)0x0;
      local_68 = '\x01';
      plVar9 = (longlong *)0x0;
    }
    else {
      FUN_00d50b00();
      local_68 = '\x01';
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_68 = '\x01';
    local_40[0] = '\0';
  }
  if ((local_78 != '\0') && (in_stack_ffffffffffffff80 != 0)) {
    FUN_00d50b20();
  }
  if (plVar9 == (longlong *)0x0) goto LAB_00340606;
  FUN_00275460();
  if (plVar9 == (longlong *)0x0) {
LAB_00340275:
    pplVar10 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar9 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_00340275;
  }
  plVar9 = *pplVar10;
  local_49 = *(char *)(pplVar10 + 1);
  if ((local_49 != '\0') && (plVar9 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  (**(code **)(*unaff_RDI + 0x970))();
  plVar2 = local_48;
  if ((((local_40[0] == '\0') && (local_48 != (longlong *)0x0)) &&
      (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((plVar9 != (longlong *)0x0) && (plVar2 != (longlong *)0x0)) {
    local_58 = plVar11;
    iVar4 = FUN_01b18580();
    FUN_00d50b00();
    local_38[0] = '\0';
    do {
      (**(code **)(*unaff_RDI + 0x370))();
      plVar11 = local_48;
      if (local_48 == unaff_RDI) {
        if (((local_38[0] == '\0') && (local_48 != (longlong *)0x0)) && (local_40[0] != '\0')) {
          local_38[0] = '\x01';
          goto LAB_00340387;
        }
      }
      else {
        if (local_40[0] == '\0') {
          if (local_38[0] == '\0') {
            pcVar7 = local_38;
          }
          else {
            FUN_00d50b20();
            pcVar7 = local_38;
          }
        }
        else {
          if (local_38[0] != '\0') {
            FUN_00d50b20();
          }
          local_38[0] = '\x01';
          unaff_RDI = plVar11;
LAB_00340387:
          local_38[0] = '\x01';
          pcVar7 = local_40;
          plVar11 = unaff_RDI;
        }
        *pcVar7 = '\0';
        unaff_RDI = plVar11;
      }
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((DAT_026f7020 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
        _DAT_0270aa58 = FUN_00015ff0();
        _DAT_0270aa40 = "MDEditorViewController";
        _DAT_0270aa48 = 0x1e8;
        _DAT_0270aa50 = FUN_00074eb0;
        _DAT_0270aa60 = 0;
        uRam000000000270aa68 = 0;
        _DAT_0270aa70 = 0;
        _DAT_0270aae8 = 0;
        uRam000000000270aaf0 = 0;
        _DAT_0270aaf8 = 0;
        DAT_0270aafa = 1;
        _DAT_0270aa78 = 0;
        uRam000000000270aa80 = 0;
        _DAT_0270aa88 = 0;
        uRam000000000270aa90 = 0;
        _DAT_0270aa98 = 0;
        uRam000000000270aaa0 = 0;
        _DAT_0270aaa8 = 0;
        uRam000000000270aab0 = 0;
        _DAT_0270aab8 = 0;
        uRam000000000270aac0 = 0;
        _DAT_0270aac8 = 0;
        uRam000000000270aad0 = 0;
        _DAT_0270aad8 = 0;
        uRam000000000270aae0 = 0;
        DAT_0270ab03 = 0;
        _DAT_0270aafb = 0;
        ___cxa_guard_release();
      }
      plVar8 = (longlong *)&DAT_02802688;
      if (unaff_RDI != (longlong *)0x0) {
        (**(code **)(*unaff_RDI + 0x360))();
        cVar3 = FUN_00e85ea0();
        plVar8 = (longlong *)&stack0xffffffffffffff80;
        if (cVar3 == '\0') {
          plVar8 = (longlong *)&DAT_02802688;
        }
      }
      if (*plVar8 != 0) {
        if ((local_38[0] == '\0') && (unaff_RDI != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        goto LAB_0034054d;
      }
    } while (unaff_RDI != (longlong *)0x0);
    unaff_RDI = (longlong *)0x0;
LAB_0034054d:
    plVar11 = local_58;
    param_1 = (pthread_key_t)plVar8;
    uVar12 = FUN_00d50b20();
    iVar5 = 0;
    if (unaff_RDI != (longlong *)0x0) {
      uVar12 = FUN_00227020();
      plVar8 = local_48;
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        uVar12 = FUN_00d50b20();
      }
      if (plVar8 != (longlong *)0x0) {
        FUN_00227020();
        iVar5 = FUN_00440c80();
        uVar12 = extraout_XMM0_Da;
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          uVar12 = FUN_00d50b20();
        }
      }
    }
    if (iVar4 != iVar5) {
      FUN_00502230(uVar12,iVar5);
    }
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_49 != '\0') && (plVar9 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_00340606:
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00e8b990();
  FUN_00cb1f10();
  FUN_00db3760();
  plVar9 = local_60;
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar9 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar11 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


