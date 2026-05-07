// Function: FUN_007935f0
// Address: 007935f0
// Size: 547 bytes
// Class: MUElementAnalyzer


/* WARNING: Removing unreachable block (ram,0x007936b7) */
/* WARNING: Removing unreachable block (ram,0x007936c0) */
/* WARNING: Removing unreachable block (ram,0x00793760) */
/* WARNING: Removing unreachable block (ram,0x00793769) */
/* WARNING: Removing unreachable block (ram,0x007937a2) */
/* WARNING: Removing unreachable block (ram,0x007937ab) */

void FUN_007935f0(void)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined8 *local_48;
  char local_40;
  
  puVar3 = (undefined8 *)*unaff_RSI;
  if (puVar3 == (undefined8 *)0x0) {
    if (*(int *)(unaff_RDI[0x35] + 0xc) == 0) {
      return;
    }
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    (*DAT_02572370)();
    lVar1 = *unaff_RSI;
    *unaff_RSI = (longlong)puVar3;
    if (((char)unaff_RSI[1] != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
      puVar3 = (undefined8 *)*unaff_RSI;
    }
    *(undefined1 *)(unaff_RSI + 1) = 1;
    if (*(int *)(unaff_RDI[0x35] + 0xc) == *(int *)((longlong)puVar3 + 0xc)) goto LAB_0079369e;
  }
  else {
    if ((*(int *)((longlong)puVar3 + 0xc) == 0) && (*(int *)(unaff_RDI[0x35] + 0xc) == 0)) {
      return;
    }
    if (*(int *)(unaff_RDI[0x35] + 0xc) == *(int *)((longlong)puVar3 + 0xc)) {
LAB_0079369e:
      local_40 = '\0';
      cVar2 = FUN_00d23fd0();
      local_48 = puVar3;
      if (cVar2 != '\0') {
        return;
      }
    }
  }
  FUN_003231a0();
  puVar3 = (undefined8 *)unaff_RDI[0x35];
  puVar4 = puVar3;
  if (puVar3 == local_48) goto LAB_0079374a;
  puVar4 = local_48;
  if (local_40 == '\0') {
    if (local_48 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_007936ff;
    }
    FUN_00d50b00();
    puVar3 = (undefined8 *)unaff_RDI[0x35];
    unaff_RDI[0x35] = (longlong)local_48;
  }
  else {
    local_40 = '\0';
LAB_007936ff:
    unaff_RDI[0x35] = (longlong)puVar4;
  }
  if (puVar3 != (undefined8 *)0x0) {
    FUN_00d50b20();
    puVar4 = local_48;
  }
LAB_0079374a:
  if ((local_40 != '\0') && (puVar4 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x610))();
  if (local_40 == '\0') {
    if (local_48 == (undefined8 *)0x0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_48 == (undefined8 *)0x0) {
    return;
  }
  for (iVar5 = 0; iVar5 < *(int *)((longlong)local_48 + 0xc); iVar5 = iVar5 + 1) {
    FUN_006f63e0();
  }
  FUN_000e3600();
  FUN_00d50b20();
  return;
}


