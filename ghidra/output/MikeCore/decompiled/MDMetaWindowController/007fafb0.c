// Function: FUN_007fafb0
// Address: 007fafb0
// Size: 585 bytes
// Class: MDMetaWindowController


/* WARNING: Removing unreachable block (ram,0x007fb1d9) */
/* WARNING: Removing unreachable block (ram,0x007fb1e2) */

void FUN_007fafb0(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  char *pcVar5;
  longlong unaff_RDI;
  longlong local_38;
  char local_30 [8];
  char local_28 [8];
  
  FUN_01e57e80();
  *(undefined1 *)(unaff_RDI + 0xd2) = 1;
  *(undefined4 *)(unaff_RDI + 0xe8) = 0x3f800000;
  *(undefined4 *)(unaff_RDI + 0xd8) = 0xffffffff;
  *(undefined1 *)(unaff_RDI + 0xd4) = 0;
  lVar3 = DAT_0272fae0;
  if (DAT_0272fae0 != 0) {
    FUN_00d50b00();
  }
  FUN_00d50b00();
  FUN_01e1ea80(DAT_023934c8,&stack0xffffffffffffffa8);
  lVar1 = *(longlong *)(unaff_RDI + 0x90);
  lVar4 = lVar1;
  if (lVar1 == local_38) goto LAB_007fb09e;
  lVar4 = local_38;
  if (local_30[0] == '\0') {
    if (local_38 == 0) {
      lVar4 = 0;
      goto LAB_007fb053;
    }
    FUN_00d50b00();
    lVar1 = *(longlong *)(unaff_RDI + 0x90);
    *(longlong *)(unaff_RDI + 0x90) = local_38;
  }
  else {
    local_30[0] = '\0';
LAB_007fb053:
    *(longlong *)(unaff_RDI + 0x90) = lVar4;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar4 = local_38;
  }
LAB_007fb09e:
  if ((local_30[0] != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  FUN_00c9fe20();
  pcVar5 = local_28;
  if (local_30[0] != '\0') {
    pcVar5 = local_30;
  }
  local_28[0] = local_30[0];
  *pcVar5 = '\0';
  if ((local_30[0] != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  *(undefined4 *)(unaff_RDI + 0xdc) = *(undefined4 *)(local_38 + 0xc);
  if (local_28[0] != '\0') {
    FUN_00d50b20();
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x78) + 0x928))(0);
  plVar2 = *(longlong **)(unaff_RDI + 0x80);
  FUN_00d8ede0();
  if (local_30[0] == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30[0] = '\0';
  }
  (**(code **)(*plVar2 + 0x968))();
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  if ((local_30[0] != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (*(longlong *)(unaff_RDI + 0x18) != 0) {
    FUN_01e5bfa0();
  }
  return;
}


