// Function: FUN_0051ba20
// Address: 0051ba20
// Size: 680 bytes
// Class: MDPluginDocument


/* WARNING: Removing unreachable block (ram,0x0051bc19) */
/* WARNING: Removing unreachable block (ram,0x0051bc22) */
/* WARNING: Removing unreachable block (ram,0x0051baa9) */
/* WARNING: Removing unreachable block (ram,0x0051bab2) */

void FUN_0051ba20(pthread_key_t param_1)

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
LAB_0051babf:
    lVar1 = *(longlong *)(unaff_RSI + 0x308);
  }
  else {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_002dca50();
    lVar7 = local_40;
    if (local_40 != 0) {
      bVar5 = true;
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
      goto LAB_0051babf;
    }
    bVar5 = false;
    lVar1 = *(longlong *)(unaff_RSI + 0x308);
  }
  if ((lVar1 == 0) ||
     (((cVar2 = FUN_016ae5f0(), cVar2 == '\0' &&
       ((*(char *)(unaff_RSI + 0x358) == '\0' || (*(char *)(unaff_RSI + 0x35a) == '\0')))) ||
      (*(longlong *)(unaff_RSI + 0x108) == 0)))) goto LAB_0051bbb3;
  FUN_00d50b00();
  FUN_00793550();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (local_40 == 0) {
    lVar1 = *(longlong *)(unaff_RSI + 0x108);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_00793590();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    goto LAB_0051bbb3;
  }
  lVar1 = *(longlong *)(unaff_RSI + 0x108);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00793550();
  if (lVar7 == local_40) {
    lVar4 = lVar7;
    bVar6 = bVar5;
    if ((!bVar5) && (lVar7 != 0)) {
      if (local_38 != '\0') goto LAB_0051bc52;
      FUN_00d50b00();
      bVar6 = true;
    }
LAB_0051bc9e:
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
      goto LAB_0051bc9e;
    }
    lVar4 = local_40;
    if ((bVar5) && (lVar7 != 0)) {
      FUN_00d50b20();
    }
LAB_0051bc52:
    lVar7 = lVar4;
    bVar5 = true;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
LAB_0051bbb3:
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if ((!bVar5) && (lVar7 != 0)) {
    FUN_00d50b00();
  }
  *unaff_RDI = lVar7;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


