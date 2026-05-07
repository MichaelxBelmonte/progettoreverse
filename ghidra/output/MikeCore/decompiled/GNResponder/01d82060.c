// Function: FUN_01d82060
// Address: 01d82060
// Size: 759 bytes
// Class: GNResponder
// String references:
//   "GNResponder"


/* WARNING: Removing unreachable block (ram,0x01d82297) */
/* WARNING: Removing unreachable block (ram,0x01d822a4) */
/* WARNING: Removing unreachable block (ram,0x01d820bc) */
/* WARNING: Removing unreachable block (ram,0x01d820c5) */
/* WARNING: Removing unreachable block (ram,0x01d8218d) */
/* WARNING: Removing unreachable block (ram,0x01d82196) */
/* WARNING: Removing unreachable block (ram,0x01d821d7) */
/* WARNING: Removing unreachable block (ram,0x01d82200) */
/* WARNING: Removing unreachable block (ram,0x01d821d9) */
/* WARNING: Removing unreachable block (ram,0x01d82202) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01d82060(void)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong **pplVar6;
  code *unaff_RSI;
  longlong *unaff_RDI;
  uint uVar7;
  longlong *local_98;
  longlong local_58;
  char local_50;
  int local_40;
  
  FUN_00d503f0();
  (**(code **)(*unaff_RDI + 0x368))();
  if (local_50 == '\0') {
    if (local_58 == 0) goto LAB_01d82152;
    FUN_00d50b00();
  }
  else if (local_58 == 0) goto LAB_01d82152;
  uVar7 = *(uint *)(local_58 + 0xc);
  if (0 < (int)uVar7) {
    lVar5 = (ulonglong)uVar7 + 1;
    do {
      uVar7 = uVar7 - 1;
      lVar1 = *(longlong *)(*(longlong *)(local_58 + 0x10) + (ulonglong)uVar7 * 8);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      (*unaff_RSI)();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar5 = lVar5 + -1;
    } while (1 < lVar5);
  }
  FUN_00d50b20();
LAB_01d82152:
  (**(code **)(*unaff_RDI + 0x290))();
  if (local_50 == '\0') {
    if (local_58 == 0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_58 == 0) {
    return;
  }
  local_40 = -1;
  while( true ) {
    lVar5 = (longlong)local_40;
    local_40 = local_40 + 1;
    if (*(int *)(local_58 + 0xc) <= local_40) break;
    plVar2 = *(longlong **)(*(longlong *)(local_58 + 0x10) + 8 + lVar5 * 8);
    local_98 = plVar2;
    if ((DAT_026cb300 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
      _DAT_026d9028 = FUN_00d4fe50();
      _DAT_026d9010 = "GNResponder";
      _DAT_026d9018 = 0x10;
      _DAT_026d9020 = FUN_00005d90;
      _DAT_026d9030 = 0;
      uRam00000000026d9038 = 0;
      _DAT_026d9040 = 0;
      uRam00000000026d9048 = 0;
      _DAT_026d9050 = 0;
      uRam00000000026d9058 = 0;
      _DAT_026d9060 = 0;
      uRam00000000026d9068 = 0;
      _DAT_026d9070 = 0;
      uRam00000000026d9078 = 0;
      _DAT_026d9080 = 0;
      uRam00000000026d9088 = 0;
      _DAT_026d9090 = 0;
      uRam00000000026d9098 = 0;
      _DAT_026d90a0 = 0;
      uRam00000000026d90a8 = 0;
      _DAT_026d90b0 = 0;
      uRam00000000026d90b8 = 0;
      _DAT_026d90c0 = 0;
      uRam00000000026d90c8 = 0;
      _DAT_026d90d0 = 0;
      ___cxa_guard_release();
    }
    pplVar6 = (longlong **)&DAT_02802688;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x360))();
      cVar3 = FUN_00e85ea0();
      pplVar6 = &local_98;
      if (cVar3 == '\0') {
        pplVar6 = (longlong **)&DAT_02802688;
      }
    }
    if (*pplVar6 != (longlong *)0x0) {
      (*unaff_RSI)();
    }
  }
  FUN_01d84b10();
  FUN_00d50b20();
  return;
}


