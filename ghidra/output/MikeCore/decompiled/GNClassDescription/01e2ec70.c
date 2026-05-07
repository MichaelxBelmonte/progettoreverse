// Function: FUN_01e2ec70
// Address: 01e2ec70
// Size: 766 bytes
// Class: GNClassDescription
// String references:
//   "GNClassDescription"


/* WARNING: Removing unreachable block (ram,0x01e2ee88) */
/* WARNING: Removing unreachable block (ram,0x01e2ee8d) */
/* WARNING: Removing unreachable block (ram,0x01e2eddd) */
/* WARNING: Removing unreachable block (ram,0x01e2ede6) */
/* WARNING: Removing unreachable block (ram,0x01e2ed07) */
/* WARNING: Removing unreachable block (ram,0x01e2ed10) */
/* WARNING: Removing unreachable block (ram,0x01e2ecc8) */
/* WARNING: Removing unreachable block (ram,0x01e2ecd1) */
/* WARNING: Removing unreachable block (ram,0x01e2ed46) */
/* WARNING: Removing unreachable block (ram,0x01e2ed4f) */
/* WARNING: Removing unreachable block (ram,0x01e2ee28) */
/* WARNING: Removing unreachable block (ram,0x01e2ee98) */
/* WARNING: Removing unreachable block (ram,0x01e2eea1) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e2ec70(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong unaff_RDI;
  
  lVar3 = DAT_027f3840;
  if (*(char *)(unaff_RDI + 0x39) != '\0') {
    if (DAT_027f3840 != 0) {
      FUN_00d50b00();
    }
    cVar4 = FUN_00c9ff50();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      FUN_00d21140();
      lVar3 = DAT_027f3840;
      if (DAT_027f3840 != 0) {
        FUN_00d50b00();
      }
      FUN_00ca13a0();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
  }
  plVar1 = (longlong *)*param_2;
  if ((DAT_026cf800 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    _DAT_027760a8 = FUN_00d4fe50();
    DAT_02776090 = "GNClassDescription";
    _DAT_02776098 = 0xe8;
    _DAT_027760a0 = FUN_0002f240;
    _DAT_027760b0 = 0;
    uRam00000000027760b8 = 0;
    _DAT_027760c0 = 0;
    uRam00000000027760c8 = 0;
    _DAT_027760d0 = 0;
    uRam00000000027760d8 = 0;
    _DAT_027760e0 = 0;
    uRam00000000027760e8 = 0;
    _DAT_027760f0 = 0;
    uRam00000000027760f8 = 0;
    _DAT_02776100 = 0;
    uRam0000000002776108 = 0;
    _DAT_02776110 = 0;
    uRam0000000002776118 = 0;
    _DAT_02776120 = 0;
    uRam0000000002776128 = 0;
    _DAT_02776130 = 0;
    uRam0000000002776138 = 0;
    _DAT_02776140 = 0;
    uRam0000000002776148 = 0;
    _DAT_02776150 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 != '\0') goto LAB_01e2ed9e;
  }
  param_2 = &DAT_02802688;
LAB_01e2ed9e:
  lVar3 = DAT_028b9530;
  if (*param_2 != 0) {
    if (DAT_028b9530 != 0) {
      FUN_00d50b00();
    }
    cVar4 = FUN_00c9ff50();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      FUN_01e2f100();
      lVar2 = *(longlong *)(unaff_RDI + 0x30);
      if (lVar2 != lVar3) {
        if (lVar3 == 0) {
          *(undefined8 *)(unaff_RDI + 0x30) = 0;
        }
        else {
          FUN_00d50b00();
          lVar2 = *(longlong *)(unaff_RDI + 0x30);
          *(longlong *)(unaff_RDI + 0x30) = lVar3;
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
      FUN_00ca1340();
      return;
    }
  }
  if (*(longlong *)(unaff_RDI + 0x30) != 0) {
    *(undefined8 *)(unaff_RDI + 0x30) = 0;
    FUN_00d50b20();
  }
  return;
}


