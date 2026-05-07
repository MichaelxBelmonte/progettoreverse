// Function: FUN_0168a170
// Address: 0168a170
// Size: 1311 bytes
// Class: GNAudioProcessor


/* WARNING: Removing unreachable block (ram,0x0168a5ee) */
/* WARNING: Removing unreachable block (ram,0x0168a5f7) */
/* WARNING: Removing unreachable block (ram,0x0168a550) */
/* WARNING: Removing unreachable block (ram,0x0168a55c) */
/* WARNING: Removing unreachable block (ram,0x0168a5bb) */
/* WARNING: Removing unreachable block (ram,0x0168a5c7) */
/* WARNING: Removing unreachable block (ram,0x0168a65d) */
/* WARNING: Removing unreachable block (ram,0x0168a636) */
/* WARNING: Removing unreachable block (ram,0x0168a643) */
/* WARNING: Removing unreachable block (ram,0x0168a1f0) */
/* WARNING: Removing unreachable block (ram,0x0168a210) */
/* WARNING: Removing unreachable block (ram,0x0168a1f2) */
/* WARNING: Removing unreachable block (ram,0x0168a212) */

longlong * FUN_0168a170(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  void *pvVar2;
  longlong *plVar3;
  pthread_key_t pVar4;
  longlong *plVar5;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong local_88;
  char local_80;
  longlong *local_58;
  char local_50;
  int local_40;
  
  if (*param_2 != 0) {
    plVar5 = *(longlong **)(unaff_RSI + 0x78);
    if (plVar5 == (longlong *)0x0) {
LAB_0168a2b1:
      pVar4 = (pthread_key_t)param_1;
      lVar1 = *param_2;
    }
    else {
      local_58 = (longlong *)0x0;
      local_40 = -1;
      do {
        local_50 = '\0';
        lVar1 = (longlong)local_40;
        local_40 = local_40 + 1;
        if (*(int *)((longlong)plVar5 + 0xc) <= local_40) {
          FUN_01714b60();
          param_1 = plVar5;
          goto LAB_0168a2b1;
        }
        plVar3 = (longlong *)plVar5[2];
        local_58 = (longlong *)plVar3[lVar1 + 1];
        pvVar2 = _pthread_getspecific((pthread_key_t)plVar3);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012c9180();
        lVar1 = *param_2;
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
      } while (local_88 != lVar1);
      pvVar2 = _pthread_getspecific((pthread_key_t)plVar3);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012c8a10();
      lVar1 = *param_1;
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if (local_88 == lVar1) {
        *(undefined1 *)(unaff_RDI + 1) = 0;
        if (local_58 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        *unaff_RDI = (longlong)local_58;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        FUN_01714b60();
        return unaff_RDI;
      }
      FUN_01714b60();
      pVar4 = (pthread_key_t)plVar3;
      lVar1 = *param_2;
      param_1 = plVar3;
    }
    if (lVar1 != 0) goto LAB_0168a486;
  }
  pVar4 = (pthread_key_t)param_1;
  plVar3 = (longlong *)FUN_00e8fc40();
  FUN_00bdbf50();
  (**(code **)(*plVar3 + 0x18))();
  plVar5 = (longlong *)*param_2;
  if (plVar5 == plVar3) {
    if ((char)param_2[1] == '\0') goto LAB_0168a309;
    FUN_00d50b20();
  }
  else {
    *param_2 = (longlong)plVar3;
    if (((char)param_2[1] != '\0') && (plVar5 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
LAB_0168a309:
    *(undefined1 *)(param_2 + 1) = 1;
  }
  FUN_00d9bb60();
  if (local_50 == '\0') {
    if (local_58 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  FUN_00b69200();
  if (local_58 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d46300();
  if (local_50 == '\0') {
    if (local_58 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  FUN_00b68960();
  if (local_58 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_0168a486:
  FUN_016ae690();
  FUN_00c811e0();
  if ((local_50 == '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(pVar4);
  plVar5 = local_58;
  if ((pvVar2 != (void *)0x0) && (lVar1 = FUN_00e8b990(), lVar1 != 0)) {
    plVar5 = (longlong *)local_58[(ulonglong)(*(uint *)(lVar1 + 0x154) & 1) + 4];
  }
  (**(code **)(*plVar5 + 0x18))();
  pvVar2 = _pthread_getspecific(pVar4);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c78d0();
  pvVar2 = _pthread_getspecific(pVar4);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c8a40();
  FUN_00d21140();
  *unaff_RDI = (longlong)local_58;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


