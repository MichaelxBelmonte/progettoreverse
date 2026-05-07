// Function: FUN_00177f10
// Address: 00177f10
// Size: 1614 bytes
// Class: MDTooltipsPrefCtrl


/* WARNING: Removing unreachable block (ram,0x00178208) */
/* WARNING: Removing unreachable block (ram,0x00178211) */
/* WARNING: Removing unreachable block (ram,0x0017822c) */
/* WARNING: Removing unreachable block (ram,0x00178234) */
/* WARNING: Removing unreachable block (ram,0x00178282) */
/* WARNING: Removing unreachable block (ram,0x0017828e) */
/* WARNING: Removing unreachable block (ram,0x00178293) */
/* WARNING: Removing unreachable block (ram,0x00178299) */
/* WARNING: Removing unreachable block (ram,0x001782a1) */
/* WARNING: Removing unreachable block (ram,0x0017830b) */
/* WARNING: Removing unreachable block (ram,0x00178310) */
/* WARNING: Removing unreachable block (ram,0x00178318) */
/* WARNING: Removing unreachable block (ram,0x001782cb) */
/* WARNING: Removing unreachable block (ram,0x00178320) */
/* WARNING: Removing unreachable block (ram,0x00178336) */
/* WARNING: Removing unreachable block (ram,0x0017833f) */
/* WARNING: Removing unreachable block (ram,0x00178344) */
/* WARNING: Removing unreachable block (ram,0x0017834a) */
/* WARNING: Removing unreachable block (ram,0x00178353) */
/* WARNING: Removing unreachable block (ram,0x00178358) */
/* WARNING: Removing unreachable block (ram,0x0017835e) */
/* WARNING: Removing unreachable block (ram,0x00178366) */

void FUN_00177f10(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;
  int unaff_ESI;
  longlong unaff_RDI;
  longlong local_e0;
  char local_d8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong *local_a0;
  longlong local_58;
  char local_50;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (*(longlong *)(unaff_RDI + 0x98) != 0) {
    FUN_00643590();
    FUN_00d23310();
    pcVar6 = local_38;
    if (local_40[0] != '\0') {
      pcVar6 = local_40;
    }
    local_38[0] = local_40[0];
    *pcVar6 = '\0';
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] == '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (local_48 != (longlong *)0x0) {
      cVar4 = FUN_00212c70();
      lVar1 = DAT_027259a0;
      if (cVar4 != '\0') {
        if (DAT_027259a0 != 0) {
          FUN_00d50b00();
        }
        lVar3 = DAT_026fe4a0;
        if (DAT_026fe4a0 != 0) {
          FUN_00d50b00();
        }
        FUN_01f6ca30();
        iVar5 = (**(code **)(*local_48 + 0x5e0))();
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if (iVar5 != 0) {
          FUN_00d50b20();
          return;
        }
      }
      FUN_00d50b20();
    }
  }
  FUN_00d403d0();
  lVar1 = DAT_026e4838;
  if (DAT_026e4838 != 0) {
    FUN_00d50b00();
  }
  FUN_00d50b00();
  local_e0 = 0;
  local_d8 = '\0';
  FUN_00d40470(&local_e0,&stack0xffffffffffffff68,3,3);
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar1 = *(longlong *)
           (*(longlong *)(*(longlong *)(unaff_RDI + 0x80) + 0x10) + (longlong)unaff_ESI * 8);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00176c40();
  FUN_000b51b0();
  if (local_40[0] == '\0') {
    if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
       (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40[0] = '\0';
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  local_a0 = local_48;
  FUN_01e53c20();
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  *(int *)(unaff_RDI + 0x88) = unaff_ESI;
  FUN_00176c40();
  FUN_01e53c20();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  FUN_000b52a0();
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (*(longlong *)(unaff_RDI + 0x90) != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    plVar2 = *(longlong **)(unaff_RDI + 0x90);
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar2 + 0xa40))();
    FUN_00d50b20();
  }
  FUN_00d403d0();
  local_c0 = DAT_027257f0;
  if (DAT_027257f0 != 0) {
    FUN_00d50b00();
  }
  local_b8 = '\x01';
  FUN_00d50b00();
  local_b0 = 0;
  local_a8 = '\0';
  FUN_00d40470(&local_b0,&stack0xffffffffffffff78,1,3);
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_a0 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}


