// Function: FUN_00dfab50
// Address: 00dfab50
// Size: 571 bytes
// Class: GNFormatter


/* WARNING: Removing unreachable block (ram,0x00dfad36) */
/* WARNING: Removing unreachable block (ram,0x00dfacd1) */
/* WARNING: Removing unreachable block (ram,0x00dfacda) */
/* WARNING: Removing unreachable block (ram,0x00dfad3f) */
/* WARNING: Removing unreachable block (ram,0x00dfad74) */
/* WARNING: Removing unreachable block (ram,0x00dfad81) */

void FUN_00dfab50(void)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong unaff_RDI;
  longlong local_38;
  char local_30;
  
  FUN_00d50100();
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_025683c0;
  pcVar2 = DAT_025683d8;
  (*DAT_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  lVar1 = *(longlong *)(unaff_RDI + 0x10);
  *(undefined8 **)(unaff_RDI + 0x10) = puVar4;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_025683c0;
  (*pcVar2)();
  FUN_00c92170();
  FUN_00c92160();
  lVar1 = *(longlong *)(unaff_RDI + 0x18);
  *(undefined8 **)(unaff_RDI + 0x18) = puVar4;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_025683c0;
  (*pcVar2)();
  FUN_00c92170();
  FUN_00c92160();
  lVar1 = *(longlong *)(unaff_RDI + 0x20);
  *(undefined8 **)(unaff_RDI + 0x20) = puVar4;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  *(undefined4 *)(unaff_RDI + 0x38) = 0xffffffff;
  lVar1 = DAT_02784a78;
  if (DAT_02784a78 != 0) {
    FUN_00d50b00();
  }
  FUN_00e61ae0();
  if ((local_30 == '\0') && (local_38 != 0)) {
    FUN_00d50b00();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (local_38 != 0) {
    cVar3 = FUN_00c70bc0();
    *(char *)(unaff_RDI + 0x50) = cVar3;
    lVar1 = DAT_02784a78;
    if (cVar3 != '\0') {
      if (DAT_02784a78 != 0) {
        FUN_00d50b00();
      }
      FUN_00e62a80();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
  return;
}


