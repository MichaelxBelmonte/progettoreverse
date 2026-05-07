// Function: FUN_00cb2800
// Address: 00cb2800
// Size: 558 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x00cb296d) */
/* WARNING: Removing unreachable block (ram,0x00cb2976) */

void FUN_00cb2800(pthread_key_t param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  void *pvVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar9;
  longlong local_40;
  char local_38;
  
  FUN_00d36e30();
  plVar1 = (longlong *)*unaff_RSI;
  FUN_00e8b690();
  if (plVar1 == (longlong *)0x0) {
LAB_00cb284e:
    unaff_RSI = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_00cb284e;
  }
  lVar2 = *unaff_RSI;
  if (lVar2 == 0) {
    return;
  }
  uVar9 = (ulonglong)(~*(uint *)(unaff_RDI + 0x154) & 1);
  pvVar5 = _pthread_getspecific(param_1);
  if ((pvVar5 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
    lVar7 = FUN_00e8bc10();
    lVar6 = *(longlong *)(lVar7 + uVar9 * 8);
  }
  else {
    lVar7 = FUN_00e8bc10();
    lVar6 = *(longlong *)(lVar7 + uVar9 * 8);
  }
  if (lVar6 != lVar2) {
    return;
  }
  FUN_00cbc520();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00cbc710();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00d50b00();
  FUN_00d21140();
  *(longlong *)(lVar7 + uVar9 * 8) = local_40;
  uVar4 = FUN_00e31390();
  cVar3 = FUN_00e314a0(3,uVar4 & 1 ^ 1);
  if (cVar3 == '\0') {
    iVar8 = 0x800;
    do {
      uVar4 = uVar4 & 1;
      if (1 < uVar4) {
        if (iVar8 < 2) {
          iVar8 = 0x800;
          FUN_00da6800();
        }
        else {
          iVar8 = iVar8 + -1;
        }
      }
      cVar3 = FUN_00e314a0(3,uVar4 ^ 1);
    } while (cVar3 == '\0');
    if (lVar7 == 0) goto LAB_00cb2a12;
  }
  *(longlong *)(lVar7 + (ulonglong)(~*(uint *)(unaff_RDI + 0x154) & 1) * 8) = local_40;
LAB_00cb2a12:
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  return;
}


