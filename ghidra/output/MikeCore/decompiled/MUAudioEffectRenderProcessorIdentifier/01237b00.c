// Function: FUN_01237b00
// Address: 01237b00
// Size: 873 bytes
// Class: MUAudioEffectRenderProcessorIdentifier


/* WARNING: Removing unreachable block (ram,0x01237be1) */
/* WARNING: Removing unreachable block (ram,0x01237c05) */
/* WARNING: Removing unreachable block (ram,0x01237c0a) */
/* WARNING: Removing unreachable block (ram,0x01237c12) */
/* WARNING: Removing unreachable block (ram,0x01237be5) */
/* WARNING: Removing unreachable block (ram,0x01237c6a) */
/* WARNING: Removing unreachable block (ram,0x01237c73) */
/* WARNING: Removing unreachable block (ram,0x01237b99) */
/* WARNING: Removing unreachable block (ram,0x01237ba2) */
/* WARNING: Removing unreachable block (ram,0x01237b50) */
/* WARNING: Removing unreachable block (ram,0x01237b59) */
/* WARNING: Removing unreachable block (ram,0x01237cd0) */
/* WARNING: Removing unreachable block (ram,0x01237cd9) */

void FUN_01237b00(void)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong unaff_RDI;
  longlong *local_40;
  char local_38;
  
  FUN_00b341c0();
  FUN_01237550();
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_40 == (longlong *)0x0) {
    return;
  }
  (**(code **)(*local_40 + 0x5c0))();
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) goto LAB_01237d53;
    FUN_00d50b00();
  }
  else if (local_40 == (longlong *)0x0) goto LAB_01237d53;
  if (unaff_RDI != 0) {
    FUN_00d50b00();
  }
  FUN_012364a0();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*DAT_028ac258 + 0x368))();
  FUN_01237080();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if (local_40 != (longlong *)0x0) {
    FUN_01237130();
    plVar1 = *(longlong **)(unaff_RDI + 0xf8);
    plVar3 = plVar1;
    if (plVar1 != local_40) {
      plVar3 = local_40;
      if (local_38 == '\0') {
        if (local_40 == (longlong *)0x0) {
          plVar3 = (longlong *)0x0;
          goto LAB_01237ca8;
        }
        FUN_00d50b00();
        plVar1 = *(longlong **)(unaff_RDI + 0xf8);
        *(longlong **)(unaff_RDI + 0xf8) = local_40;
      }
      else {
        local_38 = '\0';
LAB_01237ca8:
        *(longlong **)(unaff_RDI + 0xf8) = plVar3;
      }
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
        plVar3 = local_40;
      }
    }
    if ((local_38 != '\0') && (plVar3 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*DAT_028ac258 + 0x378))();
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
LAB_01237d53:
  if (*(longlong *)(unaff_RDI + 0xf8) == 0) {
    FUN_00d51d20();
    plVar1 = *(longlong **)(unaff_RDI + 0xf8);
    if (plVar1 != local_40) {
      if (local_38 == '\0') {
        if (local_40 == (longlong *)0x0) {
          *(undefined8 *)(unaff_RDI + 0xf8) = 0;
        }
        else {
          FUN_00d50b00();
          plVar1 = *(longlong **)(unaff_RDI + 0xf8);
          *(longlong **)(unaff_RDI + 0xf8) = local_40;
        }
      }
      else {
        local_38 = '\0';
        *(longlong **)(unaff_RDI + 0xf8) = local_40;
      }
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar1 = *(longlong **)(unaff_RDI + 0xf8);
    FUN_00d50b00();
    (**(code **)(*plVar1 + 0x3b8))();
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    uVar2 = FUN_00b32020();
    *(undefined4 *)(unaff_RDI + 0xf0) = uVar2;
    (**(code **)(**(longlong **)(unaff_RDI + 0xf8) + 0x368))();
  }
  FUN_00d50b20();
  return;
}


