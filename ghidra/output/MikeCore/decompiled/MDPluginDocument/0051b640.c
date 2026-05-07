// Function: FUN_0051b640
// Address: 0051b640
// Size: 680 bytes
// Class: MDPluginDocument


/* WARNING: Removing unreachable block (ram,0x0051b839) */
/* WARNING: Removing unreachable block (ram,0x0051b842) */
/* WARNING: Removing unreachable block (ram,0x0051b6c9) */
/* WARNING: Removing unreachable block (ram,0x0051b6d2) */

void FUN_0051b640(pthread_key_t param_1)

{
  longlong lVar1;
  char cVar2;
  void *pvVar3;
  longlong lVar4;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  longlong local_40;
  char local_38;
  
  if (*(longlong *)(unaff_RSI + 0x110) == 0) {
    bVar5 = false;
    lVar7 = 0;
LAB_0051b6df:
    lVar1 = *(longlong *)(unaff_RSI + 0x308);
  }
  else {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_002dca20();
    lVar7 = local_40;
    if (local_40 != 0) {
      bVar5 = true;
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
      goto LAB_0051b6df;
    }
    bVar5 = false;
    lVar1 = *(longlong *)(unaff_RSI + 0x308);
  }
  if ((lVar1 == 0) ||
     (((cVar2 = FUN_016ae5f0(), cVar2 == '\0' &&
       ((*(char *)(unaff_RSI + 0x358) == '\0' || (*(char *)(unaff_RSI + 0x35a) == '\0')))) ||
      (*(longlong *)(unaff_RSI + 0x108) == 0)))) goto LAB_0051b7d3;
  FUN_00d50b00();
  FUN_007934b0();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (local_40 == 0) {
    lVar1 = *(longlong *)(unaff_RSI + 0x108);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_007934f0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    goto LAB_0051b7d3;
  }
  lVar1 = *(longlong *)(unaff_RSI + 0x108);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_007934b0();
  if (lVar7 == local_40) {
    lVar4 = lVar7;
    bVar6 = bVar5;
    if ((!bVar5) && (lVar7 != 0)) {
      if (local_38 != '\0') goto LAB_0051b872;
      FUN_00d50b00();
      bVar6 = true;
    }
LAB_0051b8be:
    lVar7 = lVar4;
    bVar5 = bVar6;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      bVar6 = true;
      lVar4 = local_40;
      if ((bVar5) && (lVar7 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_0051b8be;
    }
    lVar4 = local_40;
    if ((bVar5) && (lVar7 != 0)) {
      FUN_00d50b20();
    }
LAB_0051b872:
    lVar7 = lVar4;
    bVar5 = true;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
LAB_0051b7d3:
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if ((!bVar5) && (lVar7 != 0)) {
    FUN_00d50b00();
  }
  *unaff_RDI = lVar7;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


