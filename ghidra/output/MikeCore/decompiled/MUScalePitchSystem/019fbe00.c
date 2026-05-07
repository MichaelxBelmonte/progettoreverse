// Function: FUN_019fbe00
// Address: 019fbe00
// Size: 783 bytes
// Class: MUScalePitchSystem


/* WARNING: Removing unreachable block (ram,0x019fc0a8) */
/* WARNING: Removing unreachable block (ram,0x019fc0b1) */
/* WARNING: Removing unreachable block (ram,0x019fc000) */
/* WARNING: Removing unreachable block (ram,0x019fbfb1) */
/* WARNING: Removing unreachable block (ram,0x019fbfbe) */
/* WARNING: Removing unreachable block (ram,0x019fbeee) */
/* WARNING: Removing unreachable block (ram,0x019fbea0) */
/* WARNING: Removing unreachable block (ram,0x019fbea9) */
/* WARNING: Removing unreachable block (ram,0x019fbf99) */
/* WARNING: Removing unreachable block (ram,0x019fbfa2) */
/* WARNING: Removing unreachable block (ram,0x019fc01f) */
/* WARNING: Removing unreachable block (ram,0x019fc028) */
/* WARNING: Removing unreachable block (ram,0x019fc05e) */
/* WARNING: Removing unreachable block (ram,0x019fc06a) */
/* WARNING: Removing unreachable block (ram,0x019fc0bc) */
/* WARNING: Removing unreachable block (ram,0x019fc0c8) */
/* WARNING: Removing unreachable block (ram,0x019fc0db) */

longlong * FUN_019fbe00(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  void *pvVar6;
  pthread_key_t pVar7;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong local_70;
  char local_68;
  longlong local_58;
  
  pVar7 = (pthread_key_t)param_1;
  lVar1 = *param_2;
  lVar3 = param_2[1];
  if (((char)lVar3 != '\0') && (lVar1 != 0)) {
    FUN_00d50b00();
  }
  if (*(longlong *)(unaff_RSI + 0x18) == 0) {
    plVar5 = (longlong *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar5 + 0x18))();
    lVar2 = *(longlong *)(unaff_RSI + 0x18);
    *(longlong **)(unaff_RSI + 0x18) = plVar5;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  cVar4 = FUN_00ca18c0();
  if (cVar4 != '\0') {
    FUN_019fcd40();
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    goto LAB_019fc0cd;
  }
  if (*param_1 == 0) {
    local_68 = '\0';
    local_70 = 0;
LAB_019fbf7f:
    local_58 = 0;
  }
  else {
    pvVar6 = _pthread_getspecific(pVar7);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173b790();
    if (local_68 == '\0') {
      if (local_70 == 0) goto LAB_019fbf7f;
      FUN_00d50b00();
      local_58 = local_70;
    }
    else {
      local_58 = local_70;
      local_68 = '\0';
    }
  }
  FUN_01718c10();
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ca0840();
LAB_019fc0cd:
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = lVar1;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (((char)lVar3 != '\0') && (lVar1 != 0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


