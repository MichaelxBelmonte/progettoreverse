// Function: FUN_00523880
// Address: 00523880
// Size: 1072 bytes
// Class: MULSSGenerator

void FUN_00523880(uint32_t param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  int64_t lVar6;
  void* pVar7;
  char *pcVar8;
  int64_t this_ptr;
  uint64_t uVar9;
  double dVar10;
  int64_t local_68;
  char local_60;
  int64_t local_50;
  char local_48 [8];
  double local_40;
  char local_38 [8];
  
  FUN_00b31a00();
  pVar7 = CONCAT31((int3)((uint)param_1 >> 8),local_48[0]);
  pcVar8 = local_38;
  if (local_48[0] != '\0') {
    pcVar8 = local_48;
  }
  local_38[0] = local_48[0];
  *pcVar8 = '\0';
  if ((local_48[0] != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  cVar1 = FUN_00bc47e0();
  uVar9 = g_02395720;
  if (cVar1 != '\0') {
    uVar9 = FUN_00bc48b0();
  }
  *(void*)(this_ptr + 0x268) = uVar9;
  uVar9 = FUN_00bc4920();
  *(void*)(this_ptr + 0x270) = uVar9;
  cVar1 = *(char *)(this_ptr + 0x370);
  cVar2 = FUN_00bc47f0();
  *(char *)(this_ptr + 0x24f) = cVar2;
  if (cVar2 == '\0') {
    local_40 = 0.0;
    cVar3 = '\0';
    dVar10 = 0.0;
    cVar2 = '\0';
    if (cVar1 == '\0') goto LAB_00523968;
LAB_0052397a:
    *(double *)(this_ptr + 0x250) = dVar10;
    pvVar5 = _pthread_getspecific(pVar7);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00521df0(dVar10);
    FUN_01320140();
    *(void*)(this_ptr + 0x2a0) = 1;
    if (cVar1 == '\0') goto LAB_005239eb;
LAB_005239fe:
    *(double *)(this_ptr + 600) = local_40;
    pvVar5 = _pthread_getspecific(pVar7);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00521df0(local_40);
    FUN_013200d0();
    *(void*)(this_ptr + 0x2a0) = 1;
  }
  else {
    dVar10 = (double)FUN_00bc48c0();
    local_40 = (double)FUN_00bc48d0();
    cVar3 = FUN_00bc48e0();
    cVar2 = cVar3;
    if (cVar1 != '\0') goto LAB_0052397a;
LAB_00523968:
    cVar3 = cVar2;
    if ((*(double *)(this_ptr + 0x250) != dVar10) ||
       (NAN(*(double *)(this_ptr + 0x250)) || NAN(dVar10))) goto LAB_0052397a;
LAB_005239eb:
    if ((*(double *)(this_ptr + 600) != local_40) ||
       (NAN(*(double *)(this_ptr + 600)) || NAN(local_40))) goto LAB_005239fe;
  }
  if (*(char *)(this_ptr + 0x24d) != cVar3) {
    *(char *)(this_ptr + 0x24d) = cVar3;
    *(void*)(this_ptr + 0x2a0) = 1;
  }
  cVar2 = FUN_00bc47c0();
  if (cVar2 == '\0') {
    cVar2 = FUN_00bc47b0();
    local_40 = 0.0;
    if (cVar2 != '\0') {
      local_40 = (double)FUN_00bc4790();
    }
  }
  else {
    lVar6 = FUN_00bc4780();
    local_40 = (double)FUN_00b335d0();
    local_40 = (double)lVar6 / local_40;
  }
  if (((*(char *)(this_ptr + 0x24e) == '\0') || (cVar2 = FUN_00bc4910(), cVar2 != '\0')) ||
     (cVar2 = FUN_00bc47d0(), cVar2 == '\0')) goto LAB_00523c71;
  if (*(int64_t *)(this_ptr + 0x308) == 0) {
    FUN_00757c60();
    pvVar5 = _pthread_getspecific(pVar7);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012caf10();
    if (local_48[0] == '\0') {
      if (((local_50 != 0) && (FUN_00d50b00(), local_48[0] != '\0')) && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_48[0] = '\0';
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (local_50 != 0) {
      pvVar5 = _pthread_getspecific(pVar7);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar4 = FUN_016c2e90();
      if (iVar4 == 0) {
        local_40 = *(double *)(this_ptr + 0x260);
      }
      FUN_00d50b20();
      if (iVar4 == 0) goto LAB_00523c71;
      goto LAB_00523b13;
    }
    dVar10 = *(double *)(this_ptr + 0x260);
  }
  else {
LAB_00523b13:
    FUN_00bc47a0();
    local_40 = (double)FUN_00521df0();
    dVar10 = *(double *)(this_ptr + 0x260);
    if (g_02391038 <= (double)((uint64_t)(local_40 - dVar10) & g_023908f0))
    goto LAB_00523c71;
  }
  local_40 = dVar10;
LAB_00523c71:
  *(double *)(this_ptr + 0x260) = local_40;
  if (cVar1 != '\0') {
    *(void*)(this_ptr + 0x370) = 0;
  }
  if ((local_38[0] != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  return;
}

