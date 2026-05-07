// Function: FUN_018da2a0
// Address: 018da2a0
// Size: 625 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x018da2de) */
/* WARNING: Removing unreachable block (ram,0x018da2e7) */
/* WARNING: Type propagation algorithm not settling */

void FUN_018da2a0(void)

{
  ulonglong uVar1;
  uint uVar2;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_30;
  char local_28;
  
  FUN_00c8e690();
  if ((local_28 == '\0') && (local_30 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  ___bzero();
  if (*unaff_RSI != 0) {
    uVar1 = *(ulonglong *)(*unaff_RSI + 0x18);
    uVar2 = (uint)uVar1;
    if ((~uVar2 & 0xf) != 0) {
      **(undefined1 **)(local_30 + 0x10) = 1;
    }
    if ((~uVar2 & 0xf0) != 0) {
      *(undefined1 *)(*(longlong *)(local_30 + 0x10) + 1) = 1;
    }
    if ((~uVar2 & 0xf00) != 0) {
      *(undefined1 *)(*(longlong *)(local_30 + 0x10) + 2) = 1;
    }
    if ((~uVar2 & 0xf000) != 0) {
      *(undefined1 *)(*(longlong *)(local_30 + 0x10) + 3) = 1;
    }
    if ((~uVar2 & 0xf0000) != 0) {
      *(undefined1 *)(*(longlong *)(local_30 + 0x10) + 4) = 1;
    }
    if ((~uVar2 & 0xf00000) != 0) {
      *(undefined1 *)(*(longlong *)(local_30 + 0x10) + 5) = 1;
    }
    if ((~uVar2 & 0xf000000) != 0) {
      *(undefined1 *)(*(longlong *)(local_30 + 0x10) + 6) = 1;
    }
    if ((~uVar2 & 0xf0000000) != 0) {
      *(undefined1 *)(*(longlong *)(local_30 + 0x10) + 7) = 1;
    }
    if ((~uVar1 & 0xf00000000) != 0) {
      *(undefined1 *)(*(longlong *)(local_30 + 0x10) + 8) = 1;
    }
    if ((~uVar1 & 0xf000000000) != 0) {
      *(undefined1 *)(*(longlong *)(local_30 + 0x10) + 9) = 1;
    }
    if ((~uVar1 & 0xf0000000000) != 0) {
      *(undefined1 *)(*(longlong *)(local_30 + 0x10) + 10) = 1;
    }
    if ((~uVar1 & 0xf00000000000) != 0) {
      *(undefined1 *)(*(longlong *)(local_30 + 0x10) + 0xb) = 1;
    }
  }
  *unaff_RDI = local_30;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


