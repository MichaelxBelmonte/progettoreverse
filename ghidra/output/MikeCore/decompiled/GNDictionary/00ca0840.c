// Function: FUN_00ca0840
// Address: 00ca0840
// Size: 546 bytes
// Class: GNDictionary


/* WARNING: Removing unreachable block (ram,0x00ca0a16) */
/* WARNING: Removing unreachable block (ram,0x00ca0a1f) */
/* WARNING: Removing unreachable block (ram,0x00ca0942) */
/* WARNING: Removing unreachable block (ram,0x00ca094b) */
/* WARNING: Removing unreachable block (ram,0x00ca098b) */
/* WARNING: Removing unreachable block (ram,0x00ca0994) */
/* WARNING: Removing unreachable block (ram,0x00ca08cb) */
/* WARNING: Removing unreachable block (ram,0x00ca08d7) */
/* WARNING: Removing unreachable block (ram,0x00ca090e) */
/* WARNING: Removing unreachable block (ram,0x00ca091a) */
/* WARNING: Removing unreachable block (ram,0x00ca099f) */
/* WARNING: Removing unreachable block (ram,0x00ca09ab) */
/* WARNING: Removing unreachable block (ram,0x00ca09e8) */
/* WARNING: Removing unreachable block (ram,0x00ca09f1) */
/* WARNING: Removing unreachable block (ram,0x00ca0a42) */
/* WARNING: Removing unreachable block (ram,0x00ca0a4b) */

void FUN_00ca0840(void)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  undefined8 local_c0;
  undefined1 local_b8;
  
  if ((*unaff_RSI != 0) || (cVar2 = FUN_00d24990(), cVar2 != '\0')) {
    if (*(longlong *)(unaff_RDI + 0x20) == 0) {
      iVar3 = FUN_00d237a0();
    }
    else {
      FUN_019a54a0();
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      if (local_c0 == 0) {
        iVar3 = -1;
      }
      else {
        iVar3 = FUN_00d237a0();
      }
      FUN_019b43b0();
    }
    if (iVar3 == -1) {
      FUN_00d21140();
      FUN_00d21140();
    }
    else {
      lVar1 = *(longlong *)(*(longlong *)(unaff_RDI + 0x18) + 0x10);
      if (*(longlong *)(lVar1 + (longlong)iVar3 * 8) != *unaff_RSI) {
        FUN_00d233f0(lVar1,iVar3);
      }
    }
  }
  return;
}


