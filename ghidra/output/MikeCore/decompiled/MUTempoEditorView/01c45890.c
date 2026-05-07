// Function: FUN_01c45890
// Address: 01c45890
// Size: 513 bytes
// Class: MUTempoEditorView


/* WARNING: Removing unreachable block (ram,0x01c45a1f) */
/* WARNING: Removing unreachable block (ram,0x01c45a24) */
/* WARNING: Removing unreachable block (ram,0x01c45a2f) */
/* WARNING: Removing unreachable block (ram,0x01c458eb) */
/* WARNING: Removing unreachable block (ram,0x01c458f4) */
/* WARNING: Removing unreachable block (ram,0x01c45a5b) */
/* WARNING: Removing unreachable block (ram,0x01c45a64) */
/* WARNING: Removing unreachable block (ram,0x01c45a6f) */
/* WARNING: Removing unreachable block (ram,0x01c45a78) */
/* WARNING: Removing unreachable block (ram,0x01c45947) */
/* WARNING: Removing unreachable block (ram,0x01c45970) */
/* WARNING: Removing unreachable block (ram,0x01c45949) */
/* WARNING: Removing unreachable block (ram,0x01c45972) */

void FUN_01c45890(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar5;
  longlong local_78;
  char local_70;
  longlong local_58;
  char local_50;
  int local_40;
  
  lVar2 = local_58;
  FUN_01c45b80();
  if ((local_50 == '\0') && (local_58 != 0)) {
    FUN_00d50b00();
  }
  local_58 = *param_2;
  cVar3 = FUN_00d23d70();
  lVar5 = lVar2;
  if (cVar3 == '\0') {
    lVar1 = unaff_RSI[0x40];
    if (lVar1 != 0) {
      local_58 = 0;
      local_40 = -1;
      while( true ) {
        lVar4 = (longlong)local_40;
        local_40 = local_40 + 1;
        if (*(int *)(lVar1 + 0xc) <= local_40) break;
        local_58 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + 8 + lVar4 * 8);
        FUN_01c82aa0();
        FUN_01c82ae0();
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_01c79df0();
    }
    (**(code **)(*unaff_RSI + 0x620))();
    FUN_01c45dc0();
    FUN_01c464b0();
    FUN_01c465e0();
    if (lVar2 != local_58) {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
      lVar5 = local_58;
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
  }
  *unaff_RDI = lVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


