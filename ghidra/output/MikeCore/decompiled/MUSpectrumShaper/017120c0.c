// Function: FUN_017120c0
// Address: 017120c0
// Size: 4339 bytes
// Class: MUSpectrumShaper


/* WARNING: Removing unreachable block (ram,0x01713097) */
/* WARNING: Removing unreachable block (ram,0x017130a0) */
/* WARNING: Removing unreachable block (ram,0x01713160) */
/* WARNING: Removing unreachable block (ram,0x0171313e) */

void FUN_017120c0(pthread_key_t param_1,char param_2)

{
  char cVar1;
  longlong lVar2;
  bool bVar3;
  longlong *plVar4;
  void *pvVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  pthread_key_t pVar10;
  longlong local_a0;
  char local_98;
  longlong *local_78;
  char local_70;
  int local_60;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  lVar8 = *unaff_RSI;
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    lVar8 = *unaff_RSI;
    lVar6 = FUN_00e8b990();
    if (lVar6 != 0) {
      lVar8 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
    }
  }
  lVar8 = *(longlong *)(lVar8 + 0x38);
  if (lVar8 != 0) {
    FUN_00d50b00();
  }
  lVar6 = *unaff_RSI;
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    lVar6 = *unaff_RSI;
    lVar7 = FUN_00e8b990();
    if (lVar7 != 0) {
      lVar6 = *(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
    }
  }
  cVar1 = *(char *)(lVar6 + 0x58);
  if (cVar1 == '\0') {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150eb60();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01823610();
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
  }
  if (*(char *)(unaff_RDI + 0x60) != cVar1) {
    FUN_00d64850();
    *(char *)(unaff_RDI + 0x60) = cVar1;
    FUN_00d64910();
    if (*(char *)(unaff_RDI + 0x60) != '\0') {
      FUN_0170f8b0();
    }
  }
  if ((cVar1 == '\0') ||
     ((*(longlong *)(unaff_RDI + 0x68) == 0 && (*(longlong *)(unaff_RDI + 0x70) == 0)))) {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313b00();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_015058d0();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150eb60();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d51d20();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_0150d0b0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313b00();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_015058d0();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150eb60();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d51d20();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_0150d0b0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313b00();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_015058d0();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01510030();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d51d20();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_0150ceb0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313b00();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_015058d0();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01510030();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d51d20();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_0150ceb0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  lVar6 = *unaff_RSI;
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    lVar6 = *unaff_RSI;
    lVar7 = FUN_00e8b990();
    if (lVar7 != 0) {
      lVar6 = *(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
    }
  }
  cVar1 = *(char *)(lVar6 + 0x59);
  if (*(char *)(unaff_RDI + 0x61) != cVar1) {
    FUN_00d64850();
    *(char *)(unaff_RDI + 0x61) = cVar1;
    FUN_00d64910();
    if (*(char *)(unaff_RDI + 0x61) != '\0') {
      FUN_0170ff60();
    }
  }
  if ((cVar1 == '\0') || (*(longlong *)(unaff_RDI + 0x78) == 0)) {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313b00();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_015058d0();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01510280();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d51d20();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_0150c7f0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313b00();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_015058d0();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01510280();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d51d20();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_0150c7f0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (!bVar3) goto LAB_017131a8;
  if ((param_2 != '\0') && (lVar6 = *(longlong *)(unaff_RDI + 0x80), lVar6 != 0)) {
    if (0 < *(int *)(lVar6 + 0xc)) {
      pVar10 = 0;
      do {
        plVar4 = local_78;
        pvVar5 = _pthread_getspecific(pVar10);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012c81e0();
        if (local_70 == '\0') {
          if (local_78 != (longlong *)0x0) {
            FUN_00d50b00();
            goto LAB_017130b0;
          }
        }
        else if (local_78 != (longlong *)0x0) {
LAB_017130b0:
          local_70 = '\0';
          local_78 = (longlong *)0x0;
          local_60 = -1;
          while( true ) {
            lVar7 = (longlong)local_60;
            local_60 = local_60 + 1;
            if (*(int *)((longlong)plVar4 + 0xc) <= local_60) break;
            lVar2 = plVar4[2];
            local_78 = *(longlong **)(lVar2 + 8 + lVar7 * 8);
            pvVar5 = _pthread_getspecific((pthread_key_t)lVar2);
            plVar9 = local_78;
            if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
              plVar9 = (longlong *)local_78[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
            }
            (**(code **)(*plVar9 + 0x370))();
          }
          FUN_00277f20();
          FUN_00d50b20();
        }
        pVar10 = pVar10 + 1;
      } while ((int)pVar10 < *(int *)(lVar6 + 0xc));
    }
    FUN_01714b60();
  }
LAB_017131a8:
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  return;
}


