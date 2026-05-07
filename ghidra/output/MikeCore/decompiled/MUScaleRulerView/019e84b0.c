// Function: FUN_019e84b0
// Address: 019e84b0
// Size: 511 bytes
// Class: MUScaleRulerView


/* WARNING: Removing unreachable block (ram,0x019e864b) */
/* WARNING: Removing unreachable block (ram,0x019e8654) */

void FUN_019e84b0(void)

{
  undefined4 uVar1;
  void *pvVar2;
  longlong lVar3;
  pthread_key_t pVar4;
  longlong lVar5;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong local_38;
  char local_30;
  
  if ((*(longlong *)(unaff_RDI + 0x278) != 0) &&
     (FUN_01e1e360(), *(longlong *)(unaff_RDI + 0x278) != 0)) {
    *(undefined8 *)(unaff_RDI + 0x278) = 0;
    FUN_00d50b20();
  }
  lVar5 = *unaff_RSI;
  if (lVar5 == *(longlong *)(unaff_RDI + 0x260)) {
    return;
  }
  if (*(longlong *)(unaff_RDI + 0x260) != 0) {
    *(undefined8 *)(unaff_RDI + 0x260) = 0;
    FUN_00d50b20();
    lVar5 = *unaff_RSI;
  }
  if (lVar5 == 0) {
    return;
  }
  lVar3 = *(longlong *)(unaff_RDI + 0x268);
  if (lVar3 != lVar5) {
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    *(longlong *)(unaff_RDI + 0x268) = lVar5;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  pVar4 = 0;
  FUN_01e1eb80(DAT_023942d0);
  lVar5 = *(longlong *)(unaff_RDI + 0x278);
  lVar3 = lVar5;
  if (lVar5 == local_38) goto LAB_019e85d5;
  lVar3 = local_38;
  if (local_30 == '\0') {
    if (local_38 == 0) {
      lVar3 = 0;
      goto LAB_019e858a;
    }
    FUN_00d50b00();
    lVar5 = *(longlong *)(unaff_RDI + 0x278);
    *(longlong *)(unaff_RDI + 0x278) = local_38;
  }
  else {
    local_30 = '\0';
LAB_019e858a:
    *(longlong *)(unaff_RDI + 0x278) = lVar3;
  }
  pVar4 = (pthread_key_t)lVar5;
  if (lVar5 != 0) {
    FUN_00d50b20();
    lVar3 = local_38;
  }
LAB_019e85d5:
  if ((local_30 != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(pVar4);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01264240();
  if (local_30 == '\0') {
    if (local_38 == 0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_38 == 0) {
    return;
  }
  pvVar2 = _pthread_getspecific(pVar4);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar1 = FUN_01326de0();
  *(undefined4 *)(unaff_RDI + 0x270) = uVar1;
  FUN_00d50b20();
  return;
}


