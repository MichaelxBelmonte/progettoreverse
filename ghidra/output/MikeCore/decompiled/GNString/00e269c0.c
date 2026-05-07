// Function: FUN_00e269c0
// Address: 00e269c0
// Size: 795 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x00e26ab4) */
/* WARNING: Removing unreachable block (ram,0x00e26b0c) */
/* WARNING: Removing unreachable block (ram,0x00e26b11) */
/* WARNING: Removing unreachable block (ram,0x00e26b19) */
/* WARNING: Removing unreachable block (ram,0x00e26aba) */
/* WARNING: Removing unreachable block (ram,0x00e26b98) */
/* WARNING: Removing unreachable block (ram,0x00e26ba1) */
/* WARNING: Removing unreachable block (ram,0x00e26c82) */
/* WARNING: Removing unreachable block (ram,0x00e26c8b) */
/* WARNING: Removing unreachable block (ram,0x00e26af0) */
/* WARNING: Removing unreachable block (ram,0x00e26afd) */
/* WARNING: Removing unreachable block (ram,0x00e26c24) */
/* WARNING: Removing unreachable block (ram,0x00e26c31) */
/* WARNING: Removing unreachable block (ram,0x00e26cb7) */
/* WARNING: Removing unreachable block (ram,0x00e26cc0) */

void FUN_00e269c0(void)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *unaff_RDI;
  bool bVar4;
  longlong local_60;
  char local_58;
  longlong *local_40;
  char local_38;
  
  lVar1 = DAT_027f37d8;
  if (DAT_027f37d8 != 0) {
    FUN_00d50b00();
  }
  FUN_000175c0();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027f37f0;
  if (local_40 != (longlong *)0x0) {
    if (DAT_027f37f0 != 0) {
      FUN_00d50b00();
    }
    cVar3 = (**(code **)(*local_40 + 0x50))();
    lVar2 = DAT_027fec90;
    if (cVar3 == '\0') {
      bVar4 = false;
    }
    else {
      if (DAT_027fec90 != 0) {
        FUN_00d50b00();
      }
      FUN_000175c0();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      bVar4 = local_40 != (longlong *)0x0;
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (bVar4) {
      FUN_00c80cd0();
      if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      if (local_40 != (longlong *)0x0) {
        FUN_00d8ede0();
        lVar1 = DAT_027f37e0;
        if ((local_58 == '\0') && (local_60 != 0)) {
          FUN_00d50b00();
          lVar1 = DAT_027f37e0;
        }
        DAT_027f37e0 = lVar1;
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        FUN_00ca0840();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if (local_60 != 0) {
          FUN_00d50b20();
        }
        *unaff_RDI = local_40;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        goto joined_r0x00e26bf1;
      }
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
joined_r0x00e26bf1:
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


