// Function: FUN_0142dc30
// Address: 0142dc30
// Size: 753 bytes
// Class: MUBezierFunctionPoint


/* WARNING: Removing unreachable block (ram,0x0142dd1a) */
/* WARNING: Removing unreachable block (ram,0x0142ddbd) */
/* WARNING: Removing unreachable block (ram,0x0142ddca) */
/* WARNING: Removing unreachable block (ram,0x0142dc97) */
/* WARNING: Removing unreachable block (ram,0x0142dcc0) */
/* WARNING: Removing unreachable block (ram,0x0142dc99) */
/* WARNING: Removing unreachable block (ram,0x0142dcc2) */
/* WARNING: Removing unreachable block (ram,0x0142dd20) */
/* WARNING: Removing unreachable block (ram,0x0142dd40) */
/* WARNING: Removing unreachable block (ram,0x0142dd22) */
/* WARNING: Removing unreachable block (ram,0x0142dd42) */

void FUN_0142dc30(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong unaff_RDI;
  undefined4 local_68;
  undefined4 local_40;
  
  lVar1 = *(longlong *)(unaff_RDI + 0xf0);
  if (lVar1 != 0) {
    local_40 = -1;
    while( true ) {
      lVar2 = (longlong)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_40) break;
      lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(lVar1 + 0x10) + 8 + lVar2 * 8) + 0xf8);
      if (lVar2 != 0) {
        local_68 = -1;
        while (local_68 = local_68 + 1, local_68 < *(int *)(lVar2 + 0xc)) {
          FUN_0142dfe0();
        }
        FUN_01431df0();
      }
      FUN_00d21140();
    }
    FUN_01431d80();
  }
  FUN_00d216c0();
  FUN_00d216c0();
  lVar1 = *(longlong *)(unaff_RDI + 0xf8);
  if (lVar1 != 0) {
    for (lVar2 = 0; (int)lVar2 < *(int *)(lVar1 + 0xc); lVar2 = lVar2 + 1) {
      (**(code **)(**(longlong **)(*(longlong *)(lVar1 + 0x10) + lVar2 * 8) + 0x370))();
    }
    FUN_01431e60();
  }
  lVar1 = *(longlong *)(unaff_RDI + 0x110);
  if (lVar1 != 0) {
    for (lVar2 = 0; (int)lVar2 < *(int *)(lVar1 + 0xc); lVar2 = lVar2 + 1) {
      (**(code **)(**(longlong **)(*(longlong *)(lVar1 + 0x10) + lVar2 * 8) + 0x370))();
    }
    FUN_01431ed0();
  }
  lVar1 = *(longlong *)(unaff_RDI + 0x118);
  if (lVar1 != 0) {
    for (lVar2 = 0; (int)lVar2 < *(int *)(lVar1 + 0xc); lVar2 = lVar2 + 1) {
      (**(code **)(**(longlong **)(*(longlong *)(lVar1 + 0x10) + lVar2 * 8) + 0x370))();
    }
    FUN_01431f40();
  }
  FUN_00d216c0();
  FUN_00d216c0();
  FUN_00d216c0();
  FUN_00b342a0();
  return;
}


