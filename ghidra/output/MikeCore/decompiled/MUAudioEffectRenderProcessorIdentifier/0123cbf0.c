// Function: FUN_0123cbf0
// Address: 0123cbf0
// Size: 1200 bytes
// Class: MUAudioEffectRenderProcessorIdentifier


/* WARNING: Removing unreachable block (ram,0x0123cd72) */
/* WARNING: Removing unreachable block (ram,0x0123cd7e) */
/* WARNING: Removing unreachable block (ram,0x0123cf47) */
/* WARNING: Removing unreachable block (ram,0x0123d047) */
/* WARNING: Removing unreachable block (ram,0x0123d054) */
/* WARNING: Removing unreachable block (ram,0x0123ce65) */
/* WARNING: Removing unreachable block (ram,0x0123ce72) */
/* WARNING: Removing unreachable block (ram,0x0123ccce) */
/* WARNING: Removing unreachable block (ram,0x0123ccd7) */
/* WARNING: Removing unreachable block (ram,0x0123cd58) */
/* WARNING: Removing unreachable block (ram,0x0123cd64) */
/* WARNING: Removing unreachable block (ram,0x0123ce8c) */
/* WARNING: Removing unreachable block (ram,0x0123ce95) */
/* WARNING: Removing unreachable block (ram,0x0123cf3b) */
/* WARNING: Removing unreachable block (ram,0x0123cf58) */
/* WARNING: Removing unreachable block (ram,0x0123cf64) */

undefined8 * FUN_0123cbf0(pthread_key_t param_1,longlong *param_2,char param_3)

{
  bool bVar1;
  char cVar2;
  void *pvVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  undefined8 uVar6;
  longlong *local_40;
  char local_38;
  
  plVar5 = (longlong *)*param_2;
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    plVar5 = (longlong *)*param_2;
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      plVar5 = (longlong *)plVar5[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    }
  }
  (**(code **)(*plVar5 + 0x380))();
  plVar5 = (longlong *)*param_2;
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    plVar5 = (longlong *)*param_2;
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      plVar5 = (longlong *)plVar5[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    }
  }
  uVar6 = (**(code **)(*plVar5 + 0x370))();
  (**(code **)(*unaff_RSI + 0x478))();
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  if (param_3 != '\0') {
    FUN_00b82410(uVar6,10,0x44,0);
    if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    if (local_40 == (longlong *)0x0) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
      return unaff_RDI;
    }
    FUN_00b87ec0();
    FUN_0123b010();
    FUN_00d64850();
    unaff_RSI[0xe] = 0;
    FUN_00d64910();
    lVar4 = FUN_00b7a710();
    FUN_00d64850();
    unaff_RSI[0xf] = lVar4;
    FUN_00d64910();
    *unaff_RDI = local_40;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    if (local_40 == (longlong *)0x0) {
      return unaff_RDI;
    }
    goto LAB_0123d082;
  }
  (**(code **)(*local_40 + 0x3f0))();
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) goto LAB_0123cec7;
    FUN_00d50b00();
LAB_0123cea1:
    cVar2 = (**(code **)(*local_40 + 0x3a0))();
    if (cVar2 == '\0') {
      (**(code **)(*local_40 + 0x420))();
    }
    bVar1 = false;
  }
  else {
    if (local_40 != (longlong *)0x0) goto LAB_0123cea1;
LAB_0123cec7:
    bVar1 = true;
  }
  FUN_00b82410(uVar6,5,0x44,0);
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  if (local_40 == (longlong *)0x0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    FUN_00b7c570();
    FUN_00b87ec0();
    FUN_0123b010();
    FUN_00d64850();
    unaff_RSI[0xe] = 0;
    FUN_00d64910();
    lVar4 = FUN_00b7a710();
    FUN_00d64850();
    unaff_RSI[0xf] = lVar4;
    FUN_00d64910();
    FUN_00b79950();
    *unaff_RDI = local_40;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  if (!bVar1) {
    FUN_00d50b20();
  }
LAB_0123d082:
  FUN_00d50b20();
  return unaff_RDI;
}


